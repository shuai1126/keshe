/********************************************************************************
** Form generated from reading UI file 'changetrainsearch.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGETRAINSEARCH_H
#define UI_CHANGETRAINSEARCH_H

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

class Ui_ChangeTrainSearch
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QWidget *ChangeTrainSearch)
    {
        if (ChangeTrainSearch->objectName().isEmpty())
            ChangeTrainSearch->setObjectName(QStringLiteral("ChangeTrainSearch"));
        ChangeTrainSearch->resize(960, 540);
        tableWidget = new QTableWidget(ChangeTrainSearch);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(90, 150, 801, 321));
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(110);
        pushButton = new QPushButton(ChangeTrainSearch);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(760, 80, 141, 61));
        QFont font;
        font.setPointSize(13);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(ChangeTrainSearch);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 500, 191, 61));
        QFont font1;
        font1.setPointSize(30);
        pushButton_2->setFont(font1);
        label = new QLabel(ChangeTrainSearch);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 80, 601, 71));
        QFont font2;
        font2.setPointSize(40);
        label->setFont(font2);

        retranslateUi(ChangeTrainSearch);

        QMetaObject::connectSlotsByName(ChangeTrainSearch);
    } // setupUi

    void retranslateUi(QWidget *ChangeTrainSearch)
    {
        ChangeTrainSearch->setWindowTitle(QApplication::translate("ChangeTrainSearch", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ChangeTrainSearch", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ChangeTrainSearch", "\344\277\256\346\224\271", Q_NULLPTR));
        label->setText(QApplication::translate("ChangeTrainSearch", "\346\237\245\350\257\242\350\275\246\346\254\241\347\273\223\346\236\234(\350\257\267\351\200\211\346\213\251\350\246\201\344\277\256\346\224\271\350\275\246\346\254\241)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChangeTrainSearch: public Ui_ChangeTrainSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGETRAINSEARCH_H
