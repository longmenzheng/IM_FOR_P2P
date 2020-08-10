/********************************************************************************
** Form generated from reading UI file 'nettest2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETTEST2_H
#define UI_NETTEST2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetTest2
{
public:
    QLabel *input;

    void setupUi(QWidget *NetTest2)
    {
        if (NetTest2->objectName().isEmpty())
            NetTest2->setObjectName(QStringLiteral("NetTest2"));
        NetTest2->resize(400, 300);
        input = new QLabel(NetTest2);
        input->setObjectName(QStringLiteral("input"));
        input->setGeometry(QRect(50, 180, 281, 21));

        retranslateUi(NetTest2);

        QMetaObject::connectSlotsByName(NetTest2);
    } // setupUi

    void retranslateUi(QWidget *NetTest2)
    {
        NetTest2->setWindowTitle(QApplication::translate("NetTest2", "Form", Q_NULLPTR));
        input->setText(QApplication::translate("NetTest2", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NetTest2: public Ui_NetTest2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETTEST2_H
