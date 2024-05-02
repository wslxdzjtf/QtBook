#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QChartView>
QT_CHARTS_USE_NAMESPACE
#include <QLineSeries>
#include <QtMath>
#include <QValueAxis>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //创建图表
    QChartView *chartView = new QChartView(this);
    QChart *chart = new QChart();
    chart->setTitle("简单函数曲线");

    chartView->setChart(chart);
    setCentralWidget(chartView);
    // 创建折线序列
    QLineSeries *series0 = new QLineSeries;
    QLineSeries *series1 = new QLineSeries;
    series0->setName("sin曲线");
    series1->setName("cos曲线");
    chart->addSeries(series0);
    chart->addSeries(series1);
    //序列添加数值
    qreal y0,y1,t=0,intv=0.1;
    int cnt=100;
    for(int i=0;i<cnt;i++){
        y0=qSin(t);
        series0->append(t,y0);
        y1=qCos(t);
        series1->append(t,y1);
        t+=intv;
    }
    //创建坐标轴
    QValueAxis *axisX =new QValueAxis;
    axisX->setRange(0,10);
    chart->setAxisX(axisX,series0);
    chart->setAxisX(axisX,series1);

    QValueAxis *axisY =new QValueAxis;
    axisY->setRange(-1,1);
    chart->setAxisY(axisY,series0);
    chart->setAxisY(axisY,series1);
}

MainWindow::~MainWindow()
{
    delete ui;
}
