#ifndef SELORDER_H
#define SELORDER_H

#include <QWidget>
#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QPushButton>
#include <QMessageBox>

namespace Ui {
class SelOrder;
}

class SelOrder : public QWidget
{
    Q_OBJECT

public:
    explicit SelOrder(QWidget *parent = 0);
    int i = 0;
    ~SelOrder();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SelOrder *ui;
};

#endif // SELORDER_H
