#include "buy.h"
#include "ui_buy.h"

extern QString AccountNumber1;
QString TrainNumber1;
QString Date1;
QString Departure1;
QString Terminal1;
QString DepTime1;
QString SeatType1;
extern int k;

Buy::Buy(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Buy)
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
    ui->tableWidget_2->setColumnCount(4);
    ui->tableWidget_2->setRowCount(2);
    ui->tableWidget_2->setItem(0,0,new QTableWidgetItem("选择"));
    ui->tableWidget_2->setItem(0,1,new QTableWidgetItem("证件类型"));
    ui->tableWidget_2->setItem(0,2,new QTableWidgetItem("证件号码"));
    ui->tableWidget_2->setItem(0,3,new QTableWidgetItem("姓名"));
    ui->tableWidget_2->setCellWidget(1,0,ui->comboBox_3);
    ui->tableWidget_2->setCellWidget(2,0,ui->comboBox_4);
    ui->tableWidget_2->setCellWidget(3,0,ui->comboBox_5);
    ui->tableWidget_2->setCellWidget(4,0,ui->comboBox_6);
    ui->tableWidget_2->setCellWidget(5,0,ui->comboBox_7);
    deal();
    AddItem();
    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(deal1()));
    connect(ui->comboBox_2,SIGNAL(currentIndexChanged(int)),this,SLOT(deal2()));
    connect(ui->comboBox_3,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_4,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_5,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_6,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_7,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_2->setSelectionMode(QAbstractItemView::SingleSelection);
}

Buy::~Buy()
{
    delete ui;
}

void Buy::deal1()
{
    temp = 0;
    if(ui->comboBox->currentText() == "商务座" or ui->comboBox->currentText() == "硬座"){
        if(remain1 < ui->comboBox_2->currentText().toInt()){
            QMessageBox::critical(this,"错误",tr("剩余车票不足请修改！"));
            temp = 1;
            return;
        }
    }
    if(ui->comboBox->currentText() == "一等座" or ui->comboBox->currentText() == "硬卧"){
        if(remain2 < ui->comboBox_2->currentText().toInt()){
            QMessageBox::critical(this,"错误",tr("剩余车票不足请修改！"));
            temp = 1;
            return;
        }
    }
    if(ui->comboBox->currentText() == "二等座" or ui->comboBox->currentText() == "软卧"){
        if(remain3 < ui->comboBox_2->currentText().toInt()){
            QMessageBox::critical(this,"错误",tr("剩余车票不足请修改！"));
            temp = 1;
            return;
        }
    }
    SeatType1 = ui->comboBox->currentText();
    deal();
    AddItem();
}

void Buy::deal2()
{
    temp = 0;
    if(ui->comboBox->currentText() == "商务座" or ui->comboBox->currentText() == "硬座"){
        if(remain1 < ui->comboBox_2->currentText().toInt()){
            QMessageBox::critical(this,"错误",tr("剩余车票不足请修改！"));
            temp = 1;
            return;
        }
    }
    if(ui->comboBox->currentText() == "一等座" or ui->comboBox->currentText() == "硬卧"){
        if(remain2 < ui->comboBox_2->currentText().toInt()){
            QMessageBox::critical(this,"错误",tr("剩余车票不足请修改！"));
            temp = 1;
            return;
        }
    }
    if(ui->comboBox->currentText() == "二等座" or ui->comboBox->currentText() == "软卧"){
        if(remain3 < ui->comboBox_2->currentText().toInt()){
            QMessageBox::critical(this,"错误",tr("剩余车票不足请修改！"));
            temp = 1;
            return;
        }
    }
    ui->tableWidget_2->setRowCount(ui->comboBox_2->currentText().toInt()+1);
    if(ui->comboBox_2->currentText().toInt() == 1)
        ui->tableWidget_2->setCellWidget(1,0,ui->comboBox_3);
    if(ui->comboBox_2->currentText().toInt() == 2){
        qDebug() << "1";
        ui->tableWidget_2->setCellWidget(1,0,ui->comboBox_3);
        qDebug() << "2";
        ui->tableWidget_2->setCellWidget(2,0,ui->comboBox_4); //bug
        qDebug() << "3";
    }
    if(ui->comboBox_2->currentText().toInt() == 3){
        ui->tableWidget_2->setCellWidget(1,0,ui->comboBox_3);
        ui->tableWidget_2->setCellWidget(2,0,ui->comboBox_4);
        ui->tableWidget_2->setCellWidget(3,0,ui->comboBox_5);
    }
    if(ui->comboBox_2->currentText().toInt() == 4){
        ui->tableWidget_2->setCellWidget(1,0,ui->comboBox_3);
        ui->tableWidget_2->setCellWidget(2,0,ui->comboBox_4);
        ui->tableWidget_2->setCellWidget(3,0,ui->comboBox_5);
        ui->tableWidget_2->setCellWidget(4,0,ui->comboBox_6);
    }
    if(ui->comboBox_2->currentText().toInt() == 5){
        ui->tableWidget_2->setCellWidget(1,0,ui->comboBox_3);
        ui->tableWidget_2->setCellWidget(2,0,ui->comboBox_4);
        ui->tableWidget_2->setCellWidget(3,0,ui->comboBox_5);
        ui->tableWidget_2->setCellWidget(4,0,ui->comboBox_6);
        ui->tableWidget_2->setCellWidget(5,0,ui->comboBox_7);
    }
    qDebug() << ui->comboBox_2->currentText().toInt();
    deal();
    AddItem();
}

