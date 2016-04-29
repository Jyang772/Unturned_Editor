/********************************************************************************
** Form generated from reading UI file 'inventoryedit.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORYEDIT_H
#define UI_INVENTORYEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_InventoryEdit
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QTextEdit *setInventory;
    QPushButton *pushButton_2;

    void setupUi(QDialog *InventoryEdit)
    {
        if (InventoryEdit->objectName().isEmpty())
            InventoryEdit->setObjectName(QStringLiteral("InventoryEdit"));
        InventoryEdit->resize(422, 355);
        textBrowser = new QTextBrowser(InventoryEdit);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(40, 40, 341, 71));
        pushButton = new QPushButton(InventoryEdit);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 120, 161, 32));
        setInventory = new QTextEdit(InventoryEdit);
        setInventory->setObjectName(QStringLiteral("setInventory"));
        setInventory->setGeometry(QRect(40, 160, 341, 91));
        pushButton_2 = new QPushButton(InventoryEdit);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 260, 161, 32));

        retranslateUi(InventoryEdit);

        QMetaObject::connectSlotsByName(InventoryEdit);
    } // setupUi

    void retranslateUi(QDialog *InventoryEdit)
    {
        InventoryEdit->setWindowTitle(QApplication::translate("InventoryEdit", "Dialog", 0));
        pushButton->setText(QApplication::translate("InventoryEdit", "Get Inventory Value", 0));
        pushButton_2->setText(QApplication::translate("InventoryEdit", "Set Inventory Value", 0));
    } // retranslateUi

};

namespace Ui {
    class InventoryEdit: public Ui_InventoryEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYEDIT_H
