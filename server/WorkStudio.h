#ifndef _WorkStudio_h_
#define _WorkStudio_h_

#include "ServerWorker.h"
#include <list>
#include <queue>
#include <mysql/mysql.h>
class ServerWorker;
class WorkStudio
{
private:
	//std::list<ServerWorker*> m_serverList;
	std::queue<ServerWorker*> m_serverQueue;  //工作室自己的需要处理的服务队列
	MYSQL m_mysql;       //工作室的数据库资源

public:
	WorkStudio();
	std::queue<ServerWorker*>& grtServerQueue(){return m_serverQueue;}
	MYSQL& getMysql(){return m_mysql;}
	
	void addServerWorker(ServerWorker*);   //向工作室提交服务
	friend void dowork(WorkStudio *);         //工作室处理线程 

	~WorkStudio(){};
};
void dowork(WorkStudio*);

#endif
