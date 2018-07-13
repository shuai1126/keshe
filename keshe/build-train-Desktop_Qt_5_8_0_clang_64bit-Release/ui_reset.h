/********************************************************************************
** Form generated from reading UI file 'reset.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESET_H
#define UI_RESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reset
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Reset)
    {
        if (Reset->objectName().isEmpty())
            Reset->setObjectName(QStringLiteral("Reset"));
        Reset->resize(960, 540);
        verticalLayoutWidget = new QWidget(Reset);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 140, 781, 251));
        QFont font;
        font.setPointSize(20);
        verticalLayoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(Reset);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 421, 251, 71));
        pushButton->setFont(font);
        label = new QLabel(Reset);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 261, 77));
        QFont font1;
        font1.setPointSize(50);
        label->setFont(font1);
        pushButton_2 = new QPushButton(Reset);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 30, 150, 60));
        pushButton_2->setFont(font);

        retranslateUi(Reset);

        QMetaObject::connectSlotsByName(Reset);
    } // setupUi

    void retranslateUi(QWidget *Reset)
    {
        Reset->setWindowTitle(QApplication::translate("Reset", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("Reset", "\350\276\223\345\205\245\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Reset", "\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Reset", "\347\241\256\350\256\244\351\207\215\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("Reset", "\351\207\215\347\275\256\345\257\206\347\240\201", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Reset", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Reset: public Ui_Reset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESET_H
