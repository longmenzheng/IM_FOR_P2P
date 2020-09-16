/********************************************************************************
** Form generated from reading UI file 'showuserinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWUSERINFO_H
#define UI_SHOWUSERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowUserInfo
{
public:
    QWidget *widget;
    QLabel *userIcon;
    QFrame *line;
    QFrame *line_2;
    QLabel *remarkName;
    QLabel *remarkName_2;
    QLabel *remarkName_3;
    QLabel *remarkName_4;
    QPushButton *remarkButton;
    QLabel *remarkName_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *userID;
    QPushButton *userSign;
    QPushButton *phone;
    QPushButton *userName;
    QPushButton *addORchat;
    QPushButton *agreeButton;
    QPushButton *disagreeButton;

    void setupUi(QWidget *ShowUserInfo)
    {
        if (ShowUserInfo->objectName().isEmpty())
            ShowUserInfo->setObjectName(QStringLiteral("ShowUserInfo"));
        ShowUserInfo->resize(530, 580);
        widget = new QWidget(ShowUserInfo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 120, 391, 311));
        userIcon = new QLabel(widget);
        userIcon->setObjectName(QStringLiteral("userIcon"));
        userIcon->setGeometry(QRect(160, 10, 80, 80));
        userIcon->setPixmap(QPixmap(QString::fromUtf8(":/Resource/Images/imageIcon.png")));
        userIcon->setScaledContents(true);
        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 90, 391, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 250, 391, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        remarkName = new QLabel(widget);
        remarkName->setObjectName(QStringLiteral("remarkName"));
        remarkName->setGeometry(QRect(55, 110, 50, 20));
        remarkName_2 = new QLabel(widget);
        remarkName_2->setObjectName(QStringLiteral("remarkName_2"));
        remarkName_2->setGeometry(QRect(55, 140, 50, 20));
        remarkName_3 = new QLabel(widget);
        remarkName_3->setObjectName(QStringLiteral("remarkName_3"));
        remarkName_3->setGeometry(QRect(55, 200, 50, 20));
        remarkName_4 = new QLabel(widget);
        remarkName_4->setObjectName(QStringLiteral("remarkName_4"));
        remarkName_4->setGeometry(QRect(55, 230, 50, 20));
        remarkButton = new QPushButton(widget);
        remarkButton->setObjectName(QStringLiteral("remarkButton"));
        remarkButton->setGeometry(QRect(120, 110, 240, 20));
        remarkButton->setFlat(true);
        remarkName_5 = new QLabel(widget);
        remarkName_5->setObjectName(QStringLiteral("remarkName_5"));
        remarkName_5->setGeometry(QRect(55, 170, 50, 20));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 110, 20, 20));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resource/Images/remarkInfo.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 140, 20, 20));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Resource/Images/userNameInfo.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 170, 20, 20));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Resource/Images/userIdInfo.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 200, 20, 20));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Resource/Images/signInfo.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 230, 20, 20));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Resource/Images/phoneInfo.png")));
        label_5->setScaledContents(true);
        userID = new QPushButton(widget);
        userID->setObjectName(QStringLiteral("userID"));
        userID->setGeometry(QRect(120, 170, 240, 20));
        userID->setFlat(true);
        userSign = new QPushButton(widget);
        userSign->setObjectName(QStringLiteral("userSign"));
        userSign->setGeometry(QRect(120, 200, 240, 20));
        userSign->setFlat(true);
        phone = new QPushButton(widget);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setGeometry(QRect(120, 230, 240, 20));
        phone->setFlat(true);
        userName = new QPushButton(widget);
        userName->setObjectName(QStringLiteral("userName"));
        userName->setGeometry(QRect(120, 140, 240, 20));
        userName->setFlat(true);
        addORchat = new QPushButton(widget);
        addORchat->setObjectName(QStringLiteral("addORchat"));
        addORchat->setGeometry(QRect(160, 280, 75, 23));
        addORchat->setCursor(QCursor(Qt::PointingHandCursor));
        agreeButton = new QPushButton(widget);
        agreeButton->setObjectName(QStringLiteral("agreeButton"));
        agreeButton->setGeometry(QRect(74, 280, 60, 23));
        agreeButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resource/Images/agree.png"), QSize(), QIcon::Normal, QIcon::Off);
        agreeButton->setIcon(icon);
        agreeButton->setIconSize(QSize(20, 20));
        disagreeButton = new QPushButton(widget);
        disagreeButton->setObjectName(QStringLiteral("disagreeButton"));
        disagreeButton->setGeometry(QRect(260, 280, 60, 23));
        disagreeButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resource/Images/disagree.png"), QSize(), QIcon::Normal, QIcon::Off);
        disagreeButton->setIcon(icon1);
        disagreeButton->setIconSize(QSize(20, 20));

        retranslateUi(ShowUserInfo);

        QMetaObject::connectSlotsByName(ShowUserInfo);
    } // setupUi

    void retranslateUi(QWidget *ShowUserInfo)
    {
        ShowUserInfo->setWindowTitle(QApplication::translate("ShowUserInfo", "Form", Q_NULLPTR));
        userIcon->setText(QString());
        remarkName->setText(QApplication::translate("ShowUserInfo", "\345\244\207  \346\263\250", Q_NULLPTR));
        remarkName_2->setText(QApplication::translate("ShowUserInfo", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        remarkName_3->setText(QApplication::translate("ShowUserInfo", "\347\255\276  \345\220\215", Q_NULLPTR));
        remarkName_4->setText(QApplication::translate("ShowUserInfo", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        remarkButton->setText(QApplication::translate("ShowUserInfo", "\347\202\271\345\207\273\346\267\273\345\212\240\345\244\207\346\263\250", Q_NULLPTR));
        remarkName_5->setText(QApplication::translate("ShowUserInfo", "\347\224\250\346\210\267ID", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        userID->setText(QApplication::translate("ShowUserInfo", "ID", Q_NULLPTR));
        userSign->setText(QApplication::translate("ShowUserInfo", "\350\277\231\344\270\252\344\272\272\345\276\210\346\207\222\344\273\200\344\271\210\344\271\237\346\262\241\346\234\211", Q_NULLPTR));
        phone->setText(QApplication::translate("ShowUserInfo", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        userName->setText(QApplication::translate("ShowUserInfo", "userName", Q_NULLPTR));
        addORchat->setText(QString());
        agreeButton->setText(QApplication::translate("ShowUserInfo", "\345\220\214\346\204\217", Q_NULLPTR));
        disagreeButton->setText(QApplication::translate("ShowUserInfo", "\346\213\222\347\273\235", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShowUserInfo: public Ui_ShowUserInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWUSERINFO_H
