#include "message.h"
#include "ui_message.h"
extern QString AccountNumber1;

Message::Message(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Message)
{
    ui->setupUi(this);
    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
    ui->lineEdit->setPlaceholderText("11位数字");
    QRegExp regExp2("[0-9]*");
    ui->lineEdit->setValidator(new QRegExpValidator(regExp2,this));
    ui->lineEdit->setMaxLength(11);

    QRegExp regExp1("[A-Za-z0-9]*[@][A-Za-z0-9.]*");
    ui->lineEdit_2->setValidator(new QRegExpValidator(regExp1,this));

    QSqlQuery query;
    QString result;
    result = "select AccountName,PhoneNumber,Email from Account where AccountNumber = '"+AccountNumber1+"';";
    query.exec(result);
    while(query.next())
    {
        ui->lineEdit_3->setText(query.value(0).toString());
        ui->lineEdit_3->setEnabled(false);
        ui->lineEdit->setText(query.value(1).toString());
        ui->lineEdit_2->setText(query.value(2).toString());
        Phone = query.value(1).toString();
        Email = query.value(2).toString();
    }
}

Message::~Message()
{
    delete ui;
}

void Message::on_pushButton_clicked()
{
    AddPerson *a = new AddPerson;
    a->show();
}

void Message::on_pushButton_2_clicked()
{
    QString Accountname;
    QSqlQuery query;
    QString result;
    if(ui->lineEdit->text() == "")
    {
        QMessageBox::critical(this,"错误",tr("未填写手机号！"));
        return;
    }
    if(ui->lineEdit_2->text() == "")
    {
        QMessageBox::critical(this,"错误",tr("未填写电子邮箱！"));
        return;
    }
    result = "select PhoneNumber from Account" ;
    query.exec(result);
    while(query.next())
    {
        Accountname = query.value(0).toString();
        if(ui->lineEdit->text() == Accountname && Accountname != Phone){
            QMessageBox::critical(this,"错误",tr("手机号已存在"));
            return;
        }
    }
    result = "select Email from Account" ;
    query.exec(result);
    while(query.next())
    {
        Accountname = query.value(0).toString();
        if(ui->lineEdit_2->text() == Accountname && Accountname != Email){
            QMessageBox::critical(this,"错误",tr("邮箱已存在"));
            return;
        }
    }
    result = "update Account set PhoneNumber = '"+ui->lineEdit->text()+"', Email = '"+ui->lineEdit_2->text()+"' where AccountNumber = '"+AccountNumber1+"';";
    query.exec(result);
    QMessageBox::information(this,"成功",tr("保存成功！"));
    this->close();
}

void Message::on_pushButton_3_clicked()
{
    ChangePassword *c = new ChangePassword;
    c->show();
}

void Message::on_pushButton_4_clicked()
{
    this->close();
}
