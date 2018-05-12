#include <iostream>
#include <cstdlib>
#include <map>

#include "util_log.h"
#include "util_file.h"
#include "spasm_core.h"
#include "spasm_assembler.h"

#define VERSION "v4.0b"

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
    std::string coreFilename = "/usr/share/spasm/core/eprisc_v5.cpu"; //add in pwd support later
    std::string coreID = "EPRISC_STD";
    
    int argCnt;
    uint32_t padSize = 0;
    bool outputText = false, color = true, debug = false;
    
    log->setHiddenTypes(MTYP_WARN|MTYP_DEBG);

    for(argCnt=1;argCnt<argc;argCnt++)
    {
        if(argv[argCnt][0] == '-')
        {
            char argType = ' ';
            
            if(argv[argCnt][1] == '-')
            {
                if(strcmp(argv[argCnt], "--help") == 0) argType = 'h';
                else if(strcmp(argv[argCnt], "--output") == 0) argType = 'o';
                else if(strcmp(argv[argCnt], "--debug") == 0) argType = 'g';
                else if(strcmp(argv[argCnt], "--text-verilog") == 0) argType = 't';
                else if(strcmp(argv[argCnt], "--verbosity") == 0) argType = 'v';
                else if(strcmp(argv[argCnt], "--pad-size") == 0) argType = 'p';
                else if(strcmp(argv[argCnt], "--core-id") == 0) argType = 'c';
                else if(strcmp(argv[argCnt], "--core-file") == 0) argType = 'f';
                else if(strcmp(argv[argCnt], "--no-color") == 0) {color = false; argType = '@';}
                else argType = '!';
            }
            else
            {   
                argType = argv[argCnt][1];
            }
            
            switch(argType)
            {
                case('h'): printHelp(); exit(0); break;
                case('o'): argCnt++; outputFilename = argv[argCnt]; break;
                case('g'): debug = true; break;
                case('t'): outputText = true; break;
                case('v'): argCnt++; log->setHiddenTypes((MessageType)atoi(argv[argCnt])); break;
                case('p'): argCnt++; padSize = atoi(argv[argCnt]); break;
                case('c'): argCnt++; coreID = argv[argCnt]; log->print("main:", "using core ID \"" + coreID + "\"", MTYP_INFO); break;
                case('f'): argCnt++; coreFilename = argv[argCnt]; log->print("main:", "using corefile \"" + coreFilename + "\"", MTYP_INFO); break;
                case('@'): break;
                default: printHelp(); log->print("", "unrecognized argument \"" + std::string(argv[argCnt]) + "\"", MTYP_EROR); break;
            }
        }
        else
        {
            inputFilename = argv[argCnt];
        }
    }
    
    log->setColorMode(color);
    
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
        
    if(debug)
    {
        file->saveText(outputFilename + ".dbg", asmb->debug());
    }
    
    return 0;
}

void printHelp()
{
    std::cout << "Usage: spasm [OPTION...] [SOURCEFILE]                                         \n";
    std::cout << "                                                                              \n";
    std::cout << "spasm " << VERSION << " - the simple prototypical epRISC assembler            \n";
    std::cout << "spasm is a cross-assembler for epRISC systems.                                \n";
    std::cout << "                                                                              \n";
    std::cout << "Options:                                                                      \n";
    std::cout << "-h      --help                |   Prints this help.                           \n";
    std::cout << "-o      --output [NAME]       |   Sets the output binary filename.            \n";
    std::cout << "-g      --debug               |   Outputs debugging symbols for the binary.   \n";
    std::cout << "-t      --text-verilog        |   Saves the program as a Verilog array.       \n";
    std::cout << "-v      --verbosity [LEVEL]   |   Sets the verbosity of the assembler.        \n";
    std::cout << "-p      --pad-size [SIZE]     |   Pads the output binary to a specific size.  \n";
    std::cout << "-c      --core-id [CORE]      |   Specifies the core ID to target.            \n";
    std::cout << "-f      --core-file [NAME]    |   Specifies the file to search for core IDs.  \n";
    std::cout << "        --no-color            |   Disables color message output.              \n";
}
