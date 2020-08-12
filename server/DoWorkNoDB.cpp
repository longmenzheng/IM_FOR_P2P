#include "DoWorkNoDB.h"


void DoWorkNoDB::addServerWorker(ServerWorker* serverWorker)
{     //如果是需要的类型就添加进服务队列
	if(serverWorker->getStudioType()==1)
		m_serverList.push_back(serverWorker);
}
void DoWorkNoDB::dowork()
{
	for(auto i:m_serverList)
	{
		i->dowork(nullptr);
	}
};
