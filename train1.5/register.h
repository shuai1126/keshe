#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>

#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void display(int number);

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
