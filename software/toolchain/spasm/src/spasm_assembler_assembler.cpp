#include "spasm_assembler.h"

std::vector<uint32_t> Assembler::assemble(std::vector<ProgramToken> file)
{
    std::vector<uint32_t> binFile;
    int tCnt;
    
    binFile.resize(10, 0);
    
    for(tCnt=0;tCnt<file.size();tCnt++)
    {
        ProgramToken progToken = file[tCnt];
        std::vector<uint32_t> writeWords;
        
        if(progToken.definesData)
        {
            writeWords = progToken.definedData;
        }
        else if(progToken.definesInstruction)
        { 
            if(core->instructions().count(progToken.instructionToken) == 0)
                log->print("assembler: file \"" + progToken.originalLine.sourceFile + "\": line " + std::to_string(progToken.originalLine.sourceLineNum) + ":", "no match for instruction token \"" + progToken.instructionToken + "\"", MTYP_EROR);
                
            Instruction instMatch = core->instructions()[progToken.instructionToken];
            int aCnt;
            
            uint32_t baseWord = instMatch.base;

            for(aCnt=0;aCnt<instMatch.arguments.size();aCnt++)
            {
                int iCnt;
                ProgramTokenArgument *argMatch = NULL;
                
                for(iCnt=0;iCnt<progToken.instructionArguments.size();iCnt++)
                {
                    if(progToken.instructionArguments[iCnt].id == instMatch.arguments[aCnt].id)
                    {
                        if(progToken.instructionArguments[iCnt].type == instMatch.arguments[aCnt].type
                        ||(progToken.instructionArguments[iCnt].type == DTYP_LABEL && instMatch.arguments[aCnt].type != DTYP_ENUMT))
                        {
                            if(argMatch == NULL)
                                argMatch = &progToken.instructionArguments[iCnt];
                            else
                                log->print("assembler: file \"" + progToken.originalLine.sourceFile + "\": line " + std::to_string(progToken.originalLine.sourceLineNum) + ":", "redefinition of ID \"" + instMatch.arguments[aCnt].id + "\"", MTYP_EROR);
                        }
                        else
                        {
                            log->print("assembler: file \"" + progToken.originalLine.sourceFile + "\": line " + std::to_string(progToken.originalLine.sourceLineNum) + ":", "type mismatch for ID \"" + instMatch.arguments[aCnt].id + "\"", MTYP_EROR);
                        }
                    }
                }
                
                if(argMatch == NULL)
                {
                    if(instMatch.arguments[aCnt].defaultValue != "")
                    {
                        ProgramTokenArgument *tmpMatch = new ProgramTokenArgument;
                        tmpMatch->id = instMatch.arguments[aCnt].id;
                        tmpMatch->type = instMatch.arguments[aCnt].type;
                        
                        if(tmpMatch->type == DTYP_ENUMT)
                            tmpMatch->stringData = instMatch.arguments[aCnt].defaultValue;
                        else
                            tmpMatch->valueData = processNumber(instMatch.arguments[aCnt].defaultValue);
                        
                        argMatch = tmpMatch;
                    }
                    else
                    {
                        log->print("assembler: file \"" + progToken.originalLine.sourceFile + "\": line " + std::to_string(progToken.originalLine.sourceLineNum) + ":", "no match for ID \"" + instMatch.arguments[aCnt].id + "\"", MTYP_EROR);
                    }
                }
                
                uint32_t baseValue;
                
                switch(instMatch.arguments[aCnt].type)
                {
                    case(DTYP_ENUMT):
                    {
                        if(core->enums().count(instMatch.arguments[aCnt].spec) == 1)
                        {
                            if(core->enums()[instMatch.arguments[aCnt].spec].count(argMatch->stringData) == 1)
                            {
                                baseValue = core->enums()[instMatch.arguments[aCnt].spec][argMatch->stringData];
                            }
                            else
                            {
                                log->print("assembler: file \"" + progToken.originalLine.sourceFile + "\": line " + std::to_string(progToken.originalLine.sourceLineNum) + ":", "no match for enum value \"" + argMatch->stringData + "\"", MTYP_EROR);
                            }
                        }
                        else
                        {
                            log->print("assembler: file \"" + progToken.originalLine.sourceFile + "\": line " + std::to_string(progToken.originalLine.sourceLineNum) + ":", "no match for enum \"" + instMatch.arguments[aCnt].spec + "\"", MTYP_EROR);
                        }
                    }
                    break;
                    
                    case(DTYP_VALUE):   
                    {
                        if(argMatch->type == DTYP_VALUE)
                        {
                            baseValue = argMatch->valueData;
                        }
                        else if(argMatch->type == DTYP_LABEL)
                        {
                            std::string properLabel = (argMatch->stringData[argMatch->stringData.length()-1] == '\\' || argMatch->stringData[argMatch->stringData.length()-1] == '/') ? argMatch->stringData.substr(0, argMatch->stringData.length()-1) : argMatch->stringData;

                            if(labelLookupTable.count(properLabel) == 0)
                                log->print("assembler: file \"" + progToken.originalLine.sourceFile + "\": line " + std::to_string(progToken.originalLine.sourceLineNum) + ":", "label \"" + properLabel + "\" not defined", MTYP_EROR);
                                
                            baseValue = labelLookupTable[properLabel];
                            
                            if(argMatch->stringData[argMatch->stringData.length()-1] == '\\')
                                baseValue = baseValue & 0x0000FFFF;
                                
                            if(argMatch->stringData[argMatch->stringData.length()-1] == '/')
                                baseValue = (baseValue & 0xFFFF0000) >> 16;
                        }
                        else
                        {
                            log->print("assembler: file \"" + progToken.originalLine.sourceFile + "\": line " + std::to_string(progToken.originalLine.sourceLineNum) + ":", "Argument match with a non-value data type? How did this even happen?", MTYP_EROR);
                        }
                    }
                    break;
                    
                    case(DTYP_ADDRS):
                    {
                        if(argMatch->type == DTYP_ADDRS)
                        {
                            baseValue = argMatch->valueData;
                        }
                        else if(argMatch->type == DTYP_LABEL)
                        {
                            std::string properLabel = (argMatch->stringData[argMatch->stringData.length()-1] == '\\' || argMatch->stringData[argMatch->stringData.length()-1] == '/') ? argMatch->stringData.substr(0, argMatch->stringData.length()-1) : argMatch->stringData;

                            if(labelLookupTable.count(properLabel) == 0)
                                log->print("assembler: file \"" + progToken.originalLine.sourceFile + "\": line " + std::to_string(progToken.originalLine.sourceLineNum) + ":", "label \"" + properLabel + "\" not defined", MTYP_EROR);
                                
                            baseValue = labelLookupTable[properLabel];
                            
                            if(argMatch->stringData[argMatch->stringData.length()-1] == '\\')
                                baseValue = baseValue & 0x0000FFFF;
                                
                            if(argMatch->stringData[argMatch->stringData.length()-1] == '/')
                                baseValue = (baseValue & 0xFFFF0000) >> 16;
                        }
                        else
                        {
                            log->print("assembler: file \"" + progToken.originalLine.sourceFile + "\": line " + std::to_string(progToken.originalLine.sourceLineNum) + ":", "Argument match with a non-address data type? How did this even happen?", MTYP_EROR);
                        }
                        
                        int32_t tmpValue = baseValue - progToken.address - ((baseValue <= progToken.address) ? 0 : 0);
                        baseValue = (uint32_t)tmpValue;
                    }
                    break;
                    
                    case(DTYP_LABEL):
                    {
                        if(argMatch->type == DTYP_LABEL)
                        {
                            std::string properLabel = (argMatch->stringData[argMatch->stringData.length()-1] == '\\' || argMatch->stringData[argMatch->stringData.length()-1] == '/') ? argMatch->stringData.substr(0, argMatch->stringData.length()-1) : argMatch->stringData;

                            if(labelLookupTable.count(properLabel) == 0)
                                log->print("assembler: file \"" + progToken.originalLine.sourceFile + "\": line " + std::to_string(progToken.originalLine.sourceLineNum) + ":", "label \"" + properLabel + "\" not defined", MTYP_EROR);
                                
                            baseValue = labelLookupTable[properLabel];
                            
                            if(argMatch->stringData[argMatch->stringData.length()-1] == '\\')
                                baseValue = baseValue & 0x0000FFFF;
                                
                            if(argMatch->stringData[argMatch->stringData.length()-1] == '/')
                                baseValue = (baseValue & 0xFFFF0000) >> 16;
                        }
                        else
                        {
                            log->print("assembler: file \"" + progToken.originalLine.sourceFile + "\": line " + std::to_string(progToken.originalLine.sourceLineNum) + ":", "Argument match with a non-label data type? How did this even happen?", MTYP_EROR);
                        }
                    }
                    break;
                }

                
                baseValue <<= instMatch.arguments[aCnt].shift;
                uint32_t formattedValue = baseValue & instMatch.arguments[aCnt].mask;
                
                if(formattedValue != baseValue)
                    log->print("assembler: file \"" + progToken.originalLine.sourceFile + "\": line " + std::to_string(progToken.originalLine.sourceLineNum) + ":", "value provided for ID \"" + instMatch.arguments[aCnt].id + "\" is wider than specified", MTYP_WARN);
                    
                baseWord += formattedValue;
            }

            writeWords.push_back(baseWord);
        }
        else
        {
            log->print("assembler: file \"" + progToken.originalLine.sourceFile + "\": line " + std::to_string(progToken.originalLine.sourceLineNum) + ":", "Somehow, there's a token that defines neither an instruction nor data. Beats me.", MTYP_EROR);
        }       
                
        if(binFile.size() < progToken.address || binFile.size() < progToken.address+writeWords.size())
        {
            binFile.resize(progToken.address+writeWords.size(), 0);
        }
        
        int wCnt;

        for(wCnt=0;wCnt<writeWords.size();wCnt++)
        {
            binFile[progToken.address+wCnt] = writeWords[wCnt];
            progToken.assembledData.push_back(writeWords[wCnt]);
        }
        
        debugData.push_back(progToken);
    }
    
    return binFile;
}
