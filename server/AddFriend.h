#ifndef _AddFriend_H_
#define _AddFriend_H_
#include "ServerWorker.h"

class AddFriend:public ServerWorker
{
private:
	static int m_serverType;
	char* m_msg;
public:
	AddFriend(char *msg);
	static int& getServerType(){return m_serverType;}
	static ServerWorker* createSelf(char *msg);
	void* dowork(void*) override;
	~AddFriend(){if(m_msg!=nullptr) delete m_msg;}
};




#endif
