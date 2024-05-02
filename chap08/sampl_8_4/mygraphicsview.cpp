#include "mygraphicsview.h"
#include <QMouseEvent>

MyGraphicsView::MyGraphicsView(QWidget *parent) : QGraphicsView(parent)
{

}

void MyGraphicsView::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        QPoint point=event->pos();  //view坐标
        emit mouseClicked(point);
    }
    QGraphicsView::mousePressEvent(event);
}

void MyGraphicsView::mouseMoveEvent(QMouseEvent *event)
{
    QPoint point=event->pos();
    emit mouseMovePoint(point);
    QGraphicsView::mouseMoveEvent(event);
}
