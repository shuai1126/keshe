#include "option.h"
#include "ui_option.h"

Option::Option(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Option)
{
    ui->setupUi(this);
    QFile qssfile(":/style/base.qss");
    qssfile.open(QFile::ReadOnly);
    QString qss;
    qss = qssfile.readAll();
    this->setStyleSheet(qss);

    /*数据库连接*/
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("10.27.65.46");
    db.setUserName("root");       							//登陆MYSQL的用户名
    db.setPassword("12345678");    							//你自己登陆的密码
    db.setDatabaseName("train");						//登陆数据库的名称
    db.open();

    search = new Search;
    menu = new Menu;
    //searchresult = new SearchResult;
    login = new Login;
    register1 = new Register;
    stackLayout = new QStackedLayout;
    stackLayout->addWidget(login);
    stackLayout->addWidget(menu);
    stackLayout->addWidget(search);
    stackLayout->addWidget(register1);
    //stackLayout->addWidget(searchresult);
    connect(login, &Login::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(menu, &Menu::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(search, &Search::display, stackLayout, &QStackedLayout::setCurrentIndex);
    //connect(searchresult, &SearchResult::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(register1, &Register::display, stackLayout, &QStackedLayout::setCurrentIndex);
    mainLayout = new QVBoxLayout;
    mainLayout->addLayout(stackLayout);
    setLayout(mainLayout);

}

Option::~Option()
{
    delete ui;
}

