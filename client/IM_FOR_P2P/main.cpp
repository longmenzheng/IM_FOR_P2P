//#include "mainwindow.h"
#include "clientmanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    ClientManager clientManager;
    clientManager.run();

    return a.exec();
}
