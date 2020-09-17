/********************************************************************************
** Form generated from reading UI file 'groupmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPMANAGER_H
#define UI_GROUPMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupManager
{
public:
    QLineEdit *searchBar;
    QPushButton *pushButton_4;
    QListWidget *listWidget;

    void setupUi(QWidget *GroupManager)
    {
        if (GroupManager->objectName().isEmpty())
            GroupManager->setObjectName(QStringLiteral("GroupManager"));
        GroupManager->resize(740, 600);
        searchBar = new QLineEdit(GroupManager);
        searchBar->setObjectName(QStringLiteral("searchBar"));
        searchBar->setGeometry(QRect(10, 20, 150, 20));
        pushButton_4 = new QPushButton(GroupManager);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 20, 50, 20));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resource/Images/searchIcon .png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        listWidget = new QListWidget(GroupManager);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 60, 200, 531));

        retranslateUi(GroupManager);

        QMetaObject::connectSlotsByName(GroupManager);
    } // setupUi

    void retranslateUi(QWidget *GroupManager)
    {
        GroupManager->setWindowTitle(QApplication::translate("GroupManager", "Form", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("GroupManager", "\346\220\234\347\264\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GroupManager: public Ui_GroupManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPMANAGER_H
