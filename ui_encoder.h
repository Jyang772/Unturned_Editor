/********************************************************************************
** Form generated from reading UI file 'encoder.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCODER_H
#define UI_ENCODER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Encoder
{
public:
    QTextEdit *inputBox;
    QLabel *label;
    QPushButton *Encrypt;
    QPushButton *Decrypt;
    QTextBrowser *outputBox;
    QLabel *label_2;

    void setupUi(QDialog *Encoder)
    {
        if (Encoder->objectName().isEmpty())
            Encoder->setObjectName(QStringLiteral("Encoder"));
        Encoder->resize(428, 375);
        inputBox = new QTextEdit(Encoder);
        inputBox->setObjectName(QStringLiteral("inputBox"));
        inputBox->setGeometry(QRect(20, 50, 341, 91));
        label = new QLabel(Encoder);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 67, 17));
        Encrypt = new QPushButton(Encoder);
        Encrypt->setObjectName(QStringLiteral("Encrypt"));
        Encrypt->setGeometry(QRect(50, 330, 99, 27));
        Decrypt = new QPushButton(Encoder);
        Decrypt->setObjectName(QStringLiteral("Decrypt"));
        Decrypt->setGeometry(QRect(230, 330, 99, 27));
        outputBox = new QTextBrowser(Encoder);
        outputBox->setObjectName(QStringLiteral("outputBox"));
        outputBox->setGeometry(QRect(20, 170, 341, 121));
        label_2 = new QLabel(Encoder);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 150, 67, 17));

        retranslateUi(Encoder);

        QMetaObject::connectSlotsByName(Encoder);
    } // setupUi

    void retranslateUi(QDialog *Encoder)
    {
        Encoder->setWindowTitle(QApplication::translate("Encoder", "Encrypter/Decrypter", 0));
        label->setText(QApplication::translate("Encoder", "Enter text:", 0));
        Encrypt->setText(QApplication::translate("Encoder", "Encrypt", 0));
        Decrypt->setText(QApplication::translate("Encoder", "Decrypt", 0));
        label_2->setText(QApplication::translate("Encoder", "Output:", 0));
    } // retranslateUi

};

namespace Ui {
    class Encoder: public Ui_Encoder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCODER_H
