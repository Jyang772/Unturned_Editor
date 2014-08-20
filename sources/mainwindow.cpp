#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    menuBar()->isNativeMenuBar();

    //Create buttons with text in array
    for (int i = 1; i < 10; ++i) {
        QString text = "";
        //text.append(QString::number(i));
        qDebug() << i;
        itemButtons[i] = createButton(text, SLOT(itemClicked()));  //connect signal to SLOT(ItemClicked)
        itemButtons[i]->setObjectName(QString::number(i));
        itemButtons[i]->setEnabled(false);
        }

    //Display buttons in rows/columns
    for (int i = 1; i < 10; ++i) {
        int row = (i-1)/3;
        int column = (i-1)%3;
            ui->gridLayout->addWidget(itemButtons[i], row, column);
        }

    ui->listWidget->setEnabled(false);
    ui->attachments->setEnabled(false);
    ui->spinBox->setEnabled(false);   //Disable or it crashes
    ui->toggle->setEnabled(false);
    items.getAllItems();
    listing = items.allItems;
    ui->listWidget->addItems(listing);

    connect(attachments, SIGNAL(all_clear()),this,SLOT(readAttachments()));
    connect(solo,SIGNAL(accepted()),this,SLOT(mainGrid()));
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

    //itemButtons[1]->setText("BUZZOOKA");
}


//Creating each itemBox button and connecting clicked signal
QPushButton *MainWindow::createButton(QString &text, const char *member){

    QPushButton *button = new QPushButton();
    button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    button->setText(text);
    button->setCheckable(true);
    button->setAutoExclusive(true);

    connect(button, SIGNAL(clicked()),this,member); //connect each button signal to SLOT(itemClicked)
    return button;
}

void MainWindow::itemClicked(){

    QString item;
    int value;
    int listpos;

    clickedItem = qobject_cast<QPushButton *>(sender()); //QObject to PushButton
    ui->listWidget->setEnabled(true);                    //Allow listview to be enabled and selectable

    value = clickedItem->text().mid(clickedItem->text().indexOf("x")+1, clickedItem->text().length()).toInt();
    item = clickedItem->text().mid(0,clickedItem->text().indexOf("x")-1);

    ui->spinBox->setValue(value); //Spinbox will have current amount
    listpos = listing.indexOf(item);
    ui->listWidget->setCurrentRow(listpos);

    if(items.isWeapon(item) && (item != "")){
        ui->attachments->setEnabled(true);
        ui->toggle->setChecked(false);
        ui->toggle->setEnabled(false);
        ui->spinBox->setEnabled(false);
        weapon = item;}
    else if((items.isFillable(item) && item != "")){
        ui->attachments->setEnabled(false);
        ui->toggle->setEnabled(true);

        if(fillToggle[clickedItem->objectName().toInt()])  //Check if it is Full
            ui->toggle->setChecked(true);
    }
    else if(items.isToggle(item) && item != ""){
        ui->attachments->setEnabled(false);
        ui->toggle->setEnabled(true);

        if(istoggle[clickedItem->objectName().toInt()])
            ui->toggle->setChecked(true);
    }
    else{
        ui->attachments->setEnabled(false);
        ui->toggle->setEnabled(false);
        ui->toggle->setChecked(false);
        ui->spinBox->setEnabled(true);}

    //qDebug() << items.isWeapon(item);

}

//Dealing with ListWidget and SearchBar
void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString currentItem = ui->listWidget->currentItem()->text();
    qDebug() << "Item clicked";
    qDebug () << ui->listWidget->currentItem()->text();
    clickedItem->setText(ui->listWidget->currentItem()->text() + " x" + ui->spinBox->text());

    if(items.isWeapon(ui->listWidget->currentItem()->text())){
        ui->attachments->setEnabled(true);
        ui->spinBox->setEnabled(false);
        ui->toggle->setEnabled(false);
        weapon = ui->listWidget->currentItem()->text();}

    else if(items.isFillable(currentItem) || items.isToggle(currentItem)){
        ui->attachments->setEnabled(false);
        ui->toggle->setEnabled(true);
        ui->spinBox->setEnabled(true);
        if(ui->toggle->isChecked())
            fillToggle[clickedItem->objectName().toInt()] = true;
    }
    else{
        ui->toggle->setEnabled(false);
        ui->attachments->setEnabled(false);
    }

