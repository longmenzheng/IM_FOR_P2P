#ifndef ACKHANDLER_H
#define ACKHANDLER_H
#include "netobserver.h"
#include <map>
#include <ctime>

class ACKHandler:public NetObserver
{
private:
    std::map<int,char*> *m_sendMap;              //全部消息列表
    std::map<int,clock_t> *m_time;               //记录超时
public:
    ACKHandler();
    ACKHandler(std::map<int,char*> *sendMap,
               std::map<int,clock_t> *time);
    void recvMsg(const char *msg) override;
};

#endif // ACKHANDLER_H
