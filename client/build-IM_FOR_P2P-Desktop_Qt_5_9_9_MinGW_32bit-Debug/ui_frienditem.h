/********************************************************************************
** Form generated from reading UI file 'frienditem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDITEM_H
#define UI_FRIENDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendItem
{
public:
    QLabel *userIcon;
    QLabel *nickname;
    QLabel *flag;

    void setupUi(QWidget *FriendItem)
    {
        if (FriendItem->objectName().isEmpty())
            FriendItem->setObjectName(QStringLiteral("FriendItem"));
        FriendItem->resize(200, 50);
        userIcon = new QLabel(FriendItem);
        userIcon->setObjectName(QStringLiteral("userIcon"));
        userIcon->setGeometry(QRect(10, 10, 30, 30));
        nickname = new QLabel(FriendItem);
        nickname->setObjectName(QStringLiteral("nickname"));
        nickname->setGeometry(QRect(50, 15, 140, 20));
        flag = new QLabel(FriendItem);
        flag->setObjectName(QStringLiteral("flag"));
        flag->setGeometry(QRect(153, 20, 41, 16));

        retranslateUi(FriendItem);

        QMetaObject::connectSlotsByName(FriendItem);
    } // setupUi

    void retranslateUi(QWidget *FriendItem)
    {
        FriendItem->setWindowTitle(QApplication::translate("FriendItem", "Form", Q_NULLPTR));
        userIcon->setText(QString());
        nickname->setText(QString());
        flag->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FriendItem: public Ui_FriendItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDITEM_H
