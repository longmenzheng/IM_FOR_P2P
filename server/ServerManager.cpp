#include <iostream>
#include "ServerManager.h"
#include "Network.h"
using namespace std;


ServerManager::ServerManager():
	m_clientInfoMap(new map<int,struct sockaddr_in>()),
	m_sendQueue(new queue<char*>()),
	m_recvQueue(new queue<char*>()),
	m_networke(new Network(m_sendQueue,m_recvQueue,m_clientInfoMap)),
	m_serverFactory(new ServerFactory(m_recvQueue))
{
	//初始化网络对象实例
	m_networke->m_instance=m_networke;		
}	
void ServerManager::run()
{
	m_serverFactory->init();
	m_serverFactory->distributeTask();
}

ServerManager::~ServerManager()
{
	std::cout<<"---------------------------------ServerManager析构---------------\n";
	
	delete m_clientInfoMap;
	delete m_sendQueue;
	delete m_recvQueue;
	delete m_networke;
	delete m_serverFactory;
}
