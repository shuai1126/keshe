/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName(QStringLiteral("User"));
        User->resize(960, 540);
        label = new QLabel(User);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 40, 171, 51));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        pushButton = new QPushButton(User);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 120, 591, 91));
        QFont font1;
        font1.setPointSize(30);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(User);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 240, 591, 91));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(User);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 370, 591, 91));
        pushButton_3->setFont(font1);

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QWidget *User)
    {
        User->setWindowTitle(QApplication::translate("User", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("User", "\347\224\250\346\210\267\350\217\234\345\215\225", Q_NULLPTR));
        pushButton->setText(QApplication::translate("User", "\345\237\272\346\234\254\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("User", "\346\210\221\347\232\204\350\256\242\345\215\225", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("User", "\345\210\207\346\215\242\350\264\246\346\210\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
