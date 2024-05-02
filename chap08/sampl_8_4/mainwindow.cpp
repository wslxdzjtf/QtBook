#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsRectItem>

void MainWindow::initGraphics()
{
    QRectF rect(-200,-100,400,200);
    scene = new QGraphicsScene(rect);
    ui->graphicsView->setScene(scene);
    QGraphicsRectItem *item=new QGraphicsRectItem(rect);
    item->setFlags(QGraphicsItem::ItemIsFocusable|QGraphicsItem::ItemIsSelectable);

    QPen pen;
    pen.setWidth(2);
    item->setPen(pen);
    scene->addItem(item);

    QGraphicsEllipseItem *item2=new QGraphicsEllipseItem(-100,-50,200,100);
    item2->setBrush(QBrush(Qt::blue));
    scene->addItem(item2);
    item2->setFlags(QGraphicsItem::ItemIsFocusable|QGraphicsItem::ItemIsSelectable|QGraphicsItem::ItemIsMovable);

    QGraphicsEllipseItem *item3=new QGraphicsEllipseItem(-50,-50,100,100);
    item3->setPos(rect.right(),rect.bottom());
    item3->setBrush(QBrush(Qt::red));
    scene->addItem(item3);
    item3->setFlags(QGraphicsItem::ItemIsFocusable|QGraphicsItem::ItemIsSelectable|QGraphicsItem::ItemIsMovable);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    labViewCord=new QLabel("View坐标：");
    labViewCord->setMinimumWidth(200);
    ui->statusBar->addWidget(labViewCord);
    labSceneCord=new QLabel("View坐标：");
    labSceneCord->setMinimumWidth(200);
    ui->statusBar->addWidget(labSceneCord);
    labItemCord=new QLabel("View坐标：");
    labItemCord->setMinimumWidth(200);
    ui->statusBar->addWidget(labItemCord);

    ui->graphicsView->setCursor(Qt::CrossCursor);
    ui->graphicsView->setMouseTracking(true);
    connect(ui->graphicsView,SIGNAL(mouseMovePoint(QPoint)),this,SLOT(on_mouseMovePoint(QPoint)));
    connect(ui->graphicsView,SIGNAL(mouseClicked(QPoint)),this,SLOT(on_mouseClicked(QPoint)));

    initGraphics();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    ui->labViewSize->setText(QString::asprintf("Graphics View坐标""宽=%d，高=%d",ui->graphicsView->width(),ui->graphicsView->height()));
    QRectF rect=ui->graphicsView->sceneRect();
    ui->LabSceneRect->setText(QString::asprintf("QGraphicsView::sceneRect=""(L,T,W,H)=%.0f,%.0f,%.0f,%.0f",
                                                rect.left(),rect.top(),rect.width(),rect.height()));
}

void MainWindow::on_mouseMovePoint(QPoint point)
{
    labViewCord->setText(QString::asprintf("View坐标：%d,%d",point.x(),point.y()));
    QPointF pointScene=ui->graphicsView->mapToScene(point);
    labSceneCord->setText(QString::asprintf("Scene坐标：%.0f,%.0f",pointScene.x(),pointScene.y()));
}

void MainWindow::on_mouseClicked(QPoint point)
{
    QPointF pointScene=ui->graphicsView->mapToScene(point);
    QGraphicsItem *item=NULL;
    item=scene->itemAt(pointScene,ui->graphicsView->transform());
    if(item!=NULL){
        QPointF pointItem=item->mapFromScene(pointScene);
        labItemCord->setText(QString::asprintf("Item坐标：%.0f,%.0f",pointItem.x(),pointItem.y()));
    }
}
