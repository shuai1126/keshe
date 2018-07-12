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
#include <QtWidgets/QRadioButton>
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
    QComboBox *comboBox_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QComboBox *comboBox_4;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QComboBox *comboBox_5;
    QRadioButton *radioButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QStringLiteral("Search"));
        Search->resize(960, 540);
        pushButton = new QPushButton(Search);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 410, 291, 71));
        QFont font;
        font.setPointSize(30);
        pushButton->setFont(font);
        label = new QLabel(Search);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 201, 81));
        QFont font1;
        font1.setPointSize(50);
        label->setFont(font1);
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
        QFont font2;
        font2.setPointSize(40);
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
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        verticalLayout_3->addWidget(label_4);

        comboBox_3 = new QComboBox(horizontalLayoutWidget_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setFont(font3);

        verticalLayout_3->addWidget(comboBox_3);


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

        radioButton = new QRadioButton(horizontalLayoutWidget_3);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout_3->addWidget(radioButton);

        pushButton_2 = new QPushButton(Search);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(780, 20, 131, 51));
        QFont font4;
        font4.setPointSize(20);
        pushButton_2->setFont(font4);

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
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("Search", "20180709", Q_NULLPTR)
         << QApplication::translate("Search", "20180710", Q_NULLPTR)
         << QApplication::translate("Search", "20180711", Q_NULLPTR)
         << QApplication::translate("Search", "20180712", Q_NULLPTR)
         << QApplication::translate("Search", "20180713", Q_NULLPTR)
         << QApplication::translate("Search", "20180714", Q_NULLPTR)
         << QApplication::translate("Search", "20180715", Q_NULLPTR)
         << QApplication::translate("Search", "20180716", Q_NULLPTR)
         << QApplication::translate("Search", "20180717", Q_NULLPTR)
         << QApplication::translate("Search", "20180718", Q_NULLPTR)
         << QApplication::translate("Search", "20180719", Q_NULLPTR)
         << QApplication::translate("Search", "20180720", Q_NULLPTR)
         << QApplication::translate("Search", "20180721", Q_NULLPTR)
         << QApplication::translate("Search", "20180722", Q_NULLPTR)
         << QApplication::translate("Search", "20180723", Q_NULLPTR)
         << QApplication::translate("Search", "20180724", Q_NULLPTR)
         << QApplication::translate("Search", "20180725", Q_NULLPTR)
         << QApplication::translate("Search", "20180726", Q_NULLPTR)
        );
        comboBox_3->setCurrentText(QApplication::translate("Search", "20180709", Q_NULLPTR));
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
        radioButton->setText(QApplication::translate("Search", "\345\255\246\347\224\237", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Search", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
