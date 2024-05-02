#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtCharts>
QT_CHARTS_USE_NAMESPACE
#include <QMainWindow>
#include <QStandardItemModel>
#define fixedColumnCount 5
#define iniDataRowCount 40
#define colNoName 0
#define colNoMath 1
#define colNoChinese 2
#define colNoEnglish 3
#define colNoAverage 4
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    void initData();
    void sureyData();
    QStandardItemModel *theModel;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actGenData_triggered();

    void on_actTongJi_triggered();

    void on_btnBuildBarChart_clicked();

    void on_btnDrawPieChart_clicked();

    void on_SliceHighlight(bool show);

    void on_spinHoleSize_valueChanged(double arg1);

    void on_spinPieSize_valueChanged(double arg1);

    void on_cBoxTheme_currentIndexChanged(int index);

    void on_btnBuildStackedBar_clicked();

    void on_btnPercentBar_clicked();

    void on_btnScatter_clicked();

private:
    Ui::MainWindow *ui;

    void iniBarChart();
    void buildBarChart();

    void iniPieChart();
    void buildPieChart();

    void iniStackedBarChart();
    void buildStackedBarChart();

    void iniPercentBarChart();
    void buildPercentBarChart();

    void iniScatterChart();
    void buildScatterChart();
};

#endif // MAINWINDOW_H
