#include "spasm_assembler.h"

Assembler::Assembler(UtilLog *newlog, UtilFile *newfile, Core *newcore)
{
    log = newlog;
    file = newfile;
    core = newcore;
}

Assembler::~Assembler()
{

}

std::vector<uint32_t> Assembler::assembleSource(std::string filename)
{
    std::vector<ProcessedLine> pFile = preprocess(filename, std::map<std::string, std::string>(), 4).procdLines;
    std::vector<ProgramToken> tFile = tokenize(pFile);
    std::vector<uint32_t> bFile = assemble(tFile);
        
    return bFile;
}

uint32_t Assembler::processNumber(std::string num, bool *err)
{
    int base = 10;
    uint32_t out;
    
    switch(num[0])
    {
        case('H'): base = 16; break;
        case('D'): base = 10; break;
        case('O'): base = 8; break;
        case('B'): base = 2; break;
        default: base = -1; break;
    }
    
    if(base < 0 && err != NULL)
    {
        *err = true;
        return 0;
    }
    else
    {
        out = (uint32_t)strtoul(num.substr(1, num.size()-1).c_str(), NULL, base);
        return out;
    }
}
