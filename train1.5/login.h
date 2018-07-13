#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QMessageBox>

#include <buy.h>
#include <addperson.h>
#include <admmenu.h>
#include <QKeyEvent>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void display(int number);

private:
    Ui::Login *ui;

protected:
    virtual void keyPressEvent(QKeyEvent *ev);

};

#endif // LOGIN_H