void Buy::deal()
{
    int i = 0;
    if(ui->comboBox_3->currentText() == "" && ui->comboBox_4->currentText() == "" && ui->comboBox_5->currentText() == "" && ui->comboBox_6->currentText() == "" && ui->comboBox_7->currentText() == ""){
        QSqlQuery query;
        QString result;
        result = "select Name,IDType,IDNumber from Account where AccountNumber = '"+AccountNumber1+"';";
        query.exec(result);
        i = 1;
        while(query.next())
        {
            if(i == 1){
                Name1 = query.value(0).toString();
                IDType1 = query.value(1).toString();
                IDNumber1 = query.value(2).toString();
            }
            if(i == 2){
                Name2 = query.value(0).toString();
                IDType2 = query.value(1).toString();
                IDNumber2 = query.value(2).toString();
            }
            if(i == 3){
                Name3 = query.value(0).toString();
                IDType3 = query.value(1).toString();
                IDNumber3 = query.value(2).toString();
            }
            if(i == 4){
                Name4 = query.value(0).toString();
                IDType4 = query.value(1).toString();
                IDNumber4 = query.value(2).toString();
            }
            if(i == 5){
                Name5 = query.value(0).toString();
                IDType5 = query.value(1).toString();
                IDNumber5 = query.value(2).toString();
            }
            if(i == 6){
                Name6 = query.value(0).toString();
                IDType6 = query.value(1).toString();
                IDNumber6 = query.value(2).toString();
            }
            if(i == 7){
                Name7 = query.value(0).toString();
                IDType7 = query.value(1).toString();
                IDNumber7 = query.value(2).toString();
            }
            if(i == 8){
                Name8 = query.value(0).toString();
                IDType8 = query.value(1).toString();
                IDNumber8 = query.value(2).toString();
            }
            if(i == 9){
                Name9 = query.value(0).toString();
                IDType9 = query.value(1).toString();
                IDNumber9 = query.value(2).toString();
            }
            if(i == 10){
                Name10 = query.value(0).toString();
                IDType10 = query.value(1).toString();
                IDNumber10 = query.value(2).toString();
            }
            x = i;
            ui->comboBox_3->addItem(query.value(0).toString()+query.value(1).toString());
            ui->comboBox_4->addItem(query.value(0).toString()+query.value(1).toString());
            ui->comboBox_5->addItem(query.value(0).toString()+query.value(1).toString());
            ui->comboBox_6->addItem(query.value(0).toString()+query.value(1).toString());
            ui->comboBox_7->addItem(query.value(0).toString()+query.value(1).toString());
            i++;
        }
    }
    if(k == 0){
        QSqlQuery query;
        QString result;
        result = "select Name,IDType,IDNumber from Account where AccountNumber = '"+AccountNumber1+"';";
        query.exec(result);
        i = 1;
        while(query.next())
        {
            if(i == 1){
                Name1 = query.value(0).toString();
                IDType1 = query.value(1).toString();
                IDNumber1 = query.value(2).toString();
            }
            if(i == 2){
                Name2 = query.value(0).toString();
                IDType2 = query.value(1).toString();
                IDNumber2 = query.value(2).toString();
            }
            if(i == 3){
                Name3 = query.value(0).toString();
                IDType3 = query.value(1).toString();
                IDNumber3 = query.value(2).toString();
            }
            if(i == 4){
                Name4 = query.value(0).toString();
                IDType4 = query.value(1).toString();
                IDNumber4 = query.value(2).toString();
            }
            if(i == 5){
                Name5 = query.value(0).toString();
                IDType5 = query.value(1).toString();
                IDNumber5 = query.value(2).toString();
            }
            if(i == 6){
                Name6 = query.value(0).toString();
                IDType6 = query.value(1).toString();
                IDNumber6 = query.value(2).toString();
            }
            if(i == 7){
                Name7 = query.value(0).toString();
                IDType7 = query.value(1).toString();
                IDNumber7 = query.value(2).toString();
            }
            if(i == 8){
                Name8 = query.value(0).toString();
                IDType8 = query.value(1).toString();
                IDNumber8 = query.value(2).toString();
            }
            if(i == 9){
                Name9 = query.value(0).toString();
                IDType9 = query.value(1).toString();
                IDNumber9 = query.value(2).toString();
            }
            if(i == 10){
                Name10 = query.value(0).toString();
                IDType10 = query.value(1).toString();
                IDNumber10 = query.value(2).toString();
            }
            ui->comboBox_3->addItem(query.value(0).toString()+query.value(1).toString());
            ui->comboBox_4->addItem(query.value(0).toString()+query.value(1).toString());
            ui->comboBox_5->addItem(query.value(0).toString()+query.value(1).toString());
            ui->comboBox_6->addItem(query.value(0).toString()+query.value(1).toString());
            ui->comboBox_7->addItem(query.value(0).toString()+query.value(1).toString());
            i++;
        }
        //ui->comboBox_3->removeItem(0);
        k = 1;
    }
    AddItem();
}

