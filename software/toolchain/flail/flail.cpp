#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>

#include <unistd.h>
#include <ncurses.h>

#include "obj_dir/VepRISC_coreEmu.h"

// Gotta be global
VepRISC_coreEmu* machine;

void resetMachine();

int main(int argc, char **argv)
{
    machine = new VepRISC_coreEmu();
    
    //Machine variables
    int delay = 0;
    int cycnt = 0;
    bool singleStep = false, stepTaken = true, coreRunning = true, controlled = true;
    
    //UART variables
    std::vector<char> inputBuffer;
    
    //NCurses veriables
    int termY = 0, termX = 0;
    int termMaxY, termMaxX;
    char keyIn = 0;
    bool commandMode = false;
    
    int sendLastState = 1, recvCount = 1, recvSending = 0;
    
    if(argc > 1)
    {
        bool padding = true;
        
        uint32_t* memory = (uint32_t*)malloc(sizeof(uint32_t) * 32768);
        memset(memory, ' ', sizeof(uint32_t) * 32768);
    
        std::ifstream bFile;
        bFile.open(argv[1], std::ios::binary | std::ios::in);
        
        if(bFile.fail())
        {
            std::cout << "ff";
            bFile.close();
        }
        
        int count = 0, ptr, rptr = 0, size = 32768;
        uint32_t tmpA, tmpB, tmpC, tmpD;
        
        while(count < size && bFile.good())
        {
            bFile.read((char*)(memory+count), sizeof(uint32_t));
            count++;
        }
        
        for(ptr=0;ptr<count;ptr++)
        {
            tmpA = (memory[ptr] & 0xFF000000) >> 24;
            tmpB = (memory[ptr] & 0x00FF0000) >> 16;
            tmpC = (memory[ptr] & 0x0000FF00) >> 8;
            tmpD = (memory[ptr] & 0x000000FF);
            memory[ptr] = (tmpA) + (tmpB<<8) + (tmpC<<16) + (tmpD<<24);
        }
        
        for(ptr=0;ptr<count;ptr++)
        {
            if(memory[ptr] != 0)
                padding = false;
                
            if(!padding)
            {
                machine->epRISC_coreEmu__DOT__machine__DOT__tbsdram__DOT__rContents[rptr+0x4000] = memory[ptr];
                rptr++;
            }
        }
        
        bFile.close();
    }
   
    if(argc > 2)
    {
        uint32_t* memory = (uint32_t*)malloc(sizeof(uint32_t) * 8242880);
        memset(memory, ' ', sizeof(uint32_t) * 8242880);
    
        std::ifstream bFile;
        bFile.open(argv[2], std::ios::binary | std::ios::in);
        
        if(bFile.fail())
        {
            std::cout << "ff";
            bFile.close();
        }
        
        int count = 0, ptr = 0, size = 8242880;
        uint32_t tmpA, tmpB, tmpC, tmpD;
        
        while(count < size && bFile.good())
        {
            bFile.read((char*)(memory+count), sizeof(uint32_t));
            count++;
        }
        
        for(ptr=0;ptr<count;ptr++)
        {
            tmpA = (memory[ptr] & 0xFF000000) >> 24;
            tmpB = (memory[ptr] & 0x00FF0000) >> 16;
            tmpC = (memory[ptr] & 0x0000FF00) >> 8;
            tmpD = (memory[ptr] & 0x000000FF);
            memory[ptr] = (tmpA) + (tmpB<<8) + (tmpC<<16) + (tmpD<<24);
        }
        
        for(ptr=0;ptr<count;ptr++)
            machine->epRISC_coreEmu__DOT__machine__DOT__tbsdram__DOT__rContents[ptr+0x8000] = memory[ptr];
        
        bFile.close();
    }
    
    //Set up NCurses
    initscr();
    getmaxyx(stdscr, termMaxY, termMaxX);
    
    WINDOW* termwin = newwin(termMaxY-3, termMaxX, 0, 0);
    WINDOW* taskwin = newwin(3, termMaxX, termMaxY-3, 0);
    
    raw();
    cbreak();
    noecho();
    nodelay(termwin, TRUE);
    scrollok(termwin, TRUE);
    idlok(termwin, TRUE);
    start_color();
    
    init_pair(1, COLOR_BLACK, COLOR_WHITE);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);
    
    wattron(termwin, COLOR_PAIR(2));
    wattron(taskwin, COLOR_PAIR(1));
    
    //Reset the core
    resetMachine();
    
    //The mainloop
    while(coreRunning)
    {       
        keyIn = wgetch(termwin);
         
        if(keyIn != ERR)
        {
            if(commandMode)
            {   
                commandMode = false;
                
                switch(keyIn)
                {
                    case('q'): coreRunning = false; break;
                    case('l'): controlled = !controlled; break;
                    case('p'): singleStep = !singleStep; break;
                    case('c'): stepTaken = (singleStep) ? false : true; break;
                    case('r'): resetMachine(); break;
                    case('d'): delay += 50; break;
                    case('f'): delay = 150; break;
                    case('g'): delay -= (delay > 0) ? 50 : 0; break;
                    case('`'): inputBuffer.push_back('`'); break;
                }
            }
            else if(keyIn != '`')
            {
                switch(keyIn)
                {
                    // epRISC programs look for Minicom control characters, so we need to convert Ncurses-style codes
                    case(0x0A): inputBuffer.push_back(0x0D); break; // Enter
                    case(0x7F): inputBuffer.push_back(0x08); break; // Backspace
                    default: inputBuffer.push_back(keyIn); break;
                }
            }
            else
            {
                commandMode = true;
            }
        }
        
        if(!singleStep || (singleStep && !stepTaken))
        {
            //Tick tock
            machine->iBoardClock = !machine->iBoardClock;
            machine->eval();
            
            //If a send was requested...
            if(((machine->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl & 0xC0) > 0) && sendLastState == 0)
            {
                switch(machine->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataIn & 0xFF)
                {
                    case(0x0A): waddch(termwin, '\n'); break;
                    default: waddch(termwin, machine->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataIn & 0xFF); break;
                }
                
                wrefresh(termwin);
                sendLastState = 1;
            }
            
            if((machine->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl & 0xC0) == 0)
                sendLastState = 0;
                
            //If a receive was requested and there's data to send...
            if(recvSending == 0 && inputBuffer.size() > 0)
            {
                recvSending = 1;
                recvCount = 0;
            }

            if(recvSending == 1)
            {
                //I'm going to hell for this
                switch(recvCount)
                {
                    case(0): machine->iTTLSerialRX = 0; break;
                    case(128*1): machine->iTTLSerialRX = (inputBuffer[0] & (1<<0)) ? 1 : 0; break;
                    case(128*2): machine->iTTLSerialRX = (inputBuffer[0] & (1<<1)) ? 1 : 0; break;
                    case(128*3): machine->iTTLSerialRX = (inputBuffer[0] & (1<<2)) ? 1 : 0; break;
                    case(128*4): machine->iTTLSerialRX = (inputBuffer[0] & (1<<3)) ? 1 : 0; break;
                    case(128*5): machine->iTTLSerialRX = (inputBuffer[0] & (1<<4)) ? 1 : 0; break;
                    case(128*6): machine->iTTLSerialRX = (inputBuffer[0] & (1<<5)) ? 1 : 0; break;
                    case(128*7): machine->iTTLSerialRX = (inputBuffer[0] & (1<<6)) ? 1 : 0; break;
                    case(128*8): machine->iTTLSerialRX = (inputBuffer[0] & (1<<7)) ? 1 : 0; break;
                    case(128*9): machine->iTTLSerialRX = 1; break;
                    case(128*20): recvSending = 0; inputBuffer.erase(inputBuffer.begin()); break;
                }
                
                recvCount++;
            }
            
            //Updating the display takes time, so refrain if we need to go fast
            if(controlled)
            {
                //Print the taskbar
                mvwprintw(taskwin, 0, 0, "%s", std::string(termMaxX, ' ').c_str());
                mvwprintw(taskwin, 1, 0, "%s", std::string(termMaxX, ' ').c_str());
                mvwprintw(taskwin, 2, 0, "%s", std::string(termMaxX, ' ').c_str());
                mvwprintw(taskwin, 0, 1, "Addr: %08x Data: %08x Inst: %08x   IP: %08x", machine->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress, machine->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData, machine->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst, machine->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP);
                mvwprintw(taskwin, 0, termMaxX-4, "%s", (commandMode)?"COM":"NRM");
                mvwprintw(taskwin, 1, 1, "   A: %08x    B: %08x    M: %08x   Op: %04x", machine->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataOut, machine->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB, machine->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegM, machine->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation);
                mvwprintw(taskwin, 2, 1, "Dela: %04d     Sing: %01d", delay, singleStep);
                
                wrefresh(taskwin);
                
                if(!singleStep && delay > 0)
                    usleep((delay*1000)+5);         
            }
            
            cycnt++;
            if(cycnt >= 10)
            stepTaken = true;
        }
        
        //if(!singleStep && delay > 0)
        //    usleep((delay*1000)+10);
    }
    
    //End the core
    machine->final();
    
    //End NCurses mode
    endwin();
    
    return 0;
}

void resetMachine()
{
    machine->iBoardClock = 0;
    machine->iBoardReset = 0;
    machine->eval();
    machine->iBoardClock = 1;
    machine->eval();
    machine->iBoardReset = 1;
    
    machine->iBoardSense = 1; 
    machine->iTTLSerialRX = 1;
    machine->iSPIMISO = 1;
}

