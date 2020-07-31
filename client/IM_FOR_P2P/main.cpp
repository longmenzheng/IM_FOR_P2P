//#include "mainwindow.h"
#include "clientmanager.h"
#include <QApplication>
//这是一条注释
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show(); test
    ClientManager clientManager;
    clientManager.run();

    return a.exec();
}
