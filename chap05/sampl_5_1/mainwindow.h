#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QFileSystemModel *fileModel;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_treeView_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
