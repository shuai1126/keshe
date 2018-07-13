#include "admmenu.h"
#include "ui_admmenu.h"

AdmMenu::AdmMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdmMenu)
{
    ui->setupUi(this);
}

AdmMenu::~AdmMenu()
{
    delete ui;
}

void AdmMenu::on_pushButton_4_clicked()
{
    this->close();
}

void AdmMenu::on_pushButton_clicked()
{
    AddTrain *a = new AddTrain;
    a->show();
}
