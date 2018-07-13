/********************************************************************************
** Form generated from reading UI file 'selectseat.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTSEAT_H
#define UI_SELECTSEAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectSeat
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_8;
    QLabel *label_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_9;

    void setupUi(QWidget *SelectSeat)
    {
        if (SelectSeat->objectName().isEmpty())
            SelectSeat->setObjectName(QStringLiteral("SelectSeat"));
        SelectSeat->resize(960, 540);
        label = new QLabel(SelectSeat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 211, 71));
        QFont font;
        font.setPointSize(50);
        label->setFont(font);
        verticalLayoutWidget = new QWidget(SelectSeat);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 100, 811, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(20);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        tableWidget = new QTableWidget(verticalLayoutWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(180);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setFont(font1);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        horizontalLayout_2->addWidget(label_6);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setFont(font1);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        pushButton = new QPushButton(SelectSeat);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 370, 81, 71));
        pushButton->setFont(font1);
        label_5 = new QLabel(SelectSeat);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 380, 21, 51));
        label_5->setFont(font1);
        pushButton_2 = new QPushButton(SelectSeat);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 370, 81, 71));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(SelectSeat);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 370, 81, 71));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(SelectSeat);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(550, 370, 81, 71));
        pushButton_4->setFont(font1);
        pushButton_5 = new QPushButton(SelectSeat);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(640, 370, 81, 71));
        pushButton_5->setFont(font1);
        label_8 = new QLabel(SelectSeat);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(730, 380, 21, 51));
        label_8->setFont(font1);
        label_7 = new QLabel(SelectSeat);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(490, 380, 41, 51));
        label_7->setFont(font1);
        pushButton_6 = new QPushButton(SelectSeat);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(680, 460, 201, 61));
        pushButton_6->setFont(font1);
        pushButton_7 = new QPushButton(SelectSeat);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(750, 30, 150, 60));
        pushButton_7->setFont(font1);
        label_9 = new QLabel(SelectSeat);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 450, 371, 31));
        label_9->setFont(font1);

        retranslateUi(SelectSeat);

        QMetaObject::connectSlotsByName(SelectSeat);
    } // setupUi

    void retranslateUi(QWidget *SelectSeat)
    {
        SelectSeat->setWindowTitle(QApplication::translate("SelectSeat", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SelectSeat", "\351\200\211\346\213\251\345\272\247\344\275\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("SelectSeat", "\344\271\230\345\256\242\344\277\241\346\201\257", Q_NULLPTR));
        label_3->setText(QApplication::translate("SelectSeat", "\346\211\200\351\200\211\345\270\255\344\275\215", Q_NULLPTR));
        label_6->setText(QApplication::translate("SelectSeat", "\346\200\273\347\245\250\344\273\267", Q_NULLPTR));
        label_4->setText(QApplication::translate("SelectSeat", "\345\272\247\344\275\215\351\200\211\346\213\251", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SelectSeat", "A", Q_NULLPTR));
        label_5->setText(QApplication::translate("SelectSeat", "\347\252\227", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SelectSeat", "B", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("SelectSeat", "C", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("SelectSeat", "D", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("SelectSeat", "F", Q_NULLPTR));
        label_8->setText(QApplication::translate("SelectSeat", "\347\252\227", Q_NULLPTR));
        label_7->setText(QApplication::translate("SelectSeat", "\350\265\260\345\273\212", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("SelectSeat", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("SelectSeat", "\350\277\224\345\233\236", Q_NULLPTR));
        label_9->setText(QApplication::translate("SelectSeat", ">\350\275\246\347\245\250\351\242\204\350\256\242>\346\237\245\350\257\242\347\273\223\346\236\234>\350\264\255\344\271\260\350\275\246\347\245\250>\351\200\211\346\213\251\345\272\247\344\275\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SelectSeat: public Ui_SelectSeat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTSEAT_H
