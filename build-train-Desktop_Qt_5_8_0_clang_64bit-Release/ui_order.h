/********************************************************************************
** Form generated from reading UI file 'order.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_H
#define UI_ORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Order
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Order)
    {
        if (Order->objectName().isEmpty())
            Order->setObjectName(QStringLiteral("Order"));
        Order->resize(960, 540);
        label = new QLabel(Order);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 181, 71));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        tableWidget = new QTableWidget(Order);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(80, 100, 801, 321));
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(110);
        pushButton = new QPushButton(Order);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 430, 201, 61));
        QFont font1;
        font1.setPointSize(30);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(Order);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 430, 191, 61));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(Order);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(730, 20, 141, 61));

        retranslateUi(Order);

        QMetaObject::connectSlotsByName(Order);
    } // setupUi

    void retranslateUi(QWidget *Order)
    {
        Order->setWindowTitle(QApplication::translate("Order", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Order", "\346\210\221\347\232\204\350\256\242\345\215\225", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Order", "\346\224\271\347\255\276", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Order", "\351\200\200\347\245\250", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Order", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Order: public Ui_Order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_H
