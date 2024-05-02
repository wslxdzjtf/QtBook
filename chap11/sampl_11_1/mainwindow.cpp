#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>

void MainWindow::openTable()
{
    tabModel = new QSqlTableModel(this,DB);
    tabModel->setTable("employee"); //数据表格
    tabModel->setSort(tabModel->fieldIndex("EmpNo"),Qt::AscendingOrder);
    tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    if(!tabModel->select()){
        QMessageBox::critical(this,"错误","打开数据表错误，错误信息\n"+tabModel->lastError().text());
        return;
    }
    //字段在Header中显示中文
    tabModel->setHeaderData(tabModel->fieldIndex("empNo"),Qt::Horizontal,"工号");
    tabModel->setHeaderData(tabModel->fieldIndex("Name"),Qt::Horizontal,"姓名");
    tabModel->setHeaderData(tabModel->fieldIndex("Gender"),Qt::Horizontal,"性别");
    tabModel->setHeaderData(tabModel->fieldIndex("Height"),Qt::Horizontal,"身高");
    tabModel->setHeaderData(tabModel->fieldIndex("Birthday"),Qt::Horizontal,"生日");
    tabModel->setHeaderData(tabModel->fieldIndex("Mobile"),Qt::Horizontal,"手机号");
    tabModel->setHeaderData(tabModel->fieldIndex("Province"),Qt::Horizontal,"籍贯");
    tabModel->setHeaderData(tabModel->fieldIndex("City"),Qt::Horizontal,"城市");
    tabModel->setHeaderData(tabModel->fieldIndex("Department"),Qt::Horizontal,"部门");
    tabModel->setHeaderData(tabModel->fieldIndex("Education"),Qt::Horizontal,"学历");
    tabModel->setHeaderData(tabModel->fieldIndex("Salary"),Qt::Horizontal,"薪水");

    theSeletion = new QItemSelectionModel(tabModel);
    ui->tableView->setModel(tabModel);
    ui->tableView->setSelectionModel(theSeletion);

    connect(theSeletion,SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(on_currentChanged(QModelIndex,QModelIndex)));
    connect(theSeletion,SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),this,SLOT(on_currentRowChanged(QModelIndex,QModelIndex)));

    ui->tableView->setColumnHidden(tabModel->fieldIndex("Memo"),true);
    ui->tableView->setColumnHidden(tabModel->fieldIndex("Photo"),true);

    dataMapper = new QDataWidgetMapper;
    dataMapper->setModel(tabModel);
    dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);

    dataMapper->addMapping(ui->dbSpinEmpNo,tabModel->fieldIndex("EmpNo"));
    dataMapper->addMapping(ui->dbEditName,tabModel->fieldIndex("Name"));
    dataMapper->addMapping(ui->dbComboSex,tabModel->fieldIndex("Gender"));
    dataMapper->addMapping(ui->dbSpinHeight,tabModel->fieldIndex("Height"));
    dataMapper->addMapping(ui->dbEditBirth,tabModel->fieldIndex("Birthday"));
    dataMapper->addMapping(ui->dbEditMobile,tabModel->fieldIndex("Mobile"));
    dataMapper->addMapping(ui->dbComboProvince,tabModel->fieldIndex("Province"));
    dataMapper->addMapping(ui->dbEditCity,tabModel->fieldIndex("City"));
    dataMapper->addMapping(ui->dbComboDep,tabModel->fieldIndex("Department"));
    dataMapper->addMapping(ui->dbComboEdu,tabModel->fieldIndex("Education"));
    dataMapper->addMapping(ui->dbSpinSalary,tabModel->fieldIndex("Salary"));

    getFiledNames();
    ui->actOpenDB->setEnabled(false);
    ui->actRecAppend->setEnabled(true);
    ui->actRecDelete->setEnabled(true);
    ui->actRecInsert->setEnabled(true);
    ui->actScan->setEnabled(true);
    ui->groupBoxSort->setEnabled(true);
    ui->groupBoxFilter->setEnabled(true);
    ui->actPhoto->setEnabled(true);
    ui->actPhotoClear->setEnabled(true);

    QStringList strList;
    strList<<"男"<<"女";
    bool isEditable=false;
    delegateSex.setItems(strList,isEditable);
    ui->tableView->setItemDelegateForColumn(tabModel->fieldIndex("Gender"),&delegateSex);
}

void MainWindow::getFiledNames()
{
    QSqlRecord emptyRec = tabModel->record(); //空记录
    for(int i=0;i<emptyRec.count();i++){
        ui->comboFields->addItem(emptyRec.fieldName(i));
    }
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->splitter);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(current);
    Q_UNUSED(previous);
    ui->actSubmit->setEnabled(tabModel->isDirty());
    ui->actRevert->setEnabled(tabModel->isDirty());
}

void MainWindow::on_currentRowChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);
    ui->actRecDelete->setEnabled(current.isValid());
    ui->actRecAppend->setEnabled(current.isValid());
    ui->actRecInsert->setEnabled(current.isValid());

    if(!current.isValid()){
        ui->dbLabPhoto->clear();
        return;
    }
    dataMapper->setCurrentIndex(current.row());
    QSqlRecord curRec = tabModel->record(current.row());
    if(curRec.isNull("photo"))
        ui->dbLabPhoto->clear();
    else{
        QByteArray data = curRec.value("photo").toByteArray();
        QPixmap pic;
        pic.loadFromData(data);
        ui->dbLabPhoto->setPixmap(pic.scaledToWidth(ui->dbLabPhoto->size().width()));
    } 
}

