#ifndef RESET_H
#define RESET_H

#include <QWidget>
#include <QtSql>
#include <QMessageBox>


namespace Ui {
class Reset;
}

class Reset : public QWidget
{
    Q_OBJECT

public:
    explicit Reset(QWidget *parent = 0);
    ~Reset();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Reset *ui;
};

#endif // RESET_H
