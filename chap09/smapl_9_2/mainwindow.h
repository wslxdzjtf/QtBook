#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineSeries>
#include <QtCharts>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actZoomOut_triggered();

    void on_actZoomIn_triggered();

    void on_actZoomReset_triggered();

    void on_actDraw_triggered();

    void on_btnSetTitle_clicked();

    void on_btnSetTitleFont_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_chkLegendVisible_clicked(bool checked);

    void on_chkBoxLegendBackground_clicked(bool checked);

    void on_btnLegendFont_clicked();

    void on_btnLegendlabelColor_clicked();

    void on_btnSetMargin_clicked();

    void on_cBoxAnimation_currentIndexChanged(int index);

    void on_cBoxTheme_currentIndexChanged(int index);

    void on_radioSeries0_clicked();

    void on_radioSeries1_clicked();

    void on_btnSeriesName_clicked();

    void on_chkSeriesVisible_clicked(bool checked);

    void on_chkPointVisible_clicked(bool checked);

    void on_btnSeriesColor_clicked();

    void on_btnSeriesPen_clicked();

    void on_sliderSeriesOpacity_valueChanged(int value);

    void on_chkPointLabelVisible_clicked(bool checked);

    void on_btnSeriesLabColor_clicked();

    void on_btnSeriesLabFont_clicked();

    void on_radioSeriesLabFormat0_clicked();

    void on_radioSeriesLabFormat1_clicked();

    void on_radioX_clicked();

    void on_radioY_clicked();

    void on_chkBoxVisible_clicked(bool checked);

    void on_btnSetAxisRange_clicked();

    void on_btnAxisSetTitle_clicked();

    void on_chkBoxAxisTitle_clicked();

    void on_chkBoxAxisTitle_clicked(bool checked);

    void on_pushButton_clicked();

    void on_btnAxisLabelColor_clicked();

    void on_btnAxisLabelFont_clicked();

    void on_chkBoxLabelsVisible_clicked(bool checked);

    void on_chkGridLineVisible_clicked(bool checked);

    void on_btnGridLineColor_clicked();

    void on_pushButton_10_clicked();

    void on_spinTickCount_valueChanged(int arg1);

    void on_spinMinorTickCount_valueChanged(int arg1);

    void on_chkAxisLineVisible_clicked(bool checked);

    void on_btnAxisLinePen_clicked();

    void on_btnAxisLinePenColor_clicked();

    void on_chkMinorTickVisible_clicked(bool checked);

    void on_btnMinorColor_clicked();

    void on_btnMinorPen_clicked();

private:
    Ui::MainWindow *ui;

    void createChart();
    void prepareData();
    void updateFromChart();

    QLineSeries *curSeries;
    QValueAxis *curAxis;
};

#endif // MAINWINDOW_H
