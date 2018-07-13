#include "admmenu.h"
#include "ui_admmenu.h"
#include "changetrain.h"


AdmMenu::AdmMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdmMenu)
{
    ui->setupUi(this);
    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
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

void AdmMenu::on_pushButton_3_clicked()
{
    DeleteTrain *m = new DeleteTrain;
    m->show();
}

void AdmMenu::on_pushButton_2_clicked()
{
   ChangeTrain *b = new ChangeTrain;
   b->show();
}
