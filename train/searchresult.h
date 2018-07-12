#ifndef SEARCHRESULT_H
#define SEARCHRESULT_H

#include <QWidget>

#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QPushButton>
#include <QMessageBox>

#include <buy.h>
#include <selbuy.h>

namespace Ui {
class SearchResult;
}

class SearchResult : public QWidget
{
    Q_OBJECT

public:
    explicit SearchResult(QWidget *parent = 0);
    int i = 0;
    int temp = 0;
    QString time;
    ~SearchResult();

signals:
    void display(int number);

public:
    void sendData(QString data1,QString data2,QString data3,QString data4,QString data5);
    QString Data1;
    QString Data2;
    QString Data3;
    QString Data4;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SearchResult *ui;
};

#endif // SEARCHRESULT_H
