/********************************************************************************
** Form generated from reading UI file 'buy.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUY_H
#define UI_BUY_H

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

class Ui_Buy
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QTableWidget *tableWidget;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_8;
    QComboBox *comboBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;
    QComboBox *comboBox_3;
    QTableWidget *tableWidget_2;
    QLabel *label_9;

    void setupUi(QWidget *Buy)
    {
        if (Buy->objectName().isEmpty())
            Buy->setObjectName(QStringLiteral("Buy"));
        Buy->resize(960, 540);
        label = new QLabel(Buy);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 201, 61));
        QFont font;
        font.setPointSize(50);
        label->setFont(font);
        verticalLayoutWidget = new QWidget(Buy);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 90, 841, 117));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font1;
        font1.setPointSize(20);
        label_5->setFont(font1);

        verticalLayout->addWidget(label_5);

        tableWidget = new QTableWidget(verticalLayoutWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(164);

        verticalLayout->addWidget(tableWidget);

        horizontalLayoutWidget_5 = new QWidget(Buy);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(60, 210, 841, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font2;
        font2.setPointSize(15);
        label_7->setFont(font2);

        horizontalLayout_5->addWidget(label_7);

        comboBox = new QComboBox(horizontalLayoutWidget_5);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_5->addWidget(comboBox);

        label_8 = new QLabel(horizontalLayoutWidget_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);

        horizontalLayout_5->addWidget(label_8);

        comboBox_2 = new QComboBox(horizontalLayoutWidget_5);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_5->addWidget(comboBox_2);

        verticalLayoutWidget_2 = new QWidget(Buy);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(60, 260, 841, 51));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        horizontalLayout_2->addWidget(label_6);

        pushButton_3 = new QPushButton(verticalLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(Buy);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 440, 211, 51));
        pushButton_2 = new QPushButton(Buy);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 30, 150, 60));
        pushButton_2->setFont(font1);
        comboBox_4 = new QComboBox(Buy);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(120, 380, 104, 26));
        comboBox_5 = new QComboBox(Buy);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(170, 350, 104, 26));
        comboBox_6 = new QComboBox(Buy);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(130, 350, 104, 26));
        comboBox_7 = new QComboBox(Buy);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));
        comboBox_7->setGeometry(QRect(150, 340, 104, 26));
        comboBox_3 = new QComboBox(Buy);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(90, 320, 104, 26));
        tableWidget_2 = new QTableWidget(Buy);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(60, 310, 837, 131));
        tableWidget_2->horizontalHeader()->setVisible(false);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(180);
        label_9 = new QLabel(Buy);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 450, 281, 31));
        label_9->setFont(font1);

        retranslateUi(Buy);

        comboBox_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Buy);
    } // setupUi

    void retranslateUi(QWidget *Buy)
    {
        Buy->setWindowTitle(QApplication::translate("Buy", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Buy", "\350\264\255\344\271\260\350\275\246\347\245\250", Q_NULLPTR));
        label_5->setText(QApplication::translate("Buy", "\350\275\246\347\245\250\344\277\241\346\201\257", Q_NULLPTR));
        label_7->setText(QApplication::translate("Buy", "\350\264\255\344\271\260\345\270\255\344\275\215", Q_NULLPTR));
        label_8->setText(QApplication::translate("Buy", "\350\264\255\344\271\260\345\274\240\346\225\260", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Buy", "1", Q_NULLPTR)
         << QApplication::translate("Buy", "2", Q_NULLPTR)
         << QApplication::translate("Buy", "3", Q_NULLPTR)
         << QApplication::translate("Buy", "4", Q_NULLPTR)
         << QApplication::translate("Buy", "5", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("Buy", "\350\264\246\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Buy", "\346\267\273\345\212\240\350\264\255\347\245\250\344\272\272", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Buy", "\347\241\256\350\256\244\350\264\255\344\271\260", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Buy", "\350\277\224\345\233\236", Q_NULLPTR));
        label_9->setText(QApplication::translate("Buy", ">\350\275\246\347\245\250\351\242\204\350\256\242>\346\237\245\350\257\242\347\273\223\346\236\234>\350\264\255\344\271\260\350\275\246\347\245\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Buy: public Ui_Buy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUY_H
