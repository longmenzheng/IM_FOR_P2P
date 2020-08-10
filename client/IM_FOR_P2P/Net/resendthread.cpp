#include "resendthread.h"


ReSendThread::ReSendThread()
{

}

ReSendThread::ReSendThread(std::map<int,clock_t> *time,
                           std::queue<const char*> *sendQueue,
                           std::map<int,char*> *sendMap):
    m_toStop(false),
    m_time(time),
    m_sendQueue(sendQueue),
    m_sendMap(sendMap)
{

}

void ReSendThread::run()
{

    while (!m_toStop) {
        if(m_time->empty())
        {
            msleep(500);
            continue;
        }
        for(auto i:*m_time)
        {
            if((double)(i.second-clock())/CLOCKS_PER_SEC > 2.0)  //如果大于2s我们认为数据已丢失
            {
                //重发,将消息从新插入待发队列
                m_sendQueue->push((*m_sendMap)[i.first]);
            }
        }

    }
}
