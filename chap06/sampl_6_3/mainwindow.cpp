#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include "formdoc.h"
#include "formtable.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->tabWidget);
    ui->tabWidget->setVisible(false);
    //setWindowState(Qt::WindowMaximized);    //窗口最大化
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawPixmap(0,ui->mainToolBar->height(),width(),height()-ui->mainToolBar->height()-ui->statusBar->height(), QPixmap(":/images/images/back2.jpg"));

}

void MainWindow::on_actWidgetInsite_triggered()
{
    FormDoc *formDoc = new FormDoc(this);
    formDoc->setAttribute(Qt::WA_DeleteOnClose);    //关闭时内存回收
    int cur = ui->tabWidget->addTab(formDoc,QString::asprintf("Doc %d",ui->tabWidget->count()));
    ui->tabWidget->setCurrentIndex(cur);
    ui->tabWidget->setVisible(true);
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
//    if(ui->tabWidget->count()==1)
//        ui->tabWidget->setVisible(false);
    if(index<0) return;
    QWidget *tab=ui->tabWidget->widget(index);
    tab->close();

}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    bool en=ui->tabWidget->count()>0;
    ui->tabWidget->setVisible(en);
}

void MainWindow::on_actWidget_triggered()
{
    FormDoc *formDoc = new FormDoc;
    formDoc->setAttribute(Qt::WA_DeleteOnClose);    //关闭时内存回收
    formDoc->setWindowTitle("Widget独立显示");
    formDoc->setWindowOpacity(0.9);
    formDoc->show();
}

void MainWindow::on_actWindowInsite_triggered()
{
    FormTable *formTable = new FormTable(this);
    formTable->setAttribute(Qt::WA_DeleteOnClose);    //关闭时内存回收
    int cur = ui->tabWidget->addTab(formTable,QString::asprintf("Table %d",ui->tabWidget->count()));
    ui->tabWidget->setCurrentIndex(cur);
    ui->tabWidget->setVisible(true);
}

void MainWindow::on_actWindow_triggered()
{
    FormTable *formTable = new FormTable(this);
    formTable->setAttribute(Qt::WA_DeleteOnClose);    //关闭时内存回收
    formTable->setWindowTitle("MainWindow独立显示");
    formTable->setWindowOpacity(0.9);
    formTable->show();
}
