#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <cstdint>
#include <string>
#include <vector>
#include <map>

#include <boost/algorithm/string.hpp>
#include <boost/bind.hpp>

#include "util_log.h"
#include "spasm_core.h"
#include "util_file.h"

#ifndef SPASM_ASSEMBLER
#define SPASM_ASSEMBLER


struct ProcessedLine
{
    std::string sourceLine;
    std::string sourceFile;
    int sourceLineNum;
    
    std::string procdLine;
    
    bool isExpandedMacro;
};

struct PreprocessorData
{
    std::vector<ProcessedLine> procdLines;
    std::map<std::string, std::string> procdDef;
};

struct ProgramTokenArgument
{
    std::string id;
    DataType type;
    
    std::string offsetLabel;
    
    std::string stringData;
    uint32_t valueData;
};
    
struct ProgramToken
{
    ProcessedLine originalLine;
    
    uint32_t address;
    
    bool definesData;
    std::vector<uint32_t> definedData;
    
    bool definesInstruction;
    std::string instructionToken; 
    std::vector<ProgramTokenArgument> instructionArguments;
    
    std::vector<uint32_t> assembledData;
};

class Assembler
{
    public:
    Assembler(UtilLog *newlog, UtilFile *newfile, Core *newcore);
    ~Assembler();

    std::vector<uint32_t> assembleSource(std::string filename);
    
    PreprocessorData preprocess(std::string filename, std::map<std::string, std::string> defLook, int rec);
    std::vector<ProgramToken> tokenize(std::vector<ProcessedLine> file);
    std::vector<uint32_t> assemble(std::vector<ProgramToken> file);
    
    std::vector<std::string> debug();
    
    uint32_t processNumber(std::string num, bool *err = NULL);
    
    private:
    UtilLog *log;
    UtilFile *file;
    Core *core;
    
    std::map<std::string, uint32_t> labelLookupTable;
    uint32_t offsetLow;
    
    std::vector<ProgramToken> debugData;
};

#endif
