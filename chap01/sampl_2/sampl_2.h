#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sampl_2.h"

class sampl_2 : public QMainWindow
{
    Q_OBJECT

public:
    sampl_2(QWidget *parent = nullptr);
    ~sampl_2();

private:
    Ui::sampl_2Class ui;
};
