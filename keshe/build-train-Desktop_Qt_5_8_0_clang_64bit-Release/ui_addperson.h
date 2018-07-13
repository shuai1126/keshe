/********************************************************************************
** Form generated from reading UI file 'addperson.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPERSON_H
#define UI_ADDPERSON_H

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

class Ui_AddPerson
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;
    QComboBox *comboBox_8;
    QComboBox *comboBox_9;
    QComboBox *comboBox_10;
    QPushButton *pushButton_4;
    QLabel *label_9;

    void setupUi(QWidget *AddPerson)
    {
        if (AddPerson->objectName().isEmpty())
            AddPerson->setObjectName(QStringLiteral("AddPerson"));
        AddPerson->resize(960, 540);
        label = new QLabel(AddPerson);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 261, 71));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        verticalLayoutWidget = new QWidget(AddPerson);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(59, 99, 861, 82));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(20);
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

        pushButton_3 = new QPushButton(AddPerson);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(400, 450, 191, 61));
        pushButton_3->setFont(font1);
        tableWidget = new QTableWidget(AddPerson);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(60, 180, 859, 261));
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(270);
        comboBox = new QComboBox(AddPerson);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(70, 180, 104, 26));
        comboBox_2 = new QComboBox(AddPerson);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(70, 180, 104, 26));
        comboBox_3 = new QComboBox(AddPerson);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(70, 190, 104, 26));
        comboBox_4 = new QComboBox(AddPerson);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(70, 190, 104, 26));
        comboBox_5 = new QComboBox(AddPerson);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(70, 190, 104, 26));
        comboBox_6 = new QComboBox(AddPerson);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(70, 190, 104, 26));
        comboBox_7 = new QComboBox(AddPerson);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));
        comboBox_7->setGeometry(QRect(70, 190, 104, 26));
        comboBox_8 = new QComboBox(AddPerson);
        comboBox_8->setObjectName(QStringLiteral("comboBox_8"));
        comboBox_8->setGeometry(QRect(70, 190, 104, 26));
        comboBox_9 = new QComboBox(AddPerson);
        comboBox_9->setObjectName(QStringLiteral("comboBox_9"));
        comboBox_9->setGeometry(QRect(80, 190, 104, 26));
        comboBox_10 = new QComboBox(AddPerson);
        comboBox_10->setObjectName(QStringLiteral("comboBox_10"));
        comboBox_10->setGeometry(QRect(80, 190, 104, 26));
        pushButton_4 = new QPushButton(AddPerson);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(750, 30, 150, 60));
        pushButton_4->setFont(font1);
        label_9 = new QLabel(AddPerson);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 450, 371, 31));
        label_9->setFont(font1);
        comboBox_10->raise();
        comboBox_9->raise();
        comboBox_8->raise();
        comboBox_7->raise();
        comboBox_6->raise();
        comboBox_5->raise();
        comboBox_4->raise();
        comboBox_3->raise();
        comboBox_2->raise();
        comboBox->raise();
        label->raise();
        verticalLayoutWidget->raise();
        pushButton_3->raise();
        tableWidget->raise();
        pushButton_4->raise();
        label_9->raise();

        retranslateUi(AddPerson);

        QMetaObject::connectSlotsByName(AddPerson);
    } // setupUi

    void retranslateUi(QWidget *AddPerson)
    {
        AddPerson->setWindowTitle(QApplication::translate("AddPerson", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AddPerson", "\346\267\273\345\212\240/\345\210\240\351\231\244\344\271\230\345\256\242", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddPerson", "\350\264\246\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AddPerson", "\346\267\273\345\212\240\344\271\230\345\256\242", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AddPerson", "\345\210\240\351\231\244\344\271\230\345\256\242", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AddPerson", "\345\256\214\346\210\220", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("AddPerson", "\344\272\214\344\273\243\350\272\253\344\273\275\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\270\257\346\276\263\345\217\260\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\212\244\347\205\247", Q_NULLPTR)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("AddPerson", "\344\272\214\344\273\243\350\272\253\344\273\275\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\270\257\346\276\263\345\217\260\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\212\244\347\205\247", Q_NULLPTR)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("AddPerson", "\344\272\214\344\273\243\350\272\253\344\273\275\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\270\257\346\276\263\345\217\260\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\212\244\347\205\247", Q_NULLPTR)
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("AddPerson", "\344\272\214\344\273\243\350\272\253\344\273\275\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\270\257\346\276\263\345\217\260\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\212\244\347\205\247", Q_NULLPTR)
        );
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("AddPerson", "\344\272\214\344\273\243\350\272\253\344\273\275\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\270\257\346\276\263\345\217\260\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\212\244\347\205\247", Q_NULLPTR)
        );
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("AddPerson", "\344\272\214\344\273\243\350\272\253\344\273\275\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\270\257\346\276\263\345\217\260\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\212\244\347\205\247", Q_NULLPTR)
        );
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("AddPerson", "\344\272\214\344\273\243\350\272\253\344\273\275\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\270\257\346\276\263\345\217\260\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\212\244\347\205\247", Q_NULLPTR)
        );
        comboBox_8->clear();
        comboBox_8->insertItems(0, QStringList()
         << QApplication::translate("AddPerson", "\344\272\214\344\273\243\350\272\253\344\273\275\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\270\257\346\276\263\345\217\260\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\212\244\347\205\247", Q_NULLPTR)
        );
        comboBox_9->clear();
        comboBox_9->insertItems(0, QStringList()
         << QApplication::translate("AddPerson", "\344\272\214\344\273\243\350\272\253\344\273\275\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\270\257\346\276\263\345\217\260\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\212\244\347\205\247", Q_NULLPTR)
        );
        comboBox_10->clear();
        comboBox_10->insertItems(0, QStringList()
         << QApplication::translate("AddPerson", "\344\272\214\344\273\243\350\272\253\344\273\275\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\270\257\346\276\263\345\217\260\350\257\201", Q_NULLPTR)
         << QApplication::translate("AddPerson", "\346\212\244\347\205\247", Q_NULLPTR)
        );
        pushButton_4->setText(QApplication::translate("AddPerson", "\350\277\224\345\233\236", Q_NULLPTR));
        label_9->setText(QApplication::translate("AddPerson", ">\345\237\272\346\234\254\344\277\241\346\201\257>\346\267\273\345\212\240/\345\210\240\351\231\244\344\271\230\345\256\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddPerson: public Ui_AddPerson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPERSON_H
