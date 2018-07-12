#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //连接数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("192.168.1.6");
    db.setUserName("root");       							//登陆MYSQL的用户名
    db.setPassword("12345678");    							//你自己登陆的密码
    db.setDatabaseName("train");  						//登陆数据库的名称
    db.open();
    QSqlQuery query;
    query.exec("show tables;");           					//显示数据库列表
    while(query.next())                                    	    //遍历查询到的数据库列表
    {
        qDebug() << query.value(0).toString();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
