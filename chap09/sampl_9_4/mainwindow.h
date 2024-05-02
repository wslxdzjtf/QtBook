#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QLabel *labXYValue;
    void createChart();
    void prepareData();
private slots:
    void on_mouseMovePoint(QPoint point);
    void on_LegendMarkerClicked();
    void on_actZoomIn_triggered();
    void on_actZoomOut_triggered();
    void on_actZoomReset_triggered();
};

#endif // MAINWINDOW_H
