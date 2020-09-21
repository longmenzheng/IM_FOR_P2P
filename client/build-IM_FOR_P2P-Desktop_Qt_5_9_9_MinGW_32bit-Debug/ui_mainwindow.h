/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *leftBG;
    QPushButton *userIcon;
    QPushButton *msgButton;
    QPushButton *friendButton;
    QPushButton *groupButton;
    QPushButton *setting;
    QPushButton *quit;
    QLabel *unRead;
    QLabel *label;
    QLabel *unRead_2;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resource/Images/APPIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        leftBG = new QLabel(centralwidget);
        leftBG->setObjectName(QStringLiteral("leftBG"));
        leftBG->setGeometry(QRect(0, 0, 60, 601));
        userIcon = new QPushButton(centralwidget);
        userIcon->setObjectName(QStringLiteral("userIcon"));
        userIcon->setGeometry(QRect(5, 15, 50, 50));
        userIcon->setCursor(QCursor(Qt::PointingHandCursor));
        userIcon->setIconSize(QSize(32, 32));
        userIcon->setFlat(true);
        msgButton = new QPushButton(centralwidget);
        msgButton->setObjectName(QStringLiteral("msgButton"));
        msgButton->setGeometry(QRect(3, 80, 50, 50));
        msgButton->setCursor(QCursor(Qt::PointingHandCursor));
        msgButton->setIconSize(QSize(16, 16));
        msgButton->setFlat(true);
        friendButton = new QPushButton(centralwidget);
        friendButton->setObjectName(QStringLiteral("friendButton"));
        friendButton->setGeometry(QRect(3, 140, 50, 50));
        friendButton->setCursor(QCursor(Qt::PointingHandCursor));
        friendButton->setIconSize(QSize(16, 16));
        friendButton->setFlat(true);
        groupButton = new QPushButton(centralwidget);
        groupButton->setObjectName(QStringLiteral("groupButton"));
        groupButton->setGeometry(QRect(3, 200, 50, 50));
        groupButton->setCursor(QCursor(Qt::PointingHandCursor));
        groupButton->setIconSize(QSize(16, 16));
        groupButton->setFlat(true);
        setting = new QPushButton(centralwidget);
        setting->setObjectName(QStringLiteral("setting"));
        setting->setGeometry(QRect(5, 480, 50, 50));
        setting->setCursor(QCursor(Qt::PointingHandCursor));
        setting->setIconSize(QSize(16, 16));
        setting->setFlat(true);
        quit = new QPushButton(centralwidget);
        quit->setObjectName(QStringLiteral("quit"));
        quit->setGeometry(QRect(5, 540, 50, 50));
        quit->setCursor(QCursor(Qt::PointingHandCursor));
        quit->setIconSize(QSize(16, 16));
        quit->setFlat(true);
        unRead = new QLabel(centralwidget);
        unRead->setObjectName(QStringLiteral("unRead"));
        unRead->setGeometry(QRect(30, 70, 30, 30));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 70, 30, 30));
        label->setAlignment(Qt::AlignCenter);
        unRead_2 = new QLabel(centralwidget);
        unRead_2->setObjectName(QStringLiteral("unRead_2"));
        unRead_2->setGeometry(QRect(30, 130, 30, 30));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 30, 30));
        label_2->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        leftBG->setText(QString());
        userIcon->setText(QString());
        msgButton->setText(QString());
        friendButton->setText(QString());
        groupButton->setText(QString());
        setting->setText(QString());
        quit->setText(QString());
        unRead->setText(QString());
        label->setText(QString());
        unRead_2->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
