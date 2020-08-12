#ifndef _SignUp_H_
#define _SignUp_H_
#include <cstdlib>
#include "ServerWorker.h"
class SignUp:public ServerWorker
{
private:
	static int m_serverType;   //服务类型
	char * m_msg;      //需要处理的消息
public:
	SignUp(char *msg):m_msg(msg){};
	static int& getServerType(){return m_serverType;}
	static ServerWorker* createSelf(char *msg);
	void* dowork(void*) override;   //具体的处理工作 ，由WorkStudio对象调用
	~SignUp();
};

#endif
