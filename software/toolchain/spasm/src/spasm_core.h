#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <string>
#include <vector>
#include <map>

#include <boost/algorithm/string.hpp>
#include <boost/bind.hpp>

#include "util_file.h"
#include "util_log.h"

#ifndef SPASM_CORE
#define SPASM_CORE

enum DataType
{
    DTYP_ERROR = -1,
    DTYP_LABEL = 0,
    DTYP_ENUMT = 1,
    DTYP_VALUE = 2,
    DTYP_ADDRS = 3
};

struct CoreFileLine
{
    std::string line;
    int lineNum;
};

struct InstructionArgument
{
    std::string id;
    DataType type;
    std::string spec;
    
    uint32_t mask;
    uint32_t shift;
    
    uint32_t width;
    std::string defaultValue;
};

struct Instruction
{
    std::string format;
    uint32_t base;
    
    std::vector<InstructionArgument> arguments;
};

class Core
{
    public:
    Core(UtilLog *newlog);
    ~Core();
    
    void loadCoreDef(std::string file, std::string id);
    
    std::map<std::string, std::map<std::string, uint32_t>> enums();
    std::map<std::string, Instruction> instructions();
    
    private:
    std::map<std::string, Instruction> coreInstructions;
    std::map<std::string, std::map<std::string, uint32_t>> coreEnums;
    
    UtilLog *log;
};

#endif
