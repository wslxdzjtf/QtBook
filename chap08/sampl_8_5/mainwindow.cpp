#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>
#include <QGraphicsItem>
#include <QInputDialog>
#include <QColorDialog>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->gView);
    labItemInfo = new QLabel("ItemInfo:");
    labItemInfo->setMinimumWidth(150);
    scene=new QGraphicsScene(-300,-100,600,200);
    ui->gView->setScene(scene);
    ui->gView->setCursor(Qt::CrossCursor);  //设置鼠标样式
    ui->gView->setMouseTracking(true);  //跟踪鼠标
    ui->gView->setDragMode(QGraphicsView::RubberBandDrag);

    ui->statusBar->addWidget(labItemInfo);

    connect(ui->gView,SIGNAL(keyPress(QKeyEvent*)),this,SLOT(on_keyPress(QKeyEvent*)));
    connect(ui->gView,SIGNAL(mouseClicked(QPoint)),this,SLOT(on_mouseClicked(QPoint)));
    connect(ui->gView,SIGNAL(mouseDoubleClick(QPoint)),this,SLOT(on_mouseDoubleClick(QPoint)));

    qsrand(QTime::currentTime().second());  //生成随机种子
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_keyPress(QKeyEvent *event)
{
    int cnt=scene->selectedItems().count();
    if(cnt==0) return;
    switch(event->key()){
    case Qt::Key_Delete:{
        for(int i=0;i<cnt;i++){
            QGraphicsItem *item=scene->selectedItems().at(0);
        }
        break;
    }
    case Qt::Key_Up:{
        for(int i=0;i<cnt;i++){
            QGraphicsItem *item=scene->selectedItems().at(i);
            item->setY(item->y()-1);
        }
        break;
    }
    case Qt::Key_Left:{
        for(int i=0;i<cnt;i++){
            QGraphicsItem *item=scene->selectedItems().at(i);
            item->setX(item->x()-1);
        }
        break;
    }
    case Qt::Key_Right:{
        for(int i=0;i<cnt;i++){
            QGraphicsItem *item=scene->selectedItems().at(i);
            item->setX(item->x()+1);
        }
        break;
    }
    case Qt::Key_Down:{
        for(int i=0;i<cnt;i++){
            QGraphicsItem *item=scene->selectedItems().at(i);
            item->setY(item->y()+1);
        }
        break;
    }
    default:
        break;
    }
}

void MainWindow::on_mouseDoubleClick(QPoint point)
{
    QPointF pointScene=ui->gView->mapToScene(point);
    QGraphicsItem *item=NULL;
    item=scene->itemAt(pointScene,ui->gView->transform());
    if(item==NULL) return;

    switch (item->type()) {
    case QGraphicsRectItem::Type:{
        QGraphicsRectItem *theItem;
        theItem=qgraphicsitem_cast<QGraphicsRectItem*>(item);
        QColor color=theItem->brush().color();
        color = QColorDialog::getColor(color,NULL,"选择颜色");
        if(color.isValid());
        theItem->setBrush(QBrush(color));
        break;
    }
    case QGraphicsEllipseItem::Type:{
        QGraphicsEllipseItem *theItem;
        theItem=qgraphicsitem_cast<QGraphicsEllipseItem*>(item);
        QColor color=theItem->brush().color();
        color = QColorDialog::getColor(color,NULL,"选择颜色");
        if(color.isValid());
        theItem->setBrush(QBrush(color));
        break;
    }
    case QGraphicsPolygonItem::Type:{
        QGraphicsPolygonItem *theItem;
        theItem=qgraphicsitem_cast<QGraphicsPolygonItem*>(item);
        QColor color=theItem->brush().color();
        color = QColorDialog::getColor(color,NULL,"选择颜色");
        if(color.isValid());
        theItem->setBrush(QBrush(color));
        break;
    }
    case QGraphicsLineItem::Type:{
        QGraphicsLineItem *theItem;
        theItem=qgraphicsitem_cast<QGraphicsLineItem*>(item);
        QColor color=theItem->pen().color();
        color = QColorDialog::getColor(color,NULL,"选择颜色");
        if(color.isValid());
        theItem->setPen(QPen(color));
        break;
    }
    case QGraphicsTextItem::Type:{
        QGraphicsTextItem *theItem;
        theItem=qgraphicsitem_cast<QGraphicsTextItem*>(item);
        QColor color=theItem->defaultTextColor();
        color = QColorDialog::getColor(color,NULL,"选择颜色");
        if(color.isValid());
        theItem->setDefaultTextColor(color);
        break;
    }

    }
}

