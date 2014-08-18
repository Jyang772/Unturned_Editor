#include "inventoryedit.h"
#include "ui_inventoryedit.h"

InventoryEdit::InventoryEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InventoryEdit)
{
    ui->setupUi(this);
}

InventoryEdit::~InventoryEdit()
{
    delete ui;
}


void InventoryEdit::on_pushButton_clicked()
{

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
    ui->textBrowser->setText(output);

    inventoryValue = output;

    QString tempExtract = output;



    qDebug() << tempExtract;
    for(int i=0; i<3;i++)
    tempExtract =  tempExtract.mid(tempExtract.indexOf(";")+1, tempExtract.length());
    qDebug() << tempExtract;

    tempExtract = output.mid(0, output.indexOf(tempExtract)-1);
    qDebug() << tempExtract;

    test.backpack = tempExtract; //sS

    qDebug() << "Backup object member: " << test.backpack;

#endif
}

void InventoryEdit::on_pushButton_2_clicked()
{
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
}

void InventoryEdit::getValue(){
    on_pushButton_clicked();
}
