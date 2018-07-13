#ifndef DELETETRAIN_H
#define DELETETRAIN_H

#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class DeleteTrain;
}

class DeleteTrain : public QWidget
{
    Q_OBJECT

public:
    explicit DeleteTrain(QWidget *parent = 0);
    ~DeleteTrain();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::DeleteTrain *ui;

};

#endif // DELETETRAIN_H
