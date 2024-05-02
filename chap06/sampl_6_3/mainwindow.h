#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *event);

private slots:
    void on_actWidgetInsite_triggered();

    void on_tabWidget_tabCloseRequested(int index);

    void on_tabWidget_currentChanged(int index);

    void on_actWidget_triggered();

    void on_actWindowInsite_triggered();

    void on_actWindow_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
