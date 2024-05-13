#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    ui->lineEdit->setProperty("required","true");
//    ui->lineEdit->setStyleSheet("color:blue;"
//                                "background-color:yellow;"
//                                "selection-color:yellow;"
//                                "selection-background-color:blue");
}

MainWindow::~MainWindow()
{
    delete ui;
}
