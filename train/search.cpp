#include "search.h"
#include "ui_search.h"
#include <QComboBox>
#include <QMessageBox>
#include "searchresult.h"

Search::Search(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);
    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_2,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_3,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_4,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_5,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
}

Search::~Search()
{
    delete ui;
}

void Search::deal()
{
    if(ui->comboBox->currentText() == ui->comboBox_2->currentText()){
        QMessageBox::critical(this,"错误",tr("出发地和目的地相同"));
        temp = 1;
    }
    else
        temp = 0;
}

void Search::on_pushButton_clicked()
{
    if(temp == 1){
        QMessageBox::critical(this,"错误",tr("出发地和目的地相同"));
        return;
    }
    if(temp == 0){
        SearchResult *w = new SearchResult;
        w->sendData(ui->comboBox->currentText(),ui->comboBox_2->currentText(),ui->comboBox_3->currentText(),ui->comboBox_4->currentText(),ui->comboBox_5->currentText());
        w->show();
    }
}

void Search::on_pushButton_2_clicked()
{
    emit display(1);
    this->close();
}
