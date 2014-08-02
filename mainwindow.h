#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>

#include "encoder.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void readRegistry();

private slots:
    void on_actionEncrypter_Decrypter_triggered();

private:
    Ui::MainWindow *ui;
    Encoder r2d2;
};

#endif // MAINWINDOW_H
