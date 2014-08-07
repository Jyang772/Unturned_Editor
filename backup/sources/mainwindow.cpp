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
#ifdef Q_OS_WIN
    {settings("Software\\Smartly Dressed Games\\Unturned");
    returnedValue = settings.value("inventory","0").toString();
    }
#endif

    //Read from plist file on Mac
#ifdef Q_OS_MAC
    QString username = getenv("USER"); //Get current username
    QString path = "/Users/" + username + "/Library/Preferences/unity.Smartly Dressed Games.Unturned.plist";
    QSettings settings(path, QSettings::NativeFormat);
    QStringList keys = settings.allKeys();
    QStringList inventory;
    inventory =  keys.filter("inventory");
    QVariant lol;
    lol = settings.value(inventory.first(),"0");

    qDebug() << QString(lol.toString());

    QString output = "";
    for(int i=lol.toString().length() -1; i>=0; i--){
        output += (QChar)((lol.toString()[i].unicode()-32)%255);
    }
    ui->textBrowser->setText(output);  //clean this up

    qDebug() << getenv("USER");

#endif



}

void MainWindow::on_actionEncrypter_Decrypter_triggered()
{
    r2d2.show();
}

void MainWindow::on_pushButton_clicked()
{
    readRegistry();
}
