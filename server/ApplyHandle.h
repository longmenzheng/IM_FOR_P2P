#ifndef _ApplyHandle_H_
#define _ApplyHandle_H_

#include "ServerWorker.h"
class ServerWorker;
class ApplyHandle:public ServerWorker
{
private:
	static int m_serverType;   //服务类型
	char * m_msg;      //需要处理的消息
public:
	ApplyHandle(char *msg);
	static int& getServerType(){return m_serverType;}
	static ServerWorker* createSelf(char *msg);
	void* dowork(void*) override;
	~ApplyHandle(){if(m_msg!=nullptr) delete m_msg;}

};


#endif
