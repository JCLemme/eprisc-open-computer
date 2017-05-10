#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>

#include <unistd.h>
#include <ncurses.h>

#include "verilated.h"
#include "V-.h"

int main(int argc, char **argv)
{
    V- *core = new V-();
    
    //Machine variables
    int delay = 100;
    int cycnt = 0;
    bool singleStep = false, stepTaken = true, coreRunning = true;
    
    //UART variables
    std::vector<char> inputBuffer;
    
    //NCurses veriables
    int termY = 0, termX = 0;
    int termMaxY, termMaxX;
    char keyIn = 0;
    bool commandMode = false;
    
    if(memory == NULL)
    {
        std::cout << "Error loading binary file \"" << argv[1] << "\".\n";
        return -1;
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
    core->iClk = 0;
    core->iRst = 1;
    core->eval();
    core->iClk = 1;
    core->eval();
    core->iRst = 0;
    core->iInt = 0;
    
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
                    case('p'): singleStep = !singleStep; break;
                    case('c'): stepTaken = (singleStep) ? false : true; break;
                    case('d'): delay += 50; break;
                    case('f'): delay = 150; break;
                    case('g'): delay -= (delay > 0) ? 50 : 0; break;
                    case('`'): inputBuffer.push_back('`'); break;
                }
            }
            else if(keyIn != '`')
            {
                inputBuffer.push_back(keyIn);
            }
            else
            {
                commandMode = true;
            }
        }
        
        if(!singleStep || (singleStep && !stepTaken))
        {
            //Tick tock
            core->iClk = !core->iClk;
            
            if(core->iInt > 0) core->iInt = 0;
            
            //If a send was requested...
            if((memory[8192] & 0x80) && !core->oWrite)
            {
                switch(memory[8193] & 0xFF)
                {
                    case(0x0A): waddch(termwin, '\n'); break;
                    default: waddch(termwin, memory[8193] & 0xFF); break;
                }
                
                memory[8192] &= ~(0x80);
                wrefresh(termwin);
            }
            
            //If a receive was requested and there's data to send...
            if((memory[8192] & 0x20) && inputBuffer.size() > 0)
            {
                memory[8192] &= ~(0x20);
                memory[8194] = inputBuffer[0];
                inputBuffer.erase(inputBuffer.begin());
                
                if(memory[8192] & 0x40)
                    core->iInt = 1;
            }
      
            //Print the taskbar
            mvwprintw(taskwin, 0, 0, "%s", std::string(termMaxX, ' ').c_str());
            mvwprintw(taskwin, 1, 0, "%s", std::string(termMaxX, ' ').c_str());
            mvwprintw(taskwin, 2, 0, "%s", std::string(termMaxX, ' ').c_str());
            mvwprintw(taskwin, 0, 1, "Addr: %08x Data: %08x", core->oAddr, core->bData);
            mvwprintw(taskwin, 0, termMaxX-4, "%s", (inputBuffer.size()>0)?"COM":"NRM");
            mvwprintw(taskwin, 1, 1, "   A: %08x    B: %08x    C: %08x   Op: %04x", core->v__DOT__rTmpA, core->v__DOT__rTmpB, core->v__DOT__rTmpC, core->v__DOT__wALUOp);
            mvwprintw(taskwin, 2, 1, "Dela: %04d     Sing: %01d", delay, singleStep);
            
            //wrefresh(termwin);
            wrefresh(taskwin);
            core->eval();
            core->iClk = !core->iClk;
            core->eval();
            
            cycnt++;
            if(cycnt >= 5)
            stepTaken = true;
            
            if(core->oHalt != 0)
                coreRunning = false; 
        }
        
        if(!singleStep && delay > 0)
            usleep(delay);
    }
    
    //End the core
    core->final();
    
    //End NCurses mode
    endwin();
    
    return 0;
}

