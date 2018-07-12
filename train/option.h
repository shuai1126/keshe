#ifndef OPTION_H
#define OPTION_H

#include <QWidget>
#include <QStackedLayout>
#include <QVBoxLayout>
#include <search.h>
#include <menu.h>
#include <searchresult.h>
#include <login.h>
#include <register.h>

#include <QSqlDatabase>
#include <QDebug>
#include <QtSql>

namespace Ui {
class Option;
}

class Option : public QWidget
{
    Q_OBJECT

public:
    explicit Option(QWidget *parent = 0);
    ~Option();

private:
    Ui::Option *ui;
    Search *search;
    Menu *menu;
    Login *login;
    Register *register1;
    //SearchResult *searchresult;
    QStackedLayout *stackLayout;
    QVBoxLayout *mainLayout;
};

#endif // OPTION_H