void MainWindow::on_mouseClicked(QPoint point)
{
    QPointF pointScene=ui->gView->mapToScene(point);
    QGraphicsItem *item=NULL;
    item=scene->itemAt(pointScene,ui->gView->transform());
    if(item!=NULL){
        labItemInfo->setText("ItemInfo:"+item->data(ItemId).toString()+","+item->data(ItemDescription).toString());
    }
}

void MainWindow::on_actItem_Rect_triggered()
{
    QGraphicsRectItem *item = new QGraphicsRectItem(-50,-30,100,60);
    item->setFlags(QGraphicsItem::ItemIsFocusable|QGraphicsItem::ItemIsSelectable|QGraphicsItem::ItemIsMovable);
    item->setBrush(QBrush(Qt::yellow));
    item->setPos(-100+qrand()%200,-60+qrand()%120); //在随机位置生成矩形
    item->setData(ItemId,++seqNum);
    item->setData(ItemDescription,"矩形");
    scene->addItem(item);
    scene->clearSelection();    //
    item->setSelected(true);
}

void MainWindow::on_actItem_Ellipse_triggered()
{
    auto *item = new QGraphicsEllipseItem(-50,-30,100,60);
    item->setFlags(QGraphicsItem::ItemIsFocusable|QGraphicsItem::ItemIsSelectable|QGraphicsItem::ItemIsMovable);
    item->setBrush(QBrush(Qt::gray));
    item->setPos(-100+qrand()%200,-60+qrand()%120); //在随机位置生成矩形
    item->setData(ItemId,++seqNum);
    item->setData(ItemDescription,"椭圆形");
    scene->addItem(item);
    scene->clearSelection();    //
    item->setSelected(true);

}

void MainWindow::on_actItem_Circle_triggered()
{
    auto *item = new QGraphicsEllipseItem(-50,-50,100,100);
    item->setFlags(QGraphicsItem::ItemIsFocusable|QGraphicsItem::ItemIsSelectable|QGraphicsItem::ItemIsMovable);
    item->setBrush(QBrush(Qt::blue));
    item->setPos(-100+qrand()%200,-60+qrand()%120); //在随机位置生成矩形
    item->setData(ItemId,++seqNum);
    item->setData(ItemDescription,"圆形");
    scene->addItem(item);
    scene->clearSelection();    //
    item->setSelected(true);
}

void MainWindow::on_actItem_Line_triggered()
{
    auto *item = new QGraphicsLineItem(-100,0,100,0);
    item->setFlags(QGraphicsItem::ItemIsFocusable|QGraphicsItem::ItemIsSelectable|QGraphicsItem::ItemIsMovable);
    QPen pen(Qt::black);
    pen.setWidth(3);
    item->setPen(pen);
    item->setPos(-100+qrand()%200,-60+qrand()%120); //在随机位置生成直线
    item->setData(ItemId,++seqNum);
    item->setData(ItemDescription,"直线");
    scene->addItem(item);
    scene->clearSelection();    //
    item->setSelected(true);
}

void MainWindow::on_actItem_Polygon_triggered()
{
    auto *item = new QGraphicsPolygonItem;
    QPolygonF points;
    points.append(QPointF(-40,-40));
    points.append(QPointF(40,-40));
    points.append(QPointF(60,40));
    points.append(QPointF(-60,40));
    item->setPolygon(points);
    item->setFlags(QGraphicsItem::ItemIsFocusable|QGraphicsItem::ItemIsSelectable|QGraphicsItem::ItemIsMovable);
    item->setBrush(QBrush(Qt::blue));
    item->setPos(-100+qrand()%200,-60+qrand()%120); //在随机位置生成梯形
    item->setData(ItemId,++seqNum);
    item->setData(ItemDescription,"梯形");
    scene->addItem(item);
    scene->clearSelection();    //
    item->setSelected(true);
}

void MainWindow::on_actItem_Triangle_triggered()
{
    auto *item = new QGraphicsPolygonItem;
    QPolygonF points;
    points.append(QPointF(0,-40));
    points.append(QPointF(60,40));
    points.append(QPointF(-60,40));
    item->setPolygon(points);
    item->setFlags(QGraphicsItem::ItemIsFocusable|QGraphicsItem::ItemIsSelectable|QGraphicsItem::ItemIsMovable);
    item->setBrush(QBrush(Qt::red));
    item->setPos(-100+qrand()%200,-60+qrand()%120); //在随机位置生成梯形
    item->setData(ItemId,++seqNum);
    item->setData(ItemDescription,"三角形");
    scene->addItem(item);
    scene->clearSelection();    //
    item->setSelected(true);
}

