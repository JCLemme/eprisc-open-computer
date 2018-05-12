#include "spasm_assembler.h"

/*struct ProgramToken
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

struct ProcessedLine
{
    std::string sourceLine;
    std::string sourceFile;
    int sourceLineNum;
    
    std::string procdLine;
    
    bool isExpandedMacro;
};*/

std::vector<std::string> Assembler::debug()
{
    std::vector<std::string> outputData;
    std::string currentFile = "";
    int i, j;
    
    outputData.push_back("address:    output     | source");
    outputData.push_back("-----------------------+---------------------------------------------------------------------------");
    
    for(i=0;i<debugData.size();i++)
    {
        std::stringstream outString;
        outString << std::setfill('0');
        
        // Gotta check this first
        if(debugData[i].originalLine.sourceFile != currentFile)
        {
            currentFile = debugData[i].originalLine.sourceFile;
            outputData.push_back("                    ==>| [" + currentFile + "]");
        }
        
        outString << "0x" << std::hex << std::setw(8) << debugData[i].address << std::dec << ": ";
        
        outString << "0x" << std::hex << std::setw(8) << debugData[i].assembledData[0] << std::dec;
        
        for(j=1;j<debugData[i].assembledData.size();j++)
            outString << " |\n            0x" << std::hex << std::setw(8) << debugData[i].assembledData[j] << std::dec;
        
        outString << " | [" << std::setw(4) << debugData[i].originalLine.sourceLineNum << "] " << debugData[i].originalLine.sourceLine;
        
        //outString << "\n"; // don't need this with the UtilFile::saveText() function
        
        outputData.push_back(outString.str());
    }
    
    return outputData;
}
