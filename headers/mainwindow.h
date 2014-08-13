#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QGridLayout>
#include <QToolButton>
#include <QPushButton>

#include "encoder.h"
#include "inventoryedit.h"

#include <QSettings>
#include <QDebug>
#include <QProcess>

#include "currentInventory.h"

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

    //void on_pushButton_clicked();

    //void on_pushButton_2_clicked();

    void on_actionInventory_Editor_triggered();

private:
    Ui::MainWindow *ui;
    Encoder r2d2;
    InventoryEdit c3p0;


    //Registry values from computer
    QString returnedValue;
    QString inventoryValue; //Value extracted from registry
    CurrentInventory test;


    //Grid Layout
    //QGridLayout *mainLayout = new QGridLayout;
    QPushButton *createButton(QString &text);
    QPushButton *itemButtons[10];

};

#endif // MAINWINDOW_H