void Buy::AddItem()
{
    if(ui->tableWidget_2->rowCount() >=2){
        if(ui->comboBox_3->currentText() == Name1+IDType1){
            ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(IDType1));
            ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(IDNumber1));
            ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(Name1));
        }
        if(ui->comboBox_3->currentText() == Name2+IDType2){
            ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(IDType2));
            ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(IDNumber2));
            ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(Name2));
        }
        if(ui->comboBox_3->currentText() == Name3+IDType3){
            ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(IDType3));
            ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(IDNumber3));
            ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(Name3));
        }
        if(ui->comboBox_3->currentText() == Name4+IDType4){
            ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(IDType4));
            ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(IDNumber4));
            ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(Name4));
        }
        if(ui->comboBox_3->currentText() == Name5+IDType5){
            ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(IDType5));
            ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(IDNumber5));
            ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(Name5));
        }
        if(ui->comboBox_3->currentText() == Name6+IDType6){
            ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(IDType6));
            ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(IDNumber6));
            ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(Name6));
        }
        if(ui->comboBox_3->currentText() == Name7+IDType7){
            ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(IDType7));
            ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(IDNumber7));
            ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(Name7));
        }
        if(ui->comboBox_3->currentText() == Name8+IDType8){
            ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(IDType8));
            ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(IDNumber8));
            ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(Name8));
        }
        if(ui->comboBox_3->currentText() == Name9+IDType9){
            ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(IDType9));
            ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(IDNumber9));
            ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(Name9));
        }
        if(ui->comboBox_3->currentText() == Name10+IDType10){
            ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(IDType10));
            ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(IDNumber10));
            ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(Name10));
        }
        if(ui->tableWidget_2->rowCount() >= 3){
            if(ui->comboBox_4->currentText() == Name1+IDType1){
                ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(IDType1));
                ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(IDNumber1));
                ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(Name1));
            }
            if(ui->comboBox_4->currentText() == Name2+IDType2){
                ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(IDType2));
                ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(IDNumber2));
                ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(Name2));
            }
            if(ui->comboBox_4->currentText() == Name3+IDType3){
                ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(IDType3));
                ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(IDNumber3));
                ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(Name3));
            }
            if(ui->comboBox_4->currentText() == Name4+IDType4){
                ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(IDType4));
                ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(IDNumber4));
                ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(Name4));
            }
            if(ui->comboBox_4->currentText() == Name5+IDType5){
                ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(IDType5));
                ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(IDNumber5));
                ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(Name5));
            }
            if(ui->comboBox_4->currentText() == Name6+IDType6){
                ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(IDType6));
                ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(IDNumber6));
                ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(Name6));
            }
            if(ui->comboBox_4->currentText() == Name7+IDType7){
                ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(IDType7));
                ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(IDNumber7));
                ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(Name7));
            }
            if(ui->comboBox_4->currentText() == Name8+IDType8){
                ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(IDType8));
                ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(IDNumber8));
                ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(Name8));
            }
            if(ui->comboBox_4->currentText() == Name9+IDType9){
                ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(IDType9));
                ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(IDNumber9));
                ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(Name9));
            }
            if(ui->comboBox_4->currentText() == Name10+IDType10){
                ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(IDType10));
                ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(IDNumber10));
                ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(Name10));
            }

            if(ui->tableWidget_2->rowCount() >= 4){
                if(ui->comboBox_5->currentText() == Name1+IDType1){
                    ui->tableWidget_2->setItem(3,1,new QTableWidgetItem(IDType1));
                    ui->tableWidget_2->setItem(3,2,new QTableWidgetItem(IDNumber1));
                    ui->tableWidget_2->setItem(3,3,new QTableWidgetItem(Name1));
                }
                if(ui->comboBox_5->currentText() == Name2+IDType2){
                    ui->tableWidget_2->setItem(3,1,new QTableWidgetItem(IDType2));
                    ui->tableWidget_2->setItem(3,2,new QTableWidgetItem(IDNumber2));
                    ui->tableWidget_2->setItem(3,3,new QTableWidgetItem(Name2));
                }
                if(ui->comboBox_5->currentText() == Name3+IDType3){
                    ui->tableWidget_2->setItem(3,1,new QTableWidgetItem(IDType3));
                    ui->tableWidget_2->setItem(3,2,new QTableWidgetItem(IDNumber3));
                    ui->tableWidget_2->setItem(3,3,new QTableWidgetItem(Name3));
                }
                if(ui->comboBox_5->currentText() == Name4+IDType4){
                    ui->tableWidget_2->setItem(3,1,new QTableWidgetItem(IDType4));
                    ui->tableWidget_2->setItem(3,2,new QTableWidgetItem(IDNumber4));
                    ui->tableWidget_2->setItem(3,3,new QTableWidgetItem(Name4));
                }
                if(ui->comboBox_5->currentText() == Name5+IDType5){
                    ui->tableWidget_2->setItem(3,1,new QTableWidgetItem(IDType5));
                    ui->tableWidget_2->setItem(3,2,new QTableWidgetItem(IDNumber5));
                    ui->tableWidget_2->setItem(3,3,new QTableWidgetItem(Name5));
                }
                if(ui->comboBox_5->currentText() == Name6+IDType6){
                    ui->tableWidget_2->setItem(3,1,new QTableWidgetItem(IDType6));
                    ui->tableWidget_2->setItem(3,2,new QTableWidgetItem(IDNumber6));
                    ui->tableWidget_2->setItem(3,3,new QTableWidgetItem(Name6));
                }
                if(ui->comboBox_5->currentText() == Name7+IDType7){
                    ui->tableWidget_2->setItem(3,1,new QTableWidgetItem(IDType7));
                    ui->tableWidget_2->setItem(3,2,new QTableWidgetItem(IDNumber7));
                    ui->tableWidget_2->setItem(3,3,new QTableWidgetItem(Name7));
                }
                if(ui->comboBox_5->currentText() == Name8+IDType8){
                    ui->tableWidget_2->setItem(3,1,new QTableWidgetItem(IDType8));
                    ui->tableWidget_2->setItem(3,2,new QTableWidgetItem(IDNumber8));
                    ui->tableWidget_2->setItem(3,3,new QTableWidgetItem(Name8));
                }
                if(ui->comboBox_5->currentText() == Name9+IDType9){
                    ui->tableWidget_2->setItem(3,1,new QTableWidgetItem(IDType9));
                    ui->tableWidget_2->setItem(3,2,new QTableWidgetItem(IDNumber9));
                    ui->tableWidget_2->setItem(3,3,new QTableWidgetItem(Name9));
                }
                if(ui->comboBox_5->currentText() == Name10+IDType10){
                    ui->tableWidget_2->setItem(3,1,new QTableWidgetItem(IDType10));
                    ui->tableWidget_2->setItem(3,2,new QTableWidgetItem(IDNumber10));
                    ui->tableWidget_2->setItem(3,3,new QTableWidgetItem(Name10));
                }

                if(ui->tableWidget_2->rowCount() >= 5){
                    if(ui->comboBox_6->currentText() == Name1+IDType1){
                        ui->tableWidget_2->setItem(4,1,new QTableWidgetItem(IDType1));
                        ui->tableWidget_2->setItem(4,2,new QTableWidgetItem(IDNumber1));
                        ui->tableWidget_2->setItem(4,3,new QTableWidgetItem(Name1));
                    }
                    if(ui->comboBox_6->currentText() == Name2+IDType2){
                        ui->tableWidget_2->setItem(4,1,new QTableWidgetItem(IDType2));
                        ui->tableWidget_2->setItem(4,2,new QTableWidgetItem(IDNumber2));
                        ui->tableWidget_2->setItem(4,3,new QTableWidgetItem(Name2));
                    }
                    if(ui->comboBox_6->currentText() == Name3+IDType3){
                        ui->tableWidget_2->setItem(4,1,new QTableWidgetItem(IDType3));
                        ui->tableWidget_2->setItem(4,2,new QTableWidgetItem(IDNumber3));
                        ui->tableWidget_2->setItem(4,3,new QTableWidgetItem(Name3));
                    }
                    if(ui->comboBox_6->currentText() == Name4+IDType4){
                        ui->tableWidget_2->setItem(4,1,new QTableWidgetItem(IDType4));
                        ui->tableWidget_2->setItem(4,2,new QTableWidgetItem(IDNumber4));
                        ui->tableWidget_2->setItem(4,3,new QTableWidgetItem(Name4));
                    }
                    if(ui->comboBox_6->currentText() == Name5+IDType5){
                        ui->tableWidget_2->setItem(4,1,new QTableWidgetItem(IDType5));
                        ui->tableWidget_2->setItem(4,2,new QTableWidgetItem(IDNumber5));
                        ui->tableWidget_2->setItem(4,3,new QTableWidgetItem(Name5));
                    }
                    if(ui->comboBox_6->currentText() == Name6+IDType6){
                        ui->tableWidget_2->setItem(4,1,new QTableWidgetItem(IDType6));
                        ui->tableWidget_2->setItem(4,2,new QTableWidgetItem(IDNumber6));
                        ui->tableWidget_2->setItem(4,3,new QTableWidgetItem(Name6));
                    }
                    if(ui->comboBox_6->currentText() == Name7+IDType7){
                        ui->tableWidget_2->setItem(4,1,new QTableWidgetItem(IDType7));
                        ui->tableWidget_2->setItem(4,2,new QTableWidgetItem(IDNumber7));
                        ui->tableWidget_2->setItem(4,3,new QTableWidgetItem(Name7));
                    }
                    if(ui->comboBox_6->currentText() == Name8+IDType8){
                        ui->tableWidget_2->setItem(4,1,new QTableWidgetItem(IDType8));
                        ui->tableWidget_2->setItem(4,2,new QTableWidgetItem(IDNumber8));
                        ui->tableWidget_2->setItem(4,3,new QTableWidgetItem(Name8));
                    }
                    if(ui->comboBox_6->currentText() == Name9+IDType9){
                        ui->tableWidget_2->setItem(4,1,new QTableWidgetItem(IDType9));
                        ui->tableWidget_2->setItem(4,2,new QTableWidgetItem(IDNumber9));
                        ui->tableWidget_2->setItem(4,3,new QTableWidgetItem(Name9));
                    }
                    if(ui->comboBox_6->currentText() == Name10+IDType10){
                        ui->tableWidget_2->setItem(4,1,new QTableWidgetItem(IDType10));
                        ui->tableWidget_2->setItem(4,2,new QTableWidgetItem(IDNumber10));
                        ui->tableWidget_2->setItem(4,3,new QTableWidgetItem(Name10));
                    }

                    if(ui->tableWidget_2->rowCount() >= 6){
                        if(ui->comboBox_7->currentText() == Name1+IDType1){
                            ui->tableWidget_2->setItem(5,1,new QTableWidgetItem(IDType1));
                            ui->tableWidget_2->setItem(5,2,new QTableWidgetItem(IDNumber1));
                            ui->tableWidget_2->setItem(5,3,new QTableWidgetItem(Name1));
                        }
                        if(ui->comboBox_7->currentText() == Name2+IDType2){
                            ui->tableWidget_2->setItem(5,1,new QTableWidgetItem(IDType2));
                            ui->tableWidget_2->setItem(5,2,new QTableWidgetItem(IDNumber2));
                            ui->tableWidget_2->setItem(5,3,new QTableWidgetItem(Name2));
                        }
                        if(ui->comboBox_7->currentText() == Name3+IDType3){
                            ui->tableWidget_2->setItem(5,1,new QTableWidgetItem(IDType3));
                            ui->tableWidget_2->setItem(5,2,new QTableWidgetItem(IDNumber3));
                            ui->tableWidget_2->setItem(5,3,new QTableWidgetItem(Name3));
                        }
                        if(ui->comboBox_7->currentText() == Name4+IDType4){
                            ui->tableWidget_2->setItem(5,1,new QTableWidgetItem(IDType4));
                            ui->tableWidget_2->setItem(5,2,new QTableWidgetItem(IDNumber4));
                            ui->tableWidget_2->setItem(5,3,new QTableWidgetItem(Name4));
                        }
                        if(ui->comboBox_7->currentText() == Name5+IDType5){
                            ui->tableWidget_2->setItem(5,1,new QTableWidgetItem(IDType5));
                            ui->tableWidget_2->setItem(5,2,new QTableWidgetItem(IDNumber5));
                            ui->tableWidget_2->setItem(5,3,new QTableWidgetItem(Name5));
                        }
                        if(ui->comboBox_7->currentText() == Name6+IDType6){
                            ui->tableWidget_2->setItem(5,1,new QTableWidgetItem(IDType6));
                            ui->tableWidget_2->setItem(5,2,new QTableWidgetItem(IDNumber6));
                            ui->tableWidget_2->setItem(5,3,new QTableWidgetItem(Name6));
                        }
                        if(ui->comboBox_7->currentText() == Name7+IDType7){
                            ui->tableWidget_2->setItem(5,1,new QTableWidgetItem(IDType7));
                            ui->tableWidget_2->setItem(5,2,new QTableWidgetItem(IDNumber7));
                            ui->tableWidget_2->setItem(5,3,new QTableWidgetItem(Name7));
                        }
                        if(ui->comboBox_7->currentText() == Name8+IDType8){
                            ui->tableWidget_2->setItem(5,1,new QTableWidgetItem(IDType8));
                            ui->tableWidget_2->setItem(5,2,new QTableWidgetItem(IDNumber8));
                            ui->tableWidget_2->setItem(5,3,new QTableWidgetItem(Name8));
                        }
                        if(ui->comboBox_7->currentText() == Name9+IDType9){
                            ui->tableWidget_2->setItem(5,1,new QTableWidgetItem(IDType9));
                            ui->tableWidget_2->setItem(5,2,new QTableWidgetItem(IDNumber9));
                            ui->tableWidget_2->setItem(5,3,new QTableWidgetItem(Name9));
                        }
                        if(ui->comboBox_7->currentText() == Name10+IDType10){
                            ui->tableWidget_2->setItem(5,1,new QTableWidgetItem(IDType10));
                            ui->tableWidget_2->setItem(5,2,new QTableWidgetItem(IDNumber10));
                            ui->tableWidget_2->setItem(5,3,new QTableWidgetItem(Name10));
                        }
                    }
               }
          }
      }
    }
}


