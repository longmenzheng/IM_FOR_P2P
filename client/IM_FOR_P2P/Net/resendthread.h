#ifndef RESENDTHREAD_H
#define RESENDTHREAD_H
#include <QThread>
#include <map>
#include <queue>
class ReSendThread:public QThread
{
protected:
    volatile bool m_toStop;
private:
    std::map<int,clock_t> *m_time;
    std::queue<const char*> *m_sendQueue;        //待发送队列
    std::map<int,char*> *m_sendMap;              //全部发送消息队列，当确认收到后，delete
public:
    ReSendThread();
    ReSendThread(std::map<int,clock_t> *time,
                 std::queue<const char*> *sendQueue,
                 std::map<int,char*> *sendMap);
    void run() override;
    inline void stop()
    {
        m_toStop=true;
    }
};

#endif // RESENDTHREAD_H
