#include "mygraphicsview.h"
#include <QMouseEvent>

MyGraphicsView::MyGraphicsView(QWidget *parent) : QGraphicsView(parent)
{

}

void MyGraphicsView::keyPressEvent(QKeyEvent *event)
{
    emit keyPress(event);
    QGraphicsView::keyPressEvent(event);
}

void MyGraphicsView::mouseDoubleClickEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        QPoint point=event->pos();
        emit mouseDoubleClick(point);
    }
    QGraphicsView::mouseDoubleClickEvent(event);
}

void MyGraphicsView::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        QPoint point=event->pos();
        emit mouseClicked(point);
    }
    QGraphicsView::mousePressEvent(event);
}
