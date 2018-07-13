#include "reset.h"
#include "ui_reset.h"
extern QString AccountName2;

Reset::Reset(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reset)
{
    ui->setupUi(this);
    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);
}

Reset::~Reset()
{
    delete ui;
}

void Reset::on_pushButton_clicked()
{
    QString IDNumber;
    QString result;
    QSqlQuery query;
    result = "select IDNumber from Account where AccountName ='" + AccountName2 + "';" ;

    query.exec(result);
    while(query.next())
    {
       IDNumber = query.value(0).toString();
       if(ui->lineEdit->text() == IDNumber){

          result = "update Account set Password = '"+ui->lineEdit_2->text()+"' where AccountName = '"+AccountName2+"';";
          query.exec(result);
          if(ui->lineEdit_2->text() == "")
          {
               QMessageBox::critical(this,"错误",tr("没有输入新密码"));
               return;
          }
          result = "select Password from Account where AccountName ='" + AccountName2 + "';" ;

          query.exec(result);
          if(ui->lineEdit_2->text() == "result"){
              QMessageBox::critical(this,"错误",tr("和原密码相同"));
              return;
          }
          QMessageBox::information(this,"成功",tr("重置成功！"));

          this->close();
          return;
        }
    }
    QMessageBox::critical(this,"错误",tr("用户名和身份证号不匹配"));


}

void Reset::on_pushButton_2_clicked()
{
    this->close();
}
