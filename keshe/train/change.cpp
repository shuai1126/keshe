#include "change.h"
#include "ui_change.h"

extern QString Departure2;
extern QString Terminal2;
extern QString TrainNumber2;
extern QString SeatType2;
extern QString Name2;
extern QString Date2;

Change::Change(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Change)
{
    ui->setupUi(this);
    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setItem(i,0,new QTableWidgetItem("车次"));
    ui->tableWidget->setItem(i,1,new QTableWidgetItem("出发时间"));
    ui->tableWidget->setItem(i,2,new QTableWidgetItem("到达时间"));
    ui->tableWidget->setItem(i,3,new QTableWidgetItem("席位"));
    ui->tableWidget->setItem(i,4,new QTableWidgetItem("剩余票数"));
    ui->tableWidget->setItem(i,5,new QTableWidgetItem("价格"));
    ui->tableWidget->setItem(i,6,new QTableWidgetItem("出发日期"));
    ui->tableWidget->horizontalHeader()->sectionResizeMode(QHeaderView::Stretch);
    i = 1;
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    QSqlQuery query;
    QString result;
    QString type;
    qDebug() << Departure2;
    qDebug() << Terminal2;
    qDebug() << TrainNumber2;
    type = "select Type from TrainInformation where TrainNumber='" + TrainNumber2 + "';";
    query.exec(type);
    while(query.next())                                    	    //遍历查询到的数据库列表
    {
        a = query.value(0).toString();
    }

    result = "select TrainNumber,DepTime,ArrTime,BussRE,FirRE,SecRE,SeRE,SleHRE,SleSRE,BussPR,FirPR,SecPR,SePR,SleHPR,SleSPR,Date from TrainInformation where Departure='" + Departure2 + "'and Terminal='" + Terminal2 + "'and Type='"+a+"';";
    query.exec(result);           					//显示数据库列表
    while(query.next())                                    	    //遍历查询到的数据库列表
    {
        ui->tableWidget->setRowCount(i + 1);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(query.value(15).toString()));
        if(SeatType2 == "商务座"){
        ui->tableWidget->setItem(i,3,new QTableWidgetItem("商务座"));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(3).toString()));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(query.value(9).toString()));
        }
        if(SeatType2 == "一等座"){
        ui->tableWidget->setItem(i,3,new QTableWidgetItem("一等座"));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(4).toString()));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(query.value(10).toString()));
        }
        if(SeatType2 == "二等座"){
        ui->tableWidget->setItem(i,3,new QTableWidgetItem("二等座"));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(5).toString()));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(query.value(11).toString()));
        }
        if(SeatType2 == "硬座"){
        ui->tableWidget->setItem(i,3,new QTableWidgetItem("硬座"));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(6).toString()));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(query.value(12).toString()));
        }
        if(SeatType2 == "硬卧"){
        ui->tableWidget->setItem(i,3,new QTableWidgetItem("硬卧"));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(7).toString()));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(query.value(13).toString()));
        }
        if(SeatType2 == "软卧"){
        ui->tableWidget->setItem(i,3,new QTableWidgetItem("软卧"));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(8).toString()));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(query.value(14).toString()));
        }
        i++;
     }


}

Change::~Change()
{
    delete ui;
}

void Change::on_pushButton_clicked()
{
    this->close();
}

void Change::on_pushButton_2_clicked()
{
    QSqlQuery query;
    QString Date,TrainNumber,DepTime ;
    QString result;
    int row;
    if(!ui->tableWidget->isItemSelected(ui->tableWidget->currentItem())){
        QMessageBox::critical(this,"错误",tr("未选择车票！"));
        return;
     }
    if(ui->tableWidget->currentItem()->row() == 0){
         QMessageBox::critical(this,"错误",tr("未选择车票！"));
         return;
     }
    TrainNumber = ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 0)->text();
    Date = ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 6)->text();
    DepTime = ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 1)->text();
    row = ui->tableWidget->currentItem()->row();
    QString SeatBox;
    QString SeatNumber;
    int SeatBox1 = 0;
    int SeatNumber1 = 0;
    result="select max(SeatNumber) as a from Ticket where TrainNumber = '"+ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 0)->text()+"' and Date = '"+ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 1)->text()+"' and SeatLocate = 'A' and SeatType ='"+SeatType2+"';";
    query.exec(result);
    while(query.next())
    {
        SeatNumber1 = query.value(0).toInt();
    }
    result="select max(SeatBox) as a from Ticket where TrainNumber = '"+ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 0)->text()+"' and Date = '"+ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 1)->text()+"' and SeatLocate = 'A' and SeatType ='"+SeatType2+"';";
    query.exec(result);
    while(query.next())
    {
        SeatBox1 = query.value(0).toInt();
    }
    if(SeatNumber1 == 0 && SeatType2 == "商务座"){
        SeatBox1 = 1;
        SeatNumber1 = 1;
    }
    else if(SeatNumber1 == 0 && SeatType2 == "一等座"){
        SeatBox1 = 2;
        SeatNumber1 = 1;
    }
    else if(SeatNumber1 == 0 && SeatType2 == "二等座"){
        SeatBox1 = 4;
        SeatNumber1 = 1;
    }
    else if(SeatNumber1 == 0 && SeatType2 == "硬座"){
        SeatBox1 = 1;
        SeatNumber1 = 1;
    }
    else if(SeatNumber1 == 0 && SeatType2 == "硬卧"){
        SeatBox1 = 3;
        SeatNumber1 = 1;
    }
    else if(SeatNumber1 == 0 && SeatType2 == "软卧"){
        SeatBox1 = 7;
        SeatNumber1 = 1;
    }
    else if(SeatNumber1 == 20){
        SeatNumber1 = 1;
        SeatBox1++;
    }
    else{
        SeatNumber1++;
    }
    SeatBox = QString::number(SeatBox1, 10);
    SeatNumber = QString::number(SeatNumber1, 10);
    if(TrainNumber == TrainNumber2){
        QMessageBox::critical(this,"失败",tr("不可改签到同一列车！"));
    }
    else{
        result = "update Ticket set TrainNumber = '"+TrainNumber+"' , Date = '"+Date+"' , DepTime = '"+DepTime+"' where Name = '"+Name2+"' and TrainNumber ='"+TrainNumber2+"' and Date ='"+Date2+"';";
        qDebug() << result;
        query.exec(result);
        QMessageBox::information(this,"改签成功",tr("改签成功！"));
        this->close();
    }

}
