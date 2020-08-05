
//#include "mainwindow.h"
#include "clientmanager.h"
#include <QApplication>
#include "nettest.h"
#include "nettest2.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    //ClientManager clientManager;
    //clientManager.run();
    NetTest test1;
    //NetTest2 *test2=new NetTest2();
    test1.show();
    //test2->show();

    return a.exec();
}

