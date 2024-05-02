#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include "dialogdata.h"

void MainWindow::openTable()
{
    qryModel->setQuery("SELECT EmpNo,Name,Gender,Height,Birthday,Mobile,Province,City,Department,Education,Salary FROM employee order by EmpNo");
    if(qryModel->lastError().isValid()){
        QMessageBox::information(this,"error","error info"+qryModel->lastError().text());
        return;
    }

    qryModel->setHeaderData(0,Qt::Horizontal,"工号");
    qryModel->setHeaderData(1,Qt::Horizontal,"姓名");
    qryModel->setHeaderData(2,Qt::Horizontal,"性别");
    qryModel->setHeaderData(3,Qt::Horizontal,"身高");
    qryModel->setHeaderData(4,Qt::Horizontal,"生日");
    qryModel->setHeaderData(5,Qt::Horizontal,"手机号");
    qryModel->setHeaderData(6,Qt::Horizontal,"籍贯");
    qryModel->setHeaderData(7,Qt::Horizontal,"城市");
    qryModel->setHeaderData(8,Qt::Horizontal,"部门");
    qryModel->setHeaderData(9,Qt::Horizontal,"学历");
    qryModel->setHeaderData(10,Qt::Horizontal,"薪水");

    ui->actOpenDB->setEnabled(false);
    ui->actRecInsert->setEnabled(true);
    ui->actRecDelete->setEnabled(true);
    ui->actRecEdit->setEnabled(true);
    ui->actScan->setEnabled(true);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->tableView);

    qryModel = new QSqlQueryModel;
    theSelection = new QItemSelectionModel(qryModel);

    ui->tableView->setModel(qryModel);
    ui->tableView->setSelectionModel(theSelection);
    ui->tableView->setAlternatingRowColors(true);

    connect(ui->tableView,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(on_TableViewDoubleClicked(QModelIndex)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actOpenDB_triggered()
{
    QString aFile = QFileDialog::getOpenFileName(this,"选择数据库","","SQLite数据库(*.db *.db3)");
    if(aFile.isEmpty()) return;
    DB = QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName(aFile);
    if(!DB.open()){
        QMessageBox::information(this,"错误","打开数据库 失败");
        return;
    }

    openTable();
}

void MainWindow::on_actRecInsert_triggered()
{
    QSqlQuery query;
    query.exec("select * from employee where EmpNo=-1");
    QSqlRecord curRec = query.record();
    curRec.setValue("EmpNo",qryModel->rowCount()+3000);

    DialogData *dataDlg = new DialogData;
    Qt::WindowFlags flags = dataDlg->windowFlags();
    dataDlg->setWindowFlags(flags|Qt::MSWindowsFixedSizeDialogHint);    //固定页面大小
    dataDlg->setInsertRecord(curRec);
    int ret = dataDlg->exec();
    if(ret = QDialog::Accepted){
        QSqlRecord recData = dataDlg->getRecordData();
        query.prepare("INSERT INTO employee (EmpNo,Name,Gender,Height,Birthday,Mobile,Province,"
                      " City,Department,Education,Salary,Memo,Photo) "
                      " VALUES(:EmpNo,:Name, :Gender,:Height,:Birthday,:Mobile,:Province,"
                      " :City,:Department,:Education,:Salary,:Memo,:Photo)");

        query.bindValue(":EmpNo",recData.value("EmpNo"));
        query.bindValue(":Name",recData.value("Name"));
        query.bindValue(":Gender",recData.value("Gender"));
        query.bindValue(":Height",recData.value("Height"));
        query.bindValue(":Birthday",recData.value("Birthday"));
        query.bindValue(":Mobile",recData.value("Mobile"));

        query.bindValue(":Province",recData.value("Province"));
        query.bindValue(":City",recData.value("City"));
        query.bindValue(":Department",recData.value("Department"));
        query.bindValue(":Education",recData.value("Education"));

        query.bindValue(":Salary",recData.value("Salary"));
        query.bindValue(":Memo",recData.value("Memo"));
        query.bindValue(":Photo",recData.value("Photo"));
        if(!query.exec())
            QMessageBox::critical(this,"err","information"+query.lastError().text());
        else{
//            QString sqlstr = qryModel->query().executedQuery();
//            qryModel->setQuery(sqlstr);
            qryModel->setQuery("SELECT EmpNo,Name,Gender,Height,Birthday,Mobile,Province,City,Department,Education,Salary FROM employee order by EmpNo");
        }
    }
    delete dataDlg;

}

void MainWindow::on_actRecEdit_triggered()
{
    int curRecNo = theSelection->currentIndex().row();
    QSqlRecord curRec = qryModel->record(curRecNo);
    QSqlQuery query;
    int empNo = curRec.value("EmpNo").toInt();
    query.prepare("select * from employee where EmpNo = :ID");
    query.bindValue(":ID",empNo);
    query.exec();
    query.first();
    if(!query.isValid()) return;

    curRec = query.record();
    DialogData *dataDlg = new DialogData;
    Qt::WindowFlags flags = dataDlg->windowFlags();
    dataDlg->setWindowFlags(flags|Qt::MSWindowsFixedSizeDialogHint);    //固定页面大小
    dataDlg->setUpdateRecord(curRec);
    int ret = dataDlg->exec();
    if(ret = QDialog::Accepted){
        QSqlRecord recData = dataDlg->getRecordData();
        query.prepare("update employee set Name=:Name, Gender=:Gender,Height=:Height,"
                      " Birthday=:Birthday, Mobile=:Mobile, Province=:Province,"
                      " City=:City, Department=:Department, Education=:Education,"
                      " Salary=:Salary, Memo=:Memo, Photo=:Photo "
                      " where EmpNo = :ID");

        query.bindValue(":EmpNo",recData.value("EmpNo"));
        query.bindValue(":Name",recData.value("Name"));
        query.bindValue(":Gender",recData.value("Gender"));
        query.bindValue(":Height",recData.value("Height"));
        query.bindValue(":Birthday",recData.value("Birthday"));
        query.bindValue(":Mobile",recData.value("Mobile"));

        query.bindValue(":Province",recData.value("Province"));
        query.bindValue(":City",recData.value("City"));
        query.bindValue(":Department",recData.value("Department"));
        query.bindValue(":Education",recData.value("Education"));

        query.bindValue(":Salary",recData.value("Salary"));
        query.bindValue(":Memo",recData.value("Memo"));
        query.bindValue(":Photo",recData.value("Photo"));
        query.bindValue(":ID",recData.value("EmpNo"));
        if(!query.exec())
            QMessageBox::critical(this,"err","information"+query.lastError().text());
        else{
//            QString sqlstr = qryModel->query().executedQuery();
//            qryModel->setQuery(sqlstr);
        qryModel->setQuery("SELECT EmpNo,Name,Gender,Height,Birthday,Mobile,Province,City,Department,Education,Salary FROM employee order by EmpNo");
        }
    }
    delete dataDlg;
}

void MainWindow::on_TableViewDoubleClicked(QModelIndex index)
{
    Q_UNUSED(index);
    on_actRecEdit_triggered();
}

void MainWindow::on_actScan_triggered()
{
    QSqlQuery qryEmList;
    qryEmList.exec("SELECT EmpNo,Salary FROM employee order by EmpNo");
    qryEmList.first();
    QSqlQuery qryUpdate;
    qryUpdate.prepare("UPDATE employee SET Salary=:Salary Where EmpNo = :ID");
    while(qryEmList.isValid()){
        int empID = qryEmList.value("EmpNo").toInt();
        float salary = qryEmList.value("Salary").toFloat();
        salary += 1000;
        qryUpdate.bindValue(":ID",empID);
        qryUpdate.bindValue(":Salary",salary);
        qryUpdate.exec();
        if(qryUpdate.lastError().isValid()) return;

        if(!qryEmList.next()) break;

    }

    qryModel->setQuery("SELECT EmpNo,Name,Gender,Height,Birthday,Mobile,Province,City,Department,Education,Salary FROM employee order by EmpNo");
    QMessageBox::information(this,"提示","涨工资完毕");
}
