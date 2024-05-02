#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "axbchartview.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->chartView);
    labXYValue=new QLabel("坐标X: Y:");
    labXYValue->setMinimumWidth(200);
    ui->statusBar->addWidget(labXYValue);
    createChart();
    prepareData();
    connect(ui->chartView,SIGNAL(mouseMovePoint(QPoint)),this,SLOT(on_mouseMovePoint(QPoint)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createChart()
{
    QChart *chart=new QChart;
    chart->setTitle("简单的曲线");
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);

    QLineSeries *series0=new QLineSeries;
    QLineSeries *series1=new QLineSeries;
    series0->setName("Sin曲线");
    series1->setName("Cos曲线");

    QPen pen;
    pen.setStyle(Qt::DotLine);
    pen.setColor(Qt::red);
    pen.setWidth(3);
    series0->setPen(pen);

    chart->addSeries(series0);
    chart->addSeries(series1);

    chart->createDefaultAxes();
    chart->axisX()->setRange(0,10);
    chart->axisY()->setRange(-2,2);

    foreach (auto marker, ui->chartView->chart()->legend()->markers()) {
        connect(marker,SIGNAL(clicked()),this,SLOT(on_LegendMarkerClicked()));
    }
}

void MainWindow::prepareData()
{
    QLineSeries *series0=(QLineSeries *)ui->chartView->chart()->series().at(0);
    QLineSeries *series1=(QLineSeries *)ui->chartView->chart()->series().at(1);

    qsrand(QTime::currentTime().second());

    qreal t=0,y0,y1;
    for(int i=0;i<100;i++){
        int rd=(qrand()%10)-5;
        y0=qSin(t)+rd/50;
        y1=qCos(t)+rd/50;
        t+=0.1;
        series0->append(t,y0);
        series1->append(t,y1);
    }

}

void MainWindow::on_mouseMovePoint(QPoint point)
{
    QPointF pt=ui->chartView->chart()->mapToValue(point);
    labXYValue->setText(QString::asprintf("X=%.1f,Y=%.1f",pt.x(),pt.y()));
}

void MainWindow::on_LegendMarkerClicked()
{
    QLegendMarker *marker=(QLegendMarker*)sender();
    marker->series()->setVisible(!marker->series()->isVisible());
    marker->setVisible(true);

    qreal alpha=1;
    if(!marker->series()->isVisible())
        alpha=0.5;
    QBrush brush=marker->labelBrush();
    QColor color=brush.color();
    color.setAlphaF(alpha);
    brush.setColor(color);
    marker->setLabelBrush(brush);
}

void MainWindow::on_actZoomIn_triggered()
{
    ui->chartView->chart()->zoom(1.2);
}

void MainWindow::on_actZoomOut_triggered()
{
    ui->chartView->chart()->zoom(0.8);
}

void MainWindow::on_actZoomReset_triggered()
{
    ui->chartView->chart()->zoomReset();
}
