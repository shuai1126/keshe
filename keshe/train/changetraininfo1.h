#ifndef ADDTRAIN_H
#define ADDTRAIN_H

#include <QWidget>

#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QPushButton>
#include <QMessageBox>

namespace Ui {
class ChangeTrainInfo1;
}

class ChangeTrainInfo1 : public QWidget
{
    Q_OBJECT

public:
    explicit ChangeTrainInfo1(QWidget *parent = 0);
    int temp = 0;
    ~ChangeTrainInfo1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ChangeTrainInfo1 *ui;
};

#endif // ADDTRAIN_H