//    Button lol;
//    lol.setEnabled(false);



}

void MainWindow::searchForString(QString item){


       // QStringList my_found_items;

        for( int i = 0; i < items.allItems.count(); i++ )
        {
            QString current = items.allItems.at(i);
            if( current.toLower().contains(item) )
            {
                foundItems.append(current);
            }
        }

    qDebug() << "Found ITEMS: " << foundItems;

}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    foundItems.clear();
    searchForString(ui->lineEdit->text());
    ui->listWidget->clear();
    ui->listWidget->addItems(foundItems);

}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    if(clickedItem->text() != NULL)
        clickedItem->setText(clickedItem->text().mid(0,clickedItem->text().indexOf('x')-1) + " x" + ui->spinBox->text());
}

void MainWindow::on_toggle_clicked()
{
    //ONLY ALLOW TOGGLEABLE AND FILLABLE ITEMS TO ACTIVE THIS FUNCTION

    if(ui->toggle->isChecked() && items.isFillable(clickedItem->text().mid(0,clickedItem->text().indexOf("x")-1)))
    fillToggle[clickedItem->objectName().toInt()] = true;

    else if(ui->toggle->isChecked() && items.isToggle(clickedItem->text().mid(0,clickedItem->text().indexOf("x")-1)))
        istoggle[clickedItem->objectName().toInt()] = true;
    else{
        fillToggle[clickedItem->objectName().toInt()] = false;
        istoggle[clickedItem->objectName().toInt()] = false;}


}

//Dealing with Opening/Saving Inventory and displaying it
void MainWindow::on_actionSave_Inventory_triggered()
{

    QString itemName, toggle, fill;
    int itemID, itemAmount;


    addItems.clear();
     for(int i=1; i<10; i++){
        itemName = itemButtons[i]->text().mid(0,itemButtons[i]->text().indexOf("x")-1);
        itemID = items.getID(itemButtons[i]->text().mid(0,itemButtons[i]->text().indexOf("x")-1));
        itemAmount = itemButtons[i]->text().mid(itemButtons[i]->text().indexOf("x")+1,itemButtons[i]->text().length()).toInt();


       //Check if Item is Fillable, Weapon, or Toggleable

        qDebug() << "Item name: " << itemName;
        qDebug() << items.isFillable(itemName);

        if(items.isWeapon(itemName)){
            qDebug() << "ISWEAPON";
            //Process Attachments (move to different function)
            if(!attache[i].isEmpty()) //Check if attachments are empty
            addItems << processAttache(attache[i], itemName, true);
            else{
                //If attachments hasn't been open, this is the default value.
                attache[i] << "0" << "0" << "-1" << "-1" << "-1" << "Safety" << "n";
                addItems << processAttache(attache[i],itemName,true);}

        }

        else if(items.isFillable(itemName)){
            //Write separate function
            qDebug() << "ISFILLABLE";

            if(ui->toggle->isChecked() || fillToggle[i])
                toggle = "f";
            else
                toggle = "e";
            addItems << QString::number(itemID) + ":" + QString::number(itemAmount) + ":" + toggle + ":;";

        //qDebug() << "5;5;17500;8002:1::;10002:8::;20000:1:f:;8008:1:b:;7001:1:4_10002_-1_-1_-1_0_y_:;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;-1:0::;";

        }

        else if(items.isToggle(itemName)){
            if(ui->toggle->isEnabled() || istoggle[i])
                fill = "b";
            else
                fill = "d";
            addItems << QString::number(items.getID(itemName)) + ":" + QString::number(itemAmount) + ":" + fill + ":;";
        }
        //If item is ordinary:
        else
         addItems << QString::number(itemID) + ":" + QString::number(itemAmount) + "::;";
     }

     addItems.prepend("5;5;17500;");   //Prepend backpack
     qDebug() << addItems.join("");

     saveString = addItems.join("");

     solo->saveInventory(saveString);
}

void MainWindow::on_actionOpen_Inventory_triggered()
{

    solo->show();
    solo->update();
}

