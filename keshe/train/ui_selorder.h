/********************************************************************************
** Form generated from reading UI file 'selorder.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELORDER_H
#define UI_SELORDER_H

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

class Ui_SelOrder
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *SelOrder)
    {
        if (SelOrder->objectName().isEmpty())
            SelOrder->setObjectName(QStringLiteral("SelOrder"));
        SelOrder->resize(960, 540);
        tableWidget = new QTableWidget(SelOrder);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(80, 110, 801, 321));
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(110);
        pushButton_3 = new QPushButton(SelOrder);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(750, 30, 150, 60));
        QFont font;
        font.setPointSize(20);
        pushButton_3->setFont(font);
        pushButton_2 = new QPushButton(SelOrder);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 440, 191, 61));
        QFont font1;
        font1.setPointSize(30);
        pushButton_2->setFont(font1);
        label = new QLabel(SelOrder);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 261, 71));
        QFont font2;
        font2.setPointSize(40);
        label->setFont(font2);
        pushButton = new QPushButton(SelOrder);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 440, 201, 61));
        pushButton->setFont(font1);

        retranslateUi(SelOrder);

        QMetaObject::connectSlotsByName(SelOrder);
    } // setupUi

    void retranslateUi(QWidget *SelOrder)
    {
        SelOrder->setWindowTitle(QApplication::translate("SelOrder", "Form", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("SelOrder", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SelOrder", "\351\200\200\347\245\250", Q_NULLPTR));
        label->setText(QApplication::translate("SelOrder", "\345\275\223\345\211\215\346\211\200\346\234\211\350\256\242\345\215\225", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SelOrder", "\346\224\271\347\255\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SelOrder: public Ui_SelOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELORDER_H
