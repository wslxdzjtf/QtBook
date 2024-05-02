#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSplitter>
#include <QColorDialog>

void MainWindow::init3DGraph()
{
    graph3D = new Q3DSurface;
    graph3D->axisX()->setTitle("X轴");
    graph3D->axisX()->setTitleVisible(true);
    graph3D->axisX()->setRange(-11,11);
    graph3D->axisY()->setTitle("Y轴");
    graph3D->axisY()->setTitleVisible(true);
    graph3D->axisZ()->setTitle("Z轴");
    graph3D->axisZ()->setTitleVisible(true);
    graph3D->axisZ()->setRange(-11,11);
    QSurfaceDataProxy *proxy =new QSurfaceDataProxy;
    series=new QSurface3DSeries(proxy);
    series->setMeshSmooth(true);
    series->setDrawMode(QSurface3DSeries::DrawSurfaceAndWireframe);
    graph3D->addSeries(series);

    QSurfaceDataArray *dataArray =new QSurfaceDataArray;

    //墨西哥草帽
    int N=41;//-10:0.5:10, N个数据点

    dataArray->reserve(N);

    float x=-10,y,z;
    int i,j;
    for (i =1 ; i <=N; i++)
    {
        QSurfaceDataRow *newRow = new QSurfaceDataRow(N); //一行的数据
        y=-10;
        int index=0;
        for (j = 1; j <=N; j++)
        {
            z=qSqrt(x*x+y*y);
            if (z!=0)
                z=10*qSin(z)/z;
            else
                z=10;
            (*newRow)[index++].setPosition(QVector3D(x, z, y));
            y=y+0.5;
        }
        x=x+0.5;
        *dataArray << newRow;
    }

    proxy->resetArray(dataArray);
    //series->dataProxy()->resetArray();
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
