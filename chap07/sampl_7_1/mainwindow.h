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

private slots:
    void on_actOpen_IODevice_triggered();

    void on_actSave_IODevice_triggered();

    void on_actOpen_TextStream_triggered();

    void on_actSave_TextStream_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
