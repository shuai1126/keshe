/********************************************************************************
** Form generated from reading UI file 'searchresult.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHRESULT_H
#define UI_SEARCHRESULT_H

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

class Ui_SearchResult
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SearchResult)
    {
        if (SearchResult->objectName().isEmpty())
            SearchResult->setObjectName(QStringLiteral("SearchResult"));
        SearchResult->resize(960, 540);
        label = new QLabel(SearchResult);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 621, 51));
        QFont font;
        font.setPointSize(50);
        label->setFont(font);
        pushButton = new QPushButton(SearchResult);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(810, 20, 111, 51));
        tableWidget = new QTableWidget(SearchResult);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 80, 901, 351));
        tableWidget->setAutoScrollMargin(10);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(74);
        tableWidget->horizontalHeader()->setMinimumSectionSize(15);
        tableWidget->verticalHeader()->setDefaultSectionSize(30);
        tableWidget->verticalHeader()->setMinimumSectionSize(15);
        pushButton_2 = new QPushButton(SearchResult);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 450, 191, 61));
        QFont font1;
        font1.setPointSize(20);
        pushButton_2->setFont(font1);

        retranslateUi(SearchResult);

        QMetaObject::connectSlotsByName(SearchResult);
    } // setupUi

    void retranslateUi(QWidget *SearchResult)
    {
        SearchResult->setWindowTitle(QApplication::translate("SearchResult", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SearchResult", "\346\237\245\350\257\242\347\273\223\346\236\234(\351\200\211\346\213\251\351\234\200\350\246\201\347\232\204\350\275\246\346\254\241)", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SearchResult", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SearchResult", "\350\256\242\350\264\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SearchResult: public Ui_SearchResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHRESULT_H
