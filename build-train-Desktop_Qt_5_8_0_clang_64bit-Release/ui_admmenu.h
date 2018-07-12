/********************************************************************************
** Form generated from reading UI file 'admmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMMENU_H
#define UI_ADMMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdmMenu
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *AdmMenu)
    {
        if (AdmMenu->objectName().isEmpty())
            AdmMenu->setObjectName(QStringLiteral("AdmMenu"));
        AdmMenu->resize(960, 540);
        label = new QLabel(AdmMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 80, 251, 71));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        pushButton = new QPushButton(AdmMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 170, 261, 311));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(AdmMenu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 170, 251, 311));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(AdmMenu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(630, 170, 251, 311));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(AdmMenu);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(730, 80, 141, 61));

        retranslateUi(AdmMenu);

        QMetaObject::connectSlotsByName(AdmMenu);
    } // setupUi

    void retranslateUi(QWidget *AdmMenu)
    {
        AdmMenu->setWindowTitle(QApplication::translate("AdmMenu", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AdmMenu", "\347\256\241\347\220\206\345\221\230\357\274\214\344\275\240\345\245\275", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AdmMenu", "\346\267\273\345\212\240\350\275\246\346\254\241", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AdmMenu", "\344\277\256\346\224\271\350\275\246\346\254\241", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AdmMenu", "\345\210\240\351\231\244\350\275\246\346\254\241", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("AdmMenu", "\345\210\207\346\215\242\350\264\246\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdmMenu: public Ui_AdmMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMMENU_H
