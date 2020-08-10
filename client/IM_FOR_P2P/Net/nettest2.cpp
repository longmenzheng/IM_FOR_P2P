#include "nettest2.h"
#include "ui_nettest2.h"
#include "network.h"
#include "ChatMsg.pb.h"
#include "QDebug"

NetTest2::NetTest2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NetTest2)
{
    ui->setupUi(this);
    Network::getInstance()->addObserver(this);
}

NetTest2::~NetTest2()
{
    delete ui;
}

void NetTest2::recvMsg(const char *msg)
{
    int msgType;
    sscanf(msg,"%*d\n%d\n",&msgType);
    qDebug()<<"执行到这了:"<<msgType;
    if(msgType==MsgType::CHAT)
    {
        char tmp[1024]={0};
        //取出具体的消息内容,同时确定了消息的具体格式
        sscanf(msg,"%*d\n%*d\n%s\n",tmp);
        qDebug()<<tmp;
        IM::ChatMsg chatMsg;
        chatMsg.ParseFromArray((void*)tmp,strlen(tmp));
        QString str=QString::fromStdString(chatMsg.content());
        str.replace(QString("\a"),QString(" "));
        ui->input->setText(str);
        //qDebug()<<chatMsg.recvid()<<QString::fromStdString(chatMsg.content());
    }
}
