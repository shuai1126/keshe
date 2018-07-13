#ifndef MESSAGE_H
#define MESSAGE_H

#include <QWidget>

#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QPushButton>
#include <QMessageBox>
#include <addperson.h>
#include <changepassword.h>

namespace Ui {
class Message;
}

class Message : public QWidget
{
    Q_OBJECT

public:
    explicit Message(QWidget *parent = 0);
    QString Email;
    QString Phone;
    ~Message();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Message *ui;
};

#endif // MESSAGE_H
