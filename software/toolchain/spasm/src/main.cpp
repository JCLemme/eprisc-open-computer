#include <iostream>
#include <cstdlib>
#include <map>

#include "util_log.h"
#include "util_file.h"
#include "spasm_core.h"
#include "spasm_assembler.h"

void parseArguments(int argc, char **argv);
void printHelp();

int main(int argc, char **argv)
{
    UtilLog *log = new UtilLog();
    UtilFile *file = new UtilFile();
    Core *core = new Core(log);
    Assembler *asmb = new Assembler(log, file, core);
    
    std::string inputFilename = "";
    std::string outputFilename = "a.bin";
    std::string coreFilename = "eprisc_v5.cpu"; //add in pwd support later
    std::string coreID = "EPRISC_STD";
    
    int argCnt;
    uint32_t padSize = 0;
    bool outputText = false;
    
    log->setHiddenTypes(MTYP_WARN|MTYP_DEBG);

    for(argCnt=1;argCnt<argc;argCnt++)
    {
        if(argv[argCnt][0] == '-')
        {
            char argType = ' ';
            
            if(argv[argCnt][1] == '-')
            {
                if(argv[argCnt] == "--help") argType = 'h';
                else if(argv[argCnt] == "--output") argType = 'o';
                else if(argv[argCnt] == "--text-verilog") argType = 't';
                else if(argv[argCnt] == "--verbosity") argType = 'v';
                else if(argv[argCnt] == "--pad-size") argType = 'p';
                else if(argv[argCnt] == "--core-id") argType = 'c';
                else if(argv[argCnt] == "--core-file") argType = 'f';
                else argType = 'x';
            }
            else
            {   
                argType = argv[argCnt][1];
            }
            
            switch(argType)
            {
                case('h'): printHelp(); exit(0); break;
                case('o'): argCnt++; outputFilename = argv[argCnt]; break;
                case('t'): outputText = true; break;
                case('v'): argCnt++; log->setHiddenTypes((MessageType)0); break;
                case('p'): argCnt++; padSize = atoi(argv[argCnt]); break;
                case('c'): argCnt++; coreID = argv[argCnt]; break;
                case('f'): argCnt++; coreFilename = argv[argCnt]; break;
                default: printHelp(); log->print("\nunrecognized argument \"" + std::string(argv[argType]) + "\"", MTYP_EROR); break;
            }
        }
        else
        {
            inputFilename = argv[argCnt];
        }
    }
    
    core->loadCoreDef(coreFilename, coreID);
    
    std::vector<ProcessedLine> sourceLines = asmb->preprocess(inputFilename, std::map<std::string, std::string>(), 4).procdLines;
    std::vector<ProgramToken> progTokens = asmb->tokenize(sourceLines);
    std::vector<uint32_t> binaryFile = asmb->assemble(progTokens);
    
    int bCnt;
    std::vector<uint8_t> outFile;
    
    if(binaryFile.size() < padSize)
    {
        uint32_t oldSize = binaryFile.size();
        for(bCnt=binaryFile.size();bCnt<padSize-oldSize;bCnt++)
            binaryFile.push_back(0);
    }
    
    for(bCnt=0;bCnt<binaryFile.size();bCnt++)
    {
        outFile.push_back((uint8_t)((binaryFile[bCnt] & 0xFF000000) >> 24));
        outFile.push_back((uint8_t)((binaryFile[bCnt] & 0x00FF0000) >> 16));
        outFile.push_back((uint8_t)((binaryFile[bCnt] & 0x0000FF00) >> 8));    
        outFile.push_back((uint8_t)((binaryFile[bCnt] & 0x000000FF) >> 0));    
    }
    
    if(outputText)
        file->saveBinaryAsVerilog(outputFilename, outFile);
    else
        file->saveBinary(outputFilename, outFile);
        
    return 0;
}

void printHelp()
{
    std::cout << "Usage: spasm [OPTION...] [SOURCEFILE]                                         \n";
    std::cout << "                                                                              \n";
    std::cout << "spasm - the simple prototypical epRISC assembler                              \n";
    std::cout << "spasm is a cross-assembler for epRISC systems.                                \n";
    std::cout << "                                                                              \n";
    std::cout << "Options:                                                                      \n";
    std::cout << "-h      --help                |   Prints this help.                           \n";
    std::cout << "-o      --output [NAME]       |   Sets the output binary filename.            \n";
    std::cout << "-t      --text-verilog        |   Saves the program as a Verilog array.       \n";
    std::cout << "-v      --verbosity [LEVEL]   |   Sets the verbosity of the assembler.        \n";
    std::cout << "-p      --pad-size [SIZE]     |   Pads the output binary to a specific size.  \n";
    std::cout << "-c      --core-id [CORE]      |   Specifies the core ID to target.            \n";
    std::cout << "-f      --core-file [NAME]    |   Specifies the file to search for core IDs.  \n";
}