void MainWindow::mainGrid(){

    testInventory = solo->invValue;
    qDebug() << "MainGrid: " << testInventory;

    for(int i=1;i<10;i++){
        itemButtons[i]->setEnabled(true);
        itemButtons[i]->setText("");
        attache[i].clear();}
    //Get Inventory key value, and display contents on grid
    //QString testInventory;// = "5;5;17500;8002:1::;10002:8::;";


    QString tempExtract, output, item;
    int separatorPos; //separator position;
    QString itemAmount;

    //Dealing with weapons
    QString ammo, magazine, tactical, barrel, sight, mode, light;
    QStringList parts;

    tempExtract = testInventory;

    for(int i=0; i<3;i++)
    tempExtract =  tempExtract.mid(tempExtract.indexOf(";")+1, tempExtract.length()); //Remove backpack component
    qDebug() << tempExtract;



    for(int i=1; i<10; i++){
        if(tempExtract != ""){

            separatorPos = tempExtract.indexOf(";");

        output = tempExtract.mid(0, separatorPos+1);  //Get first item 8002:1::;
        //qDebug() << "output: " << output;
        item = items.getItems(output.mid(0,output.indexOf(":")).toInt());
        output = output.mid(output.indexOf(":")+1,output.length());   //:20::; becomes 20::;

        //qDebug() << output;
        itemAmount = output.mid(0,output.indexOf(":"));
        //qDebug() << "ITEM AMOUNT: " << itemAmount;
        //qDebug() << itemAmount;

        output = output.mid(output.indexOf(":")+1,output.length());
        if(items.isWeapon(item)){
            qDebug() << "WEAPON: " << output;                      //4_10002_-1_-1_-1_0_y_:;"
            itemButtons[i]->setText(item + " x" + itemAmount);    //("4", "10002", "-1", "-1", "-1", "0", "y", ":;")
            parts = output.split("_");
            qDebug() << parts;

            attache[i] = readAttache(parts);


        }

        else if(items.isFillable(item)){
            qDebug() << "Fillable: " << output;
            if(output.at(0) == 'f')
                fillToggle[i] = true;
            else
                fillToggle[i] = false;

            itemButtons[i]->setText(item + " x" + itemAmount);
        }
        else if(items.isToggle(item)){
            qDebug() << "Toggleable: " << output;
            if(output.at(0) == 'b')
                istoggle[i] = true;
            else
                istoggle[i] = false;
            itemButtons[i]->setText(item + " x" + itemAmount);
        }
        else
        itemButtons[i]->setText(item + " x" + itemAmount);

        tempExtract = tempExtract.mid(separatorPos+1, tempExtract.length());
        qDebug() << tempExtract;

        }
    }

}


//Dealing with Weapon Attachments
void MainWindow::on_attachments_clicked()
{
    attachments->show();
    attachments->attachForm(weapon);
    attachments->readAttache(attache[clickedItem->objectName().toInt()]);

}

void MainWindow::readAttachments(){
        //When all_clear() is emitted, we save the edited attachments back to the itemBox attache component
    attache[clickedItem->objectName().toInt()] = attachments->attachments; //lol

}

QString MainWindow::processAttache(QStringList list, QString name, bool openInv){

    //Process current attachments for saving

    qDebug() << "LIST: " << list;
    QString bullets = list.at(0);
    QString magazine = list.at(1);
    QString tactical = list.at(2);
    QString barrel = list.at(3);
    QString sight = list.at(4);
    QString mode = list.at(5);
    QString light = list.at(6);
    QString count = "1";

    QString result = "";


    result += QString::number(items.getID(name)) + ":";
    result += count + ":";
    result += bullets;
    result += "_" + QString::number(items.getID(magazine));
    result += "_" + QString::number(items.getID(tactical));
    result += "_" + QString::number(items.getID(barrel));
    result += "_" + QString::number(items.getID(sight));
    result += "_" + QString::number(items.getID(mode));
    result += "_" + light;
    result += "_:;";

    qDebug() << "Result: " << result;
    return result;

}

QStringList MainWindow::readAttache(QStringList list){

    //Read attachments detail from inventory save

    QStringList result;
    QString bullets = list.at(0);
    QString magazine = items.getItems(list.at(1).toInt());
    QString tactical = items.getItems(list.at(2).toInt());
    QString barrel = items.getItems(list.at(3).toInt());
    QString sight = items.getItems(list.at(4).toInt());
    QString mode = list.at(5);
    QString light = list.at(6);
    QString count = "1";

    result << bullets << magazine << tactical << barrel << sight << mode << light;

    qDebug() << "RESULT-MAIN: " << result;
    return result;
}
