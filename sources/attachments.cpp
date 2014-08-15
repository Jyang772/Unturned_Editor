#include "attachments.h"
#include "ui_attachments.h"

#include <QDebug>

Attachments::Attachments(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Attachments)
{
    ui->setupUi(this);
    QString sights = "No Sight,12x Zoom Scope,20x Zoom Scope,6xZoom Scope,7x Zoom Scope,Dual Component Rail,Dual Point Rail,Full Circle Rail,Half Circle Rail,Holographic Sight,Open Circle Rail,Planar Track Rail,Point Circle Sight,Red Dot Sight,Zoomomatic";
    QString barrel = "No Barrel,Flash Hider,Muffler,Suppressor";
    QString tactical = "None,Angled Grip,Bayonet,Bipod,Tactical Laser,Tactical Light,Vertical Grip";

    QStringList sightsL = sights.split(",");
    QStringList barrelL = barrel.split(",");
    QStringList tacticalL = tactical.split(",");

    ui->sight->addItems(sightsL);
    ui->barrel->addItems(barrelL);
    ui->tactical->addItems(tacticalL);
}

Attachments::~Attachments()
{
    delete ui;
}

void Attachments::attachForm(QString weapon){
qDebug() << weapon;
    weapon = weapon.toLower();

    ui->barrel->setCurrentText("No Barrel");  //DEFAULT
    ui->sight->setCurrentText("No Sight");
    ui->magazine->clear();

                    if (weapon == "berette")
                       {
                        qDebug() << "YES";
                        ui->tactical->setEnabled(false);
                        ui->mode->setEnabled(true);
                        ui->mode->addItem("Safety");
                        ui->mode->addItem("Semi");
                        ui->magazine->addItem("Lebel Magazine");
                        ui->ammo->setMaximum(13);
                    }
                    else if (weapon == "colt"){
                        ui->tactical->setEnabled(false);
                        ui->mode->addItem("Safety");
                        ui->mode->addItem("Semi");
                        ui->magazine->addItem("Swift Magazine");
                        ui->ammo->setMaximum(7);
                    }
                    else if (weapon == "desert falcon"){
                        ui->tactical->setEnabled(false);
                        ui->mode->addItem("Safety");
                        ui->mode->addItem("Semi");
                        ui->magazine->addItem("Swift Magazine");
                        ui->ammo->setMaximum(7);
                        }
                    else if (weapon == "magnum"){
                        ui->tactical->setEnabled(false);
                        ui->mode->addItem("Semi");
                        ui->magazine->addItem("Winchestre Clip");
                        ui->ammo->setMaximum(6);
                        }
                    else if (weapon == "lever action"){
                        ui->barrel->setEnabled(false);
                        ui->mode->addItem("Semi");
                        ui->magazine->addItem("Buckshot");
                        ui->magazine->addItem("Slug");
                        ui->ammo->setMaximum(4);
                        }
                    else if (weapon == "double barrel"){
                        ui->barrel->setEnabled(false);
                        ui->mode->addItem("Semi");
                        ui->magazine->addItem("Buckshot");
                        ui->magazine->addItem("Slug");
                        ui->ammo->setMaximum(2);
                        }
                    else if (weapon == "novuh"){
                        ui->tactical->setEnabled(false);
                        ui->mode->addItem("Safety");
                        ui->mode->addItem("Semi");
                        ui->magazine->addItem("Buckshot");
                        ui->magazine->addItem("Slug");
                        ui->ammo->setMaximum(5);
                        }
                    else if (weapon == "mosen"){
                        ui->mode->addItem("Semi");
                        ui->magazine->addItem("Bonjour Clip");
                        ui->ammo->setMaximum(5);
                        }
                    else if (weapon == "outfield"){
                        ui->mode->addItem("Semi");
                        ui->magazine->addItem("Bonjour Clip");
                        ui->ammo->setMaximum(5);
                        }
                    else if (weapon == "maplestrike"){
                        ui->mode->addItem("Safety");
                        ui->mode->addItem("Semi");
                        ui->mode->addItem("Auto");
                        ui->magazine->addItem("NATO Magazine");
                        ui->magazine->addItem("NATO Tracer");
                        ui->magazine->addItem("NATO Drum");
                        ui->ammo->setMaximum(100);
                        }
                    else if (weapon == "swissgewehr"){
                        ui->mode->addItem("Safety");
                        ui->mode->addItem("Semi");
                        ui->magazine->addItem("NATO Magazine");
                        ui->magazine->addItem("NATO Tracer");
                        ui->magazine->addItem("NATO Drum");
                        ui->ammo->setMaximum(100);
                        }
                    else if (weapon == "zubeknakov"){
                        ui->mode->addItem("Semi");
                        ui->mode->addItem("Safety");
                        ui->magazine->addItem("Savage Magazine");
                        ui->magazine->addItem("Savage Drum");
                        ui->ammo->setMaximum(75);
                        }
                    else if (weapon == "uzy"){
                        ui->mode->addItem("Auto");
                        ui->magazine->addItem("Yuri Magazine");
                        ui->ammo->setMaximum(40);
                        }
                    else if (weapon == "proninety"){
                        ui->mode->addItem("Safety");
                        ui->mode->addItem("Semi");
                        ui->mode->addItem("Auto");
                        ui->magazine->addItem("PDW Magazine");
                        ui->ammo->setMaximum(50);
                        }
                    else if (weapon == "Matamorez"){
                        ui->barrel->setEnabled(false);
                        ui->mode->addItem("Auto");
                        ui->magazine->addItem("Xtrmin Magazine");
                        ui->ammo->setMaximum(10);
                        }
                    else if (weapon == "timberwolf"){
                        ui->barrel->setEnabled(false);
                        ui->mode->addItem("Safety");
                        ui->mode->addItem("Semi");
                        ui->magazine->addItem("Lapua Magazine");
                        ui->magazine->addItem("Lapua Tracer");
                        ui->ammo->setMaximum(8);
                        }
                    else if (weapon == "longbow"){
                        ui->tactical->setEnabled(false);
                        ui->barrel->setEnabled(false);
                        ui->sight->setEnabled(false);
                        ui->mode->addItem("Semi");
                        ui->magazine->addItem("Arrow");
                        ui->ammo->setMaximum(1);
                        }
                    else if (weapon == "compound bow"){
                        ui->barrel->setEnabled(false);
                        ui->mode->addItem("Semi");
                        ui->magazine->addItem("Arrow");
                        ui->ammo->setMaximum(1);
                        }
                    else if (weapon == "crossbow"){
                        ui->barrel->setEnabled(false);
                        ui->mode->addItem("Semi");
                        ui->magazine->addItem("Arrow");
                        ui->ammo->setMaximum(1);
                        }
                    else if (weapon == "<unknown>"){
                        ui->mode->addItem("Safety");
                        ui->mode->addItem("Semi");
                        ui->mode->addItem("Auto");

                        ui->magazine->addItem("Swift Magazine");
                        ui->magazine->addItem("Lebel Magazine");
                        ui->magazine->addItem("Winchester Clip");
                        ui->magazine->addItem("Buckshot");
                        ui->magazine->addItem("Slug");
                        ui->magazine->addItem("Bonjour Clip");
                        ui->magazine->addItem("NATO Magazine");
                        ui->magazine->addItem("NATO Tracer");
                        ui->magazine->addItem("NATO Drum");
                        ui->magazine->addItem("Savage Magazine");
                        ui->magazine->addItem("Savage Drum");
                        ui->magazine->addItem("Yuri Magazine");
                        ui->magazine->addItem("Lapua Magazine");
                        ui->magazine->addItem("Lapua Tracer");
                        ui->magazine->addItem("Arrow");
                        }

}

