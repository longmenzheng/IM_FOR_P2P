/********************************************************************************
** Form generated from reading UI file 'nettest.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETTEST_H
#define UI_NETTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetTest
{
public:
    QLineEdit *ip;
    QLabel *label;
    QLineEdit *port;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *sendButton;
    QListView *listView;

    void setupUi(QWidget *NetTest)
    {
        if (NetTest->objectName().isEmpty())
            NetTest->setObjectName(QStringLiteral("NetTest"));
        NetTest->resize(400, 300);
        ip = new QLineEdit(NetTest);
        ip->setObjectName(QStringLiteral("ip"));
        ip->setGeometry(QRect(70, 20, 91, 20));
        label = new QLabel(NetTest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 21, 21));
        port = new QLineEdit(NetTest);
        port->setObjectName(QStringLiteral("port"));
        port->setGeometry(QRect(270, 20, 91, 20));
        label_2 = new QLabel(NetTest);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 20, 31, 21));
        textEdit = new QTextEdit(NetTest);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(40, 230, 261, 61));
        sendButton = new QPushButton(NetTest);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(310, 250, 51, 23));
        listView = new QListView(NetTest);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(40, 51, 321, 171));

        retranslateUi(NetTest);

        QMetaObject::connectSlotsByName(NetTest);
    } // setupUi

    void retranslateUi(QWidget *NetTest)
    {
        NetTest->setWindowTitle(QApplication::translate("NetTest", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("NetTest", "IP:", Q_NULLPTR));
        label_2->setText(QApplication::translate("NetTest", "Port:", Q_NULLPTR));
        sendButton->setText(QApplication::translate("NetTest", "\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NetTest: public Ui_NetTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETTEST_H
