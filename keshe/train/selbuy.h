#ifndef SELBUY_H
#define SELBUY_H

#include <QWidget>
#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QPushButton>
#include <QMessageBox>
#include <searchresult.h>
#include <addcustomer.h>

namespace Ui {
class SelBuy;
}

class SelBuy : public QWidget
{
    Q_OBJECT

public:
    explicit SelBuy(QWidget *parent = 0);
    ~SelBuy();

public:
    void sendDataTrain(QString TrainNumber,QString Date);

    int temp = 0;
    int remain1;
    int remain2;
    int remain3;


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::SelBuy *ui;
};

#endif // SELBUY_H
