#ifndef ADDCUSTOMER_H
#define ADDCUSTOMER_H

#include <QWidget>

#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QPushButton>
#include <QMessageBox>
namespace Ui {
class AddCustomer;
}

class AddCustomer : public QWidget
{
    Q_OBJECT

public:
    explicit AddCustomer(QWidget *parent = 0);
    ~AddCustomer();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::AddCustomer *ui;
};

#endif // ADDCUSTOMER_H
