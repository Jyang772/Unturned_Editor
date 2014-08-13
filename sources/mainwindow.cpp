#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    menuBar()->isNativeMenuBar();

    for (int i = 1; i < 10; ++i) {
        QString text = "Item ";
        text.append(QString::number(i));
        qDebug() << i;
        itemButtons[i] = createButton(text);
        }

    for (int i = 1; i < 10; ++i) {
        int row = (i-1)/3;
        int column = (i-1)%3;
            ui->gridLayout->addWidget(itemButtons[i], row, column);
        }

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_actionEncrypter_Decrypter_triggered()
{
    r2d2.show();
}


void MainWindow::on_actionInventory_Editor_triggered()
{ //Show Inventory Editor window
    c3p0.show();

    itemButtons[1]->setText("BUZZOOKA");
}


QPushButton *MainWindow::createButton(QString &text){

    QPushButton *button = new QPushButton();
    button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    button->setText(text);
    return button;
}


