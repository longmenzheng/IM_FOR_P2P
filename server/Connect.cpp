
#include "NetWork.h"
#include "Connect.h"


Connect::Connect(char *msg):
	m_msg(msg),
	m_studioType(1)
{
}

ServerWorker* Connect::createSelf(char *msg)
{
	return new Connect(msg);
}
void Connect::dowork(MYSQL mysql)
{
}
