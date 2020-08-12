#include "WorkStudio.h"
#include <thread>
#include <unistd.h>
#include <iostream>


WorkStudio::WorkStudio()
{
	//连接数据库
	mysql_init(&m_mysql);
	if(NULL==mysql_real_connect(&m_mysql,"localhost","root","Wwyq1234","IM",0,NULL,0))
	{
		std::cout<<"mysql_real_connect error"<<std::endl;
		return ;
	}
	
	std::thread *workThread=new std::thread(dowork,this);
	workThread->detach();
}

void WorkStudio::addServerWorker(ServerWorker* serverWorker)
{
	m_serverQueue.push(serverWorker);
}
void dowork(WorkStudio* studio)         //循环处理
{
	while(1)
	{
		if(studio->m_serverQueue.empty())
		{
			usleep(500000);//  500ms
			continue;
		}
		ServerWorker *i=(studio->m_serverQueue).front();
		(studio->m_serverQueue).pop();
		i->dowork((void*)&studio->m_mysql);
		delete i;
	}
}
