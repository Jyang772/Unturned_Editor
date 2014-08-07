#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>

#include "encoder.h"

#include <QSettings>
#include <QDebug>

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

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Encoder r2d2;


    //Registry values from Windows
    QString returnedValue;

};

#endif // MAINWINDOW_H