void MainWindow::on_actOpenDB_triggered()
{
    QString aFile = QFileDialog::getOpenFileName(this,"选择数据库文件","","SQLite数据库(*.db *.db3)");
    if(aFile.isEmpty()) return;
    DB = QSqlDatabase::addDatabase("QSQLITE");  //添加数据库
    DB.setDatabaseName(aFile);  //设置数据库名称
    if(!DB.open()){
        QMessageBox::warning(this,"错误","打开数据库失败");
        return;
    }
    openTable();
}

void MainWindow::on_actRecAppend_triggered()
{
    tabModel->insertRow(tabModel->rowCount(),QModelIndex());
    QModelIndex curIndex = tabModel->index(tabModel->rowCount()-1,1);
    theSeletion->clearSelection();
    theSeletion->setCurrentIndex(curIndex,QItemSelectionModel::Select);
    tabModel->setData(tabModel->index(curIndex.row(),0),2000+tabModel->rowCount());
    tabModel->setData(tabModel->index(curIndex.row(),2),"男");
}

void MainWindow::on_actRecInsert_triggered()
{
    QModelIndex curIndex = ui->tableView->currentIndex();
    tabModel->insertRow(curIndex.row(),QModelIndex());
    theSeletion->clearSelection();
    theSeletion->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}

void MainWindow::on_actRecDelete_triggered()
{
    QModelIndex curIndex = theSeletion->currentIndex();
    tabModel->removeRow(curIndex.row());
}

void MainWindow::on_actSubmit_triggered()
{
    bool res =  tabModel->submitAll();
    if(!res){
        QMessageBox::information(this,"消息","数据提交错误，错误信息\n"+tabModel->lastError().text());
    }else{
        ui->actSubmit->setEnabled(false);
        ui->actRevert->setEnabled(false);
    }
}

void MainWindow::on_actRevert_triggered()
{
    tabModel->revertAll();
    ui->actSubmit->setEnabled(false);
    ui->actRevert->setEnabled(false);
}

void MainWindow::on_actPhotoClear_triggered()
{
    int curRecNo = theSeletion->currentIndex().row();
    QSqlRecord curRec = tabModel->record(curRecNo);
    curRec.setNull("Photo");
    tabModel->setRecord(curRecNo,curRec);
    ui->dbLabPhoto->clear();
}

void MainWindow::on_actPhoto_triggered()
{
    QString aFile = QFileDialog::getOpenFileName(this,"选择图片","","照片(*.jpg)");
    if(aFile.isEmpty()) return;

    QByteArray data;
    QFile *file = new QFile(aFile);
    file->open(QIODevice::ReadOnly);
    data = file->readAll();
    file->close();
    int curRecNo = theSeletion->currentIndex().row();
    QSqlRecord curRec = tabModel->record(curRecNo);
    curRec.setValue("Photo",data);
    QPixmap pic;
    pic.load(aFile);
    ui->dbLabPhoto->setPixmap(pic.scaledToWidth(ui->dbLabPhoto->size().width()));
}

void MainWindow::on_actScan_triggered()
{
    if(tabModel->rowCount()==0) return;
    for(int i=0;i<tabModel->rowCount();i++){
        QSqlRecord aRec = tabModel->record(i);
        float salary = aRec.value("Salary").toFloat();
        salary*=1.1;
        aRec.setValue("Salary",salary);
        tabModel->setRecord(i,aRec);
    }
    if(tabModel->submitAll()){
        QMessageBox::information(this,"消息","涨工资完毕");
    }

}

//void MainWindow::on_actScan_triggered()
//{//涨工资，记录遍历
//    if (tabModel->rowCount()==0)
//        return;

//    for (int i=0;i<tabModel->rowCount();i++)
//    {
//        QSqlRecord aRec=tabModel->record(i); //获取当前记录
//        float salary=aRec.value("Salary").toFloat();
//        salary=salary*1.1;
//        aRec.setValue("Salary",salary);
//        tabModel->setRecord(i,aRec);
//    }
//}

void MainWindow::on_comboFields_currentIndexChanged(int index)
{
    if(ui->radioBtnAscend->isChecked()){
        tabModel->setSort(index,Qt::AscendingOrder);
    }else
        tabModel->setSort(index,Qt::DescendingOrder);
    tabModel->select();
}

void MainWindow::on_radioBtnAscend_clicked()
{
    tabModel->setSort(ui->comboFields->currentIndex(),Qt::AscendingOrder);
    tabModel->select();
}

void MainWindow::on_radioBtnDescend_clicked()
{
    tabModel->setSort(ui->comboFields->currentIndex(),Qt::DescendingOrder);
    tabModel->select();
}

void MainWindow::on_radioBtnMan_clicked()
{
    tabModel->setFilter("Gender='男'");
}

void MainWindow::on_radioBtnWoman_clicked()
{
    tabModel->setFilter("Gender='女'");
}

void MainWindow::on_radioBtnBoth_clicked()
{
    tabModel->setFilter("");
}
