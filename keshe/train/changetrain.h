#ifndef CHANGETRAIN_H
#define CHANGETRAIN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>
#include <QPushButton>
#include <QMessageBox>

namespace Ui {
class ChangeTrain;
}

class ChangeTrain : public QWidget
{
    Q_OBJECT

public:
    explicit ChangeTrain(QWidget *parent = 0);
    ~ChangeTrain();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ChangeTrain *ui;
};

#endif // CHANGETRAIN_H

