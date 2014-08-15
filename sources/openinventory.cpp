#include "openinventory.h"
#include "ui_openinventory.h"
#include <QDebug>
#include <QProcess>

openInventory::openInventory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::openInventory)
{
    ui->setupUi(this);
    //update();
}

openInventory::~openInventory()
{
    delete ui;
}

void openInventory::update(){
    qDebug() << "UPDATING";
    ui->inventoryList->clear();
    invValue = "";
    decrypted_keys.clear();

    username = getenv("USER"); //Get current username
    path = "/Users/" + username + "/Library/Preferences/unity.Smartly Dressed Games.Unturned.plist";
    QSettings settings(path, QSettings::NativeFormat);
    keys = settings.allKeys();
    QStringList inventory;
    inventory =  keys.filter("inventory");

    ui->inventoryList->addItems(inventory);

    qDebug() << "Inventory Length: " << inventory.length();

    //keys.clear();
    for(int i=0; i<inventory.length(); i++){
        QString output;
        output = r2d2->decrypt(settings.value(inventory[i],0).toString());
        output = output.mid(1,output.length()-5);
        decrypted_keys << output;}
    qDebug() << "Keys: " << keys;
}

void openInventory::saveInventory(QString value){

    value = r2d2->encrypt(value);

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

    qDebug() << "save value: " << value;
    settings.setValue(key_selected,value);

}

void openInventory::on_buttonBox_accepted()
{

    invValue = decrypted_keys.at(ui->inventoryList->currentRow());
    qDebug() << "invValue: " << invValue;
    key_selected = ui->inventoryList->currentItem()->text();
    emit accepted();

}
