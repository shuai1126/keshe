#include "addtrain.h"
#include "ui_addtrain.h"

AddTrain::AddTrain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddTrain)
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

    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_2,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_3,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_4,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));
    connect(ui->comboBox_5,SIGNAL(currentIndexChanged(int)),this,SLOT(deal()));

    ui->lineEdit_7->setPlaceholderText("全中文输入");
    QRegExp regExp4("[\u4e00-\u9fa5]*");
    ui->lineEdit_7->setValidator(new QRegExpValidator(regExp4,this));
    ui->lineEdit_7->setMaxLength(4);



}

AddTrain::~AddTrain()
{
    delete ui;
}

void AddTrain::deal()
{

    if(ui->comboBox_2->currentText() == ui->comboBox_3->currentText()){
        QMessageBox::critical(this,"错误",tr("始发站和终到站相同"));
        temp = 1;
    }
    else
        temp = 0;
    if(ui->comboBox->currentText() == "高铁/动车组"){
        Type = "G";
        ui->label_10->setText("商务座总张数：");
        ui->label_11->setText("一等座总张数：");
        ui->label_12->setText("二等座总张数：");
        ui->label_13->setText("商务座票价：");
        ui->label_14->setText("一等座票价：");
        ui->label_15->setText("二等座票价：");
    }
    if(ui->comboBox->currentText() == "普速列车"){
        Type = "K";
        ui->label_10->setText("硬座总张数：");
        ui->label_11->setText("硬卧总张数：");
        ui->label_12->setText("软卧总张数：");
        ui->label_13->setText("硬座票价：");
        ui->label_14->setText("硬座票价：");
        ui->label_15->setText("软卧票价：");
    }
    if(ui->comboBox_4->currentText().toInt() > ui->comboBox_6->currentText().toInt()){
        QMessageBox::critical(this,"错误",tr("到达时间早于出发时间"));
        return;
    }
    if(ui->comboBox_4->currentText().toInt() == ui->comboBox_6->currentText().toInt() && ui->comboBox_5->currentText().toInt() >= ui->comboBox_7->currentText().toInt()){
        QMessageBox::critical(this,"错误",tr("到达时间早于出发时间"));
        return;
    }
}

void AddTrain::on_pushButton_clicked()
{
    this->close();
}

void AddTrain::on_pushButton_2_clicked()
{
    QString TimeD;
    QString TimeT;
    QSqlQuery query;
    QString result;
    QString a;
    int TimeD1;
    int TimeT1;
    if(temp == 1){
        QMessageBox::critical(this,"错误",tr("始发站和终到站相同"));
        return;
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
    /*if(ui->lineEdit_7->text() == "" || ui->lineEdit_8->text() == "" || ui->lineEdit_9->text() == "")
    {
        QMessageBox::critical(this,"错误",tr("未填写完整总票数"));
        return;
    }
    if(ui->lineEdit_10->text() == "" || ui->lineEdit_11->text() == "" || ui->lineEdit_12->text() == "")
    {
        QMessageBox::critical(this,"错误",tr("未填写完整价格"));
        return;
    }*/
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
    if(ui->comboBox_4->currentText().toInt() > ui->comboBox_6->currentText().toInt()){
        QMessageBox::critical(this,"错误",tr("到达时间早于出发时间"));
        return;
    }
    if(ui->comboBox_4->currentText().toInt() == ui->comboBox_6->currentText().toInt() && ui->comboBox_5->currentText().toInt() >= ui->comboBox_7->currentText().toInt()){
        QMessageBox::critical(this,"错误",tr("到达时间早于出发时间"));
        return;
    }
    TimeD1 = ui->comboBox_4->currentText().toInt()*100 + ui->comboBox_5->currentText().toInt();
    TimeT1 = ui->comboBox_6->currentText().toInt()*100 + ui->comboBox_7->currentText().toInt();
    TimeD = QString::number(TimeD1, 10);
    TimeT = QString::number(TimeT1, 10);
    if(Type == "G"){
        result = "insert into TrainInformation(DepTime,ArrTime,Departure,Terminal,Date,TrainNumber,PassStation,BussRE,FirRE,SecRE,BussPR,FirPR,SecPR,Type) values('"+TimeD+"','"+TimeT+"','"+ui->comboBox_2->currentText()+"','"+ui->comboBox_3->currentText()+"','"+ui->lineEdit_2->text()+"','"+ui->lineEdit->text()+"','"+ui->lineEdit_7->text()+"','"+ui->lineEdit_8->text()+"','"+ui->lineEdit_9->text()+"','"+ui->lineEdit_10->text()+"','"+ui->lineEdit_11->text()+"','"+ui->lineEdit_12->text()+"','"+ui->lineEdit_13->text()+"','"+Type+"');";
        qDebug() << result;
        query.exec(result);
    }
    if(Type == "K"){
        result = "insert into TrainInformation(DepTime,ArrTime,Departure,Terminal,Date,TrainNumber,PassStation,SeRE,SleHRE,SleHRE,SePR,SleHPR,SleHPR,Type) values('"+TimeD+"','"+TimeT+"','"+ui->comboBox_2->currentText()+"','"+ui->comboBox_3->currentText()+"','"+ui->lineEdit_2->text()+"','"+ui->lineEdit->text()+"','"+ui->lineEdit_7->text()+"','"+ui->lineEdit_8->text()+"','"+ui->lineEdit_9->text()+"','"+ui->lineEdit_10->text()+"','"+ui->lineEdit_11->text()+"','"+ui->lineEdit_12->text()+"','"+ui->lineEdit_13->text()+"','"+Type+"');";
        qDebug() << result;
        query.exec(result);
    }
    QMessageBox::information(this,"成功",tr("车次添加成功！"));

}
