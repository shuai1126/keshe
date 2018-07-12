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
    QString TrainNumber1;
    QString Date1;
    QString Departure1;
    QString Terminal1;
    QString DepTime1;

private slots:
    void on_pushButton_2_clicked();

    void deal1(int index);

    void deal2(int index);

    void deal(int index);

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Buy *ui;
};

#endif // BUY_H
