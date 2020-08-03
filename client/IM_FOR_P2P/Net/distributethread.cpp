#include "distributethread.h"
#include <QDebug>

DistributeThread::DistributeThread()
{

}


DistributeThread::DistributeThread(std::queue<const char*> *recvQueue,
                 std::list<NetObserver*> *observers):
    m_toStop(false),
    m_recvQueue(recvQueue),
    m_observers(observers)
{

}
void DistributeThread::run()
{
    while(!m_toStop)
    {
        //do
        if(m_recvQueue->empty())
            continue;
        for(NetObserver* i:*m_observers)   //向订阅者发送消息
        {
            i->recvMsg(m_recvQueue->front());
        }
        const char *tmp=m_recvQueue->front();
        qDebug()<<"分发线程："<<tmp;
        m_recvQueue->pop();
        delete tmp;       //处理完成释放消息

    }
}
