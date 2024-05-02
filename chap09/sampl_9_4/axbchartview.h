#ifndef AXBHARVIEW_H
#define AXBHARVIEW_H

#include <QWidget>
#include <QtCharts>
QT_CHARTS_USE_NAMESPACE
#include <QPoint>

class AXBChartView : public QChartView
{
    Q_OBJECT
private:
    QPoint beginPoint;
    QPoint endPoint;
protected:
    void keyPressEvent(QKeyEvent *event) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
public:
    explicit AXBChartView(QWidget *parent = nullptr);

signals:
    void mouseMovePoint(QPoint point);
public slots:
};

#endif // AXBHARVIEW_H