void MainWindow::on_actItem_Text_triggered()
{
    QString str=QInputDialog::getText(this,"输入对话框","请输入");
    auto *item = new QGraphicsTextItem(str);
    item->setFlags(QGraphicsItem::ItemIsFocusable|QGraphicsItem::ItemIsSelectable|QGraphicsItem::ItemIsMovable);
    QFont font;
    font.setPointSize(20);
    item->setDefaultTextColor(Qt::green);
    item->setFont(font);
    item->setPos(-100+qrand()%200,-60+qrand()%120); //在随机位置生成直线
    item->setData(ItemId,++seqNum);
    item->setData(ItemDescription," 文字");
    scene->addItem(item);
    scene->clearSelection();    //
    item->setSelected(true);
}

void MainWindow::on_actZoomIn_triggered()
{
    int cnt = scene->selectedItems().count();
    if(cnt==0){
        ui->gView->scale(1.1,1.1);
        return;
    }
    for(int i=0;i<cnt;i++){
        QGraphicsItem *item=scene->selectedItems().at(i);
        item->setScale(0.1+item->scale());
    }
}

void MainWindow::on_actZoomOut_triggered()
{
    int cnt = scene->selectedItems().count();
    if(cnt==0){
        ui->gView->scale(0.9,0.9);
        return;
    }
    for(int i=0;i<cnt;i++){
        QGraphicsItem *item=scene->selectedItems().at(i);
        item->setScale(-0.1+item->scale());
    }
}

void MainWindow::on_actRestore_triggered()
{
    int cnt = scene->selectedItems().count();
    if(cnt==0){
        ui->gView->resetTransform();
        return;
    }
    for(int i=0;i<cnt;i++){
        QGraphicsItem *item=scene->selectedItems().at(i);
        item->setScale(1);
    }
}

void MainWindow::on_actRotateLeft_triggered()
{
    int cnt = scene->selectedItems().count();
    if(cnt==0){
        ui->gView->rotate(-45);
        return;
    }
    for(int i=0;i<cnt;i++){
        QGraphicsItem *item=scene->selectedItems().at(i);
        item->setRotation(item->rotation()-45);
    }
}

void MainWindow::on_actRotateRight_triggered()
{
    int cnt = scene->selectedItems().count();
    if(cnt==0){
        ui->gView->rotate(45);
        return;
    }
    for(int i=0;i<cnt;i++){
        QGraphicsItem *item=scene->selectedItems().at(i);
        item->setRotation(item->rotation()+45);
    }
}

void MainWindow::on_actEdit_Front_triggered()
{
    int cnt = scene->selectedItems().count();
    if(cnt==0) return;
    for(int i=0;i<cnt;i++){
        QGraphicsItem *item=scene->selectedItems().at(i);
        item->setZValue(item->zValue()+1);
    }
}

void MainWindow::on_actEdit_Back_triggered()
{
    int cnt = scene->selectedItems().count();
    if(cnt==0) return;
    for(int i=0;i<cnt;i++){
        QGraphicsItem *item=scene->selectedItems().at(i);
        item->setZValue(item->zValue()-1);
    }
}

void MainWindow::on_actGroup_triggered()
{
    int cnt = scene->selectedItems().count();
    if(!(cnt>1)) return;
    QGraphicsItemGroup *group=new QGraphicsItemGroup;
    scene->addItem(group);
    for(int i=0;i<cnt;i++){
        QGraphicsItem *item=scene->selectedItems().at(0);
        item->setSelected(false);
        group->addToGroup(item);
    }
    group->setFlags(QGraphicsItem::ItemIsFocusable|QGraphicsItem::ItemIsSelectable|QGraphicsItem::ItemIsMovable);
    group->setSelected(true);
}

void MainWindow::on_actGroupBreak_triggered()
{
    int cnt = scene->selectedItems().count();
    if(cnt==0) return;
    QList<QGraphicsItemGroup*>list;
    for(int i=0;i<cnt;i++){
        QGraphicsItem *item=scene->selectedItems().at(i);
        if(item->type()==QGraphicsItemGroup::Type){
            QGraphicsItemGroup *group=qgraphicsitem_cast<QGraphicsItemGroup*>(item);
            list.append(group);
        }
    }
    foreach(auto gItem,list){
        scene->destroyItemGroup(gItem);
    }
}

void MainWindow::on_actEdit_Delete_triggered()
{
    int cnt = scene->selectedItems().count();
    if(cnt==0) return;
    for(int i=0;i<cnt;i++){
        QGraphicsItem *item=scene->selectedItems().at(0);
        scene->removeItem(item);
    }
}
