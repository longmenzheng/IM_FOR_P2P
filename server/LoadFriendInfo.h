#ifndef _LoadFriendInfo_h_
#define _LoadFriendInfo_h_
#include "ServerWorker.h"
class ServerWorker;
class LoadFriendInfo:public ServerWorker
{
private:
	static int m_serverType;   //服务类型
	char * m_msg;      //需要处理的消息
public:
	LoadFriendInfo(char *msg);
	static int& getServerType(){return m_serverType;}
	static ServerWorker* createSelf(char *msg);
	void* dowork(void*) override;
	~LoadFriendInfo(){if(m_msg!=nullptr) delete m_msg;}

};



#endif
