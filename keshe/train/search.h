#ifndef SEARCH_H
#define SEARCH_H

#include <QWidget>
#include <QString>
#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QPushButton>
#include <QMessageBox>

namespace Ui {
class Search;
}

class Search : public QWidget
{
    Q_OBJECT

public:
    explicit Search(QWidget *parent = 0);
    int temp = 0;
    QString current_date1;
    QString current_date2;
    QString current_date3;
    int time;

    ~Search();

signals:
    void display(int number);

private slots:
    void on_pushButton_clicked();
    void deal();

    void on_pushButton_2_clicked();

private:
    Ui::Search *ui;
};

#endif // SEARCH_H
