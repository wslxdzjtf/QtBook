#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QGraphicsScene>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel *labItemInfo;
    QGraphicsScene *scene;
    static const int ItemId = 1;
    static const int ItemDescription = 2;
    int seqNum=0;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void on_keyPress(QKeyEvent *event);
    void on_mouseDoubleClick(QPoint point);
    void on_mouseClicked(QPoint point);
    void on_actItem_Rect_triggered();
    void on_actItem_Ellipse_triggered();
    void on_actItem_Circle_triggered();
    void on_actItem_Line_triggered();
    void on_actItem_Polygon_triggered();
    void on_actItem_Triangle_triggered();
    void on_actItem_Text_triggered();
    void on_actZoomIn_triggered();
    void on_actZoomOut_triggered();
    void on_actRestore_triggered();
    void on_actRotateLeft_triggered();
    void on_actRotateRight_triggered();
    void on_actEdit_Front_triggered();
    void on_actEdit_Back_triggered();
    void on_actGroup_triggered();
    void on_actGroupBreak_triggered();
    void on_actEdit_Delete_triggered();
};

#endif // MAINWINDOW_H
