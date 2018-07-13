#ifndef CHANGE_H
#define CHANGE_H

#include <QWidget>
#include <QtSql>
#include <QMessageBox>

#include <order.h>

namespace Ui {
class Change;
}

class Change : public QWidget
{
    Q_OBJECT

public:
    explicit Change(QWidget *parent = 0);
    ~Change();
    int i = 0;
    QString a;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Change *ui;
};

#endif // CHANGE_H
