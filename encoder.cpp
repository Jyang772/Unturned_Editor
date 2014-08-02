#include "encoder.h"
#include "ui_encoder.h"

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

    QTextEncoder* encoder = QTextCodec::codecForName("Windows-1252")->makeEncoder(); //Encode in Windows-1252
    QTextDecoder* decoder = QTextCodec::codecForName("UTF-8")->makeDecoder();        //Decode as if it's UTF-8

    QByteArray outputData = encoder->fromUnicode(input);
    input = decoder->toUnicode(outputData,outputData.length());

    QString output;

    for(int i=input.length() -1; i>=0; i--){
        output += (char)((input[i].unicode()-32)%255);
    }

    output = output.mid(2,output.length()-1);

    return output;
}



QString Encoder::encrypt(QString input){


        QString output;

       for(int i=input.length()-1; i>=0; i--){
            output += (QChar)((input[i].unicode() + 32 + 8160));
        }



      QTextEncoder* encoder2 = QTextCodec::codecForName("UTF-8")->makeEncoder();
      QTextDecoder *decoder2 = QTextCodec::codecForName("Windows-1252")->makeDecoder();

      QByteArray outputData2 = encoder2->fromUnicode(output);
      output = decoder2->toUnicode(outputData2,outputData2.length());


      output = output.mid(3,output.length());
      qDebug() << output;


      return output;


}
