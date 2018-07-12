#ifndef ADDTRAIN_H
#define ADDTRAIN_H

#include <QWidget>

#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QPushButton>
#include <QMessageBox>

namespace Ui {
class AddTrain;
}

class AddTrain : public QWidget
{
    Q_OBJECT

public:
    explicit AddTrain(QWidget *parent = 0);
    int temp = 0;
    QString Type;
    ~AddTrain();

private slots:
    void on_pushButton_clicked();
    void deal();


    void on_pushButton_2_clicked();

private:
    Ui::AddTrain *ui;
};

#endif // ADDTRAIN_H
