/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(960, 540);
        pushButton = new QPushButton(Menu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 140, 481, 341));
        QFont font;
        font.setPointSize(50);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(Menu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(590, 80, 291, 161));
        QFont font1;
        font1.setPointSize(30);
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(Menu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(590, 270, 291, 211));
        pushButton_3->setFont(font1);
        label = new QLabel(Menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 80, 421, 61));
        QFont font2;
        font2.setPointSize(40);
        label->setFont(font2);
        pushButton_4 = new QPushButton(Menu);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(750, 30, 150, 41));
        QFont font3;
        font3.setPointSize(20);
        pushButton_4->setFont(font3);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Menu", "\346\237\245\350\257\242(\350\264\255\347\245\250)", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Menu", "\345\237\272\346\234\254\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Menu", "\346\210\221\347\232\204\350\256\242\345\215\225(\351\200\200\347\245\250/\346\224\271\347\255\276)", Q_NULLPTR));
        label->setText(QString());
        pushButton_4->setText(QApplication::translate("Menu", "\345\210\207\346\215\242\350\264\246\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
