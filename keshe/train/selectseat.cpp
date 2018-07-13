#include "selectseat.h"
#include "ui_selectseat.h"

extern QString AccountNumber1;
extern QString TrainNumber1;
extern QString Date1;
extern QString Departure1;
extern QString Terminal1;
extern QString DepTime1;
extern QString SeatType1;

SelectSeat::SelectSeat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectSeat)
{
    ui->setupUi(this);
    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setItem(0,0,new QTableWidgetItem("姓名"));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem("证件类型"));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem("证件号码"));
    ui->tableWidget->setItem(0,3,new QTableWidgetItem("座位位置"));
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->lineEdit->setText(SeatType1);
    if(SeatType1 == "商务座"){
        ui->pushButton_2->setVisible(false);
        ui->pushButton_4->setVisible(false);
        ui->pushButton->setText("A");
        ui->pushButton_2->setText("B");
        ui->pushButton_3->setText("C");
    }
    if(SeatType1 == "一等座"){
        ui->pushButton_3->setVisible(false);
        ui->pushButton->setText("A");
        ui->pushButton_2->setText("B");
        ui->pushButton_3->setText("C");
    }
    if(SeatType1 == "二等座"){
        ui->pushButton->setText("A");
        ui->pushButton_2->setText("B");
        ui->pushButton_3->setText("C");
    }
    if(SeatType1 == "硬卧"){
        ui->label_5->setVisible(false);
        ui->label_7->setVisible(false);
        ui->label_8->setVisible(false);
        ui->pushButton_4->setVisible(false);
        ui->pushButton_5->setVisible(false);
        ui->pushButton->setText("上铺");
        ui->pushButton_2->setText("中铺");
        ui->pushButton_3->setText("下铺");
    }
    if(SeatType1 == "软卧"){
        ui->label_5->setVisible(false);
        ui->label_7->setVisible(false);
        ui->label_8->setVisible(false);
        ui->pushButton_4->setVisible(false);
        ui->pushButton_5->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton->setText("上铺");
        ui->pushButton_3->setText("下铺");
    }
    QSqlQuery query;
    QString result;
    result="select BussPR,FirPR,SecPR,SePR,SleHPR,SleSPR from TrainInformation where TrainNumber = '"+TrainNumber1+"' and Date = '"+Date1+"';";
    query.exec(result);
    while(query.next())
    {
        if(SeatType1 == "商务座"){
            Price = query.value(0).toInt();
        }
        if(SeatType1 == "一等座"){
            Price = query.value(1).toInt();
        }
        if(SeatType1 == "二等座"){
            Price = query.value(2).toInt();
        }
        if(SeatType1 == "硬座"){
            Price = query.value(3).toInt();
        }
        if(SeatType1 == "硬卧"){
            Price = query.value(4).toInt();
        }
        if(SeatType1 == "软卧"){
            Price = query.value(5).toInt();
        }
    }
    TotalPrice = Price;
    qDebug() << TotalPrice;
}

SelectSeat::~SelectSeat()
{
    delete ui;
}

void SelectSeat::sendData1(QString Name,QString IDNumber,QString IDType)
{
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->setRowCount(row + 1);
    ui->tableWidget->setItem(row,0,new QTableWidgetItem(Name));
    ui->tableWidget->setItem(row,1,new QTableWidgetItem(IDType));
    ui->tableWidget->setItem(row,2,new QTableWidgetItem(IDNumber));
    TotalPrice = TotalPrice + Price;
    TotalPrice1 = QString::number(TotalPrice, 10);
    qDebug() << TotalPrice1;
    ui->lineEdit_2->setText(TotalPrice1);
}

void SelectSeat::on_pushButton_clicked()
{
    if(!ui->tableWidget->isItemSelected(ui->tableWidget->currentItem())){
        QMessageBox::critical(this,"错误",tr("未选择乘客！"));
        return;
    }
    if(!ui->tableWidget->isItemSelected(ui->tableWidget->currentItem())){
        QMessageBox::critical(this,"错误",tr("未选择乘客！"));
        return;
    }
    ui->tableWidget->setFocus();
    qDebug() << ui->tableWidget->currentItem();
    if(ui->tableWidget->currentItem()->row() == 0){
        QMessageBox::critical(this,"错误",tr("未选择乘客！"));
        return;
    }
    QString Type;
    if(SeatType1 == "商务座" or SeatType1 == "一等座" or SeatType1 == "二等座" or SeatType1 == "硬座"){
        Type = "A";
    }
    else{
        Type = "上铺";
    }
    ui->tableWidget->setItem(ui->tableWidget->currentItem()->row(),3,new QTableWidgetItem(Type));
}

