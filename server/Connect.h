#ifndef _Connect_H_
#define _Connect_H_

#include "ServerWorker.h"
#include <map>
class Connect:public ServerWorker
{
private:
	char * m_msg;      //处理从网络上接收的消息
	int m_studioType; 
	std::map<int,struct sockaddr_in> *m_netInfoMap;
public:
	Connect(char *msg);
	int& getStudioType(){return m_studioType;}
	static ServerWorker* createSelf(char *msg);
	void dowork(MYSQL mysql) override;
	~Connect(){if(m_msg!=nullptr) delete msg;}
};

#endif
