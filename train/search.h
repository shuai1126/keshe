#ifndef SEARCH_H
#define SEARCH_H

#include <QWidget>
#include <QString>
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
