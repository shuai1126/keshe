/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBox_3;
    QLabel *label_8;
    QComboBox *comboBox_6;
    QLabel *label_9;
    QComboBox *comboBox_7;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QComboBox *comboBox_4;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QComboBox *comboBox_5;
    QPushButton *pushButton_2;
    QLabel *label_7;

    void setupUi(QWidget *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QStringLiteral("Search"));
        Search->resize(960, 540);
        QFont font;
        font.setPointSize(10);
        Search->setFont(font);
        pushButton = new QPushButton(Search);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 410, 291, 71));
        QFont font1;
        font1.setPointSize(30);
        pushButton->setFont(font1);
        label = new QLabel(Search);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 201, 81));
        QFont font2;
        font2.setPointSize(40);
        label->setFont(font2);
        horizontalLayoutWidget = new QWidget(Search);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 80, 861, 111));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        verticalLayout->addWidget(label_2);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QFont font3;
        font3.setPointSize(15);
        comboBox->setFont(font3);

        verticalLayout->addWidget(comboBox);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font2);

        verticalLayout_2->addWidget(label_3);

        comboBox_2 = new QComboBox(horizontalLayoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setFont(font3);

        verticalLayout_2->addWidget(comboBox_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayoutWidget_2 = new QWidget(Search);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(50, 190, 861, 111));
        QFont font4;
        font4.setPointSize(11);
        horizontalLayoutWidget_2->setFont(font4);
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        verticalLayout_3->addWidget(label_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        comboBox_3 = new QComboBox(horizontalLayoutWidget_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setFont(font4);

        horizontalLayout_4->addWidget(comboBox_3);

        label_8 = new QLabel(horizontalLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font4);

        horizontalLayout_4->addWidget(label_8);

        comboBox_6 = new QComboBox(horizontalLayoutWidget_2);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setFont(font4);

        horizontalLayout_4->addWidget(comboBox_6);

        label_9 = new QLabel(horizontalLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font4);

        horizontalLayout_4->addWidget(label_9);

        comboBox_7 = new QComboBox(horizontalLayoutWidget_2);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));
        comboBox_7->setFont(font4);

        horizontalLayout_4->addWidget(comboBox_7);

        label_10 = new QLabel(horizontalLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font4);

        horizontalLayout_4->addWidget(label_10);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        verticalLayout_5->addWidget(label_5);

        comboBox_4 = new QComboBox(horizontalLayoutWidget_2);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setFont(font3);

        verticalLayout_5->addWidget(comboBox_4);


        horizontalLayout_2->addLayout(verticalLayout_5);

        horizontalLayoutWidget_3 = new QWidget(Search);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(50, 300, 861, 101));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_6 = new QLabel(horizontalLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        verticalLayout_4->addWidget(label_6);

        comboBox_5 = new QComboBox(horizontalLayoutWidget_3);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        verticalLayout_4->addWidget(comboBox_5);


        horizontalLayout_3->addLayout(verticalLayout_4);

        pushButton_2 = new QPushButton(Search);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 30, 150, 60));
        QFont font5;
        font5.setPointSize(20);
        pushButton_2->setFont(font5);
        label_7 = new QLabel(Search);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 450, 111, 31));
        label_7->setFont(font5);

        retranslateUi(Search);

        comboBox_2->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QWidget *Search)
    {
        Search->setWindowTitle(QApplication::translate("Search", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Search", "\346\237\245\350\257\242", Q_NULLPTR));
        label->setText(QApplication::translate("Search", "\350\275\246\347\245\250\351\242\204\350\256\242", Q_NULLPTR));
        label_2->setText(QApplication::translate("Search", "\345\207\272\345\217\221\345\234\260", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Search", "\345\214\227\344\272\254", Q_NULLPTR)
         << QApplication::translate("Search", "\345\244\251\346\264\245", Q_NULLPTR)
         << QApplication::translate("Search", "\344\270\212\346\265\267", Q_NULLPTR)
         << QApplication::translate("Search", "\351\207\215\345\272\206", Q_NULLPTR)
         << QApplication::translate("Search", "\347\237\263\345\256\266\345\272\204", Q_NULLPTR)
         << QApplication::translate("Search", "\345\244\252\345\216\237", Q_NULLPTR)
         << QApplication::translate("Search", "\346\262\210\351\230\263", Q_NULLPTR)
         << QApplication::translate("Search", "\351\225\277\346\230\245", Q_NULLPTR)
         << QApplication::translate("Search", "\345\223\210\345\260\224\346\273\250", Q_NULLPTR)
         << QApplication::translate("Search", "\345\215\227\344\272\254", Q_NULLPTR)
         << QApplication::translate("Search", "\346\235\255\345\267\236", Q_NULLPTR)
         << QApplication::translate("Search", "\345\220\210\350\202\245", Q_NULLPTR)
         << QApplication::translate("Search", "\347\246\217\345\267\236", Q_NULLPTR)
         << QApplication::translate("Search", "\345\215\227\346\230\214", Q_NULLPTR)
         << QApplication::translate("Search", "\346\265\216\345\215\227", Q_NULLPTR)
         << QApplication::translate("Search", "\351\203\221\345\267\236", Q_NULLPTR)
         << QApplication::translate("Search", "\346\255\246\346\261\211", Q_NULLPTR)
         << QApplication::translate("Search", "\351\225\277\346\262\231", Q_NULLPTR)
         << QApplication::translate("Search", "\345\271\277\345\267\236", Q_NULLPTR)
         << QApplication::translate("Search", "\346\265\267\345\217\243", Q_NULLPTR)
         << QApplication::translate("Search", "\346\210\220\351\203\275", Q_NULLPTR)
         << QApplication::translate("Search", "\350\264\265\351\230\263", Q_NULLPTR)
         << QApplication::translate("Search", "\346\230\206\346\230\216", Q_NULLPTR)
         << QApplication::translate("Search", "\350\245\277\345\256\211", Q_NULLPTR)
         << QApplication::translate("Search", "\345\205\260\345\267\236", Q_NULLPTR)
         << QApplication::translate("Search", "\350\245\277\345\256\201", Q_NULLPTR)
         << QApplication::translate("Search", "\346\213\211\350\220\250", Q_NULLPTR)
         << QApplication::translate("Search", "\345\215\227\345\256\201", Q_NULLPTR)
         << QApplication::translate("Search", "\345\221\274\345\222\214\346\265\251\347\211\271", Q_NULLPTR)
         << QApplication::translate("Search", "\351\223\266\345\267\235", Q_NULLPTR)
         << QApplication::translate("Search", "\344\271\214\351\262\201\346\234\250\351\275\220", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("Search", "\347\233\256\347\232\204\345\234\260", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Search", "\345\214\227\344\272\254", Q_NULLPTR)
         << QApplication::translate("Search", "\345\244\251\346\264\245", Q_NULLPTR)
         << QApplication::translate("Search", "\344\270\212\346\265\267", Q_NULLPTR)
         << QApplication::translate("Search", "\351\207\215\345\272\206", Q_NULLPTR)
         << QApplication::translate("Search", "\347\237\263\345\256\266\345\272\204", Q_NULLPTR)
         << QApplication::translate("Search", "\345\244\252\345\216\237", Q_NULLPTR)
         << QApplication::translate("Search", "\346\262\210\351\230\263", Q_NULLPTR)
         << QApplication::translate("Search", "\351\225\277\346\230\245", Q_NULLPTR)
         << QApplication::translate("Search", "\345\223\210\345\260\224\346\273\250", Q_NULLPTR)
         << QApplication::translate("Search", "\345\215\227\344\272\254", Q_NULLPTR)
         << QApplication::translate("Search", "\346\235\255\345\267\236", Q_NULLPTR)
         << QApplication::translate("Search", "\345\220\210\350\202\245", Q_NULLPTR)
         << QApplication::translate("Search", "\347\246\217\345\267\236", Q_NULLPTR)
         << QApplication::translate("Search", "\345\215\227\346\230\214", Q_NULLPTR)
         << QApplication::translate("Search", "\346\265\216\345\215\227", Q_NULLPTR)
         << QApplication::translate("Search", "\351\203\221\345\267\236", Q_NULLPTR)
         << QApplication::translate("Search", "\346\255\246\346\261\211", Q_NULLPTR)
         << QApplication::translate("Search", "\351\225\277\346\262\231", Q_NULLPTR)
         << QApplication::translate("Search", "\345\271\277\345\267\236", Q_NULLPTR)
         << QApplication::translate("Search", "\346\265\267\345\217\243", Q_NULLPTR)
         << QApplication::translate("Search", "\346\210\220\351\203\275", Q_NULLPTR)
         << QApplication::translate("Search", "\350\264\265\351\230\263", Q_NULLPTR)
         << QApplication::translate("Search", "\346\230\206\346\230\216", Q_NULLPTR)
         << QApplication::translate("Search", "\350\245\277\345\256\211", Q_NULLPTR)
         << QApplication::translate("Search", "\345\205\260\345\267\236", Q_NULLPTR)
         << QApplication::translate("Search", "\350\245\277\345\256\201", Q_NULLPTR)
         << QApplication::translate("Search", "\346\213\211\350\220\250", Q_NULLPTR)
         << QApplication::translate("Search", "\345\215\227\345\256\201", Q_NULLPTR)
         << QApplication::translate("Search", "\345\221\274\345\222\214\346\265\251\347\211\271", Q_NULLPTR)
         << QApplication::translate("Search", "\351\223\266\345\267\235", Q_NULLPTR)
         << QApplication::translate("Search", "\344\271\214\351\262\201\346\234\250\351\275\220", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("Search", "\345\207\272\345\217\221\346\227\245\346\234\237", Q_NULLPTR));
        comboBox_3->setCurrentText(QString());
        label_8->setText(QApplication::translate("Search", "\345\271\264", Q_NULLPTR));
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("Search", "01", Q_NULLPTR)
         << QApplication::translate("Search", "02", Q_NULLPTR)
         << QApplication::translate("Search", "03", Q_NULLPTR)
         << QApplication::translate("Search", "04", Q_NULLPTR)
         << QApplication::translate("Search", "05", Q_NULLPTR)
         << QApplication::translate("Search", "06", Q_NULLPTR)
         << QApplication::translate("Search", "07", Q_NULLPTR)
         << QApplication::translate("Search", "08", Q_NULLPTR)
         << QApplication::translate("Search", "09", Q_NULLPTR)
         << QApplication::translate("Search", "10", Q_NULLPTR)
         << QApplication::translate("Search", "11", Q_NULLPTR)
         << QApplication::translate("Search", "12", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("Search", "\346\234\210", Q_NULLPTR));
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("Search", "01", Q_NULLPTR)
         << QApplication::translate("Search", "02", Q_NULLPTR)
         << QApplication::translate("Search", "03", Q_NULLPTR)
         << QApplication::translate("Search", "04", Q_NULLPTR)
         << QApplication::translate("Search", "05", Q_NULLPTR)
         << QApplication::translate("Search", "06", Q_NULLPTR)
         << QApplication::translate("Search", "07", Q_NULLPTR)
         << QApplication::translate("Search", "08", Q_NULLPTR)
         << QApplication::translate("Search", "09", Q_NULLPTR)
         << QApplication::translate("Search", "10", Q_NULLPTR)
         << QApplication::translate("Search", "11", Q_NULLPTR)
         << QApplication::translate("Search", "12", Q_NULLPTR)
         << QApplication::translate("Search", "13", Q_NULLPTR)
         << QApplication::translate("Search", "14", Q_NULLPTR)
         << QApplication::translate("Search", "15", Q_NULLPTR)
         << QApplication::translate("Search", "16", Q_NULLPTR)
         << QApplication::translate("Search", "17", Q_NULLPTR)
         << QApplication::translate("Search", "18", Q_NULLPTR)
         << QApplication::translate("Search", "19", Q_NULLPTR)
         << QApplication::translate("Search", "20", Q_NULLPTR)
         << QApplication::translate("Search", "21", Q_NULLPTR)
         << QApplication::translate("Search", "22", Q_NULLPTR)
         << QApplication::translate("Search", "23", Q_NULLPTR)
         << QApplication::translate("Search", "24", Q_NULLPTR)
         << QApplication::translate("Search", "25", Q_NULLPTR)
         << QApplication::translate("Search", "26", Q_NULLPTR)
         << QApplication::translate("Search", "27", Q_NULLPTR)
         << QApplication::translate("Search", "28", Q_NULLPTR)
         << QApplication::translate("Search", "29", Q_NULLPTR)
         << QApplication::translate("Search", "30", Q_NULLPTR)
         << QApplication::translate("Search", "31", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("Search", "\346\227\245", Q_NULLPTR));
        label_5->setText(QApplication::translate("Search", "\345\207\272\345\217\221\346\227\266\351\227\264", Q_NULLPTR));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("Search", "\344\270\215\351\231\220", Q_NULLPTR)
         << QApplication::translate("Search", "00:01-08:00", Q_NULLPTR)
         << QApplication::translate("Search", "08:01-12:00", Q_NULLPTR)
         << QApplication::translate("Search", "12:01-16:00", Q_NULLPTR)
         << QApplication::translate("Search", "16:01-20:00", Q_NULLPTR)
         << QApplication::translate("Search", "20:01-00:00", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("Search", "\345\210\227\350\275\246\347\261\273\345\236\213", Q_NULLPTR));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("Search", "\344\270\215\351\231\220", Q_NULLPTR)
         << QApplication::translate("Search", "\351\253\230\351\223\201/\345\212\250\350\275\246\347\273\204 G/D/C", Q_NULLPTR)
         << QApplication::translate("Search", "\346\231\256\351\200\237\345\210\227\350\275\246 Y/K/T/Z", Q_NULLPTR)
        );
        pushButton_2->setText(QApplication::translate("Search", "\350\277\224\345\233\236", Q_NULLPTR));
        label_7->setText(QApplication::translate("Search", ">\350\275\246\347\245\250\351\242\204\350\256\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
