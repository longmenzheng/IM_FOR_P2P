#ifndef _Chat_H_
#define _CHat_H_
#include "ServerWorker.h"
class ServerWorker;
class Chat:public ServerWorker
{
private:
	static int m_serverType;   //服务类型
	char * m_msg;      //需要处理的消息
public:
	Chat(char *msg);
	static int& getServerType(){return m_serverType;}
	static ServerWorker* createSelf(char *msg);
	void* dowork(void*) override;
	~Chat(){if(m_msg!=nullptr) delete m_msg;}
};




#endif
