#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdialogsetsize.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    theModel = new QStandardItemModel(this);
    theSelection = new QItemSelectionModel(theModel);
    ui->tableView->setModel(theModel);
    ui->tableView->setSelectionModel(theSelection);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setActLocateEnable(bool enable)
{
    ui->actTab_Locate->setEnabled(enable);
}

void MainWindow::setDlgLocateNull()
{
    dialogLocate=NULL;
}

void MainWindow::setAcellText(int row, int col, QString txt)
{
    QModelIndex index=theModel->index(row,col);
    theModel->setData(index,txt,Qt::DisplayRole);
    theSelection->clearSelection();
    theSelection->setCurrentIndex(index,QItemSelectionModel::Select);
}

void MainWindow::on_actTab_SetSize_triggered()
{
    QDialogSetSize *dlg = new QDialogSetSize(this);
    dlg->SetRowsColumns(theModel->rowCount(),theModel->columnCount());
    int ret = dlg->exec();
    if(ret==QDialog::Accepted){
        int col = dlg->columnCount();
        int row = dlg->rowCount();
        theModel->setColumnCount(col);
        theModel->setRowCount(row);
    }
    delete dlg;
}

void MainWindow::on_actTab_SetHeader_triggered()
{
    if(dialogHeader==NULL)
        dialogHeader = new DialogSetHeaders(this);

    if(dialogHeader->stringList().count()!=theModel->columnCount()){
        QStringList strList;
        for(int i=0;i<theModel->columnCount();i++){
            strList<<theModel->headerData(i,Qt::Horizontal).toString();
        }
         dialogHeader->setStringList(strList);
    }
    int ret=dialogHeader->exec();
    if(ret==QDialog::Accepted){
        QStringList strList = dialogHeader->stringList();
        theModel->setHorizontalHeaderLabels(strList);
    }

}

void MainWindow::on_actTab_Locate_triggered()
{
    ui->actTab_Locate->setEnabled(false);
    dialogLocate = new QDialogLocate(this);
    dialogLocate->setAttribute(Qt::WA_DeleteOnClose);
    Qt::WindowFlags flags=dialogLocate->windowFlags();
    dialogLocate->setWindowFlags(flags|Qt::WindowCloseButtonHint);
    dialogLocate->setRange(theModel->rowCount(),theModel->columnCount());
    QModelIndex curIndex = theSelection->currentIndex();
    if(curIndex.isValid())
        dialogLocate->setValue(curIndex.row(),curIndex.column());
    connect(dialogLocate,SIGNAL(changeCellText(int,int,QString)),this,SLOT(setAcellText(int,int,QString)));
    dialogLocate->show();
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    if(dialogLocate!=NULL)
        dialogLocate->setValue(index.row(),index.column());
}
