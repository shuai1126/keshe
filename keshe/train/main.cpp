#include "mainwindow.h"
#include <QApplication>
#include "option.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Option w;
    w.show();

    return a.exec();
}
