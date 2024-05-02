#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSplitter>
#include <QColorDialog>

void MainWindow::init3DGraph()
{
    graph3D = new Q3DSurface;

    graph3D->axisX()->setTitle("东--西");
    graph3D->axisX()->setTitleVisible(true);
    graph3D->axisX()->setLabelFormat("%.1f米");
    graph3D->axisZ()->setTitle("南--北");
    graph3D->axisZ()->setTitleVisible(true);
    graph3D->axisY()->setTitle("高度");
    graph3D->axisY()->setTitleVisible(true);

    QImage heightMapImage(":/map/sea.png");
    QHeightMapSurfaceDataProxy *proxy=new QHeightMapSurfaceDataProxy(heightMapImage);
    proxy->setValueRanges(-5000,5000,-5000,5000);
    series=new QSurface3DSeries(proxy);
    series->setDrawMode(QSurface3DSeries::DrawSurface);
    graph3D->addSeries(series);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSplitter *splitter=new QSplitter;
    splitter->addWidget(ui->groupBox);
    init3DGraph();
    splitter->addWidget(createWindowContainer(graph3D));
    setCentralWidget(splitter);

    QLinearGradient lgcolor1(0,0,100,0);
    lgcolor1.setColorAt(1.0,Qt::black);
    lgcolor1.setColorAt(0.67,Qt::blue);
    lgcolor1.setColorAt(0.33,Qt::red);
    lgcolor1.setColorAt(0.0,Qt::yellow);
    QPixmap pm(160,20);
    QPainter painter(&pm);
    painter.setBrush(lgcolor1);
    painter.drawRect(0,0,160,20);
    ui->btnGrad1->setIcon(QIcon(pm));
    ui->btnGrad1->setIconSize(QSize(160,20));

    lgcolor1.setColorAt(1.0,Qt::darkGreen);
    lgcolor1.setColorAt(0.67,Qt::yellow);
    lgcolor1.setColorAt(0.33,Qt::red);
    lgcolor1.setColorAt(0.0,Qt::darkRed);
    painter.setBrush(lgcolor1);
    painter.drawRect(0,0,160,20);
    ui->btnGrad2->setIcon(QIcon(pm));
    ui->btnGrad2->setIconSize(QSize(160,20));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboDrawMode_currentIndexChanged(int index)
{
    series->setDrawMode(QSurface3DSeries::DrawFlags(index+1));
}

void MainWindow::on_btnBarColor_clicked()
{
    QColor color=series->baseColor();
    color=QColorDialog::getColor(color);
    if(color.isValid())
        series->setBaseColor(color);
        series->setColorStyle(Q3DTheme::ColorStyleUniform);
}

void MainWindow::on_btnGrad1_clicked()
{
    QLinearGradient lgcolor1(0,0,100,0);
    lgcolor1.setColorAt(1.0,Qt::black);
    lgcolor1.setColorAt(0.67,Qt::blue);
    lgcolor1.setColorAt(0.33,Qt::red);
    lgcolor1.setColorAt(0.0,Qt::yellow);
    series->setBaseGradient(lgcolor1);
    series->setColorStyle(Q3DTheme::ColorStyleRangeGradient);
}

void MainWindow::on_btnGrad2_clicked()
{
    QLinearGradient lgcolor1(0,0,100,0);
    lgcolor1.setColorAt(1.0,Qt::darkGreen);
    lgcolor1.setColorAt(0.67,Qt::yellow);
    lgcolor1.setColorAt(0.33,Qt::red);
    lgcolor1.setColorAt(0.0,Qt::darkRed);
    series->setBaseGradient(lgcolor1);
    series->setColorStyle(Q3DTheme::ColorStyleObjectGradient);
}

void MainWindow::on_cBoxSelectionMode_currentIndexChanged(int index)
{
    switch (index) {
    case 0:
        graph3D->setSelectionMode(QAbstract3DGraph::SelectionNone);
        break;
    case 1:
        graph3D->setSelectionMode(QAbstract3DGraph::SelectionItem);
        break;
    case 2:
        graph3D->setSelectionMode(QAbstract3DGraph::SelectionRow|QAbstract3DGraph::SelectionSlice);
        break;
    case 3:
        graph3D->setSelectionMode(QAbstract3DGraph::SelectionColumn|QAbstract3DGraph::SelectionSlice);
        break;
    default:
        break;
    }
}
