#ifndef INVENTORYEDIT_H
#define INVENTORYEDIT_H

#include <QDialog>
#include <QString>
#include <QDebug>
#include <QSettings>
#include <QProcess>

#include "currentInventory.h"

namespace Ui {
class InventoryEdit;
}

class InventoryEdit : public QDialog
{
    Q_OBJECT

public:
    explicit InventoryEdit(QWidget *parent = 0);
    ~InventoryEdit();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::InventoryEdit *ui;

    CurrentInventory test;
    QString inventoryValue; //Value extracted from registry

};

#endif // INVENTORYEDIT_H
