#include "order.h"
#include "ui_order.h"

QString Departure2;
QString Terminal2;
QString TrainNumber2;
QString SeatType2;
QString Name2;
QString Date2;

extern QString AccountNumber1;
extern QString SeatType1;

Order::Order(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Order)
{
    ui->setupUi(this);
    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
    ui->tableWidget->setColumnCount(9);
    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setItem(i,0,new QTableWidgetItem("用户姓名"));
    ui->tableWidget->setItem(i,1,new QTableWidgetItem("出发城市"));
    ui->tableWidget->setItem(i,2,new QTableWidgetItem("到达城市"));
    ui->tableWidget->setItem(i,3,new QTableWidgetItem("出发日期"));
    ui->tableWidget->setItem(i,4,new QTableWidgetItem("出发时间"));
    ui->tableWidget->setItem(i,5,new QTableWidgetItem("车次"));
    ui->tableWidget->setItem(i,6,new QTableWidgetItem("座位号"));
    ui->tableWidget->setItem(i,7,new QTableWidgetItem("席位"));
    ui->tableWidget->setItem(i,8,new QTableWidgetItem("车厢号"));

    ui->tableWidget->horizontalHeader()->sectionResizeMode(QHeaderView::Stretch);
    i = 1;
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    QSqlQuery query;
    QString result;

    result = "select Name,Departure,Terminal,Date,DepTime,TrainNumber,SeatNumber,SeatType,SeatBox,SeatLocate from Ticket where AccountNumber ='" + AccountNumber1 + "';";
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
          ui->tableWidget->setItem(i,6,new QTableWidgetItem(query.value(6).toString()+query.value(9).toString()));
          ui->tableWidget->setItem(i,7,new QTableWidgetItem(query.value(7).toString()));
          ui->tableWidget->setItem(i,8,new QTableWidgetItem(query.value(8).toString()));
          i++;
    }
}

Order::~Order()
{
    delete ui;
}

void Order::on_pushButton_2_clicked()
{
    QString account1;
    int account;
    QMessageBox::StandardButton rb = QMessageBox::question(NULL, "退票", "是否要退所选车票?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
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
        QString type;

        type= ui->tableWidget->item(row, 7)->text();

        Name = ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 0)->text();
        Date = ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 3)->text();
        TrainNumber = ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 5)->text();
        result = "delete from Ticket where TrainNumber = '"+TrainNumber+"' and Date = '"+Date+"'and Name = '"+Name+"';";
        query.exec(result);
        //新加
        if(type == "商务座"){
          result="select BussRE from TrainInformation where TrainNumber = '"+TrainNumber+"'";
          query.exec(result);
          while(query.next())
          {
              account = query.value(0).toInt() + 1;
          }
          account1 = QString::number(account, 10);
          result = "update TrainInformation set BussRE = 'account1' where TrainNumber = '"+TrainNumber+"';";
          query.exec(result);
        }
        else if(type == "一等座"){
          result="select FirRE from TrainInformation where TrainNumber = '"+TrainNumber+"'";
          query.exec(result);
          while(query.next())
          {
               account = query.value(0).toInt() + 1;
          }
          account1 = QString::number(account, 10);
          result = "update TrainInformation set FirRE = 'account1' where TrainNumber = '"+TrainNumber+"';";
          query.exec(result);
        }
        else if(type == "二等座"){
           result="select SecRE from TrainInformation where TrainNumber = '"+TrainNumber+"'";
           query.exec(result);
           while(query.next())
           {
               account = query.value(0).toInt() + 1;
           }
           account1 = QString::number(account, 10);
           result = "update TrainInformation set SecRE = 'account1' where TrainNumber = '"+TrainNumber+"';";
           query.exec(result);
        }
        else if(type == "硬座"){
            result="select SeRE from TrainInformation where TrainNumber = '"+TrainNumber+"'";
            query.exec(result);
            while(query.next())
            {
                 account = query.value(0).toInt() + 1;
             }
             account1 = QString::number(account, 10);
             result = "update TrainInformation set SeRE = 'account1' where TrainNumber = '"+TrainNumber+"';";
             query.exec(result);
         }
         else if(type == "硬卧"){
              result="select SleHRE from TrainInformation where TrainNumber = '"+TrainNumber+"'";
              query.exec(result);
              while(query.next())
              {
                   account = query.value(0).toInt() + 1;
              }
              account1 = QString::number(account, 10);
              result = "update TrainInformation set SleHRE = 'account1' where TrainNumber = '"+TrainNumber+"';";
              query.exec(result);
          }
          else if(type == "软卧"){
               result="select SleSRE from TrainInformation where TrainNumber = '"+TrainNumber+"'";
               query.exec(result);
               while(query.next())
               {
                    account = query.value(0).toInt() + 1;
                }
                account1 = QString::number(account, 10);
                result = "update TrainInformation set SleSRE = 'account1' where TrainNumber = '"+TrainNumber+"';";
                query.exec(result);
          }


        QMessageBox::information(this,"成功",tr("退票成功！"));
        i = 0;
        ui->tableWidget->setColumnCount(9);
        ui->tableWidget->setRowCount(1);
        i = 1;
        result = "select Name,Departure,Terminal,Date,DepTime,TrainNumber,SeatNumber,SeatType,SeatBox,SeatLocate from Ticket where AccountNumber ='" + AccountNumber1 + "';";
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
              ui->tableWidget->setItem(i,6,new QTableWidgetItem(query.value(6).toString()+query.value(9).toString()));
              ui->tableWidget->setItem(i,7,new QTableWidgetItem(query.value(7).toString()));
              ui->tableWidget->setItem(i,8,new QTableWidgetItem(query.value(8).toString()));
              i++;
        }
    }
}

void Order::on_pushButton_3_clicked()
{
    this->close();
}

void Order::on_pushButton_clicked()
{
    Name2 = ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 0)->text();
    Departure2 = ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 1)->text();
    Terminal2 = ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 2)->text();
    TrainNumber2 = ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 5)->text();
    SeatType2 = ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 7)->text();
    Date2 = ui->tableWidget->item(ui->tableWidget->currentItem()->row(), 3)->text();
    Change * r = new Change;
    r->show();
}

void Order::on_pushButton_4_clicked()
{
    QSqlQuery query;
    QString result;
    i = 0;
    ui->tableWidget->setColumnCount(9);
    ui->tableWidget->setRowCount(1);
    i = 1;
    result = "select Name,Departure,Terminal,Date,DepTime,TrainNumber,SeatNumber,SeatType,SeatBox,SeatLocate from Ticket where AccountNumber ='" + AccountNumber1 + "';";
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
          ui->tableWidget->setItem(i,6,new QTableWidgetItem(query.value(6).toString()+query.value(9).toString()));
          ui->tableWidget->setItem(i,7,new QTableWidgetItem(query.value(7).toString()));
          ui->tableWidget->setItem(i,8,new QTableWidgetItem(query.value(8).toString()));
          i++;
    }
}
