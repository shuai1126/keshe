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
    QString Type;
    int temp = 0;
    int remain1;
    int remain2;
    int remain3;
    QString Name1;
    QString Name2;
    QString Name3;
    QString Name4;
    QString Name5;
    QString IDType1;
    QString IDType2;
    QString IDType3;
    QString IDType4;
    QString IDType5;
    QString IDNumber1;
    QString IDNumber2;
    QString IDNumber3;
    QString IDNumber4;
    QString IDNumber5;
    QString state;


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::SelBuy *ui;
};

#endif // SELBUY_H
