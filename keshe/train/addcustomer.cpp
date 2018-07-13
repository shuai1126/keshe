#include "addcustomer.h"
#include "ui_addcustomer.h"

extern QString AccountNumber1;
extern QString TrainNumber10;
extern QString Date10;
extern QString Departure10;
extern QString Terminal10;
extern QString DepTime10;
extern QString SeatType10;

AddCustomer::AddCustomer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddCustomer)
{
    ui->setupUi(this);
    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setItem(0,0,new QTableWidgetItem("姓名"));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem("证件号码(18位)"));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem("车厢号码"));
    ui->tableWidget->setItem(0,3,new QTableWidgetItem("座位号码"));
    ui->tableWidget->setItem(0,4,new QTableWidgetItem("座位位置"));
    ui->tableWidget->horizontalHeader()->setDefaultSectionSize(169);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    if(SeatType10 == "商务座"){
        ui->pushButton_5->setVisible(false);
        ui->pushButton_7->setVisible(false);
        ui->pushButton_8->setText("A");
        ui->pushButton_5->setText("B");
        ui->pushButton_9->setText("C");
    }
    if(SeatType10 == "一等座"){
        ui->pushButton_9->setVisible(false);
        ui->pushButton_8->setText("A");
        ui->pushButton_5->setText("B");
        ui->pushButton_9->setText("C");
    }
    if(SeatType10 == "二等座"){
        ui->pushButton_8->setText("A");
        ui->pushButton_5->setText("B");
        ui->pushButton_9->setText("C");
    }
    if(SeatType10 == "硬卧"){
        ui->label_5->setVisible(false);
        ui->label_7->setVisible(false);
        ui->label_8->setVisible(false);
        ui->pushButton_7->setVisible(false);
        ui->pushButton_6->setVisible(false);
        ui->pushButton_8->setText("上铺");
        ui->pushButton_5->setText("中铺");
        ui->pushButton_9->setText("下铺");
    }
    if(SeatType10 == "软卧"){
        ui->label_5->setVisible(false);
        ui->label_7->setVisible(false);
        ui->label_8->setVisible(false);
        ui->pushButton_7->setVisible(false);
        ui->pushButton_6->setVisible(false);
        ui->pushButton_5->setVisible(false);
        ui->pushButton_8->setText("上铺");
        ui->pushButton_9->setText("下铺");
    }
}

AddCustomer::~AddCustomer()
{
    delete ui;
}

void AddCustomer::on_pushButton_4_clicked()
{
    this->close();
}

void AddCustomer::on_pushButton_clicked()
{
    if(ui->tableWidget->rowCount() == 11){
        QMessageBox::critical(this,"错误",tr("一次最多可添加10名顾客！"));
        return;
    }
    int w = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(w);
}

void AddCustomer::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton rb = QMessageBox::question(NULL, "删除顾客", "是否要删除这名顾客?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(rb == QMessageBox::Yes)
    {
        if(ui->tableWidget->currentRow() >= 2){
            ui->tableWidget->removeRow(ui->tableWidget->currentRow());
        }
        else{
            QMessageBox::critical(this,"错误",tr("最少要保留一名顾客"));
        }
    }
}

