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
    QLabel *labViewCord;
    QLabel *labSceneCord;
    QLabel *labItemCord;
    QGraphicsScene *scene;

    void initGraphics();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    void resizeEvent(QResizeEvent *event) Q_DECL_OVERRIDE;
private:
    Ui::MainWindow *ui;
private slots:
    void on_mouseMovePoint(QPoint point);
    void on_mouseClicked(QPoint point);

};

#endif // MAINWINDOW_H
