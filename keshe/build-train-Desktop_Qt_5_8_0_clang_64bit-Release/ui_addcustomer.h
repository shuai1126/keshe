/********************************************************************************
** Form generated from reading UI file 'addcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCUSTOMER_H
#define UI_ADDCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddCustomer
{
public:
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QComboBox *comboBox_8;
    QPushButton *pushButton_5;
    QTableWidget *tableWidget;
    QLabel *label_5;
    QLabel *label_8;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QLabel *label_7;

    void setupUi(QWidget *AddCustomer)
    {
        if (AddCustomer->objectName().isEmpty())
            AddCustomer->setObjectName(QStringLiteral("AddCustomer"));
        AddCustomer->resize(960, 540);
        label = new QLabel(AddCustomer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 731, 71));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        pushButton_3 = new QPushButton(AddCustomer);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(720, 470, 191, 61));
        QFont font1;
        font1.setPointSize(20);
        pushButton_3->setFont(font1);
        pushButton_7 = new QPushButton(AddCustomer);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(430, 460, 81, 71));
        pushButton_7->setFont(font1);
        pushButton_9 = new QPushButton(AddCustomer);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(260, 460, 81, 71));
        pushButton_9->setFont(font1);
        pushButton_4 = new QPushButton(AddCustomer);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(750, 30, 150, 60));
        pushButton_4->setFont(font1);
        comboBox_8 = new QComboBox(AddCustomer);
        comboBox_8->setObjectName(QStringLiteral("comboBox_8"));
        comboBox_8->setGeometry(QRect(60, 200, 104, 26));
        pushButton_5 = new QPushButton(AddCustomer);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(170, 460, 81, 71));
        pushButton_5->setFont(font1);
        tableWidget = new QTableWidget(AddCustomer);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(50, 190, 859, 261));
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(270);
        label_5 = new QLabel(AddCustomer);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 470, 21, 51));
        label_5->setFont(font1);
        label_8 = new QLabel(AddCustomer);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(610, 470, 21, 51));
        label_8->setFont(font1);
        verticalLayoutWidget = new QWidget(AddCustomer);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(49, 109, 861, 82));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font1);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_8 = new QPushButton(AddCustomer);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(80, 460, 81, 71));
        pushButton_8->setFont(font1);
        pushButton_6 = new QPushButton(AddCustomer);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(520, 460, 81, 71));
        pushButton_6->setFont(font1);
        label_7 = new QLabel(AddCustomer);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(370, 470, 41, 51));
        label_7->setFont(font1);

        retranslateUi(AddCustomer);

        QMetaObject::connectSlotsByName(AddCustomer);
    } // setupUi

    void retranslateUi(QWidget *AddCustomer)
    {
        AddCustomer->setWindowTitle(QApplication::translate("AddCustomer", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AddCustomer", "\346\267\273\345\212\240/\345\210\240\351\231\244\351\241\276\345\256\242\345\271\266\351\200\211\346\213\251\345\272\247\344\275\215\357\274\214\347\204\266\345\220\216\350\264\255\344\271\260\350\275\246\347\245\250", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AddCustomer", "\347\241\256\350\256\244\345\271\266\350\264\255\344\271\260", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("AddCustomer", "D", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("AddCustomer", "C", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("AddCustomer", "\350\277\224\345\233\236", Q_NULLPTR));
        comboBox_8->clear();
        comboBox_8->insertItems(0, QStringList()
         << QApplication::translate("AddCustomer", "\344\272\214\344\273\243\350\272\253\344\273\275\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddCustomer", "\346\270\257\346\276\263\345\217\260\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddCustomer", "\346\212\244\347\205\247", Q_NULLPTR)
        );
        pushButton_5->setText(QApplication::translate("AddCustomer", "B", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddCustomer", "\347\252\227", Q_NULLPTR));
        label_8->setText(QApplication::translate("AddCustomer", "\347\252\227", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddCustomer", "\351\241\276\345\256\242\344\277\241\346\201\257", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AddCustomer", "\346\267\273\345\212\240\351\241\276\345\256\242", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AddCustomer", "\345\210\240\351\231\244\351\241\276\345\256\242", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("AddCustomer", "A", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("AddCustomer", "F", Q_NULLPTR));
        label_7->setText(QApplication::translate("AddCustomer", "\350\265\260\345\273\212", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddCustomer: public Ui_AddCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCUSTOMER_H
