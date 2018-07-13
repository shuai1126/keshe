#include "changetrain.h"
#include "ui_changetrain.h"
#include "changetraininfo1.h"
#include <QMessageBox>

QString TrainNumber21;
QString TrainDate21;

ChangeTrain::ChangeTrain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChangeTrain)
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

    ui->lineEdit->setEchoMode(QLineEdit::Normal);
    ui->lineEdit_2->setEchoMode(QLineEdit::Normal);

    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
}

ChangeTrain::~ChangeTrain()
{
    delete ui;
}

void ChangeTrain::on_pushButton_clicked()
{
    if(ui->lineEdit->text() == "")
        {
            QMessageBox::critical(this,"错误",tr("未填写车次"));
            return;
        }
    else if(ui->lineEdit_2->text() == "")
        {
            QMessageBox::critical(this,"错误",tr("未填写日期"));
            return;
        }
    else if(ui->lineEdit_2->text().toInt() > 20181231)
        {
            QMessageBox::critical(this,"错误",tr("出发日期不合法"));
            return;
        }
    else if(ui->lineEdit_2->text().toInt() < 20180709)
        {
            QMessageBox::critical(this,"错误",tr("出发日期晚于今天"));
            return;
        }
    else if(ui->lineEdit_2->text().toInt() > 20180731 && ui->lineEdit_2->text().toInt() < 20180801)
        {
            QMessageBox::critical(this,"错误",tr("出发日期不合法"));
            return;
        }
    else if(ui->lineEdit_2->text().toInt() > 20180831 && ui->lineEdit_2->text().toInt() < 20180901)
        {
            QMessageBox::critical(this,"错误",tr("出发日期不合法"));
            return;
        }
    else if(ui->lineEdit_2->text().toInt() > 20180930 && ui->lineEdit_2->text().toInt() < 20181001)
        {
            QMessageBox::critical(this,"错误",tr("出发日期不合法"));
            return;
        }
    else if(ui->lineEdit_2->text().toInt() > 20181031 && ui->lineEdit_2->text().toInt() < 20181101)
        {
            QMessageBox::critical(this,"错误",tr("出发日期不合法"));
            return;
        }
    else if(ui->lineEdit_2->text().toInt() > 20181130 && ui->lineEdit_2->text().toInt() < 20181201)
        {
            QMessageBox::critical(this,"错误",tr("出发日期不合法"));
            return;
        }

    QSqlQuery query;
    QString traininfo1;

    traininfo1 = "select TrainNumber,Date from TrainInformation where TrainNumber = '"+ ui->lineEdit->text() +"' and Date = '"+ ui->lineEdit_2->text() +"';" ;
    query.exec(traininfo1);           					//显示数据库列表
    while(query.next()){
        TrainNumber21 = query.value(0).toString();
        TrainDate21 = query.value(1).toString();
    }

    qDebug() << TrainNumber21;

    if(TrainNumber21 == "") {
        QMessageBox::critical(this,"错误",tr("无车次"));
        return;
    }

    ChangeTrainInfo1 *ww = new ChangeTrainInfo1;
    ww->show();

}

void ChangeTrain::on_pushButton_2_clicked()
{
    this->close();
}
