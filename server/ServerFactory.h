#ifndef _ServerFactory_H_
#define _ServerFactory_H_
#include "WorkStudio.h"
#include <map>
#include <queue>
#include <vector>


class ServerFactory
{
private:
	std::map<int,ServerWorker* (*)(char *)> m_serverCreatorMap;     //生成服务对象的函数指针map,消息类型作为key
	std::queue<char *> *m_processQueue;                          //消息处理队列
	std::vector<WorkStudio*> m_workStudioVector;                //工作室数量愈多 工作线程愈多 
	int m_WDConut=0;                                       //工作室数量
public:
	ServerFactory(std::queue<char*> *processQueue);
	void init();                  //初始化 添加生成函数
	void distributeTask();        //根据消息类型生成相应的处理服务对象，并添加到一个工作室
	void addWorkStudio(WorkStudio* studio);       //向工厂里面添加工作室
	void addServerCreator(int msgType,ServerWorker* (*servercreator)()); //添加服务对象生成函数
};

#endif
