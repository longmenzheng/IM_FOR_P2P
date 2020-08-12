/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QPushButton *signIn;
    QPushButton *signUp;
    QLineEdit *nickname;
    QLineEdit *passwdTow;
    QLineEdit *passwdOne;
    QCheckBox *checkBox;
    QLabel *Image;
    QComboBox *comboBox;
    QLineEdit *phone;
    QLabel *protolabel;
    QLabel *note;

    void setupUi(QWidget *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QStringLiteral("SignUp"));
        SignUp->setWindowModality(Qt::NonModal);
        SignUp->resize(400, 321);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SignUp->sizePolicy().hasHeightForWidth());
        SignUp->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resource/Images/APPIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SignUp->setWindowIcon(icon);
        signIn = new QPushButton(SignUp);
        signIn->setObjectName(QStringLiteral("signIn"));
        signIn->setGeometry(QRect(100, 270, 75, 23));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resource/Images/signIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        signIn->setIcon(icon1);
        signUp = new QPushButton(SignUp);
        signUp->setObjectName(QStringLiteral("signUp"));
        signUp->setGeometry(QRect(230, 270, 75, 23));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resource/Images/signUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        signUp->setIcon(icon2);
        nickname = new QLineEdit(SignUp);
        nickname->setObjectName(QStringLiteral("nickname"));
        nickname->setGeometry(QRect(100, 80, 125, 22));
        passwdTow = new QLineEdit(SignUp);
        passwdTow->setObjectName(QStringLiteral("passwdTow"));
        passwdTow->setGeometry(QRect(100, 200, 200, 22));
        passwdTow->setEchoMode(QLineEdit::Password);
        passwdOne = new QLineEdit(SignUp);
        passwdOne->setObjectName(QStringLiteral("passwdOne"));
        passwdOne->setGeometry(QRect(100, 160, 200, 22));
        passwdOne->setEchoMode(QLineEdit::Password);
        checkBox = new QCheckBox(SignUp);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(100, 230, 16, 16));
        Image = new QLabel(SignUp);
        Image->setObjectName(QStringLiteral("Image"));
        Image->setGeometry(QRect(170, 10, 61, 61));
        Image->setPixmap(QPixmap(QString::fromUtf8(":/Resource/Images/userIcon.png")));
        Image->setScaledContents(true);
        comboBox = new QComboBox(SignUp);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resource/Images/sex.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resource/Images/sexM.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resource/Images/sexF.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon5, QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(230, 80, 69, 22));
        phone = new QLineEdit(SignUp);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setGeometry(QRect(100, 120, 200, 22));
        phone->setEchoMode(QLineEdit::Normal);
        protolabel = new QLabel(SignUp);
        protolabel->setObjectName(QStringLiteral("protolabel"));
        protolabel->setGeometry(QRect(120, 230, 151, 16));
        note = new QLabel(SignUp);
        note->setObjectName(QStringLiteral("note"));
        note->setGeometry(QRect(0, 250, 401, 20));
        note->setAlignment(Qt::AlignCenter);

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QWidget *SignUp)
    {
        SignUp->setWindowTitle(QApplication::translate("SignUp", "\346\263\250\345\206\214", Q_NULLPTR));
        signIn->setText(QApplication::translate("SignUp", "\347\231\273\345\275\225", Q_NULLPTR));
        signUp->setText(QApplication::translate("SignUp", "\346\263\250\345\206\214", Q_NULLPTR));
        nickname->setPlaceholderText(QApplication::translate("SignUp", "\346\230\265\347\247\260", Q_NULLPTR));
        passwdTow->setPlaceholderText(QApplication::translate("SignUp", "\345\257\206\347\240\201", Q_NULLPTR));
        passwdOne->setPlaceholderText(QApplication::translate("SignUp", "\345\257\206\347\240\201", Q_NULLPTR));
        checkBox->setText(QString());
        Image->setText(QString());
        comboBox->setItemText(0, QApplication::translate("SignUp", "\346\200\247\345\210\253", Q_NULLPTR));
        comboBox->setItemText(1, QApplication::translate("SignUp", "\347\224\267", Q_NULLPTR));
        comboBox->setItemText(2, QApplication::translate("SignUp", "\345\245\263", Q_NULLPTR));

        phone->setPlaceholderText(QApplication::translate("SignUp", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        protolabel->setText(QApplication::translate("SignUp", "\346\210\221\345\267\262\351\230\205\350\257\273\345\271\266\346\216\245\345\217\227\346\263\250\345\206\214\345\215\217\350\256\256 >", Q_NULLPTR));
        note->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
