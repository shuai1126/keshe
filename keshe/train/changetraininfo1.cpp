#include "changetraininfo1.h"
#include "ui_changetraininfo1.h"

extern QString TrainNumber21;
extern QString TrainDate21;
QString TType;

ChangeTrainInfo1::ChangeTrainInfo1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChangeTrainInfo1)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("以G/D/Y/Z/K/T/Z/S/C/数字开头");
    QRegExp regExp("[GDYZKTXSC0-9][0-9]*");
    ui->lineEdit->setValidator(new QRegExpValidator(regExp,this));
    ui->lineEdit->setMaxLength(5);

    ui->lineEdit_2->setPlaceholderText("以2018开头");
    QRegExp regExp2("[2][0][1][8][01][0-9]*");
    ui->lineEdit_2->setValidator(new QRegExpValidator(regExp2,this));
    ui->lineEdit_2->setMaxLength(8);

    QRegExp regExp3("[0-9]*");

    ui->lineEdit_8->setValidator(new QRegExpValidator(regExp3,this));
    ui->lineEdit_8->setMaxLength(4);

    ui->lineEdit_9->setValidator(new QRegExpValidator(regExp3,this));
    ui->lineEdit_9->setMaxLength(4);

    ui->lineEdit_10->setValidator(new QRegExpValidator(regExp3,this));
    ui->lineEdit_10->setMaxLength(4);

    ui->lineEdit_11->setValidator(new QRegExpValidator(regExp3,this));
    ui->lineEdit_11->setMaxLength(4);

    ui->lineEdit_12->setValidator(new QRegExpValidator(regExp3,this));
    ui->lineEdit_12->setMaxLength(4);

    ui->lineEdit_13->setValidator(new QRegExpValidator(regExp3,this));
    ui->lineEdit_13->setMaxLength(4);

    /*connect(ui->comboBox_2,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_3,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_4,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_5,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));*/

    ui->lineEdit_7->setPlaceholderText("全中文输入");
    QRegExp regExp4("[\u4e00-\u9fa5]*");
    ui->lineEdit_7->setValidator(new QRegExpValidator(regExp4,this));
    ui->lineEdit_7->setMaxLength(100);

    ui->lineEdit_3->setValidator(new QRegExpValidator(regExp4,this));
    ui->lineEdit_3->setMaxLength(10);

    QSqlQuery query;
    QString result;
    QString hour1,minute1;
    int hour,minute;

    result = "select DepTime,ArrTime,Departure,Terminal,Date,TrainNumber,PassStation,BussRE,FirRE,SecRE,SeRE,SleHRE,SleSRE,BussPR,FirPR,SecPR,SePR,SleHPR,SleSPR,Type from TrainInformation where TrainNumber = '"+ TrainNumber21 +"' and Date = '"+ TrainDate21 +"';";
    query.exec(result);
    qDebug() << result;
    while(query.next())
    {
        if(query.value(19).toString() == "G"){
            TType = "高铁动车组";
            ui->lineEdit_3->setText(TType);
            ui->lineEdit_3->setEnabled(false);
            hour = query.value(0).toInt()/100;
            hour1 = QString::number(hour, 10);
            minute = query.value(0).toInt() - (query.value(0).toInt()/100) * 100;
            minute1 = QString::number(minute, 10);
            ui->comboBox_4->setCurrentText(hour1);
            ui->comboBox_5->setCurrentText(minute1);

            hour = query.value(1).toInt()/100;
            hour1 = QString::number(hour, 10);
            minute = query.value(1).toInt() - (query.value(1).toInt()/100) * 100;
            minute1 = QString::number(minute, 10);
            ui->comboBox_6->setCurrentText(hour1);
            ui->comboBox_7->setCurrentText(minute1);

            ui->comboBox_2->setCurrentText(query.value(2).toString());
            ui->comboBox_3->setCurrentText(query.value(3).toString());
            ui->lineEdit_2->setText(query.value(4).toString());
            ui->lineEdit->setText(query.value(5).toString());
            ui->lineEdit_7->setText(query.value(6).toString());

            ui->lineEdit_8->setText(query.value(7).toString());
            ui->lineEdit_9->setText(query.value(8).toString());
            ui->lineEdit_10->setText(query.value(9).toString());
            ui->lineEdit_11->setText(query.value(13).toString());
            ui->lineEdit_12->setText(query.value(14).toString());
            ui->lineEdit_13->setText(query.value(15).toString());

            ui->label_10->setText("商务座总张数：");
            ui->label_11->setText("一等座总张数：");
            ui->label_12->setText("二等座总张数：");
            ui->label_13->setText("商务座票价：");
            ui->label_14->setText("一等座票价：");
            ui->label_15->setText("二等座票价：");
        }

        if(query.value(19).toString() == "K"){
            TType = "普速列车";
            ui->lineEdit_3->setText(TType);
            ui->lineEdit_3->setEnabled(false);

            hour = query.value(0).toInt()/100;
            hour1 = QString::number(hour, 10);
            minute = query.value(0).toInt() - (query.value(0).toInt()/100) * 100;
            minute1 = QString::number(minute, 10);
            ui->comboBox_4->setCurrentText(hour1);
            ui->comboBox_5->setCurrentText(minute1);

            hour = query.value(1).toInt()/100;
            hour1 = QString::number(hour, 10);
            minute = query.value(1).toInt() - (query.value(1).toInt()/100) * 100;
            minute1 = QString::number(minute, 10);
            ui->comboBox_6->setCurrentText(hour1);
            ui->comboBox_7->setCurrentText(minute1);

            ui->comboBox_2->setCurrentText(query.value(2).toString());
            ui->comboBox_3->setCurrentText(query.value(3).toString());

            ui->lineEdit_2->setText(query.value(4).toString());

            ui->lineEdit->setText(query.value(5).toString());

            ui->lineEdit_7->setText(query.value(6).toString());

            ui->lineEdit_8->setText(query.value(10).toString());
            ui->lineEdit_9->setText(query.value(11).toString());
            ui->lineEdit_10->setText(query.value(12).toString());
            ui->lineEdit_11->setText(query.value(16).toString());
            ui->lineEdit_12->setText(query.value(17).toString());
            ui->lineEdit_13->setText(query.value(18).toString());

            ui->label_10->setText("硬座总张数：");
            ui->label_11->setText("硬卧总张数：");
            ui->label_12->setText("软卧总张数：");
            ui->label_13->setText("硬座票价：");
            ui->label_14->setText("硬座票价：");
            ui->label_15->setText("软卧票价：");
        }
    }
    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
}

