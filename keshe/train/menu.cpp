#include "menu.h"
#include "ui_menu.h"

extern QString AccountName1;

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
    ui->label->setText("欢迎使用！");
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    emit display(2);
}

void Menu::on_pushButton_2_clicked()
{
    Message *m = new Message;
    m->show();
}

void Menu::on_pushButton_3_clicked()
{
    Order *o = new Order;
    o->show();
}

void Menu::on_pushButton_4_clicked()
{
    emit display(0);
}
