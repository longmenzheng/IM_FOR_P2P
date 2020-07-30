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
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupManager
{
public:
    QPushButton *msgButton;
    QPushButton *friendButton;
    QPushButton *groupButton;
    QToolBox *GroupManager_2;
    QWidget *page;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *page_3;
    QLineEdit *searchBar;
    QPushButton *pushButton_4;

    void setupUi(QWidget *GroupManager)
    {
        if (GroupManager->objectName().isEmpty())
            GroupManager->setObjectName(QStringLiteral("GroupManager"));
        GroupManager->resize(800, 600);
        msgButton = new QPushButton(GroupManager);
        msgButton->setObjectName(QStringLiteral("msgButton"));
        msgButton->setGeometry(QRect(0, 60, 50, 50));
        friendButton = new QPushButton(GroupManager);
        friendButton->setObjectName(QStringLiteral("friendButton"));
        friendButton->setGeometry(QRect(0, 120, 50, 50));
        groupButton = new QPushButton(GroupManager);
        groupButton->setObjectName(QStringLiteral("groupButton"));
        groupButton->setGeometry(QRect(0, 180, 50, 50));
        GroupManager_2 = new QToolBox(GroupManager);
        GroupManager_2->setObjectName(QStringLiteral("GroupManager_2"));
        GroupManager_2->setGeometry(QRect(50, 60, 200, 540));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 200, 488));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 60, 71, 23));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 120, 75, 23));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 180, 75, 23));
        GroupManager_2->addItem(page, QStringLiteral("Page 1"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 200, 488));
        GroupManager_2->addItem(page_3, QStringLiteral("Page 2"));
        searchBar = new QLineEdit(GroupManager);
        searchBar->setObjectName(QStringLiteral("searchBar"));
        searchBar->setGeometry(QRect(50, 20, 151, 20));
        pushButton_4 = new QPushButton(GroupManager);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 20, 41, 23));

        retranslateUi(GroupManager);

        GroupManager_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GroupManager);
    } // setupUi

    void retranslateUi(QWidget *GroupManager)
    {
        GroupManager->setWindowTitle(QApplication::translate("GroupManager", "Form", Q_NULLPTR));
        msgButton->setText(QApplication::translate("GroupManager", "\346\266\210\346\201\257", Q_NULLPTR));
        friendButton->setText(QApplication::translate("GroupManager", "\345\245\275\345\217\213", Q_NULLPTR));
        groupButton->setText(QApplication::translate("GroupManager", "\347\276\244", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GroupManager", "\347\276\2441", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GroupManager", "\347\276\2442", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("GroupManager", "\347\276\2443", Q_NULLPTR));
        GroupManager_2->setItemText(GroupManager_2->indexOf(page), QApplication::translate("GroupManager", "Page 1", Q_NULLPTR));
        GroupManager_2->setItemText(GroupManager_2->indexOf(page_3), QApplication::translate("GroupManager", "Page 2", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("GroupManager", "\346\220\234\347\264\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GroupManager: public Ui_GroupManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPMANAGER_H
