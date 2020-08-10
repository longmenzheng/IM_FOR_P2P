#ifndef NETOBSERVER_H
#define NETOBSERVER_H
#include <string>

class NetObserver
{
public:
    //我这里传的是引用，如果对消息感兴趣，请拷贝一份msg
    virtual void recvMsg(const char *msg)=0;
};

#endif // NETOBSERVER_H
