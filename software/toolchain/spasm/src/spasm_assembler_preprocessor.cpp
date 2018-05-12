#include "spasm_assembler.h"

PreprocessorData Assembler::preprocess(std::string filename, std::map<std::string, std::string> defLook, int rec)
{
    int err = 0;
    
    if(rec < 0)
        log->print("preprocessor:", "file \"" + filename + "\" breaches the include limit", MTYP_EROR);
    
    std::vector<std::string> rawSourceFile = file->loadText(filename, &err);
    PreprocessorData procdData;
    std::vector<ProcessedLine> procdFile;
    std::map<std::string, std::string> defineLookupTable = defLook;
    
    if(err != 0)
        log->print("preprocessor:", "error opening \"" + filename + "\" for reading", MTYP_EROR);
        
    int rCnt;

    for(rCnt=0;rCnt<rawSourceFile.size();rCnt++)
    {
        std::string rawLine = rawSourceFile[rCnt];
        std::string procLine = rawLine;
        
        boost::to_upper(procLine);
                
        if(procLine.find(';') != std::string::npos)
            procLine = procLine.substr(0, procLine.find(';'));

        boost::trim(procLine);
        
        if(procLine != "")
        {
            ProcessedLine tmpProcLine;
            bool addToken = true;
            
            tmpProcLine.sourceLine = rawLine;
            tmpProcLine.sourceLineNum = rCnt + 1;
            tmpProcLine.sourceFile = filename;
            
            std::vector<std::string> procLineTokens;
            boost::split(procLineTokens, procLine, boost::is_any_of(" "), boost::token_compress_on);
            
            if(procLineTokens[0][0] == '!')
            {
                procLineTokens[0] = procLineTokens[0].substr(1, procLineTokens[0].size()-1);
            
                if(procLineTokens[0] == "DEF")
                {
                    if(procLineTokens.size() < 3)
                        log->print("preprocessor: file \"" + filename + "\": line " + std::to_string(rCnt+1) + ":", "too few arguments for define", MTYP_EROR);
                        
                    if(defineLookupTable.count(procLineTokens[1]) == 1)
                        log->print("preprocessor: file \"" + filename + "\": line " + std::to_string(rCnt+1) + ":", "redefinition of label \"" + procLineTokens[1] + "\"", MTYP_WARN);

                    defineLookupTable[procLineTokens[1]] = procLineTokens[2];
                    
                    addToken = false;
                }
                else if(procLineTokens[0] == "INCLUDE")
                {
                    std::string tmpFilename = tmpProcLine.sourceLine.substr(tmpProcLine.sourceLine.find_first_of("\"")+1, tmpProcLine.sourceLine.find_last_of("\"")-tmpProcLine.sourceLine.find_first_of("\"")-1);
                        
                    PreprocessorData newData = preprocess(tmpFilename, defineLookupTable, rec-1);
                    
                    for(int procdI=0;procdI<newData.procdLines.size();procdI++)
                        procdFile.push_back(newData.procdLines[procdI]);
                        
                    typedef std::map<std::string, std::string>::iterator it_str;
                
                    for(it_str defLkIt = newData.procdDef.begin(); defLkIt != newData.procdDef.end(); defLkIt++) 
                    {
                        if(defineLookupTable.count(defLkIt->first) == 1)
                            log->print("preprocessor: file \"" + filename + "\": line " + std::to_string(rCnt+1) + ":", "redefinition of label \"" + defLkIt->first + "\"", MTYP_WARN);
                            
                        defineLookupTable[defLkIt->first] = defLkIt->second;
                    }
                    
                    addToken = false;
                }
                else
                {
                    //log->print("preprocessor: line " + std::to_string(rCnt+1) + ": undefined preprocessor statement \"" + procLineTokens[0] + "\'", MTYP_EROR);
                }
            }
            else
            {
                typedef std::map<std::string, std::string>::iterator it_str;
                
                for(it_str defLkIt = defineLookupTable.begin(); defLkIt != defineLookupTable.end(); defLkIt++) 
                {
                    while(procLine.find(defLkIt->first) != std::string::npos)
                    {
                        procLine.replace(procLine.find(defLkIt->first), defLkIt->first.size(), defLkIt->second);
                    }
                }
            }   
            
            if(addToken)
            {
                tmpProcLine.procdLine = procLine;
                procdFile.push_back(tmpProcLine);      
            }                 
        }
    }
    
    procdData.procdLines = procdFile;
    procdData.procdDef = defineLookupTable;
    return procdData;
}
