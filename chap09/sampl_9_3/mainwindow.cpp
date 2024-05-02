#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::initData()
{
    QStringList headerlist;
    headerlist<<"姓名"<<"数学"<<"语文"<<"英语"<<"平均分";
    theModel->setHorizontalHeaderLabels(headerlist);

    for(int i=0;i<theModel->rowCount();i++){
        QString studName=QString::asprintf("学生%2d",i+1);
        QStandardItem *aItem=new QStandardItem(studName);
        aItem->setTextAlignment(Qt::AlignHCenter);
        theModel->setItem(i,colNoName,aItem);
        qreal avgScore=0;
        for(int j=colNoMath;j<=colNoEnglish;j++){
            qreal score=50.0+qrand()%50;
            aItem=new QStandardItem(QString::asprintf("%.0f",score));
            aItem->setTextAlignment(Qt::AlignHCenter);
            theModel->setItem(i,j,aItem);
            avgScore+=score;
        }
        aItem=new QStandardItem(QString::asprintf("%.1f",avgScore/3));
        aItem->setTextAlignment(Qt::AlignHCenter);
        aItem->setFlags(aItem->flags()&!Qt::ItemIsEditable);    //平均分不能修改
        theModel->setItem(i,colNoAverage,aItem);
    }
}

void MainWindow::sureyData()
{
    for(int i=colNoMath;i<=colNoAverage;i++){
        qreal minVal=100,maxVal=0,val,sum=0;
        int cnt50=0,cnt60=0,cnt70=0,cnt80=0,cnt90=0;

        for(int j=0;j<theModel->rowCount();j++){
            val=theModel->item(j,i)->text().toDouble();
            if(val>maxVal) maxVal=val;
            if(val<minVal) minVal=val;

            if(val<60) cnt50++;
            else if(val<70) cnt60++;
            else if(val<80) cnt70++;
            else if(val<90) cnt80++;
            else cnt90++;
            sum+=val;
        }
        QTreeWidgetItem *aItem=ui->treeWidget->topLevelItem(0);
        aItem->setTextAlignment(i,Qt::AlignHCenter);
        aItem->setText(i,QString::number(cnt50));

        aItem=ui->treeWidget->topLevelItem(1);
        aItem->setTextAlignment(i,Qt::AlignHCenter);
        aItem->setText(i,QString::number(cnt60));

        aItem=ui->treeWidget->topLevelItem(2);
        aItem->setTextAlignment(i,Qt::AlignHCenter);
        aItem->setText(i,QString::number(cnt70));

        aItem=ui->treeWidget->topLevelItem(3);
        aItem->setTextAlignment(i,Qt::AlignHCenter);
        aItem->setText(i,QString::number(cnt80));

        aItem=ui->treeWidget->topLevelItem(4);
        aItem->setTextAlignment(i,Qt::AlignHCenter);
        aItem->setText(i,QString::number(cnt90));

        aItem=ui->treeWidget->topLevelItem(5);
        aItem->setTextAlignment(i,Qt::AlignHCenter);
        aItem->setText(i,QString::number(sum/theModel->rowCount()));

        aItem=ui->treeWidget->topLevelItem(6);
        aItem->setTextAlignment(i,Qt::AlignHCenter);
        aItem->setText(i,QString::number(maxVal));

        aItem=ui->treeWidget->topLevelItem(7);
        aItem->setTextAlignment(i,Qt::AlignHCenter);
        aItem->setText(i,QString::number(minVal));

    }
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qsrand(QTime::currentTime().second());
    theModel=new QStandardItemModel(iniDataRowCount,fixedColumnCount,this);
    initData();
    ui->tableView->setModel(theModel);

    iniBarChart();
    sureyData();
    //buildBarChart();

    iniPieChart();
    iniStackedBarChart();
    iniPercentBarChart();
    iniScatterChart();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actGenData_triggered()
{
    initData();
}

void MainWindow::on_actTongJi_triggered()
{
    sureyData();
}

void MainWindow::iniBarChart()
{
    QChart *chart=new QChart;
    chart->setTitle("Barchart演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);   //动画效果
    ui->chartViewBar->setChart(chart);
    ui->chartViewBar->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::buildBarChart()
{
    QChart *chart=ui->chartViewBar->chart();
    chart->removeAllSeries();
    if(chart->axisX()!=NULL){
        chart->removeAxis(chart->axisX());
        chart->removeAxis(chart->axisY());
    }
    //数据集
    QBarSet *setMath=new QBarSet(theModel->horizontalHeaderItem(colNoMath)->text());
    QBarSet *setChinese=new QBarSet(theModel->horizontalHeaderItem(colNoChinese)->text());
    QBarSet *setEnglish=new QBarSet(theModel->horizontalHeaderItem(colNoEnglish)->text());

    QLineSeries *Line=new QLineSeries;
    QPen pen;
    pen.setColor(Qt::red);
    pen.setWidth(2);
    Line->setPen(pen);
    Line->setName(theModel->horizontalHeaderItem(colNoAverage)->text());
    for(int i=0;i<theModel->rowCount();i++){
        setMath->append(theModel->item(i,colNoMath)->text().toInt());
        setChinese->append(theModel->item(i,colNoChinese)->text().toInt());
        setEnglish->append(theModel->item(i,colNoEnglish)->text().toInt());
        Line->append(QPointF(i,theModel->item(i,colNoAverage)->text().toFloat()));
    }
    //序列
    QBarSeries *series=new QBarSeries;
    series->append(setMath);
    series->append(setChinese);
    series->append(setEnglish);

    chart->addSeries(series);
    chart->addSeries(Line);

    QStringList categories;
    for(int i=0;i<theModel->rowCount();i++)
        categories<<theModel->item(i,colNoName)->text();

    QBarCategoryAxis *axisX=new QBarCategoryAxis;
    axisX->setCategories(categories);
    chart->setAxisX(axisX,series);
    chart->setAxisX(axisX,Line);

    QValueAxis *axisY=new QValueAxis;
    axisY->setRange(0,100);
    axisY->setTitleText("分数");
    chart->setAxisY(axisY,series);
    chart->setAxisY(axisY,Line);
    chart->legend()->setAlignment(Qt::AlignBottom);

}

void MainWindow::iniPieChart()
{
    QChart *chart=new QChart;
    chart->setTitle("Piechart演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);   //动画效果
    ui->chartViewPie->setChart(chart);
    ui->chartViewPie->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::buildPieChart()
{
    QChart *chart=ui->chartViewPie->chart();
    chart->removeAllSeries();
    if(chart->axisX()!=NULL){
        chart->removeAxis(chart->axisX());
        chart->removeAxis(chart->axisY());
    }
    QPieSeries *series=new QPieSeries;
    series->setHoleSize(ui->spinHoleSize->value());
    series->setPieSize(ui->spinPieSize->value());

    int colNo=ui->cBoxCourse->currentIndex()+1;
    for(int i=0;i<5;i++){
        QTreeWidgetItem *item=ui->treeWidget->topLevelItem(i);
        series->append(item->text(0),item->text(colNo).toFloat());
    }
    QPieSlice *slice;
    for(int i=0;i<5;i++){
        slice=series->slices().at(i);
        slice->setLabel(slice->label()+QString::asprintf("%.0f人,%.1f",slice->value(),slice->percentage()));
        connect(slice,SIGNAL(hovered(bool)),this,SLOT(on_SliceHighlight(bool)));
    }
    series->setLabelsVisible(true);
    chart->setTitle("Piechart----"+ui->cBoxCourse->currentText());
    chart->addSeries(series);
    chart->legend()->setAlignment(Qt::AlignRight);  //设置legend位置
}

void MainWindow::iniStackedBarChart()
{
    QChart *chart=new QChart;
    chart->setTitle("StackedBarchart演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);   //动画效果
    ui->chartViewStackedBar->setChart(chart);
    ui->chartViewStackedBar->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::buildStackedBarChart()
{
    QChart *chart=ui->chartViewStackedBar->chart();
    chart->removeAllSeries();
    if(chart->axisX()!=NULL){
        chart->removeAxis(chart->axisX());
        chart->removeAxis(chart->axisY());
    }
    //数据集
    QBarSet *setMath=new QBarSet(theModel->horizontalHeaderItem(colNoMath)->text());
    QBarSet *setChinese=new QBarSet(theModel->horizontalHeaderItem(colNoChinese)->text());
    QBarSet *setEnglish=new QBarSet(theModel->horizontalHeaderItem(colNoEnglish)->text());

    QStringList categories;
    for(int i=0;i<theModel->rowCount();i++){
        categories<<theModel->item(i,colNoName)->text();
        setMath->append(theModel->item(i,colNoMath)->text().toFloat());
        setChinese->append(theModel->item(i,colNoChinese)->text().toFloat());
        setEnglish->append(theModel->item(i,colNoEnglish)->text().toFloat());
    }
    QStackedBarSeries *series=new QStackedBarSeries;
    series->append(setMath);
    series->append(setChinese);
    series->append(setEnglish);

    QBarCategoryAxis *axisX=new QBarCategoryAxis;
    axisX->append(categories);
    chart->setAxisX(axisX,series);
    QValueAxis *axisY=new QValueAxis;
    axisY->setRange(0,300);
    axisY->setTitleText("总分");
    chart->setAxisY(axisY,series);

    chart->addSeries(series);
}

void MainWindow::buildPercentBarChart()
{
    QChart *chart=ui->chartViewPercentBar->chart();
    chart->removeAllSeries();
    if(chart->axisX()!=NULL){
        chart->removeAxis(chart->axisX());
        chart->removeAxis(chart->axisY());
    }
    //数据集
    QBarSet *setMath=new QBarSet(theModel->horizontalHeaderItem(colNoMath)->text());
    QBarSet *setChinese=new QBarSet(theModel->horizontalHeaderItem(colNoChinese)->text());
    QBarSet *setEnglish=new QBarSet(theModel->horizontalHeaderItem(colNoEnglish)->text());

    QStringList categories;
    for(int i=0;i<5;i++){
        categories<<ui->treeWidget->topLevelItem(i)->text(colNoName);
        setMath->append(ui->treeWidget->topLevelItem(i)->text(colNoMath).toFloat());
        setChinese->append(ui->treeWidget->topLevelItem(i)->text(colNoChinese).toFloat());
        setEnglish->append(ui->treeWidget->topLevelItem(i)->text(colNoEnglish).toFloat());
    }
    QPercentBarSeries *series=new QPercentBarSeries;
    series->append(setMath);
    series->append(setChinese);
    series->append(setEnglish);

    QBarCategoryAxis *axisX=new QBarCategoryAxis;
    axisX->append(categories);
    chart->setAxisX(axisX,series);
    QValueAxis *axisY=new QValueAxis;
    axisY->setRange(0,100);
    axisY->setTitleText("分数百分比");
    chart->setAxisY(axisY,series);

    chart->addSeries(series);
}

void MainWindow::iniScatterChart()
{
    QChart *chart=new QChart;
    chart->setTitle("Scatterchart演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);   //动画效果
    ui->chartViewScatter->setChart(chart);
    ui->chartViewScatter->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::buildScatterChart()
{
    QChart *chart=ui->chartViewScatter->chart();
    chart->removeAllSeries();
    if(chart->axisX()!=NULL){
        chart->removeAxis(chart->axisX());
        chart->removeAxis(chart->axisY());
    }
    QSplineSeries *seriesLine = new QSplineSeries;
    seriesLine->setName("spline");
    QPen pen;
    pen.setWidth(2);
    pen.setColor(Qt::red);
    seriesLine->setPen(pen);

    QScatterSeries *series0=new QScatterSeries;
    series0->setName("散点");
    series0->setMarkerShape(QScatterSeries::MarkerShapeCircle);
    series0->setBorderColor(Qt::black);
    series0->setBrush(Qt::blue);
    series0->setMarkerSize(12);

    for(int i=0;i<10;i++){
        int x=qrand()%20;
        int y=qrand()%20;
        series0->append(x,y);
        seriesLine->append(x,y);
    }
    chart->addSeries(series0);
    chart->addSeries(seriesLine);

    chart->createDefaultAxes();
    chart->axisX()->setTitleText("X轴");
    chart->axisX()->setRange(-2,22);
    chart->axisY()->setTitleText("Y轴");
    chart->axisY()->setRange(-2,22);
}

void MainWindow::iniPercentBarChart()
{
    QChart *chart=new QChart;
    chart->setTitle("PercentBarchart演示");
    chart->setAnimationOptions(QChart::SeriesAnimations);   //动画效果
    ui->chartViewPercentBar->setChart(chart);
    ui->chartViewPercentBar->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::on_btnBuildBarChart_clicked()
{
    buildBarChart();
}

void MainWindow::on_btnDrawPieChart_clicked()
{
    buildPieChart();
}

void MainWindow::on_SliceHighlight(bool show)
{
    QPieSlice *slice=(QPieSlice*)sender();
    slice->setExploded(show);
}

void MainWindow::on_spinHoleSize_valueChanged(double arg1)
{
    QPieSeries *series;
    series=(QPieSeries *)ui->chartViewPie->chart()->series().at(0);
    series->setHoleSize(arg1);
}

void MainWindow::on_spinPieSize_valueChanged(double arg1)
{
    QPieSeries *series;
    series=(QPieSeries *)ui->chartViewPie->chart()->series().at(0);
    series->setPieSize(arg1);
}

void MainWindow::on_cBoxTheme_currentIndexChanged(int index)
{
    ui->chartViewPie->chart()->setTheme(QChart::ChartTheme(index));
}

void MainWindow::on_btnBuildStackedBar_clicked()
{
    buildStackedBarChart();
}

void MainWindow::on_btnPercentBar_clicked()
{
    buildPercentBarChart();
}

void MainWindow::on_btnScatter_clicked()
{
    buildScatterChart();
}
