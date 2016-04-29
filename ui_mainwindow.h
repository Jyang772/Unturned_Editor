/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEncrypter_Decrypter;
    QAction *actionInventory_Editor;
    QAction *actionSave_Inventory;
    QAction *actionOpen_Inventory;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QSpinBox *spinBox;
    QLabel *label;
    QToolButton *attachments;
    QCheckBox *toggle;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(580, 430);
        actionEncrypter_Decrypter = new QAction(MainWindow);
        actionEncrypter_Decrypter->setObjectName(QStringLiteral("actionEncrypter_Decrypter"));
        actionInventory_Editor = new QAction(MainWindow);
        actionInventory_Editor->setObjectName(QStringLiteral("actionInventory_Editor"));
        actionSave_Inventory = new QAction(MainWindow);
        actionSave_Inventory->setObjectName(QStringLiteral("actionSave_Inventory"));
        actionOpen_Inventory = new QAction(MainWindow);
        actionOpen_Inventory->setObjectName(QStringLiteral("actionOpen_Inventory"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 371, 311));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(400, 10, 171, 311));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(510, 330, 61, 24));
        spinBox->setMaximum(200);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 330, 91, 20));
        attachments = new QToolButton(centralWidget);
        attachments->setObjectName(QStringLiteral("attachments"));
        attachments->setGeometry(QRect(290, 330, 121, 21));
        toggle = new QCheckBox(centralWidget);
        toggle->setObjectName(QStringLiteral("toggle"));
        toggle->setGeometry(QRect(420, 350, 87, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 350, 91, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 580, 22));
        menuBar->setNativeMenuBar(false);
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuTools->menuAction());
        menuTools->addAction(actionEncrypter_Decrypter);
        menuTools->addAction(actionInventory_Editor);
        menuTools->addAction(actionSave_Inventory);
        menuTools->addAction(actionOpen_Inventory);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Unturned Editor", 0));
        actionEncrypter_Decrypter->setText(QApplication::translate("MainWindow", "Encrypter/Decrypter...", 0));
        actionInventory_Editor->setText(QApplication::translate("MainWindow", "Inventory Editor", 0));
        actionSave_Inventory->setText(QApplication::translate("MainWindow", "Save Inventory", 0));
        actionOpen_Inventory->setText(QApplication::translate("MainWindow", "Open Inventory", 0));
        label->setText(QApplication::translate("MainWindow", "Item Amount: ", 0));
        attachments->setText(QApplication::translate("MainWindow", "Attachments", 0));
        toggle->setText(QApplication::translate("MainWindow", "Toggle On", 0));
        label_2->setText(QApplication::translate("MainWindow", "MicroPenguin", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
