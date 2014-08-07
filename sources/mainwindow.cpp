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
    {
        settings("Software\\Smartly Dressed Games\\Unturned");
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

    QString lol;
    lol = settings.value(inventory.first(),"0").toString();

    qDebug() << lol;

    QString output = "";
    for(int i=lol.length() -1; i>=0; i--){
        output += (QChar)((lol[i].unicode()-32)%255);
    }
    output = output.mid(1,output.length()-5);
    ui->textBrowser->setText(output);  //clean this up

//    QString deletethis = "5;5;20000;4002:1::;7000:1:64_10001_-1_12001_9006_1_n_:;18014:25::;20000:1:f:;18013:25::;17:1::;10001:101::;10001:101::;16007:25::;16002:25::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;7000:1:0_-1_-1_-1_-1_0_n_:;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;";
//    ui->textBrowser->setText(deletethis);
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

void MainWindow::on_pushButton_2_clicked()
{
#ifdef Q_OS_MAC
    QString username = getenv("USER"); //Get current username
    QString path = "/Users/" + username + "/Library/Preferences/unity.Smartly Dressed Games.Unturned.plist";
    QSettings settings(path, QSettings::NativeFormat);
    QStringList keys = settings.allKeys();
    QStringList inventory;
    inventory =  keys.filter("inventory");

    QProcess process;
    QStringList option;
    option << "-c" << "killall cfprefsd";
    process.start("sh", option); //flush preferences cache
    process.waitForFinished();

    settings.setValue(inventory.first(),ui->setInventory->toPlainText());
#endif

}
