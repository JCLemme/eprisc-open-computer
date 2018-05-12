#include "spasm_assembler.h"

std::vector<ProgramToken> Assembler::tokenize(std::vector<ProcessedLine> file)
{
    uint32_t programCounter = 0;
    std::string currentZone = "<LOCAL>";
    std::vector<ProgramToken> tokenFile;
    
    int pCnt;
    
    for(pCnt=0;pCnt<file.size();pCnt++)
    {
        ProcessedLine procLine = file[pCnt];
        std::string sourceLine = procLine.procdLine;
        
        bool addToken = true;
        ProgramToken progToken;
        
        progToken.originalLine = procLine;
        progToken.definesData = false;
        progToken.definesInstruction = false;
        progToken.address = programCounter;
        
        std::vector<std::string> sourceLineTokens;
        boost::split(sourceLineTokens, sourceLine, boost::is_any_of(" "), boost::token_compress_on);

        if(sourceLineTokens[0][0] == ':')
        {
            sourceLineTokens[0] = sourceLineTokens[0].substr(1, sourceLineTokens[0].size()-1);
            
            if(sourceLineTokens[0][0] == '.')
                sourceLineTokens[0] = currentZone + sourceLineTokens[0];
            
            if(labelLookupTable.count(sourceLineTokens[0]) == 1)
                log->print("tokenizer: file \"" + procLine.sourceFile + "\": line " + std::to_string(procLine.sourceLineNum) + ":", "redefinition of label \"" + sourceLineTokens[0] + "\"", MTYP_EROR);

            labelLookupTable[sourceLineTokens[0]] = programCounter;
            
            if(sourceLineTokens[0][sourceLineTokens[0].length()-1] == '\\' || sourceLineTokens[0][sourceLineTokens[0].length()-1] == '/')
                log->print("tokenizer: file \"" + procLine.sourceFile + "\": line " + std::to_string(procLine.sourceLineNum) + ":", "label \"" + sourceLineTokens[0] + "\" ends with an illegal character", MTYP_EROR);   
                
            sourceLineTokens.erase(sourceLineTokens.begin());
        }
        
        if(sourceLineTokens.size() > 0)
        {
            if(sourceLineTokens[0][0] == '!')
            {
                sourceLineTokens[0] = sourceLineTokens[0].substr(1, sourceLineTokens[0].size()-1);
                
                if(sourceLineTokens[0] == "ZONE")
                {
                    if(sourceLineTokens.size() < 2)
                        log->print("tokenizer: file \"" + procLine.sourceFile + "\": line " + std::to_string(procLine.sourceLineNum) + ":", "no zone specified", MTYP_EROR);
                    
                    currentZone = sourceLineTokens[1];
                    addToken = false;
                }
                else if(sourceLineTokens[0] == "DATA")
                {
                    if(sourceLineTokens.size() < 2)
                        log->print("tokenizer: file \"" + procLine.sourceFile + "\": line " + std::to_string(procLine.sourceLineNum) + ":", "!data directive was not provided with any data", MTYP_WARN);
                    
                    int dCnt;
                    progToken.definesData = true;
                    
                    for(dCnt=1;dCnt<sourceLineTokens.size();dCnt++)
                    {
                        progToken.definedData.push_back(atoi(sourceLineTokens[dCnt].c_str()));
                    }
                    
                    programCounter += progToken.definedData.size();
                }
                else if(sourceLineTokens[0] == "STR")
                {
                    std::string tmpStr = procLine.sourceLine;
                    tmpStr = tmpStr.substr(tmpStr.find_first_of("\"")+1, tmpStr.find_last_of("\"")-tmpStr.find_first_of("\"")-1);
                    
                    if(tmpStr.length() < 2)
                        log->print("tokenizer: file \"" + procLine.sourceFile + "\": line " + std::to_string(procLine.sourceLineNum) + ":", "!str directive was not provided with any character data", MTYP_WARN);
                    
                    while(tmpStr.find("\\") != std::string::npos)
                    {
                        char insert = '\0';

                        switch(tmpStr[tmpStr.find('\\')+1])
                        {
                            case('0'): insert = '\0'; break;
                            case('a'): insert = '\a'; break;
                            case('b'): insert = '\b'; break;
                            case('t'): insert = '\t'; break;
                            case('n'): insert = '\n'; break;
                            case('v'): insert = '\v'; break;
                            case('f'): insert = '\f'; break;
                            case('r'): insert = '\r'; break;
                            case('\\'): insert = '\\'; break;
                        }
                        
                        tmpStr.erase(tmpStr.find('\\')+1, 1);
                        tmpStr[tmpStr.find('\\')] = insert;
                    }
                    
                    if(tmpStr[tmpStr.length()-1] != '\0')
                        tmpStr += std::string(1, '\0');
                        
                    if(tmpStr.length() % 4 != 0)
                        tmpStr += std::string((4-(tmpStr.length()%4)), '\0');
                        
                    int dCnt;
                    progToken.definesData = true;
                    
                    for(dCnt=0;dCnt<tmpStr.length();dCnt+=4)
                    {
                        uint32_t tmpStrWord = 0;
                        tmpStrWord = ((uint8_t)(tmpStr[dCnt]) << 24) + ((uint8_t)(tmpStr[dCnt+1]) << 16) + ((uint8_t)(tmpStr[dCnt+2]) << 8) + ((uint8_t)(tmpStr[dCnt+3]) << 0);
                        progToken.definedData.push_back(tmpStrWord);
                    }
                    
                    programCounter += progToken.definedData.size();
                }
                else if(sourceLineTokens[0] == "IP")
                {
                    if(sourceLineTokens.size() < 2)
                        log->print("tokenizer: file \"" + procLine.sourceFile + "\": line " + std::to_string(procLine.sourceLineNum) + ":", "!ip directive was not provided with a new address", MTYP_WARN);
                    
                    programCounter = processNumber(sourceLineTokens[1]);
                    addToken = false;
                }
                else
                {
                    log->print("tokenizer: file \"" + procLine.sourceFile + "\": line " + std::to_string(procLine.sourceLineNum) + ":", "unrecognized assembler directive \"" + sourceLineTokens[0] + "\"", MTYP_WARN);
                }
            }
            else
            {
                progToken.definesInstruction = true;
                progToken.instructionToken = sourceLineTokens[0];
                sourceLineTokens.erase(sourceLineTokens.begin());
                
                int aCnt;
                
                for(aCnt=0;aCnt<sourceLineTokens.size();aCnt++)
                {
                    std::vector<std::string> instArgTokens;
                    boost::split(instArgTokens, sourceLineTokens[aCnt], boost::is_any_of(":"), boost::token_compress_on);
                    
                    if(instArgTokens.size() < 2)
                        log->print("tokenizer: file \"" + procLine.sourceFile + "\": line " + std::to_string(procLine.sourceLineNum) + ":", "missing data for argument " + std::to_string(aCnt), MTYP_EROR);

                    if(instArgTokens[0].size() > 1)
                        log->print("tokenizer: file \"" + procLine.sourceFile + "\": line " + std::to_string(procLine.sourceLineNum) + ":", "ID too long for argument " + std::to_string(aCnt), MTYP_EROR);
                        
                    ProgramTokenArgument tmpArg;
                    tmpArg.id = instArgTokens[0];
                    tmpArg.offsetLabel = "";
                    
                    switch(instArgTokens[1][0])
                    {
                        case('#'):
                        {
                            tmpArg.type = DTYP_VALUE;
                            instArgTokens[1] = instArgTokens[1].substr(1, instArgTokens[1].size()-1);
                            tmpArg.valueData = processNumber(instArgTokens[1]);
                        }
                        break;
                        
                        case('$'):
                        {
                            tmpArg.type = DTYP_ADDRS;
                            instArgTokens[1] = instArgTokens[1].substr(1, instArgTokens[1].size()-1);
                            tmpArg.valueData = processNumber(instArgTokens[1]);
                        }
                        break;
                        
                        case('%'):
                        {
                            tmpArg.type = DTYP_ENUMT;
                            instArgTokens[1] = instArgTokens[1].substr(1, instArgTokens[1].size()-1);
                            tmpArg.stringData = instArgTokens[1];
                        }
                        break;
                        
                        default:
                        {
                            tmpArg.type = DTYP_LABEL;
                            if(instArgTokens[1][0] == '.')
                                instArgTokens[1] = currentZone + instArgTokens[1];
                                
                            //if(instArgTokens[1][instArgTokens[1].length()-1] == '\\' || instArgTokens[1][instArgTokens[1].length()-1] == '/')
                            //    instArgTokens[1] = instArgTokens[1].substr(0, instArgTokens[1].length()-1);
                                
                            if(instArgTokens[1].find('^') != std::string::npos)
                            {   
                                tmpArg.offsetLabel = instArgTokens[1].substr(instArgTokens[1].find('^'), instArgTokens[1].size()-1);
                                instArgTokens[1] = instArgTokens[1].substr(0, instArgTokens[1].find('^'));
                            }
                            
                            tmpArg.stringData = instArgTokens[1];
                        }
                        break;
                    }
                    
                    progToken.instructionArguments.push_back(tmpArg);
                }
                        
                //Validity check goes here   
                //Sanity check goes over this entire project
                
                programCounter++;  
            }
            
            if(addToken)
                tokenFile.push_back(progToken);
        }
    }
    
    return tokenFile;
}
