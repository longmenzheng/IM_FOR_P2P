#ifndef NETTEST2_H
#define NETTEST2_H

#include <QWidget>
#include "netobserver.h"

namespace Ui {
class NetTest2;
}

class NetTest2 : public QWidget,public NetObserver
{
    Q_OBJECT

public:
    explicit NetTest2(QWidget *parent = nullptr);
    ~NetTest2();
    void recvMsg(const char *msg) override;

private:
    Ui::NetTest2 *ui;
};

#endif // NETTEST2_H
