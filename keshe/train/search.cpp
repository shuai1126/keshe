#include "search.h"
#include "ui_search.h"
#include <QComboBox>
#include <QMessageBox>
#include "searchresult.h"

extern QString AccountNumber1;

Search::Search(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);
    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
    QDateTime current_date_time =QDateTime::currentDateTime();
    current_date1 =current_date_time.toString("yyyy");
    current_date2 =current_date_time.toString("MM");
    current_date3 =current_date_time.toString("dd");
    ui->comboBox_3->addItem(current_date1);
    ui->comboBox_6->setCurrentText(current_date2);
    ui->comboBox_7->setCurrentText(current_date3);
    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_2,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_3,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_4,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_5,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_6,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_7,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
}

Search::~Search()
{
    delete ui;
}

void Search::deal()
{
    int abb;
    int nnn;
    time = 0;
    nnn = ui->comboBox_6->currentText().toInt();
    abb = ui->comboBox_7->currentText().toInt();
    if(ui->comboBox->currentText() == ui->comboBox_2->currentText()){
        QMessageBox::critical(this,"错误",tr("出发地和目的地相同"));
        temp = 1;
        return;
    }

    if(ui->comboBox_6->currentText() == "01"){
        if(abb > 31){
            QMessageBox::critical(this,"错误",tr("日期不合法"));
            temp = 2;
            return;
        }
    }
    if(ui->comboBox_6->currentText() == "02"){
        if(abb > 28){
            QMessageBox::critical(this,"错误",tr("日期不合法"));
            temp = 2;
            return;
        }
    }
    if(ui->comboBox_6->currentText() == "03"){
        if(abb > 31){
            QMessageBox::critical(this,"错误",tr("日期不合法"));
            temp = 2;
            return;
        }
    }
    if(ui->comboBox_6->currentText() == "04"){
        if(abb > 30){
            QMessageBox::critical(this,"错误",tr("日期不合法"));
            temp = 2;
            return;
        }
    }
    if(ui->comboBox_6->currentText() == "05"){
        if(abb > 31){
            QMessageBox::critical(this,"错误",tr("日期不合法"));
            temp = 2;
            return;
        }
    }
    if(ui->comboBox_6->currentText() == "06"){
        if(abb > 30){
            QMessageBox::critical(this,"错误",tr("日期不合法"));
            temp = 2;
            return;
        }
    }
    if(ui->comboBox_6->currentText() == "07"){
        if(abb > 31){
            QMessageBox::critical(this,"错误",tr("日期不合法"));
            temp = 2;
            return;
        }
    }
    if(ui->comboBox_6->currentText() == "08"){
        if(abb > 31){
            QMessageBox::critical(this,"错误",tr("日期不合法"));
            temp = 2;
            return;
        }
    }
    if(ui->comboBox_6->currentText() == "09"){
        if(abb > 30){
            QMessageBox::critical(this,"错误",tr("日期不合法"));
            temp = 2;
            return;
        }
    }
    if(ui->comboBox_6->currentText() == "10"){
        if(abb > 30){
            QMessageBox::critical(this,"错误",tr("日期不合法"));
            temp = 2;
            return;
        }
    }
    if(ui->comboBox_6->currentText() == "11"){
        if(abb > 30){
            QMessageBox::critical(this,"错误",tr("日期不合法"));
            temp = 2;
            return;
        }
    }
    if(ui->comboBox_6->currentText() == "12"){
        if(abb > 31){
            QMessageBox::critical(this,"错误",tr("日期不合法"));
            temp = 2;
            return;
        }
    }
    if(nnn < current_date2.toInt()){
        QMessageBox::critical(this,"错误",tr("出发日期早于今天"));
        temp = 2;
        return;
    }
    if(nnn == current_date2.toInt() && abb < current_date3.toInt()){
        QMessageBox::critical(this,"错误",tr("出发日期早于今天"));
        temp = 2;
        return;
    }
    temp = 0;
    time = abb - current_date3.toInt();
    if(nnn - current_date2.toInt() != 0)
        time = time + (nnn - current_date2.toInt())*30;
}

void Search::on_pushButton_clicked()
{
    QString result;
    QSqlQuery query;
    if(temp == 1){
        QMessageBox::critical(this,"错误",tr("出发地和目的地相同"));
        return;
    }
    if(temp == 2){
        QMessageBox::critical(this,"错误",tr("日期错误"));
        return;
    }
    if(time >= 50){
        QMessageBox::information(this,"信息",tr("未到放票时间"));
        QMessageBox::StandardButton rb = QMessageBox::question(NULL, "放票提醒", "是否要设置放票提醒？", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        if(rb == QMessageBox::Yes)
        {
            result = "update Account set Data = '"+ui->comboBox_3->currentText()+ui->comboBox_6->currentText()+ui->comboBox_7->currentText()+"' where AccountNumber ='"+AccountNumber1+"';";
            query.exec(result);
        }
        QMessageBox::information(this,"信息",tr("设置成功"));
        return;
    }

    if(temp == 0){
        SearchResult *w = new SearchResult;
        w->sendData(ui->comboBox->currentText(),ui->comboBox_2->currentText(),ui->comboBox_3->currentText()+ui->comboBox_6->currentText()+ui->comboBox_7->currentText(),ui->comboBox_4->currentText(),ui->comboBox_5->currentText());
        w->show();
    }
}

void Search::on_pushButton_2_clicked()
{
    emit display(1);
    this->close();
}
