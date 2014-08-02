#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    menuBar()->isNativeMenuBar();
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::readRegistry(){

    //Read registry key values on Windows
#ifdef Q_WS_WIN
    QSettings settings("---");
    QString returnedValue = settings.value("---","0").toString();
#endif

}

void MainWindow::on_actionEncrypter_Decrypter_triggered()
{
    r2d2.show();
}
