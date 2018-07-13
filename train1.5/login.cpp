#include "login.h"
#include "ui_login.h"

QString AccountNumber1;
QString AccountName1;

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("用户名、手机号、邮箱");
    ui->lineEdit_2->setPlaceholderText("密码");
    ui->lineEdit->setEchoMode(QLineEdit::Normal);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    this->grabKeyboard();
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
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
            AdmMenu *a = new AdmMenu;
            a->show();
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
                AdmMenu *a = new AdmMenu;
                a->show();
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
