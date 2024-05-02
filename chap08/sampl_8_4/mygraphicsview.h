#ifndef MYGRAPHICSVIEW_H
#define MYGRAPHICSVIEW_H

#include <QObject>
#include <QGraphicsView>
class MyGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit MyGraphicsView(QWidget *parent = nullptr);
protected:
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
signals:
    void mouseMovePoint(QPoint point);
    void mouseClicked(QPoint point);
public slots:
};

#endif // MYGRAPHICSVIEW_H
