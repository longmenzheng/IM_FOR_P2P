#ifndef GETINFO_H
#define GETINFO_H

#include "userinfo.h"
#include "network.h"
class UserInfo;
class GetInfo:public NetObserver
{
private:
    static UserInfo* m_userInfo;
    static GetInfo* m_instance;
    static int m_state;
    static long long m_serveID;    //当前需要获取信息的对象ID
public:
    GetInfo();
    static bool getInfo(UserInfo*);//传入一个不完整信息对象，获取完整的信息
    void recvMsg(const char *msg) override;
    static GetInfo* getInstance();
};

#endif // GETINFO_H
