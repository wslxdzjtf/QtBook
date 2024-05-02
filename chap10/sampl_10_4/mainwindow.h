#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include    <QtDataVisualization>

using namespace QtDataVisualization;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    Q3DSurface *graph3D;
    QSurface3DSeries *series;

    void init3DGraph();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_comboDrawMode_currentIndexChanged(int index);

    void on_btnBarColor_clicked();

    void on_btnGrad1_clicked();

    void on_btnGrad2_clicked();

    void on_cBoxSelectionMode_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
