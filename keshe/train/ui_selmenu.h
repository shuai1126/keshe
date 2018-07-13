/********************************************************************************
** Form generated from reading UI file 'selmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELMENU_H
#define UI_SELMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelMenu
{
public:
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SelMenu)
    {
        if (SelMenu->objectName().isEmpty())
            SelMenu->setObjectName(QStringLiteral("SelMenu"));
        SelMenu->resize(960, 540);
        pushButton_4 = new QPushButton(SelMenu);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(750, 30, 150, 60));
        QFont font;
        font.setPointSize(20);
        pushButton_4->setFont(font);
        pushButton = new QPushButton(SelMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 190, 391, 291));
        QFont font1;
        font1.setPointSize(40);
        pushButton->setFont(font1);
        label = new QLabel(SelMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 40, 251, 71));
        label->setFont(font1);
        pushButton_2 = new QPushButton(SelMenu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 190, 391, 291));
        pushButton_2->setFont(font1);

        retranslateUi(SelMenu);

        QMetaObject::connectSlotsByName(SelMenu);
    } // setupUi

    void retranslateUi(QWidget *SelMenu)
    {
        SelMenu->setWindowTitle(QApplication::translate("SelMenu", "Form", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("SelMenu", "\345\210\207\346\215\242\350\264\246\345\217\267", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SelMenu", "\346\237\245\350\257\242(\350\264\255\347\245\250)", Q_NULLPTR));
        label->setText(QApplication::translate("SelMenu", "\345\224\256\347\245\250\345\221\230\357\274\214\344\275\240\345\245\275!", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SelMenu", "\346\237\245\350\257\242(\351\200\200\347\245\250)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SelMenu: public Ui_SelMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELMENU_H
