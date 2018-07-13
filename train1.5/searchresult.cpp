#include "searchresult.h"
#include "ui_searchresult.h"

SearchResult::SearchResult(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SearchResult)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(12);
    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setItem(i,0,new QTableWidgetItem("车次"));
    ui->tableWidget->setItem(i,1,new QTableWidgetItem("出发时间"));
    ui->tableWidget->setItem(i,2,new QTableWidgetItem("到达时间"));
    ui->tableWidget->setItem(i,3,new QTableWidgetItem("席位"));
    ui->tableWidget->setItem(i,4,new QTableWidgetItem("价格"));
    ui->tableWidget->setItem(i,5,new QTableWidgetItem("剩余票数"));
    ui->tableWidget->setItem(i,6,new QTableWidgetItem("席位"));
    ui->tableWidget->setItem(i,7,new QTableWidgetItem("价格"));
    ui->tableWidget->setItem(i,8,new QTableWidgetItem("剩余票数"));
    ui->tableWidget->setItem(i,9,new QTableWidgetItem("席位"));
    ui->tableWidget->setItem(i,10,new QTableWidgetItem("价格"));
    ui->tableWidget->setItem(i,11,new QTableWidgetItem("剩余票数"));
    ui->tableWidget->horizontalHeader()->sectionResizeMode(QHeaderView::Stretch);
    i = 1;
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
}

SearchResult::~SearchResult()
{
    delete ui;
}

void SearchResult::sendData(QString data1,QString data2,QString data3,QString data4,QString data5)
{
    QSqlQuery query;
    QString result;
    Data1 = data1;
    Data2 = data2;
    Data3 = data3;
    double dep;
    double ter;
    QString dep1;
    QString ter1;
    if(data4 == "不限")
        time = "";
    if(data4 == "00:01-08:00")
        time = "and DepTime >= '1' and DepTime <= '800' ";
    if(data4 == "08:01-12:00")
        time = "and DepTime >= '801' and DepTime <= '1200' ";
    if(data4 == "12:01-16:00")
        time = "and DepTime >= '1201' and DepTime <= '1600' ";
    if(data4 == "16:01-20:00")
        time = "and DepTime >= '1601' and DepTime <= '2000' ";
    if(data4 == "20:01-00:00")
        time = "and DepTime >= '2001' and DepTime <= '2359' ";
    if(data5 == "不限")
        temp = 2;
    if(data5 == "高铁/动车组 G/D/C")
        temp = 1;
    if(data5 == "普速列车 Y/K/T/Z")
        temp = 0;
    result = "select TrainNumber,Type,DepTime,ArrTime,BussRE,FirRE,SecRE,SeRE,SleHRE,SleSRE from TrainInformation where Departure ='" + data1 + "' and Terminal ='" + data2 + "' and Date ='" + data3 +"'" + time + ";";
    query.exec(result);           					//显示数据库列表
    while(query.next())                                    	    //遍历查询到的数据库列表
    {
        if(temp == 2){
            ui->tableWidget->setRowCount(i + 1);
            dep = query.value(2).toInt()/100;
            ter = query.value(3).toInt()/100;
            dep1 = QString::number(dep, 10, 2);
            ter1 = QString::number(ter, 10, 2);
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(dep1));
            ui->tableWidget->setItem(i,2,new QTableWidgetItem(ter1));
            if(query.value(1).toString() == "G"){
                ui->tableWidget->setItem(i,3,new QTableWidgetItem("商务座"));
                ui->tableWidget->setItem(i,5,new QTableWidgetItem(query.value(4).toString()));
                ui->tableWidget->setItem(i,6,new QTableWidgetItem("一等座"));
                ui->tableWidget->setItem(i,8,new QTableWidgetItem(query.value(5).toString()));
                ui->tableWidget->setItem(i,9,new QTableWidgetItem("二等座"));
                ui->tableWidget->setItem(i,11,new QTableWidgetItem(query.value(6).toString()));
                i++;
            }
            if(query.value(1).toString() == "K"){
                ui->tableWidget->setItem(i,3,new QTableWidgetItem("硬座"));
                ui->tableWidget->setItem(i,5,new QTableWidgetItem(query.value(7).toString()));
                ui->tableWidget->setItem(i,6,new QTableWidgetItem("硬卧"));
                ui->tableWidget->setItem(i,8,new QTableWidgetItem(query.value(8).toString()));
                ui->tableWidget->setItem(i,9,new QTableWidgetItem("软卧"));
                ui->tableWidget->setItem(i,11,new QTableWidgetItem(query.value(9).toString()));
                i++;
            }
        }
        if(temp == 1){
            if(query.value(1).toString() == "G"){
                ui->tableWidget->setRowCount(i + 1);
                dep = query.value(2).toInt()/100;
                ter = query.value(3).toInt()/100;
                dep1 = QString::number(dep, 10, 2);
                ter1 = QString::number(ter, 10, 2);
                ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
                ui->tableWidget->setItem(i,1,new QTableWidgetItem(dep1));
                ui->tableWidget->setItem(i,2,new QTableWidgetItem(ter1));
                ui->tableWidget->setItem(i,3,new QTableWidgetItem("商务座"));
                ui->tableWidget->setItem(i,5,new QTableWidgetItem(query.value(4).toString()));
                ui->tableWidget->setItem(i,6,new QTableWidgetItem("一等座"));
                ui->tableWidget->setItem(i,8,new QTableWidgetItem(query.value(5).toString()));
                ui->tableWidget->setItem(i,9,new QTableWidgetItem("二等座"));
                ui->tableWidget->setItem(i,11,new QTableWidgetItem(query.value(6).toString()));
                i++;
            }
        }
        if(temp == 0){
            if(query.value(1).toString() == "K"){
                ui->tableWidget->setRowCount(i + 1);
                dep = query.value(2).toInt()/100;
                ter = query.value(3).toInt()/100;
                dep1 = QString::number(dep, 10, 2);
                ter1 = QString::number(ter, 10, 2);
                ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
                ui->tableWidget->setItem(i,1,new QTableWidgetItem(dep1));
                ui->tableWidget->setItem(i,2,new QTableWidgetItem(ter1));
                ui->tableWidget->setItem(i,3,new QTableWidgetItem("硬座"));
                ui->tableWidget->setItem(i,5,new QTableWidgetItem(query.value(7).toString()));
                ui->tableWidget->setItem(i,6,new QTableWidgetItem("硬卧"));
                ui->tableWidget->setItem(i,8,new QTableWidgetItem(query.value(8).toString()));
                ui->tableWidget->setItem(i,9,new QTableWidgetItem("软卧"));
                ui->tableWidget->setItem(i,11,new QTableWidgetItem(query.value(9).toString()));
                i++;
            }
        }
    }
    i= 1;
    result = "select BussPR,FirPR,SecPR,SePR,SleHPR,SleSPR,Type from TrainInformation where Departure ='" + data1 + "' and Terminal ='" + data2 + "' and Date ='" + data3 +"'" + time + ";";
    query.exec(result);           					//显示数据库列表
    while(query.next())                                    	    //遍历查询到的数据库列表
    {
        if(temp == 2){
            if(query.value(6).toString() == "G"){
                ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(0).toString()));
                ui->tableWidget->setItem(i,7,new QTableWidgetItem(query.value(1).toString()));
                ui->tableWidget->setItem(i,10,new QTableWidgetItem(query.value(2).toString()));
                i++;
            }
            if(query.value(6).toString() == "K"){
                ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(3).toString()));
                ui->tableWidget->setItem(i,7,new QTableWidgetItem(query.value(4).toString()));
                ui->tableWidget->setItem(i,10,new QTableWidgetItem(query.value(5).toString()));
                i++;
            }
        }
        if(temp == 1){
            if(query.value(6).toString() == "G"){
                ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(0).toString()));
                ui->tableWidget->setItem(i,7,new QTableWidgetItem(query.value(1).toString()));
                ui->tableWidget->setItem(i,10,new QTableWidgetItem(query.value(2).toString()));
                i++;
            }
        }
        if(temp == 0){
            if(query.value(6).toString() == "K"){
                ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(3).toString()));
                ui->tableWidget->setItem(i,7,new QTableWidgetItem(query.value(4).toString()));
                ui->tableWidget->setItem(i,10,new QTableWidgetItem(query.value(5).toString()));
                i++;
            }
        }
    }
    i = 1;
}

