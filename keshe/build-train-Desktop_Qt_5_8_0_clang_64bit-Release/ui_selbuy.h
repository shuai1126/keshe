/********************************************************************************
** Form generated from reading UI file 'selbuy.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELBUY_H
#define UI_SELBUY_H

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

class Ui_SelBuy
{
public:
    QPushButton *pushButton_3;
    QLabel *label;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_8;
    QComboBox *comboBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QTableWidget *tableWidget;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SelBuy)
    {
        if (SelBuy->objectName().isEmpty())
            SelBuy->setObjectName(QStringLiteral("SelBuy"));
        SelBuy->resize(960, 540);
        pushButton_3 = new QPushButton(SelBuy);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(360, 420, 241, 61));
        label = new QLabel(SelBuy);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 351, 61));
        QFont font;
        font.setPointSize(50);
        label->setFont(font);
        horizontalLayoutWidget_5 = new QWidget(SelBuy);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(60, 330, 841, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font1;
        font1.setPointSize(15);
        label_7->setFont(font1);

        horizontalLayout_5->addWidget(label_7);

        comboBox = new QComboBox(horizontalLayoutWidget_5);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_5->addWidget(comboBox);

        label_8 = new QLabel(horizontalLayoutWidget_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        horizontalLayout_5->addWidget(label_8);

        comboBox_2 = new QComboBox(horizontalLayoutWidget_5);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_5->addWidget(comboBox_2);

        verticalLayoutWidget = new QWidget(SelBuy);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 160, 841, 117));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font2;
        font2.setPointSize(20);
        label_5->setFont(font2);

        verticalLayout->addWidget(label_5);

        tableWidget = new QTableWidget(verticalLayoutWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(164);

        verticalLayout->addWidget(tableWidget);

        pushButton_2 = new QPushButton(SelBuy);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 30, 150, 60));
        pushButton_2->setFont(font2);

        retranslateUi(SelBuy);

        QMetaObject::connectSlotsByName(SelBuy);
    } // setupUi

    void retranslateUi(QWidget *SelBuy)
    {
        SelBuy->setWindowTitle(QApplication::translate("SelBuy", "Form", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("SelBuy", "\347\241\256\350\256\244\345\271\266\347\273\247\347\273\255", Q_NULLPTR));
        label->setText(QApplication::translate("SelBuy", "\345\224\256\347\245\250\345\221\230\350\264\255\344\271\260\350\275\246\347\245\250", Q_NULLPTR));
        label_7->setText(QApplication::translate("SelBuy", "\350\264\255\344\271\260\345\270\255\344\275\215", Q_NULLPTR));
        label_8->setText(QApplication::translate("SelBuy", "\350\264\255\344\271\260\345\274\240\346\225\260", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("SelBuy", "1", Q_NULLPTR)
         << QApplication::translate("SelBuy", "2", Q_NULLPTR)
         << QApplication::translate("SelBuy", "3", Q_NULLPTR)
         << QApplication::translate("SelBuy", "4", Q_NULLPTR)
         << QApplication::translate("SelBuy", "5", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("SelBuy", "\346\202\250\345\260\206\350\264\255\344\271\260\347\232\204\350\275\246\346\254\241\344\277\241\346\201\257\345\246\202\344\270\213:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SelBuy", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SelBuy: public Ui_SelBuy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELBUY_H
