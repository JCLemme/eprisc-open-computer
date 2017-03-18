#include "util_file.h"

UtilFile::UtilFile()
{
    //Nothing
}

UtilFile::~UtilFile()
{
    //Nothing
}

std::vector<std::string> UtilFile::loadText(std::string filename, int *err)
{
    int fail = 0;
    
    std::ifstream iFile(filename);
    std::vector<std::string> oFile;
    
    if(iFile.fail())
    {
        fail = 1;
    }
    else
    {
        std::string tmpStr;
        
        while(iFile.good())
        {
            getline(iFile, tmpStr);
            oFile.push_back(tmpStr);
        }
        
        iFile.close();
    }
    
    if(err != NULL)
        *err = fail;
        
    return oFile;
}


void UtilFile::saveText(std::string filename, std::vector<std::string> data, int *err)
{
    int fail = 0;
    
    std::ofstream oFile(filename);
    
    if(oFile.fail())
    {
        fail = 1;
    }
    else
    {
        int filePtr;
        
        for(filePtr=0;filePtr<data.size();filePtr++)
            oFile << data[filePtr] << "\n";
        
        oFile.close();
    }
    
    if(err != NULL)
        *err = fail;
}

std::vector<uint8_t> UtilFile::loadBinary(std::string filename, int *err)
{
    int fail = 0;
    
    std::ifstream iFile(filename, std::ios::binary | std::ios::in);
    std::vector<uint8_t> oFile;
    
    if(iFile.fail())
    {
        fail = 1;
    }
    else
    {
        iFile.seekg(0, iFile.end);
        int iSize = iFile.tellg();
        iFile.seekg(0, iFile.beg);
        
        oFile.resize(iSize);
        iFile.read((char*)oFile.data(), iSize);
        
        iFile.close();
    }
    
    if(err != NULL)
        *err = fail;
        
    return oFile;
}

void UtilFile::saveBinary(std::string filename, std::vector<uint8_t> data, int *err)
{
    int fail = 0;
    
    std::ofstream oFile(filename, std::ios::binary | std::ios::out);
    
    if(oFile.fail())
    {
        fail = 1;
    }
    else
    {
        oFile.write((char*)data.data(), data.size());
        oFile.close();
    }
    
    if(err != NULL)
        *err = fail;   
}

void UtilFile::saveBinaryAsVerilog(std::string filename, std::vector<uint8_t> data, int *err)
{
    int fail = 0;
    
    std::ofstream oFile(filename);
    
    if(oFile.fail())
    {
        fail = 1;
    }
    else
    {
        int outIndex;
        
        for(outIndex=0;outIndex<data.size();outIndex+=4)
        {
            char numBuffer[16];
            sprintf(numBuffer, "%02X%02X%02X%02X", data[outIndex], data[outIndex+1], data[outIndex+2], data[outIndex+3]);
            std::string outLine = "rContents[" + std::to_string(outIndex/4) + "] = 32'h" + numBuffer + ";\n";
            oFile << outLine;
        }
    }
    
    oFile.close();

    if(err != NULL)
        *err = fail;   
}

