#include "axbchartview.h"

void AXBChartView::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Plus:
        chart()->zoom(1.2);
        break;
    case Qt::Key_Minus:
        chart()->zoom(0.8);
        break;
    case Qt::Key_Left:
        chart()->scroll(10,0);
        break;
    case Qt::Key_Right:
        chart()->scroll(-10,0);
        break;
    case Qt::Key_Up:
        chart()->scroll(0,-10);
        break;
    case Qt::Key_Down:
        chart()->scroll(0,10);
    case Qt::Key_PageUp:
        chart()->scroll(0,-50);
        break;
    case Qt::Key_PageDown:
        chart()->scroll(0,50);
        break;
    case Qt::Key_Home:
        chart()->zoomReset();
        break;
    default: QChartView::keyPressEvent(event);
        break;
    }
}

void AXBChartView::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
        beginPoint=event->pos();
    QChartView::mousePressEvent(event);
}

void AXBChartView::mouseMoveEvent(QMouseEvent *event)
{
    QPoint point=event->pos();
    emit mouseMovePoint(point);
    QChartView::mouseMoveEvent(event);
}

void AXBChartView::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        endPoint=event->pos();
        QRectF rectF;
        rectF.setTopLeft(beginPoint);
        rectF.setBottomRight(endPoint);
        chart()->zoomIn(rectF);
    }else if(event->button()==Qt::RightButton)
        chart()->zoomReset();

    QChartView::mouseReleaseEvent(event);
}

AXBChartView::AXBChartView(QWidget *parent) : QChartView(parent)
{
    setMouseTracking(true);
    setDragMode(QGraphicsView::RubberBandDrag);
}
