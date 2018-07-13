#ifndef BUY_H
#define BUY_H

#include <QWidget>
#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QPushButton>
#include <QMessageBox>
#include <searchresult.h>
#include <addperson.h>
#include <selectseat.h>

namespace Ui {
class Buy;
}

class Buy : public QWidget
{
    Q_OBJECT

public:
    explicit Buy(QWidget *parent = 0);
    ~Buy();

public:
    void sendDataTrain(QString TrainNumber,QString Date);
    void AddItem();
    QString Type;
    QString ne = "新";
    int temp = 0;
    int remain1;
    int remain2;
    int remain3;
    int x = 0;
    QString Name1;
    QString Name2;
    QString Name3;
    QString Name4;
    QString Name5;
    QString Name6;
    QString Name7;
    QString Name8;
    QString Name9;
    QString Name10;
    QString IDType1;
    QString IDType2;
    QString IDType3;
    QString IDType4;
    QString IDType5;
    QString IDType6;
    QString IDType7;
    QString IDType8;
    QString IDType9;
    QString IDType10;
    QString IDNumber1;
    QString IDNumber2;
    QString IDNumber3;
    QString IDNumber4;
    QString IDNumber5;
    QString IDNumber6;
    QString IDNumber7;
    QString IDNumber8;
    QString IDNumber9;
    QString IDNumber10;
    QString state;

private slots:
    void on_pushButton_2_clicked();

    void deal1();

    void deal2();

    void deal();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Buy *ui;
};

#endif // BUY_H
