/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QPushButton *signIn;
    QPushButton *signUp;
    QLineEdit *userID;
    QLineEdit *password;
    QLabel *forgetPD;
    QLabel *note;

    void setupUi(QWidget *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QStringLiteral("SignIn"));
        SignIn->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SignIn->sizePolicy().hasHeightForWidth());
        SignIn->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resource/Images/APPIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SignIn->setWindowIcon(icon);
        signIn = new QPushButton(SignIn);
        signIn->setObjectName(QStringLiteral("signIn"));
        signIn->setGeometry(QRect(100, 220, 75, 23));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resource/Images/signIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        signIn->setIcon(icon1);
        signUp = new QPushButton(SignIn);
        signUp->setObjectName(QStringLiteral("signUp"));
        signUp->setGeometry(QRect(220, 220, 75, 23));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resource/Images/signUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        signUp->setIcon(icon2);
        userID = new QLineEdit(SignIn);
        userID->setObjectName(QStringLiteral("userID"));
        userID->setGeometry(QRect(100, 110, 200, 22));
        password = new QLineEdit(SignIn);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(100, 150, 200, 22));
        password->setEchoMode(QLineEdit::Password);
        forgetPD = new QLabel(SignIn);
        forgetPD->setObjectName(QStringLiteral("forgetPD"));
        forgetPD->setGeometry(QRect(100, 180, 54, 12));
        note = new QLabel(SignIn);
        note->setObjectName(QStringLiteral("note"));
        note->setGeometry(QRect(0, 200, 401, 20));
        note->setAlignment(Qt::AlignCenter);

        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QWidget *SignIn)
    {
        SignIn->setWindowTitle(QApplication::translate("SignIn", "\347\231\273\345\275\225", Q_NULLPTR));
        signIn->setText(QApplication::translate("SignIn", "\347\231\273\345\275\225", Q_NULLPTR));
        signUp->setText(QApplication::translate("SignIn", "\346\263\250\345\206\214", Q_NULLPTR));
        userID->setPlaceholderText(QApplication::translate("SignIn", "\350\264\246\345\217\267/\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        password->setPlaceholderText(QApplication::translate("SignIn", "\345\257\206\347\240\201", Q_NULLPTR));
        forgetPD->setText(QApplication::translate("SignIn", "\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237", Q_NULLPTR));
        note->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
