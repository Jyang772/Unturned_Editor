#ifndef ITEMS_H
#define ITEMS_H

#include <QString>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QDebug>

class Items
{
public:
    Items();
    QString getItems(int);
    int getID(QString);     //Read ID from reg. value
    void getAllItems();     //Get all items from txt file
    QStringList allItems;   //For listing in listWidget

    bool isWeapon(QString);
    bool isToggle(QString);
    bool isFillable(QString);

};

#endif //ITEMS_H
