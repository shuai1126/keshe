#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QWidget>

#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QPushButton>
#include <QMessageBox>

namespace Ui {
class ChangePassword;
}

class ChangePassword : public QWidget
{
    Q_OBJECT

public:
    explicit ChangePassword(QWidget *parent = 0);
    QString Password;
    ~ChangePassword();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ChangePassword *ui;
};

#endif // CHANGEPASSWORD_H
