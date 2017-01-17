#include "util_log.h"

UtilLog::UtilLog()
{
    quitTypes = MTYP_EROR;
    hiddenTypes = MTYP_DEBG;
}

UtilLog::~UtilLog()
{

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

void UtilLog::print(std::string message, MessageType type)
{
    if((hiddenTypes & static_cast<int>(type)) == 0)
    {
        std::streambuf *outBuf;
        std::string typePrefix;
        
        switch(type)
        {
            case(MTYP_DEBG): typePrefix = "DEBG"; outBuf = std::cout.rdbuf(); break;
            case(MTYP_INFO): typePrefix = "INFO"; outBuf = std::cout.rdbuf(); break;
            case(MTYP_WARN): typePrefix = "WARN"; outBuf = std::cerr.rdbuf(); break;
            case(MTYP_EROR): typePrefix = "EROR"; outBuf = std::cerr.rdbuf(); break;
        }
        
        if((hiddenTypes & static_cast<int>(type)) == 0)
        {
            std::ostream outStream(outBuf);
            outStream << "[" << typePrefix << "] " << message << "\n";
        }
        
        if((quitTypes & type) > 0)
            exit(-1);
    }
}
