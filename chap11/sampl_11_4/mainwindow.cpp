#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->tableView);

    tabModel = new QSqlRelationalTableModel;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actOpenDB_triggered()
{
    QString aFile = QFileDialog::getOpenFileName(this,"打开数据库","","SQLITE数据(*.db *.db3)");
    if(aFile.isEmpty()) return;
    DB = QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName(aFile);
    if(!DB.open()){
        QMessageBox::warning(this,"error","打开数据库失败");
        return;
    }
    tabModel = new QSqlRelationalTableModel(this,DB);
    tabModel->setTable("studInfo");
    tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tabModel->setSort(0,Qt::AscendingOrder);
    tabModel->setHeaderData(0,Qt::Horizontal,"学号");
    tabModel->setHeaderData(1,Qt::Horizontal,"姓名");
    tabModel->setHeaderData(2,Qt::Horizontal,"性别");
    tabModel->setHeaderData(3,Qt::Horizontal,"学院");
    tabModel->setHeaderData(4,Qt::Horizontal,"专业");

    tabModel->setRelation(3,QSqlRelation("departments","departID","department"));
    tabModel->setRelation(3,QSqlRelation("majors","mojorID","major"));

    theSelection = new QItemSelectionModel(tabModel);
    ui->tableView->setModel(tabModel);
    ui->tableView->setSelectionModel(theSelection);

    ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));  //添加下拉菜单
    tabModel->select();

    ui->actOpenDB->setEnabled(false);
    ui->actRecAppend->setEnabled(true);
    ui->actRecDelete->setEnabled(true);
    ui->actRecInsert->setEnabled(true);
    ui->actFields->setEnabled(true);
}

void MainWindow::on_actFields_triggered()
{
    QSqlRecord emptyRec = tabModel->record();
    QString str;
    for(int i = 0;i<emptyRec.count();i++){
        str = str + emptyRec.fieldName(i)+'\n';

    }
    QMessageBox::information(this,"所有字段名称",str);
}

void MainWindow::on_actRecAppend_triggered()
{

}
