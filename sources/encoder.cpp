#include "encoder.h"
#include "ui_encoder.h"

#include <iostream>
#include <string> //for output string
#include <QDebug> //for debugging

Encoder::Encoder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Encoder)
{
    ui->setupUi(this);
}

Encoder::~Encoder()
{
    delete ui;
}

void Encoder::on_Encrypt_clicked()
{
    QString output;
    inputText = ui->inputBox->toPlainText();
    output = encrypt(inputText);
    ui->outputBox->setText(output);
}


void Encoder::on_Decrypt_clicked()
{
    QString output;
    inputText = ui->inputBox->toPlainText();
    output = decrypt(inputText);

    ui->outputBox->setText(output);
}

QString Encoder::decrypt(QString input){

input.remove(0,4); // Remove the n_n_ at the beginning, this is just used for recognizing types
input.remove(input.length()-1,1); // Remove the _ at the end, this is also not part of the original string

#ifndef Q_OS_MAC
    QTextEncoder* encoder = QTextCodec::codecForName("Windows-1252")->makeEncoder(); //Encode in Windows-1252
    QTextDecoder* decoder = QTextCodec::codecForName("UTF-8")->makeDecoder();        //Decode as if it's UTF-8

    QByteArray outputData = encoder->fromUnicode(input);

    input = decoder->toUnicode(outputData,outputData.length());
#endif

    QString output;


    for(int i=input.length() -1; i>=0; i--){
        output += (QChar)((input[i].unicode()-32)%255);
    }

    //qDebug() << output.mid(2,output.length());

    output.replace("Ý"," ");
    return output.mid(0,output.length());


}



QString Encoder::encrypt(QString input){


        QString output;

       for(int i=input.length()-1; i>=0; i--){
            output += (QChar)((input[i].unicode()+32+8160));               //x = input[i].unicode
        }                                                                  // (x + 32 + 255*n) = resulting unicode value
                                                                           //In Decryption function: (input.unicode[i]) = (x + 32 + 255*n)
        qDebug() << output;                                                // [(x + 32 + 255*n)-32) % 255] = (x + 255*n) % 255 = result
                                                                           // result = x, as long as (x + a) where a is a multiple of 255
                                                                           //May get different characters when encrypted, but the decrypted output should always be the same.

                                                                           //(X+255*n) % 255 = [(X mod 255) + (255*n) mod 255] mod 255

#ifdef Q_OS_MAC
        return QString("0_8_" + output + "_");
#endif


      QTextEncoder* encoder2 = QTextCodec::codecForName("UTF-8")->makeEncoder();
      QTextDecoder *decoder2 = QTextCodec::codecForName("Windows-1252")->makeDecoder();

      QByteArray outputData2 = encoder2->fromUnicode(output);
      output = decoder2->toUnicode(outputData2,outputData2.length());


      output = output.mid(3,output.length());
      qDebug() << output;

      return output;


}
