#include "selmenu.h"
#include "ui_selmenu.h"

SelMenu::SelMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelMenu)
{
    ui->setupUi(this);
}

SelMenu::~SelMenu()
{
    delete ui;
}


void SelMenu::on_pushButton_4_clicked()
{
    this->close();
}

void SelMenu::on_pushButton_clicked()
{
    Search *a = new Search;//跳转到查询界面
    a->show();
}

void SelMenu::on_pushButton_2_clicked()
{
    SelOrder *b = new SelOrder;//跳转到售票员订单界面
    b->show();
}
