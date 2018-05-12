#include "spasm_core.h"

Core::Core(UtilLog *newlog)
{
    log = newlog;
}

Core::~Core()
{

}

std::map<std::string, std::map<std::string, uint32_t>> Core::enums()
{
    return coreEnums;
}

std::map<std::string, Instruction> Core::instructions()
{
    return coreInstructions;
}

void Core::loadCoreDef(std::string file, std::string id)
{
    UtilFile *loader = new UtilFile();
    int error;
    
    std::vector<std::string> rawCoreFile = loader->loadText(file, &error);
    boost::to_upper(id);
    
    if(error != 0)
    {
        log->print("core:", "Error opening core file \"" + file + "\" for reading (error " + std::to_string(error) + ")", MTYP_EROR);
    }
    
    int cFilePtr;
    bool copying = false;
    std::vector<CoreFileLine> coreBlock;
    
    for(cFilePtr=0;cFilePtr<rawCoreFile.size();cFilePtr++)
    {
        std::string tmpLine = rawCoreFile[cFilePtr];
        
        CoreFileLine tmpFLine;
        tmpFLine.lineNum = cFilePtr;
        
        if(tmpLine.find('#') != std::string::npos)
            tmpLine = tmpLine.substr(0, tmpLine.find('#'));

        tmpLine.erase(remove_if(tmpLine.begin(), tmpLine.end(), isspace), tmpLine.end());
        
        boost::to_upper(tmpLine);
        
        if(tmpLine != "")
        {
            std::vector<std::string> lineTokens;
            boost::split(lineTokens, tmpLine, boost::is_any_of("="), boost::token_compress_on);
            
            if(copying)
            {
                if(lineTokens[0] == "ENDCORE")
                {
                    copying = false;
                }
                else
                {
                    tmpFLine.line = tmpLine;
                    coreBlock.push_back(tmpFLine);
                }
            }
            else
            {
                if(lineTokens[0] == "CORE" && lineTokens[1] == id)
                {
                    if(copying == true)
                        log->print("core:", "core ID \"" + id + "\" contains a core definition?", MTYP_EROR);
                    else
                        copying = true;
                }
            }
        }
    }
    
    if(copying == true && coreBlock.size() > 0)
        log->print("core:", "missing end statement for core ID \"" + id + "\"", MTYP_EROR);
    
    if(copying == false && coreBlock.size() == 0)
        log->print("core:", "core ID \"" + id + "\" is not defined in file \"" + file + "\"", MTYP_EROR);
        
    int bPtr;
    bool procInstruction = false;
    Instruction tmpInst;
    std::string tmpInstToken;
    
    for(bPtr=0;bPtr<coreBlock.size();bPtr++)
    {
        std::string tmpLine = coreBlock[bPtr].line;
        
        std::vector<std::string> lineTokens;
        boost::split(lineTokens, tmpLine, boost::is_any_of("="), boost::token_compress_on);
        
        if(procInstruction)
        {
            if(lineTokens[0] == "FORMAT")
            {
                tmpInst.format = lineTokens[1];
            }
            else if(lineTokens[0] == "ENDINST")
            {
                coreInstructions[tmpInstToken] = tmpInst;
                procInstruction = false;
                tmpInst.arguments.clear();
            }
            else if(lineTokens[0] == "INST")
            {
                log->print("core: line " + std::to_string(coreBlock[bPtr].lineNum+1) + ":", "floating inst", MTYP_WARN);       
            }
            else
            {
                InstructionArgument tmpArg;

                tmpArg.id = lineTokens[0];
                tmpArg.mask = 0;
                tmpArg.shift = 0;
                tmpArg.width = 0;
                
                std::vector<std::string> idTokens;
                boost::split(idTokens, lineTokens[1], boost::is_any_of(":"), boost::token_compress_on);
                
                if(idTokens.size() == 0)
                    log->print("core: line " + std::to_string(coreBlock[bPtr].lineNum+1) + ":", "no info given for format ID", MTYP_WARN);       
                    
                if(idTokens[0] == "ENUMT")
                {
                    tmpArg.type = DTYP_ENUMT;
                    tmpArg.spec = idTokens[1];
                    
                    if(idTokens.size() > 2)
                        tmpArg.defaultValue = idTokens[2];
                }
                else if(idTokens[0] == "VALUE")
                {
                    tmpArg.type = DTYP_VALUE;
                    
                    if(idTokens.size() > 1)
                        tmpArg.defaultValue = idTokens[1];
                }
                else if(idTokens[0] == "ADDRS")
                {
                    tmpArg.type = DTYP_ADDRS;
                    
                    if(idTokens.size() > 1)
                        tmpArg.defaultValue = idTokens[1];
                }
                else if(idTokens[0] == "LABEL")
                {
                    tmpArg.type = DTYP_LABEL;
                    
                    if(idTokens.size() > 1)
                        tmpArg.defaultValue = idTokens[1];
                }
                else 
                {
                    log->print("core: line " + std::to_string(coreBlock[bPtr].lineNum+1) + ":", "type mismatch", MTYP_EROR);       
                }
                    
                tmpInst.arguments.push_back(tmpArg);
            }
        }
        else
        {
            if(lineTokens[0] == "INST")
            {   
                procInstruction = true;
                tmpInstToken = lineTokens[1];
            }
            else if(lineTokens[0] == "ENDINST")
            {
                log->print("core: line " + std::to_string(coreBlock[bPtr].lineNum+1) + ":", "floating endinst", MTYP_WARN);   
            }    
            else
            {
                std::vector<std::string> cmdTokens;
                boost::split(cmdTokens, lineTokens[0], boost::is_any_of(":"), boost::token_compress_on);
                
                if(cmdTokens[0] == "ENUM")
                {
                    if(coreEnums.count(cmdTokens[1]) > 0)
                        log->print("core: line " + std::to_string(coreBlock[bPtr].lineNum+1) + ":", "redefinition of enum \"" + cmdTokens[1] + "\"", MTYP_WARN);       

                    int ePtr, lastEnumVal;
                    std::vector<std::string> enumTokens;
                    boost::split(enumTokens, lineTokens[1], boost::is_any_of("/"), boost::token_compress_on);
                    
                    for(ePtr=0;ePtr<enumTokens.size();ePtr++)
                    {
                        std::vector<std::string> defTokens;
                        boost::split(defTokens, enumTokens[ePtr], boost::is_any_of(":"), boost::token_compress_on); 
                        
                        if(defTokens.size() > 2)
                            log->print("core: line " + std::to_string(coreBlock[bPtr].lineNum+1) + ":", "triple argument definition in enum \"" + cmdTokens[0] + "\"", MTYP_EROR);       
                            
                        if(defTokens.size() == 1)
                        {
                            lastEnumVal++;
                            //log->print("One, with " + cmdTokens[1] + " and " + std::to_string(lastEnumVal), MTYP_INFO);
                            coreEnums[cmdTokens[1]][defTokens[0]] = lastEnumVal;
                        }
                        else
                        {
                            //log->print("Two, with " + cmdTokens[1] + " and " + defTokens[0], MTYP_INFO);
                            coreEnums[cmdTokens[1]][defTokens[0]] = atoi(defTokens[1].c_str());
                        }
                        
                        //\log->print("Added " + std::to_string(coreEnums[cmdTokens[1]][defTokens[0]]) + " to the table", MTYP_INFO);
                    }
                }
                else
                {
                    log->print("core: line " + std::to_string(coreBlock[bPtr].lineNum+1) + ":", "unrecognized keyword in core \"" + id + "\"", MTYP_EROR);
                }
            }
        }
    }
    
    typedef std::map<std::string, Instruction>::iterator it_inst;

    for(it_inst instIt = coreInstructions.begin(); instIt != coreInstructions.end(); instIt++) 
    {
        int fCnt;
        instIt->second.base = 0;
        
        for(fCnt=0;fCnt<instIt->second.format.size();fCnt++)
        {
            if(instIt->second.format[fCnt] == '0')
            {
                instIt->second.base &= ~(1<<(31-fCnt));
            }
            else if(instIt->second.format[fCnt] == '1')
            {
                instIt->second.base |= 1<<(31-fCnt);
            }
            else
            {
                int aCnt;
                std::vector<InstructionArgument> tmpArgs;
                
                for(aCnt=0;aCnt<instIt->second.arguments.size();aCnt++)
                {                   
                    if(instIt->second.arguments[aCnt].id[0] == instIt->second.format[fCnt]) 
                    {
                        tmpArgs.push_back(instIt->second.arguments[aCnt]);
                    }
                }

                if(tmpArgs.size() < 1)
                    log->print("core: line " + std::to_string(coreBlock[bPtr].lineNum+1) + ":", "ID without format", MTYP_EROR);
                  
                if(tmpArgs.size() > 1)
                    log->print("core: line " + std::to_string(coreBlock[bPtr].lineNum+1) + ":", "multiple definition of ID", MTYP_WARN);  
                
                tmpArgs[0].mask |= 1<<(31-fCnt);
                tmpArgs[0].shift = (31-fCnt);
                tmpArgs[0].width++;
                
                //Forgive me for loop reuse
                for(aCnt=0;aCnt<instIt->second.arguments.size();aCnt++)
                {                   
                    if(instIt->second.arguments[aCnt].id[0] == tmpArgs[0].id[0]) 
                    {
                        instIt->second.arguments[aCnt] = tmpArgs[0];
                    }
                }
            }
        }
    }       
}
    
        
