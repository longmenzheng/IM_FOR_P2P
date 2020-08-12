#ifndef _ServerManager_H_
#define _ServerManager_H_


#include <map>
#include <queue>
#include "Network.h"
#include "ServerFactory.h"

class Network;

class ServerManager
{
	private:
		std::map<int,struct sockaddr_in> *m_clientInfoMap;
		std::queue<char*> *m_sendQueue;
		std::queue<char*> *m_recvQueue;
		Network* m_networke;
		ServerFactory* m_serverFactory;
	public:
		ServerManager();		
		~ServerManager();
		void run();
};

#endif
