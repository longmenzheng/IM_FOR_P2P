#include "network.h"
//#include "cstring"
//#include "Connect.pb.h"
//#include "ACK.pb.h"
#include <thread>
#include <exception>

/*
 * std::queue<const char*> *m_sendQueue;        //待发送队列
    std::map<int,char*> *m_sendMap;              //全部发送消息队列，当确认收到后，delete
    std::queue<const char*> *m_recvQueue;        //消息接收队列
    std::list<NetObserver*> *m_observers;        //观察者列表
    std::map<int,NetworkAddr*> *m_netInfo;
 */
/*SendThread(std::queue<const char*> *sendQueue,
std::map<int,char*> *sendMap,
std::map<int,NetworkAddr*> *netInfo,
QUdpSocket *udpSocket);
*/

Network* Network::m_instance=nullptr;
Network::Network():
    m_sendQueue(new std::queue<const char*>()),
    m_sendMap(new std::map<int,char*>()),
    m_recvQueue(new std::queue<const char*>()),
    m_observers(new std::list<NetObserver*>()),
    m_netInfo(new std::map<int,NetworkAddr*>()),
    m_udpSocket(new QUdpSocket())
{
    //m_udpSocket->bind(QHostAddress(QString("127.0.0.1")),quint16(7890));
    pSendThread=new SendThread(m_sendQueue,m_sendMap,m_netInfo,m_udpSocket);
    pRecvThread=new RecvThread(m_recvQueue,m_udpSocket);
    pDistributeThread=new DistributeThread(m_recvQueue,m_observers);

    pSendThread->start();         //启动发送线程
    pRecvThread->start();         //启动接收线程
    pDistributeThread->start();   //启动分发线程

    //下面为测试代码

    NetworkAddr *tmp=new NetworkAddr();
    tmp->ip="116.62.46.162";
    tmp->port=23333;
    m_netInfo->insert(std::pair<int,NetworkAddr*>(0,tmp));


}

Network::Network(Network&)
{

}









void Network::keepConnectWithServer()
{

}


void Network::addObserver(NetObserver* netObserver)
{
    m_observers->push_back(netObserver);   //从尾部插入
}

void Network::eraseObserver(NetObserver* netObserver)
{
    m_observers->remove(netObserver);      //取消订阅，移除该订阅者
}

Network* Network::getInstance()
{
    if(m_instance==nullptr)
    {
        m_instance=new Network();
    }
    return m_instance;
}
