#ifndef AXBBATTERY_H
#define AXBBATTERY_H

#include <QWidget>
#include <QColor>
#include <QtDesigner/QDesignerExportWidget>

class QDESIGNER_WIDGET_EXPORT AXBBattery : public QWidget
{
    Q_OBJECT
private:
    QColor mColorBack = Qt::white;
    QColor mColorBorder = Qt::black;
    QColor mColorPower = Qt::green;
    QColor mCOlorWarning = Qt::red;
    int mPowerLeve = 50;
    int mWarning = 20;
protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
public:
    explicit AXBBattery(QWidget *parent = nullptr);

    int powerLeve() const;
    void setPowerLeve(int powerLeve);

signals:

public slots:
};

#endif // AXBBATTERY_H
