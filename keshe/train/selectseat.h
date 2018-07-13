#ifndef SELECTSEAT_H
#define SELECTSEAT_H

#include <QWidget>

#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QPushButton>
#include <QMessageBox>

namespace Ui {
class SelectSeat;
}

class SelectSeat : public QWidget
{
    Q_OBJECT

public:
    explicit SelectSeat(QWidget *parent = 0);
    void sendData1(QString Name,QString IDNumber,QString IDType);
    int Price = 0;
    int TotalPrice = 0;
    QString TotalPrice1;
    int i = 0;
    ~SelectSeat();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::SelectSeat *ui;
};

#endif // SELECTSEAT_H
