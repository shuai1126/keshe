/********************************************************************************
** Form generated from reading UI file 'changetrain.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGETRAIN_H
#define UI_CHANGETRAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeTrain
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *ChangeTrain)
    {
        if (ChangeTrain->objectName().isEmpty())
            ChangeTrain->setObjectName(QStringLiteral("ChangeTrain"));
        ChangeTrain->resize(960, 540);
        pushButton = new QPushButton(ChangeTrain);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 310, 171, 71));
        QFont font;
        font.setPointSize(20);
        pushButton->setFont(font);
        label = new QLabel(ChangeTrain);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 110, 171, 61));
        QFont font1;
        font1.setPointSize(40);
        label->setFont(font1);
        horizontalLayoutWidget = new QWidget(ChangeTrain);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(110, 190, 781, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font);

        horizontalLayout->addWidget(lineEdit);

        pushButton_2 = new QPushButton(ChangeTrain);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(780, 120, 113, 51));
        horizontalLayoutWidget_2 = new QWidget(ChangeTrain);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(110, 250, 781, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(true);
        lineEdit_2->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_2);


        retranslateUi(ChangeTrain);

        QMetaObject::connectSlotsByName(ChangeTrain);
    } // setupUi

    void retranslateUi(QWidget *ChangeTrain)
    {
        ChangeTrain->setWindowTitle(QApplication::translate("ChangeTrain", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ChangeTrain", "\346\237\245\350\257\242", Q_NULLPTR));
        label->setText(QApplication::translate("ChangeTrain", "\344\277\256\346\224\271\350\275\246\346\254\241", Q_NULLPTR));
        label_2->setText(QApplication::translate("ChangeTrain", "\350\275\246\346\254\241\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ChangeTrain", "\350\277\224\345\233\236", Q_NULLPTR));
        label_3->setText(QApplication::translate("ChangeTrain", "\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChangeTrain: public Ui_ChangeTrain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGETRAIN_H
