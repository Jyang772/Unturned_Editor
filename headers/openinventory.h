#ifndef OPENINVENTORY_H
#define OPENINVENTORY_H

#include <QDialog>
#include <QSettings>
#include "encoder.h"


namespace Ui {
class openInventory;
}

class openInventory : public QDialog
{
    Q_OBJECT

public:
    explicit openInventory(QWidget *parent = 0);
    ~openInventory();

    QString invValue;
    void update();
    void saveInventory(QString);

signals:
    void accepted();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::openInventory *ui;
    QString path, username;
    QStringList keys, decrypted_keys;
    QString key_selected;
    Encoder *r2d2 = new Encoder(this);
};

#endif // OPENINVENTORY_H
