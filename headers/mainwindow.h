#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QGridLayout>
#include <QToolButton>
#include <QPushButton>
#include <QtWidgets>

#include "encoder.h"           //Decodes save files
#include "inventoryedit.h"     //Edit inventory from registry values
#include "currentInventory.h" //Holds current inventory items
#include "items.h"            //List of all items for lookup
#include "attachments.h"     //Weapon attachments
#include "openinventory.h"   //Select Inventory Key


#include <QSettings>
#include <QDebug>
#include <QProcess>
#include <QStringListModel>


class Button : public QPushButton{
    Q_OBJECT

public:
    QString attachments;
};

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
    QString processAttache(QStringList, QString, bool);
    QStringList readAttache(QStringList);


private slots:

    void readAttachments();

    void on_actionEncrypter_Decrypter_triggered();

    void on_actionInventory_Editor_triggered();

    void itemClicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_actionSave_Inventory_triggered();

    void on_spinBox_valueChanged(int arg1);

    void on_actionOpen_Inventory_triggered();

    void on_attachments_clicked();

    void on_toggle_clicked();

    void mainGrid();

private:
    Ui::MainWindow *ui;
    Encoder r2d2;
    InventoryEdit c3p0;
    Attachments *attachments = new Attachments(this);
    openInventory *solo = new openInventory(this);

    Items items;
    QStringList listing;

    //Attachments for each box
    QStringList attache[10];
    //Toggle for Fillable item boxes
    bool fillToggle[10];
    //Toggle for Toggleable item boxes
    bool istoggle[10];

    //Registry values from computer
    QString returnedValue;
    QString inventoryValue; //Value extracted from registry
    CurrentInventory test;


    //Grid Layout
    QPushButton *createButton(QString &text, const char *member);
    QPushButton *itemButtons[10];
    QPushButton *clickedItem;

    //Items to be added
    QStringList addItems;

    //Type of weapon
    QString weapon;


    QString testInventory; //Inventory selected by user

};


#endif // MAINWINDOW_H
