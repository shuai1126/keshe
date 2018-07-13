/********************************************************************************
** Form generated from reading UI file 'change.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_H
#define UI_CHANGE_H

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

class Ui_Change
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_9;

    void setupUi(QWidget *Change)
    {
        if (Change->objectName().isEmpty())
            Change->setObjectName(QStringLiteral("Change"));
        Change->resize(960, 540);
        pushButton = new QPushButton(Change);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(750, 30, 150, 60));
        QFont font;
        font.setPointSize(20);
        pushButton->setFont(font);
        tableWidget = new QTableWidget(Change);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(60, 110, 791, 311));
        pushButton_2 = new QPushButton(Change);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 440, 161, 61));
        pushButton_2->setFont(font);
        label = new QLabel(Change);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 40, 181, 41));
        QFont font1;
        font1.setPointSize(40);
        label->setFont(font1);
        label_9 = new QLabel(Change);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 450, 191, 31));
        label_9->setFont(font);

        retranslateUi(Change);

        QMetaObject::connectSlotsByName(Change);
    } // setupUi

    void retranslateUi(QWidget *Change)
    {
        Change->setWindowTitle(QApplication::translate("Change", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Change", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Change", "\347\241\256\350\256\244\346\224\271\347\255\276", Q_NULLPTR));
        label->setText(QApplication::translate("Change", "\350\275\246\347\245\250\346\224\271\347\255\276", Q_NULLPTR));
        label_9->setText(QApplication::translate("Change", ">\346\210\221\347\232\204\350\256\242\345\215\225>\350\275\246\347\245\250\346\224\271\347\255\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Change: public Ui_Change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_H
