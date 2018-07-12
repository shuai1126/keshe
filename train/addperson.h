#ifndef ADDPERSON_H
#define ADDPERSON_H

#include <QWidget>

#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QPushButton>
#include <QMessageBox>

namespace Ui {
class AddPerson;
}

class AddPerson : public QWidget
{
    Q_OBJECT

public:
    explicit AddPerson(QWidget *parent = 0);
    ~AddPerson();
    int i;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::AddPerson *ui;
};

#endif // ADDPERSON_H
