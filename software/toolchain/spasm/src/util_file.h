#include <iostream>
#include <cstdint>
#include <fstream>
#include <string>
#include <vector>

#ifndef UTIL_FILE
#define UTIL_FILE

class UtilFile
{
    public:
    UtilFile();
    ~UtilFile();
    
    std::vector<std::string> loadText(std::string filename, int *err = NULL);
    void saveText(std::string filename, std::vector<std::string> data, int *err = NULL);
    
    std::vector<uint8_t> loadBinary(std::string filename, int *err = NULL);
    void saveBinary(std::string filename, std::vector<uint8_t> data, int *err = NULL);
    void saveBinaryAsVerilog(std::string filename, std::vector<uint8_t> data, int *err = NULL);
};

#endif
