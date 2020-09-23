#ifndef _BuildP2P_H_
#define _BuildP2P_H_
#include "ServerWorker.h"
class ServerWorker;
class BuildP2P:public ServerWorker
{
private:
	static int m_serverType;   //服务类型
	char * m_msg;      //需要处理的消息
public:
	BuildP2P(char *msg);
	static int& getServerType(){return m_serverType;}
	static ServerWorker* createSelf(char *msg);
	void* dowork(void*) override;
	~BuildP2P(){if(m_msg!=nullptr) delete m_msg;}
};




#endif
