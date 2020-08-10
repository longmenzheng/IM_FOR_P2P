#ifndef _ServerWorker_H_
#define _ServerWorker_H_

class ServerWorker
{
public:
	virtual ~ServerWorker(){}
	virtual void* dowork(void *)=0;
};

#endif