void SelectSeat::on_pushButton_2_clicked()
{

    if(!ui->tableWidget->isItemSelected(ui->tableWidget->currentItem())){
        QMessageBox::critical(this,"错误",tr("未选择乘客！"));
        return;
    }
    if(ui->tableWidget->currentItem()->row() == 0){
        QMessageBox::critical(this,"错误",tr("未选择乘客！"));
        return;
    }
    ui->tableWidget->setFocus();
    QString Type;
    if(SeatType1 == "商务座" or SeatType1 == "一等座" or SeatType1 == "二等座" or SeatType1 == "硬座"){
        Type = "B";
    }
    else{
        Type = "中铺";
    }
    ui->tableWidget->setItem(ui->tableWidget->currentItem()->row(),3,new QTableWidgetItem(Type));
}

void SelectSeat::on_pushButton_3_clicked()
{
    if(!ui->tableWidget->isItemSelected(ui->tableWidget->currentItem())){
        QMessageBox::critical(this,"错误",tr("未选择乘客！"));
        return;
    }
    if(ui->tableWidget->currentItem()->row() == 0){
        QMessageBox::critical(this,"错误",tr("未选择乘客！"));
        return;
    }
    ui->tableWidget->setFocus();
    QString Type;
    if(SeatType1 == "商务座" or SeatType1 == "一等座" or SeatType1 == "二等座" or SeatType1 == "硬座"){
        Type = "C";
    }
    else{
        Type = "下铺";
    }
    ui->tableWidget->setItem(ui->tableWidget->currentItem()->row(),3,new QTableWidgetItem(Type));
}

void SelectSeat::on_pushButton_4_clicked()
{
    if(!ui->tableWidget->isItemSelected(ui->tableWidget->currentItem())){
        QMessageBox::critical(this,"错误",tr("未选择乘客！"));
        return;
    }
    if(ui->tableWidget->currentItem()->row() == 0){
        QMessageBox::critical(this,"错误",tr("未选择乘客！"));
        return;
    }
    ui->tableWidget->setFocus();
    QString Type = "D";
    ui->tableWidget->setItem(ui->tableWidget->currentItem()->row(),3,new QTableWidgetItem(Type));
}

void SelectSeat::on_pushButton_5_clicked()
{
    if(!ui->tableWidget->isItemSelected(ui->tableWidget->currentItem())){
        QMessageBox::critical(this,"错误",tr("未选择乘客！"));
        return;
    }
    if(ui->tableWidget->currentItem()->row() == 0){
        QMessageBox::critical(this,"错误",tr("未选择乘客！"));
        return;
    }
    ui->tableWidget->setFocus();
    QString Type = "F";
    ui->tableWidget->setItem(ui->tableWidget->currentItem()->row(),3,new QTableWidgetItem(Type));
}

