#include "selorder.h"
#include "ui_selorder.h"

extern QString AccountNumber1;
SelOrder::SelOrder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelOrder)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(10);
    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setItem(i,0,new QTableWidgetItem("顾客姓名"));
    ui->tableWidget->setItem(i,1,new QTableWidgetItem("出发城市"));
    ui->tableWidget->setItem(i,2,new QTableWidgetItem("到达城市"));
    ui->tableWidget->setItem(i,3,new QTableWidgetItem("出发日期"));
    ui->tableWidget->setItem(i,4,new QTableWidgetItem("出发时间"));
    ui->tableWidget->setItem(i,5,new QTableWidgetItem("车次"));
    ui->tableWidget->setItem(i,6,new QTableWidgetItem("身份证号"));
    ui->tableWidget->setItem(i,7,new QTableWidgetItem("车厢号"));
    ui->tableWidget->setItem(i,8,new QTableWidgetItem("座位号"));
    ui->tableWidget->setItem(i,9,new QTableWidgetItem("位置"));
    ui->tableWidget->horizontalHeader()->sectionResizeMode(QHeaderView::Stretch);
    i = 1;
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    QSqlQuery query;
    QString result;

    result = "select Name,Departure,Terminal,Date,DepTime,TrainNumber,IDNumber,SeatBox,SeatNumber,SeatLocate from Ticket where AccountNumber ='" + AccountNumber1 + "';";
    query.exec(result);           					//显示数据库列表
    while(query.next())                                    	    //遍历查询到的数据库列表
    {
          ui->tableWidget->setRowCount(i + 1);
          ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
          ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
          ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
          ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
          ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(4).toString()));
          ui->tableWidget->setItem(i,5,new QTableWidgetItem(query.value(5).toString()));
          ui->tableWidget->setItem(i,6,new QTableWidgetItem(query.value(6).toString()));
          ui->tableWidget->setItem(i,7,new QTableWidgetItem(query.value(7).toString()));
          ui->tableWidget->setItem(i,8,new QTableWidgetItem(query.value(8).toString()));
          ui->tableWidget->setItem(i,9,new QTableWidgetItem(query.value(9).toString()));
          i++;
    }
}

SelOrder::~SelOrder()
{
    delete ui;
}

void SelOrder::on_pushButton_3_clicked()
{
    this->close();
}

void SelOrder::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton rb = QMessageBox::question(NULL, "退票", "是否要退订当前车票?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(rb == QMessageBox::Yes)
    {
        QSqlQuery query;
        QString Name,Date,TrainNumber ;
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
        row = ui->tableWidget->currentItem()->row();
        result = "select Name,Date,TrainNumber from Ticket where AccountNumber ='" + AccountNumber1 + "' ;";
        query.exec(result);
        i = 1;
        while(query.next())
        {
             if(i == row){
                  Name = query.value(0).toString();
                  Date = query.value(1).toString();
                  TrainNumber = query.value(2).toString();
                  break;
              }
              i++;
              continue;
         }
        result = "delete from Ticket where TrainNumber = '"+TrainNumber+"' and Date = '"+Date+"'and Name = '"+Name+"';";
        query.exec(result);
        QMessageBox::information(this,"退票成功",tr("退订车票成功！"));
        i = 0;
        ui->tableWidget->setColumnCount(10);
        ui->tableWidget->setRowCount(1);
        i = 1;
        result = "select Name,Departure,Terminal,Date,DepTime,TrainNumber,IDNumber,SeatBox,SeatNumber,SeatLocate from Ticket where AccountNumber ='" + AccountNumber1 + "';";
        query.exec(result);           					//显示数据库列表
        while(query.next())                             //遍历查询到的数据库列表
        {
              ui->tableWidget->setRowCount(i + 1);//刷新表
              ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
              ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
              ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
              ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
              ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(4).toString()));
              ui->tableWidget->setItem(i,5,new QTableWidgetItem(query.value(5).toString()));
              ui->tableWidget->setItem(i,6,new QTableWidgetItem(query.value(6).toString()));
              ui->tableWidget->setItem(i,7,new QTableWidgetItem(query.value(7).toString()));
              ui->tableWidget->setItem(i,8,new QTableWidgetItem(query.value(8).toString()));
              ui->tableWidget->setItem(i,9,new QTableWidgetItem(query.value(9).toString()));
              i++;
        }
    }
}