void AddCustomer::on_pushButton_3_clicked()//添加顾客并购买车票
{
    QString TrainNumber11;
    QString Date11;
    QString Departure11;
    QString Terminal11;
    QString DepTime11;
    TrainNumber11 = TrainNumber10;
    Date11 = Date10;
    Departure11 = Departure10;
    Terminal11 = Terminal10;
    DepTime11 = DepTime10;
    QMessageBox::StandardButton rb = QMessageBox::question(NULL, "确认购买车票", "是否确认所填写信息无误并购买车票?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(rb == QMessageBox::Yes)
    {
        for(int row = 1;row < ui->tableWidget->rowCount();row++){
            if(ui->tableWidget->item(row,0) == 0){
                QMessageBox::critical(this,"错误",tr("请填写顾客姓名"));
                return;
            }
            if(ui->tableWidget->item(row,1) == 0){
                QMessageBox::critical(this,"错误",tr("请填写顾客证件号码"));
                return;
            }
            if(ui->tableWidget->item(row,2) == 0){
                QMessageBox::critical(this,"错误",tr("请填写顾客车厢号码"));
                return;
            }
            if(ui->tableWidget->item(row,3) == 0){
                QMessageBox::critical(this,"错误",tr("请填写顾客座位号码"));
                return;
            }
            if(ui->tableWidget->item(row,4) == 0){
                QMessageBox::critical(this,"错误",tr("请选择顾客座位位置"));
                return;
            }
        }

        QSqlQuery query;
        QString result;

        for(int row = 1;row < ui->tableWidget->rowCount();row++){
            if(ui->tableWidget->item(row, 0)->text() == NULL){
                QMessageBox::critical(this,"错误",tr("请填写顾客姓名"));
                return;
            }
            if(ui->tableWidget->item(row, 1)->text() == NULL){
                QMessageBox::critical(this,"错误",tr("请填写顾客证件号码"));
                return;
            }
            if(ui->tableWidget->item(row,2) == 0){
                QMessageBox::critical(this,"错误",tr("请填写顾客车厢号码"));
                return;
            }
            if(ui->tableWidget->item(row,3) == 0){
                QMessageBox::critical(this,"错误",tr("请填写顾客座位号码"));
                return;
            }
            if(ui->tableWidget->item(row,4) == 0){
                QMessageBox::critical(this,"错误",tr("请选择顾客座位位置"));
                return;
            }
            result = "insert into Ticket(IDNumber,TrainNumber,Departure,Terminal,Date,DepTime,SeatNumber,AccountNumber,Name,SeatType,SeatBox,SeatLocate) values('"+ui->tableWidget->item(row, 1)->text()+"','"+TrainNumber11+"','"+Departure11+"','"+Terminal11+"','"+Date11+"','"+DepTime11+"','"+ui->tableWidget->item(row, 3)->text()+"','"+AccountNumber1+"','"+ui->tableWidget->item(row, 0)->text()+"','"+SeatType10+"','"+ui->tableWidget->item(row, 2)->text()+"','"+ui->tableWidget->item(row, 4)->text()+"');";
            query.exec(result);
        }
        QMessageBox::information(this,"购买成功",tr("顾客车票购买成功！"));
        int m = ui->tableWidget->rowCount();
        for(int row = 1;row < m;row++){
            if(ui->tableWidget->currentRow() >= 0){
                ui->tableWidget->removeRow(ui->tableWidget->currentRow());
            }
        }
    }
}

void AddCustomer::on_pushButton_8_clicked()
{
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
    if(SeatType10 == "商务座" or SeatType10 == "一等座" or SeatType10 == "二等座" or SeatType10 == "硬座"){
        Type = "A";
    }
    else{
        Type = "上铺";
    }
    ui->tableWidget->setItem(ui->tableWidget->currentItem()->row(),4,new QTableWidgetItem(Type));
}

void AddCustomer::on_pushButton_5_clicked()
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
    qDebug() << ui->tableWidget->currentItem();
    QString Type;
    if(SeatType10 == "商务座" or SeatType10 == "一等座" or SeatType10 == "二等座" or SeatType10 == "硬座"){
        Type = "B";
    }
    else{
        Type = "中铺";
    }
    ui->tableWidget->setItem(ui->tableWidget->currentItem()->row(),4,new QTableWidgetItem(Type));
}

void AddCustomer::on_pushButton_9_clicked()
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
    qDebug() << ui->tableWidget->currentItem();
    QString Type;
    if(SeatType10 == "商务座" or SeatType10 == "一等座" or SeatType10 == "二等座" or SeatType10 == "硬座"){
        Type = "C";
    }
    else{
        Type = "下铺";
    }
    ui->tableWidget->setItem(ui->tableWidget->currentItem()->row(),4,new QTableWidgetItem(Type));
}

void AddCustomer::on_pushButton_7_clicked()
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
    ui->tableWidget->setItem(ui->tableWidget->currentItem()->row(),4,new QTableWidgetItem(Type));
}

void AddCustomer::on_pushButton_6_clicked()
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
    ui->tableWidget->setItem(ui->tableWidget->currentItem()->row(),4,new QTableWidgetItem(Type));
}
