#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSplitter>
#include <QColorDialog>

void MainWindow::iniGraph3D()
{
    graph3D = new Q3DScatter;
    //创建坐标
    QStringList rowLabs;
    QStringList colLabs;
    rowLabs<<"row1"<<"row2"<<"row3";
    colLabs<<"col1"<<"col2"<<"col3"<<"col4"<<"col5";
    QValue3DAxis *axisV=new QValue3DAxis;
    axisV->setTitle("Value");
    axisV->setTitleVisible(true);

    QCategory3DAxis *axisCol=new QCategory3DAxis;
    axisCol->setTitle("Colunm");
    axisCol->setTitleVisible(true);
    axisCol->setLabels(colLabs);

    QCategory3DAxis *axisRow=new QCategory3DAxis;
    axisRow->setTitle("Row");
    axisRow->setTitleVisible(true);
    axisRow->setLabels(rowLabs);

    graph3D->setValueAxis(axisV);
    graph3D->setRowAxis(axisRow);
    graph3D->setColumnAxis(axisCol);

    //创建数据序列
    QScatter3DSeries *series=new QScatter3DSeries;
    series->setMesh(QAbstract3DSeries::MeshCylinder);
    series->setItemLabelFormat("(@rowLabel,@colLabel):%.1f");
    graph3D->addSeries(series);

    //添加数据
    QBarDataArray *dataSet=new QBarDataArray;
    dataSet->reserve(rowLabs.count());
    QBarDataRow *dataRow0=new QBarDataRow;
    *dataRow0<<1<<2<<3<<4<<5;
    dataSet->append(dataRow0);
    QBarDataRow *dataRow1=new QBarDataRow;
    *dataRow1<<5<<5<<5<<5<<5;
    dataSet->append(dataRow1);
    QBarDataRow *dataRow2=new QBarDataRow;
    *dataRow2<<5<<4<<3<<4<<5;
    dataSet->append(dataRow2);
    series->dataProxy()->resetArray(dataSet);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSplitter *splitter=new QSplitter(Qt::Horizontal);
    splitter->addWidget(ui->groupBox);

    iniGraph3D();
    splitter->addWidget(createWindowContainer(graph3D));
    setCentralWidget(splitter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboCamera_activated(int index)
{
    graph3D->scene()->activeCamera()->setCameraPreset(Q3DCamera::CameraPreset(index));
}

void MainWindow::on_sliderH_valueChanged(int value)
{
    Q_UNUSED(value);
    int xRot=ui->sliderH->value();
    int yRot=ui->sliderV->value();
    int zoom=ui->sliderZoom->value();
    graph3D->scene()->activeCamera()->setCameraPosition(xRot,yRot,zoom);
}

void MainWindow::on_sliderV_valueChanged(int value)
{
    on_sliderH_valueChanged(0);
}

void MainWindow::on_sliderZoom_valueChanged(int value)
{
    on_sliderH_valueChanged(0);
}

void MainWindow::on_cBoxTheme_currentIndexChanged(int index)
{
    graph3D->activeTheme()->setType(Q3DTheme::Theme(index));
}

void MainWindow::on_cBoxBarStyle_currentIndexChanged(int index)
{
    QScatter3DSeries *series=graph3D->seriesList().at(0);
    series->setMesh(QAbstract3DSeries::Mesh(index));
}

void MainWindow::on_cBoxSelectionMode_currentIndexChanged(int index)
{
    graph3D->setSelectionMode(QAbstract3DGraph::SelectionFlags(index));
}

void MainWindow::on_spinFontSize_valueChanged(int arg1)
{
    QFont font=graph3D->activeTheme()->font();
    font.setPixelSize(arg1);
    graph3D->activeTheme()->setFont(font);
}

void MainWindow::on_btnBarColor_clicked()
{
    QScatter3DSeries *series=graph3D->seriesList().at(0);
    QColor color=series->baseColor();
    color=QColorDialog::getColor(color);
    if(color.isValid())
        series->setBaseColor(color);
}

void MainWindow::on_chkBoxBackground_clicked(bool checked)
{
    graph3D->activeTheme()->setBackgroundEnabled(checked);
}

void MainWindow::on_chkBoxGrid_clicked(bool checked)
{
    graph3D->activeTheme()->setGridEnabled(checked);
}

void MainWindow::on_chkBoxSmooth_clicked(bool checked)
{
    QScatter3DSeries *series=graph3D->seriesList().at(0);
    series->setMeshSmooth(checked);
}

void MainWindow::on_chkBoxReflection_clicked(bool checked)
{
    graph3D->setReflection(checked);
}

void MainWindow::on_chkBoxReverse_clicked(bool checked)
{
    graph3D->valueAxis()->setReversed(checked);
}

void MainWindow::on_chkBoxItemLabel_clicked(bool checked)
{
    QScatter3DSeries *series=graph3D->seriesList().at(0);
    series->setItemLabelVisible(checked);
}

void MainWindow::on_chkBoxAxisTitle_clicked(bool checked)
{
    graph3D->valueAxis()->setTitleVisible(checked);
    graph3D->rowAxis()->setTitleVisible(checked);
    graph3D->columnAxis()->setTitleVisible(checked);
}

void MainWindow::on_chkBoxAxisBackground_clicked(bool checked)
{
    graph3D->activeTheme()->setLabelBackgroundEnabled(checked);
}
