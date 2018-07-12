#ifndef SELMENU_H
#define SELMENU_H

#include <QWidget>
#include <search.h>
#include <selorder.h>
#include <QKeyEvent>

namespace Ui {
class SelMenu;
}

class SelMenu : public QWidget
{
    Q_OBJECT

public:
    explicit SelMenu(QWidget *parent = 0);
    ~SelMenu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SelMenu *ui;
};

#endif // SELMENU_H
