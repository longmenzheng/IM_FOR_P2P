#include "ServerFactory.h"
#include <iostream>
#include <exception>
#include  "MsgType.h"
#include "SignUp.h"
#include "SignIn.h"
#include <cstdio>

ServerFactory::ServerFactory(std::queue<char*> *processQueue):
	m_processQueue(processQueue)
{
}

void ServerFactory::init()
{
	//设计模式： 把变化的部分约束在此函数中
	//添加工作室
	WorkStudio *workStudio = new WorkStudio();
	m_workStudioVector.push_back(workStudio);
	++m_WDConut;  //工作室数量加一



	//添加服务生成函数
	m_serverCreatorMap[SignUp::getServerType()]=SignUp::createSelf;	
	m_serverCreatorMap[SignIn::getServerType()]=SignIn::createSelf;
}

void ServerFactory::distributeTask()
{
	//格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容

	int index=-1;
	while(1)
	{
		if(m_processQueue->empty())
		{
			continue;
		}
		char *msg = m_processQueue->front();
		int msgType=-1;
		sscanf(msg,"%*d\n%*d\n%*d\n%d\n",&msgType);
		std::cout<<"工厂消息："<<msg<<"接收到的消息类型："<<msgType<<std::endl;
		ServerWorker* serverObj;
		try{
			serverObj=m_serverCreatorMap.at(msgType)(msg);
		}catch(std::out_of_range e)
		{
			std::cout <<"ServerFactory出现异常"<<"   队列元素个数："<<m_processQueue->size()<<std::endl;
			m_processQueue->pop();
			free(msg);
			continue;
		}
		index=(++index%m_WDConut);
		m_workStudioVector[index]->addServerWorker(serverObj);
		m_processQueue->pop();
	}
}

void ServerFactory::addWorkStudio(WorkStudio* studio)
{
	m_workStudioVector.push_back(studio);
}

void ServerFactory::addServerCreator(int msgType,ServerWorker* (*servercreator)())
{
	//m_serverCreatorMap[msgType]=servercreator;
}