void SearchResult::on_pushButton_clicked()
{
    this->close();
}

void SearchResult::on_pushButton_2_clicked()
{
    Buy *b = new Buy;
    QSqlQuery query;
    QString TrainNumber;
    QString result;
    int row;
    if(!ui->tableWidget->isItemSelected(ui->tableWidget->currentItem())){
        QMessageBox::critical(this,"错误",tr("未选择车次！"));
        return;
    }
    if(ui->tableWidget->currentItem()->row() == 0){
        QMessageBox::critical(this,"错误",tr("未选择车次！"));
        return;
    }
    row = ui->tableWidget->currentItem()->row();
    result = "select TrainNumber,Type from TrainInformation where Departure ='" + Data1 + "' and Terminal ='" + Data2 + "' and Date ='" + Data3 +"'" + time + ";";
    query.exec(result);
    i = 1;
    while(query.next())
    {
        if(temp == 1){
            if(query.value(1).toString() == "G"){
                if(i == row){
                    TrainNumber = query.value(0).toString();
                    break;
                }
                i++;
                continue;
            }
        }
        if(temp == 0){
            if(query.value(1).toString() == "K"){
                if(i == row){
                    TrainNumber = query.value(0).toString();
                    break;
                }
                i++;
                continue;
            }
        }
        if(temp == 2){
            if(i == row){
                TrainNumber = query.value(0).toString();
                break;
            }
            i++;
            continue;
        }
    }
    b->sendDataTrain(TrainNumber,Data3);
    b->show();
    this->close();
}