void Attachments::on_buttonBox_accepted()
{
    attachments.clear();


    /** Set Maximum Ammo for each Magazine type
     * */

    if(ui->magazine->currentText() == "NATO Magazine" || ui->magazine->currentText() == "NATO Tracer")
        ui->ammo->setMaximum(30);
    else if(ui->magazine->currentText() == "NATO Drum")
        ui->ammo->setMaximum(100);
    else if(ui->magazine->currentText() == "Swift Magazine")
        ui->ammo->setMaximum(7);
    else if(ui->magazine->currentText() == "Xtrmin Magazine")
        ui->ammo->setMaximum(10);


     mode = ui->mode->currentText();
     sight = ui->sight->currentText();
     barrel = ui->barrel->currentText();
     tactical = ui->tactical->currentText();
     magazine = ui->magazine->currentText();
     bullets = QString::number(ui->ammo->value());
    if(ui->light->isChecked())
        light = "y";
    else
        light = "n";


    //attachments << mode << sight << barrel << tactical << magazine << bullets << light;

    attachments << bullets << magazine << tactical << barrel << sight << mode << light;
    qDebug() << "Attachment Accepted: " << attachments;
    emit all_clear();

}

void Attachments::readAttache(QStringList list){


    //attachments = list;
    if(list.isEmpty())
        return;
    qDebug() << "ReadAttache: " << list;

    //light = list.at(0);
    bullets = list.at(0);
    magazine = list.at(1);
    tactical = list.at(2);
    barrel = list.at(3);
    sight = list.at(4);
    mode = list.at(5);
    light = list.at(6);

//    mode = list.at(0);
//    sight = list.at(1);
//    barrel = list.at(2);
//    tactical = list.at(3);
//    magazine = list.at(4);
//    bullets = list.at(5);
//    light = list.at(6);

    ui->mode->setCurrentText(mode);
    ui->sight->setCurrentText(sight);
    ui->barrel->setCurrentText(barrel);
    ui->tactical->setCurrentText(tactical);
    ui->magazine->setCurrentText(magazine);
    ui->ammo->setValue(bullets.toInt());

    if(light == "y")
    ui->light->setChecked(true);
    else
        ui->light->setChecked(false);

}