ChangeTrainInfo1::~ChangeTrainInfo1()
{
    delete ui;
}

void ChangeTrainInfo1::on_pushButton_clicked()
{
    this->close();
}

void ChangeTrainInfo1::on_pushButton_2_clicked()
{
    QSqlQuery query;

    QString TimeD;
    QString TimeT;

    QString a;

    QString Type1;
    QString result;

    int TimeD1;
    int TimeT1;

    TimeD1 = ui->comboBox_4->currentText().toInt()*100 + ui->comboBox_5->currentText().toInt();
    TimeT1 = ui->comboBox_6->currentText().toInt()*100 + ui->comboBox_7->currentText().toInt();
    TimeD = QString::number(TimeD1, 10);
    TimeT = QString::number(TimeT1, 10);

    if(TType == "高铁动车组"){
        if (TrainNumber21 == ui->lineEdit->text()){
            Type1 = "G";
            result = "update TrainInformation set DepTime = '"+TimeD+"',ArrTime = '"+TimeT+"',Departure = '"+ui->comboBox_2->currentText()+"',Terminal = '"+ui->comboBox_3->currentText()+"',Date = '"+ui->lineEdit_2->text()+"',TrainNumber = '"+ui->lineEdit->text()+"',PassStation = '"+ui->lineEdit_7->text()+"',BussRE = '"+ui->lineEdit_8->text()+"',FirRE = '"+ui->lineEdit_9->text()+"',SecRE = '"+ui->lineEdit_10->text()+"',BussPR = '"+ui->lineEdit_11->text()+"',FirPR = '"+ui->lineEdit_12->text()+"',SecPR = '"+ui->lineEdit_13->text()+"',Type = '"+Type1+"' where TrainNumber = '"+ TrainNumber21 +"' and Date = '"+ TrainDate21 +"';";
            qDebug() << result;
            query.exec(result);
        }

    else if (TrainNumber21 != ui->lineEdit->text()){
         result = "select TrainNumber from TrainInformation where Date ='"+ui->lineEdit_2->text()+"';" ;
         query.exec(result);
         while(query.next())
         {
            a = query.value(0).toString();
            if(ui->lineEdit->text() == a){
            QMessageBox::critical(this,"错误",tr("车次已存在"));
            return;
           }
          }

          Type1 = "G";
          result = "update TrainInformation set DepTime = '"+TimeD+"',ArrTime = '"+TimeT+"',Departure = '"+ui->comboBox_2->currentText()+"',Terminal = '"+ui->comboBox_3->currentText()+"',Date = '"+ui->lineEdit_2->text()+"',TrainNumber = '"+ui->lineEdit->text()+"',PassStation = '"+ui->lineEdit_7->text()+"',BussRE = '"+ui->lineEdit_8->text()+"',FirRE = '"+ui->lineEdit_9->text()+"',SecRE = '"+ui->lineEdit_10->text()+"',BussPR = '"+ui->lineEdit_11->text()+"',FirPR = '"+ui->lineEdit_12->text()+"',SecPR = '"+ui->lineEdit_13->text()+"',Type = '"+Type1+"' where TrainNumber = '"+ TrainNumber21 +"' and Date = '"+ TrainDate21 +"';";
          qDebug() << result;
          query.exec(result);
          }
    }

    if(TType == "普速列车"){
        if(TrainNumber21 == ui->lineEdit->text()){
            Type1 = "K";
            result = "update TrainInformation set DepTime = '"+TimeD+"',ArrTime = '"+TimeT+"',Departure = '"+ui->comboBox_2->currentText()+"',Terminal = '"+ui->comboBox_3->currentText()+"',Date = '"+ui->lineEdit_2->text()+"',TrainNumber = '"+ui->lineEdit->text()+"',PassStation = '"+ui->lineEdit_7->text()+"',SeRE = '"+ui->lineEdit_8->text()+"',SleHRE = '"+ui->lineEdit_9->text()+"',SleSRE = '"+ui->lineEdit_10->text()+"',SePR = '"+ui->lineEdit_11->text()+"',SleHPR = '"+ui->lineEdit_12->text()+"',SleSPR = '"+ui->lineEdit_13->text()+"',Type = '"+Type1+"' where TrainNumber = '"+ TrainNumber21 +"' and Date = '"+ TrainDate21 +"';";
            qDebug() << result;
            query.exec(result);
        }

        else if(TrainNumber21 != ui->lineEdit->text()){
            result = "select TrainNumber from TrainInformation where Date ='"+ui->lineEdit_2->text()+"';" ;
            query.exec(result);
            while(query.next())
            {
                a = query.value(0).toString();
                if(ui->lineEdit->text() == a){
                    QMessageBox::critical(this,"错误",tr("车次已存在"));
                    return;
                }
            }

            Type1 = "K";
            result = "update TrainInformation set DepTime = '"+TimeD+"',ArrTime = '"+TimeT+"',Departure = '"+ui->comboBox_2->currentText()+"',Terminal = '"+ui->comboBox_3->currentText()+"',Date = '"+ui->lineEdit_2->text()+"',TrainNumber = '"+ui->lineEdit->text()+"',PassStation = '"+ui->lineEdit_7->text()+"',SeRE = '"+ui->lineEdit_8->text()+"',SleHRE = '"+ui->lineEdit_9->text()+"',SleSRE = '"+ui->lineEdit_10->text()+"',SePR = '"+ui->lineEdit_11->text()+"',SleHPR = '"+ui->lineEdit_12->text()+"',SleSPR = '"+ui->lineEdit_13->text()+"',Type = '"+Type1+"' where TrainNumber = '"+ TrainNumber21 +"' and Date = '"+ TrainDate21 +"';";
            qDebug() << result;
            query.exec(result);
        }

    }

    if(ui->lineEdit->text() == "")
    {
        QMessageBox::critical(this,"错误",tr("未填写车次"));
        return;
    }
    if(ui->lineEdit_2->text() == "")
    {
        QMessageBox::critical(this,"错误",tr("未填写日期"));
        return;
    }
    if(ui->lineEdit_2->text().toInt() > 20181231)
    {
        QMessageBox::critical(this,"错误",tr("出发日期不合法"));
        return;
    }
    if(ui->lineEdit_2->text().toInt() < 20180709)
    {
        QMessageBox::critical(this,"错误",tr("出发日期晚于今天"));
        return;
    }
    if(ui->lineEdit_2->text().toInt() > 20180731 && ui->lineEdit_2->text().toInt() < 20180801)
    {
        QMessageBox::critical(this,"错误",tr("出发日期不合法"));
        return;
    }
    if(ui->lineEdit_2->text().toInt() > 20180831 && ui->lineEdit_2->text().toInt() < 20180901)
    {
        QMessageBox::critical(this,"错误",tr("出发日期不合法"));
        return;
    }
    if(ui->lineEdit_2->text().toInt() > 20180930 && ui->lineEdit_2->text().toInt() < 20181001)
    {
        QMessageBox::critical(this,"错误",tr("出发日期不合法"));
        return;
    }
    if(ui->lineEdit_2->text().toInt() > 20181031 && ui->lineEdit_2->text().toInt() < 20181101)
    {
        QMessageBox::critical(this,"错误",tr("出发日期不合法"));
        return;
    }
    if(ui->lineEdit_2->text().toInt() > 20181130 && ui->lineEdit_2->text().toInt() < 20181201)
    {
        QMessageBox::critical(this,"错误",tr("出发日期不合法"));
        return;
    }
    if(ui->comboBox_4->currentText().toInt() > ui->comboBox_6->currentText().toInt()){
        QMessageBox::critical(this,"错误",tr("到达时间早于出发时间"));
        return;
    }
    if(ui->comboBox_4->currentText().toInt() == ui->comboBox_6->currentText().toInt() && ui->comboBox_5->currentText().toInt() >= ui->comboBox_7->currentText().toInt()){
        QMessageBox::critical(this,"错误",tr("到达时间早于出发时间"));
        return;
    }
    if(ui->comboBox_2->currentText() == ui->comboBox_3->currentText()){
        QMessageBox::critical(this,"错误",tr("始发站和终到站相同"));
        return;
    }


    else    QMessageBox::information(this,"成功",tr("车次修改成功！"));
    this -> close();

}