void Buy::sendDataTrain(QString TrainNumber,QString Date)
{
    QSqlQuery query;
    QString result;
    double dep;
    double ter;
    QString dep1;
    QString ter1;
    TrainNumber1 = TrainNumber;
    Date1 = Date;
    ui->tableWidget->setItem(1,0,new QTableWidgetItem(TrainNumber));
    ui->tableWidget->setItem(1,1,new QTableWidgetItem(Date));
    result = "select DepTime,ArrTime,PassStation,Type,BussRE,FirRE,SecRE,SeRE,SleHRE,SleSRE from TrainInformation where TrainNumber = '"+TrainNumber+"' and Date = '"+Date+"';";
    query.exec(result);
    while(query.next())
    {
        dep = query.value(0).toInt()/100;
        ter = query.value(1).toInt()/100;
        dep1 = QString::number(dep, 10, 2);
        ter1 = QString::number(ter, 10, 2);
        ui->tableWidget->setItem(1,2,new QTableWidgetItem(dep1));
        ui->tableWidget->setItem(1,3,new QTableWidgetItem(ter1));
        ui->tableWidget->setItem(1,4,new QTableWidgetItem(query.value(2).toString()));
        Type = query.value(3).toString();
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
        Departure1 = query.value(0).toString();
        Terminal1 = query.value(1).toString();
        DepTime1 = query.value(2).toString();
    }
}

