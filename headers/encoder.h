#ifndef ENCODER_H
#define ENCODER_H

#include <QDialog>
#include <QTextEncoder>

namespace Ui {
class Encoder;
}

class Encoder : public QDialog
{
    Q_OBJECT

public:
    Encoder(QWidget *parent = 0);
    QString decrypt(QString);
    QString encrypt(QString);

    ~Encoder();

private slots:
    void on_Encrypt_clicked();

    void on_Decrypt_clicked();

private:
    Ui::Encoder *ui;
    QString inputText;
};

#endif // ENCODER_H
