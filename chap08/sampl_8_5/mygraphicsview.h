#ifndef MYGRAPHICSVIEW_H
#define MYGRAPHICSVIEW_H

#include <QGraphicsView>

class MyGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit MyGraphicsView(QWidget *parent = nullptr);
protected:
    void keyPressEvent(QKeyEvent *event) Q_DECL_OVERRIDE;
    void mouseDoubleClickEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    //void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
signals:
    void keyPress(QKeyEvent *event);
    void mouseDoubleClick(QPoint point);
    void mouseClicked(QPoint point);

public slots:
};

#endif // MYGRAPHICSVIEW_H
