#include "selbuy.h"
#include "ui_selbuy.h"

QString TrainNumber10;
QString Date10;
QString Departure10;
QString Terminal10;
QString DepTime10;
QString SeatType10;
QString Typetype;
extern QString AccountNumber1;

SelBuy::SelBuy(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelBuy)
{
    ui->setupUi(this);
    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setRowCount(2);
    ui->tableWidget->setItem(0,0,new QTableWidgetItem("车次"));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem("出发日期"));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem("出发时间"));
    ui->tableWidget->setItem(0,3,new QTableWidgetItem("到达时间"));
    ui->tableWidget->setItem(0,4,new QTableWidgetItem("途经站点"));
}

SelBuy::~SelBuy()
{
    delete ui;
}

void SelBuy::sendDataTrain(QString TrainNumber, QString Date)
{
    QSqlQuery query;
    QString result;
    TrainNumber10 = TrainNumber;
    Date10 = Date;
    ui->tableWidget->setItem(1,0,new QTableWidgetItem(TrainNumber));
    ui->tableWidget->setItem(1,1,new QTableWidgetItem(Date));
    result = "select DepTime,ArrTime,PassStation,Type,BussRE,FirRE,SecRE,SeRE,SleHRE,SleSRE from TrainInformation where TrainNumber = '"+TrainNumber+"' and Date = '"+Date+"';";
    query.exec(result);
    while(query.next())
    {
        ui->tableWidget->setItem(1,2,new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(1,3,new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget->setItem(1,4,new QTableWidgetItem(query.value(2).toString()));
        Typetype = query.value(3).toString();
        if(query.value(3).toString() == "G"){
            if(query.value(4) != "0"){
                remain1 = query.value(4).toInt();
                ui->comboBox->addItem(tr("商务座"));
            }
            if(query.value(5) != "0"){
                remain2 = query.value(5).toInt();
                ui->comboBox->addItem(tr("一等座"));
            }
            if(query.value(6) != "0"){
                remain3 = query.value(6).toInt();
                ui->comboBox->addItem(tr("二等座"));
            }
            if(query.value(4) == "0" && query.value(5) == "0" && query.value(6) == "0"){
                QMessageBox::critical(this,"错误",tr("无剩余车票！"));
            }
        }
        if(query.value(3).toString() == "K"){
            if(query.value(7) != "0"){
                remain1 = query.value(7).toInt();
                ui->comboBox->addItem(tr("硬座"));
            }
            if(query.value(8) != "0"){
                remain2 = query.value(8).toInt();
                ui->comboBox->addItem(tr("硬卧"));
            }
            if(query.value(9) != "0"){
                remain3 = query.value(9).toInt();
                ui->comboBox->addItem(tr("软卧"));
            }
            if(query.value(7) == "0" && query.value(8) == "0" && query.value(9) == "0"){
                QMessageBox::critical(this,"错误",tr("无剩余车票！"));
            }
        }
    }
    result = "select Departure,Terminal,DepTime from TrainInformation where TrainNumber = '"+TrainNumber+"' and Date = '"+Date+"';";
    query.exec(result);
    while(query.next())
    {
        Departure10 = query.value(0).toString();
        Terminal10 = query.value(1).toString();
        DepTime10 = query.value(2).toString();
    }
}

void SelBuy::on_pushButton_2_clicked()
{
    this->close();
}

void SelBuy::on_pushButton_3_clicked()
{
    SeatType10 = ui->comboBox->currentText();
    AddCustomer *a = new AddCustomer;//跳转到添加/删除顾客并购买车票界面
    a->show();
}
