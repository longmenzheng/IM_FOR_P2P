#include "nettest.h"
#include "ui_nettest.h"
#include <QUdpSocket>
#include "network.h"
#include <QDebug>
#include "ChatMsg.pb.h"

NetTest::NetTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NetTest)
{
    ui->setupUi(this);
}

NetTest::~NetTest()
{
    delete ui;
}

void NetTest::recvMsg(const char *msg)
{

}

void NetTest::on_sendButton_released()
{
    IM::ChatMsg testMsg;
    testMsg.set_networktype(MsgType::CHAT);
    testMsg.set_recvid(0);
    QString data=ui->textEdit->toPlainText();
    data.replace(QString(" "),QString("\a"));
    qDebug()<<data<<"长度："<<sizeof(data)<<sizeof(data.toUtf8());
    testMsg.set_content(data.toUtf8());
    qDebug()<<QString::fromStdString(testMsg.content());
    Network::getInstance()->addMsg<IM::ChatMsg>(testMsg);

    /*
    QUdpSocket *udpSocket=new QUdpSocket();
    udpSocket->bind(QHostAddress(QString("127.0.0.1")),quint16(8888));
    QHostAddress ip=QHostAddress(QString(ui->ip->text()));
    quint16 port=ui->port->text().toUInt();
    QString data=ui->textEdit->toPlainText();
    data.replace(QString(" "),QString("\a"));
    qDebug()<<data<<"长度："<<sizeof(data)<<sizeof(data.toUtf8());
    testMsg.set_content(data.toUtf8());
    size_t MsgLen=testMsg.ByteSizeLong();
    char *tmp=(char*)malloc(MsgLen);
    testMsg.SerializeToArray(tmp,MsgLen);
    QString str=QString("%1\n%2\n%3\n").arg(0).arg(MsgType::CHAT).arg(tmp);
    udpSocket->writeDatagram(str.toUtf8(),ip,port);
    */
}
