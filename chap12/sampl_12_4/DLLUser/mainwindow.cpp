#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogpen.h"
#include <QPainter>

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    QRect rect(0,0,width(),height());
    painter.setViewport(rect);
    painter.setWindow(0,0,100,50);
    painter.setPen(m_pen);
    painter.drawRect(10,10,80,30);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Pen_triggered()
{
    bool ok = false;
    QPen pen=DialogPen::getPen(m_pen,ok);
    if(ok){
        m_pen = pen;
        repaint();
    }

}
