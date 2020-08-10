#ifndef NETTEST_H
#define NETTEST_H

#include <QWidget>
#include "netobserver.h"

namespace Ui {
class NetTest;
}

class NetTest : public QWidget,public NetObserver
{
    Q_OBJECT

public:
    explicit NetTest(QWidget *parent = nullptr);
    ~NetTest();

private slots:
    void on_sendButton_released();
    void recvMsg(const char *msg) override;

private:
    Ui::NetTest *ui;
};

#endif // NETTEST_H
