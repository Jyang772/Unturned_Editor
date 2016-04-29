/********************************************************************************
** Form generated from reading UI file 'openinventory.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENINVENTORY_H
#define UI_OPENINVENTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_openInventory
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *inventoryList;
    QLabel *label;

    void setupUi(QDialog *openInventory)
    {
        if (openInventory->objectName().isEmpty())
            openInventory->setObjectName(QStringLiteral("openInventory"));
        openInventory->resize(400, 300);
        buttonBox = new QDialogButtonBox(openInventory);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        inventoryList = new QListWidget(openInventory);
        inventoryList->setObjectName(QStringLiteral("inventoryList"));
        inventoryList->setGeometry(QRect(10, 40, 371, 171));
        label = new QLabel(openInventory);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 111, 16));

        retranslateUi(openInventory);
        QObject::connect(buttonBox, SIGNAL(accepted()), openInventory, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), openInventory, SLOT(reject()));

        QMetaObject::connectSlotsByName(openInventory);
    } // setupUi

    void retranslateUi(QDialog *openInventory)
    {
        openInventory->setWindowTitle(QApplication::translate("openInventory", "Dialog", 0));
        label->setText(QApplication::translate("openInventory", "Select Inventory: ", 0));
    } // retranslateUi

};

namespace Ui {
    class openInventory: public Ui_openInventory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENINVENTORY_H
