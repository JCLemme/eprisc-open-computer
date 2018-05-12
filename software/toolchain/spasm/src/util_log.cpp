#include "util_log.h"

UtilLog::UtilLog()
{
    quitTypes = MTYP_EROR;
    hiddenTypes = MTYP_DEBG;
    color = false;
}

UtilLog::~UtilLog()
{

}

void UtilLog::setColorMode(bool newColor)
{
    color = newColor;
}

MessageType UtilLog::getHiddenTypes()
{
    return hiddenTypes;
}

void UtilLog::setHiddenTypes(MessageType hidden)
{
    hiddenTypes = hidden;
}

MessageType UtilLog::getAbortTypes()
{
    return quitTypes;
}

void UtilLog::setAbortTypes(MessageType aborted)
{
    quitTypes = aborted;
}

void UtilLog::print(std::string location, std::string message, MessageType type)
{
    if((hiddenTypes & static_cast<int>(type)) == 0)
    {
        std::streambuf *outBuf;
        std::string typePrefix, typeColor;
        
        switch(type)
        {
            case(MTYP_DEBG): typePrefix = "[DEBG]"; typeColor = "\033[1;36m"; outBuf = std::cout.rdbuf(); break;
            case(MTYP_INFO): typePrefix = "[INFO]"; typeColor = "\033[1;32m"; outBuf = std::cout.rdbuf(); break;
            case(MTYP_WARN): typePrefix = "[WARN]"; typeColor = "\033[1;33m"; outBuf = std::cerr.rdbuf(); break;
            case(MTYP_EROR): typePrefix = "[EROR]"; typeColor = "\033[1;31m"; outBuf = std::cerr.rdbuf(); break;
        }
        
        if((hiddenTypes & static_cast<int>(type)) == 0)
        {
            std::ostream outStream(outBuf);
            
            if(color)
                outStream << typeColor << typePrefix << " \033[1;37m" << location << " \033[0m" << message << "\n";
            else
                outStream << typePrefix << " " << location << " " << message << "\n";
        }
        
        if((quitTypes & type) > 0)
            exit(-1);
    }
}
