#ifndef BUILDP2P_H
#define BUILDP2P_H
#include "netobserver.h"

class BuildP2P:public NetObserver
{
private:
    BuildP2P();
    BuildP2P(BuildP2P&);
    
    static BuildP2P* m_instance;
    int peerid;
public:
    static BuildP2P* getInstance();
    void sendMsg(const int&);  
    void recvMsg(const char *msg) override; 
};

#endif // BUILDP2P_H