void Buy::on_pushButton_2_clicked()
{
    this->close();
}

void Buy::on_pushButton_clicked()
{
        if(ui->tableWidget_2->rowCount() == 3){
            if(ui->comboBox_3->currentText() == ui->comboBox_4->currentText()){
                QMessageBox::critical(this,"错误",tr("乘车人相同"));
                return;
            }
        }
        if(ui->tableWidget_2->rowCount() == 4){
            if(ui->comboBox_3->currentText() == ui->comboBox_4->currentText() || ui->comboBox_3->currentText() == ui->comboBox_5->currentText() || ui->comboBox_4->currentText() == ui->comboBox_5->currentText()){
                QMessageBox::critical(this,"错误",tr("乘车人相同"));
                return;
            }
        }
        if(ui->tableWidget_2->rowCount() == 5){
            if(ui->comboBox_3->currentText() == ui->comboBox_4->currentText() || ui->comboBox_3->currentText() == ui->comboBox_5->currentText() || ui->comboBox_3->currentText() == ui->comboBox_6->currentText() || ui->comboBox_4->currentText() == ui->comboBox_5->currentText() || ui->comboBox_4->currentText() == ui->comboBox_6->currentText() || ui->comboBox_5->currentText() == ui->comboBox_6->currentText()){
                QMessageBox::critical(this,"错误",tr("乘车人相同"));
                return;
            }
        }
        if(ui->tableWidget_2->rowCount() == 6){
            if(ui->comboBox_3->currentText() == ui->comboBox_4->currentText() || ui->comboBox_3->currentText() == ui->comboBox_5->currentText() || ui->comboBox_3->currentText() == ui->comboBox_6->currentText() || ui->comboBox_3->currentText() == ui->comboBox_7->currentText() || ui->comboBox_4->currentText() == ui->comboBox_5->currentText() || ui->comboBox_4->currentText() == ui->comboBox_6->currentText() || ui->comboBox_4->currentText() == ui->comboBox_7->currentText() || ui->comboBox_5->currentText() == ui->comboBox_6->currentText() || ui->comboBox_5->currentText() == ui->comboBox_7->currentText() || ui->comboBox_6->currentText() == ui->comboBox_7->currentText()){
                QMessageBox::critical(this,"错误",tr("乘车人相同"));
                return;
            }
        }
        QSqlQuery query;
        QString result;
        result = "select IDNumber from Ticket where TrainNumber = '"+TrainNumber1+"' and Date = '"+Date1+"';";
        query.exec(result);
        while(query.next())
        {
            for(int row = 1;row < ui->tableWidget_2->rowCount();row++){
                if(ui->tableWidget_2->item(row, 2)->text() == query.value(0).toString()){
                    QMessageBox::critical(this,"错误",tr("已有同天相同车次车票"));
                    return;
                }
            }
        }
        SelectSeat *s = new SelectSeat;
        for(int row = 1;row < ui->tableWidget_2->rowCount();row++){
            //result = "insert into Ticket(IDNumber,TrainNumber,AccountNumber,Departure,Terminal,Date,DepTime,Name) values('"+ui->tableWidget_2->item(row, 2)->text()+"','"+TrainNumber1+"','"+AccountNumber1+"','"+Departure1+"','"+Terminal1+"','"+Date1+"','"+DepTime1+"','"+ui->tableWidget_2->item(row, 3)->text()+"');";
            //query.exec(result);
            s->sendData1(ui->tableWidget_2->item(row, 3)->text(),ui->tableWidget_2->item(row, 2)->text(),ui->tableWidget_2->item(row, 1)->text());
        }
        s->show();
        //QMessageBox::information(this,"成功",tr("购买车票成功！"));
        //this->close();
}

void Buy::on_pushButton_3_clicked()
{
    AddPerson *a = new AddPerson;
    a->show();
}
