#include "changepassword.h"
#include "ui_changepassword.h"

extern QString AccountNumber1;

ChangePassword::ChangePassword(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChangePassword)
{
    ui->setupUi(this);
    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
    ui->lineEdit->setEchoMode(QLineEdit::Password);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    QSqlQuery query;
    QString result;
    result = "select Password from Account where AccountNumber = '"+AccountNumber1+"';";
    query.exec(result);
    while(query.next())
    {
        Password = query.value(0).toString();
    }
}

ChangePassword::~ChangePassword()
{
    delete ui;
}

void ChangePassword::on_pushButton_clicked()
{
    QSqlQuery query;
    QString result;
    if(ui->lineEdit->text() == ""){
        QMessageBox::critical(this,"错误",tr("未填写密码！"));
        return;
    }
    if(ui->lineEdit_2->text() == ""){
        QMessageBox::critical(this,"错误",tr("未填写确认密码！"));
        return;
    }
    if(ui->lineEdit_2->text() != ui->lineEdit->text()){
        QMessageBox::critical(this,"错误",tr("两次输入的密码不相同！"));
        return;
    }
    if(ui->lineEdit->text() == Password){
        QMessageBox::critical(this,"错误",tr("新密码与原密码相同！"));
        return;
    }
    result = "update Account set Password = '"+ui->lineEdit->text()+"' where AccountNumber = '"+AccountNumber1+"';";
    query.exec(result);
    QMessageBox::information(this,"成功",tr("保存成功！"));
}

void ChangePassword::on_pushButton_2_clicked()
{
    this->close();
}
