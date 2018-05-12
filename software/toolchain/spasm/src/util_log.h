#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

#ifndef UTIL_LOG
#define UTIL_LOG

enum MessageType
{
    MTYP_DEBG = 1,
    MTYP_INFO = 2,
    MTYP_WARN = 4,
    MTYP_EROR = 8
};

class UtilLog
{
    public:
    UtilLog();
    ~UtilLog();
    
    void setColorMode(bool newColor);
    
    MessageType getHiddenTypes();
    void setHiddenTypes(MessageType hidden);
    
    MessageType getAbortTypes();
    void setAbortTypes(MessageType aborted);
    
    void print(std::string location, std::string message, MessageType type);
    
    private:
    MessageType quitTypes;
    MessageType hiddenTypes;
    bool color;
};
    
inline MessageType operator|(MessageType a, MessageType b)
{return static_cast<MessageType>(static_cast<int>(a) | static_cast<int>(b));}

#endif
