/********************************************************************************
** Form generated from reading UI file 'deletetrain.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETETRAIN_H
#define UI_DELETETRAIN_H

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

class Ui_DeleteTrain
{
public:
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *DeleteTrain)
    {
        if (DeleteTrain->objectName().isEmpty())
            DeleteTrain->setObjectName(QStringLiteral("DeleteTrain"));
        DeleteTrain->resize(960, 540);
        pushButton_2 = new QPushButton(DeleteTrain);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 30, 150, 60));
        QFont font;
        font.setPointSize(20);
        pushButton_2->setFont(font);
        horizontalLayoutWidget = new QWidget(DeleteTrain);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(120, 190, 781, 41));
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

        horizontalLayoutWidget_2 = new QWidget(DeleteTrain);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(120, 250, 781, 41));
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

        label = new QLabel(DeleteTrain);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 110, 171, 61));
        QFont font1;
        font1.setPointSize(40);
        label->setFont(font1);
        pushButton = new QPushButton(DeleteTrain);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 310, 171, 71));
        pushButton->setFont(font);

        retranslateUi(DeleteTrain);

        QMetaObject::connectSlotsByName(DeleteTrain);
    } // setupUi

    void retranslateUi(QWidget *DeleteTrain)
    {
        DeleteTrain->setWindowTitle(QApplication::translate("DeleteTrain", "Form", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("DeleteTrain", "\350\277\224\345\233\236", Q_NULLPTR));
        label_2->setText(QApplication::translate("DeleteTrain", "\350\275\246\346\254\241\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("DeleteTrain", "\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("DeleteTrain", "\345\210\240\351\231\244\350\275\246\346\254\241", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DeleteTrain", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeleteTrain: public Ui_DeleteTrain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETETRAIN_H