void SelectSeat::on_pushButton_6_clicked()
{
    QMessageBox::StandardButton rb = QMessageBox::question(NULL, "购买车票", "是否要购买车票?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(rb == QMessageBox::Yes)
    {
    for(int row = 1;row < ui->tableWidget->rowCount();row++){
        if(ui->tableWidget->item(row, 3) == 0){
            QMessageBox::critical(this,"错误",tr("有乘客未选座"));
            return;
        }
    }
    QString Message;
    QSqlQuery query;
    QString result;
    QString SeatBox;
    QString SeatNumber;
    for(int row = 1;row < ui->tableWidget->rowCount();row++){
        int SeatBox1 = 0;
        int SeatNumber1 = 0;
        result="select max(SeatNumber) as a from Ticket where TrainNumber = '"+TrainNumber1+"' and Date = '"+Date1+"' and SeatLocate = '"+ui->tableWidget->item(row, 3)->text()+"' and SeatType ='"+SeatType1+"';";
        query.exec(result);
        while(query.next())
        {
            SeatNumber1 = query.value(0).toInt();
        }
        result="select max(SeatBox) as a from Ticket where TrainNumber = '"+TrainNumber1+"' and Date = '"+Date1+"' and SeatLocate = '"+ui->tableWidget->item(row, 3)->text()+"' and SeatType ='"+SeatType1+"';";
        query.exec(result);
        while(query.next())
        {
            SeatBox1 = query.value(0).toInt();
        }
        if(SeatNumber1 == 0 && SeatType1 == "商务座"){
            SeatBox1 = 1;
            SeatNumber1 = 1;
        }
        else if(SeatNumber1 == 0 && SeatType1 == "一等座"){
            SeatBox1 = 2;
            SeatNumber1 = 1;
        }
        else if(SeatNumber1 == 0 && SeatType1 == "二等座"){
            SeatBox1 = 4;
            SeatNumber1 = 1;
        }
        else if(SeatNumber1 == 0 && SeatType1 == "硬座"){
            SeatBox1 = 1;
            SeatNumber1 = 1;
        }
        else if(SeatNumber1 == 0 && SeatType1 == "硬卧"){
            SeatBox1 = 3;
            SeatNumber1 = 1;
        }
        else if(SeatNumber1 == 0 && SeatType1 == "软卧"){
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
        if(SeatBox1 > 1 && SeatType1 == "商务座"){
            Message = "所选座位："+ui->tableWidget->item(row, 3)->text()+"已无位置，请重新选座";
            QMessageBox::critical(this,"错误",Message);
            return;
        }
        if(SeatBox1 > 3 && SeatType1 == "一等座"){
            Message = "所选座位："+ui->tableWidget->item(row, 3)->text()+"已无位置，请重新选座";
            QMessageBox::critical(this,"错误",Message);
            return;
        }
        if(SeatBox1 > 7 && SeatType1 == "二等座"){
            Message = "所选座位："+ui->tableWidget->item(row, 3)->text()+"已无位置，请重新选座";
            QMessageBox::critical(this,"错误",Message);
            return;
        }
        if(SeatBox1 > 2 && SeatType1 == "硬座"){
            Message = "所选座位："+ui->tableWidget->item(row, 3)->text()+"已无位置，请重新选座";
            QMessageBox::critical(this,"错误",Message);
            return;
        }
        if(SeatBox1 > 6 && SeatType1 == "硬卧"){
            Message = "所选座位："+ui->tableWidget->item(row, 3)->text()+"已无位置，请重新选座";
            QMessageBox::critical(this,"错误",Message);
            return;
        }
        if(SeatBox1 > 7 && SeatType1 == "软卧"){
            Message = "所选座位："+ui->tableWidget->item(row, 3)->text()+"已无位置，请重新选座";
            QMessageBox::critical(this,"错误",Message);
            return;
        }
        SeatBox = QString::number(SeatBox1, 10);
        SeatNumber = QString::number(SeatNumber1, 10);
        result = "insert into Ticket(IDNumber,TrainNumber,AccountNumber,Departure,Terminal,Date,DepTime,Name,SeatNumber,SeatType,SeatBox,SeatLocate) values('"+ui->tableWidget->item(row, 2)->text()+"','"+TrainNumber1+"','"+AccountNumber1+"','"+Departure1+"','"+Terminal1+"','"+Date1+"','"+DepTime1+"','"+ui->tableWidget->item(row, 0)->text()+"','"+SeatNumber+"','"+SeatType1+"','"+SeatBox+"','"+ui->tableWidget->item(row, 3)->text()+"');";
        query.exec(result);
        QString Add = "购买成功 姓名："+ui->tableWidget->item(row, 0)->text()+"车次："+TrainNumber1+"座位类型："+SeatType1+"车厢号："+SeatBox+"座位号："+SeatNumber+ui->tableWidget->item(row, 3)->text();
        QMessageBox::information(this,"成功",Add);
    }
    this->close();
    }
}

void SelectSeat::on_pushButton_7_clicked()
{
    this->close();
}
