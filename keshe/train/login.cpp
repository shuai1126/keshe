#include "login.h"
#include "ui_login.h"

QString AccountNumber1;
QString AccountName1;
QString AccountName2;
QString Type;
extern QSqlDatabase db;

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("用户名、手机号、邮箱");
    ui->lineEdit_2->setPlaceholderText("密码");
    ui->lineEdit->setEchoMode(QLineEdit::Normal);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
    QDateTime current_date_time =QDateTime::currentDateTime();
    current_date1 =current_date_time.toString("yyyy");
    current_date2 =current_date_time.toString("MM");
    current_date3 =current_date_time.toString("dd");

}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    QString username;
    QString Password;
    QSqlQuery query;
    QString Data;
    username = "select Password,AccountNumber,Type,AccountName,Data from Account where AccountName = '"+ ui->lineEdit->text() +"' or PhoneNumber = '" +ui->lineEdit->text() +"' or Email = '" +ui->lineEdit->text() +"';" ;
    query.exec(username);           					//显示数据库列表
    while(query.next()){
        Password = query.value(0).toString();
        AccountNumber1 = query.value(1).toString();
        AccountName1 = query.value(3).toString();
        Type = query.value(2).toString();
        Data = query.value(4).toString();
    }
    if(Data == current_date1+current_date2+current_date3){
        QMessageBox::information(this,"信息",tr("今日需抢票！"));
    }
    if(Password == ui->lineEdit_2->text())
    {
        if(Type == "U"){
            emit display(1);//跳转到查询界面
        }
        if(Type == "A"){
            AdmMenu *a = new AdmMenu;//跳转到管理员界面
            a->show();
        }
        if(Type == "S"){
            SelMenu *m = new SelMenu;//跳转到售票员界面
            m->show();
        }
    }
    else
    {
        QMessageBox::critical(this,"错误",tr("用户名或密码错误"));
        return;
    }

}

void Login::keyPressEvent(QKeyEvent *ev)
{
    if(ev->key() == Qt::Key_Enter)
    {
        QString username;
        QString Password;
        QString Type;
        QSqlQuery query;
        username = "select Password,AccountNumber,Type,AccountName from Account where AccountName = '"+ ui->lineEdit->text() +"' or PhoneNumber = '" +ui->lineEdit->text() +"' or Email = '" +ui->lineEdit->text() +"';" ;
        query.exec(username);           					//显示数据库列表
        while(query.next()){
            Password = query.value(0).toString();
            AccountNumber1 = query.value(1).toString();
            AccountName1 = query.value(3).toString();
            Type = query.value(2).toString();
        }
        if(Password == ui->lineEdit_2->text())
        {
            if(Type == "U"){
                emit display(1);//跳转到查询界面
            }
            if(Type == "A"){
                AdmMenu *a = new AdmMenu;//跳转到管理员界面
                a->show();
            }
            if(Type == "S"){
                SelMenu *m = new SelMenu;//跳转到售票员界面
                m->show();
            }
        }
        else
        {
            QMessageBox::critical(this,"错误",tr("用户名或密码错误"));
            return;
        }
    }
    QWidget::keyPressEvent(ev);
}

void Login::on_pushButton_2_clicked()
{
    emit display(3);
}


void Login::on_pushButton_3_clicked()
{
    if(ui->lineEdit->text() == "")
    {
        QMessageBox::critical(this,"错误",tr("没有输入用户名"));
        return;
    }
    Reset * r = new Reset;
    r->show();
    QString result;
    QSqlQuery query;
    result = "select AccountName from Account where AccountName = '"+ ui->lineEdit->text() +"' or PhoneNumber = '" +ui->lineEdit->text() +"' or Email = '" +ui->lineEdit->text() +"';" ;
    query.exec(result);           					//显示数据库列表
    while(query.next()){
        AccountName2 = query.value(0).toString();
    }
}
