/********************************************************************************
** Form generated from reading UI file 'attachments.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTACHMENTS_H
#define UI_ATTACHMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Attachments
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *mode;
    QComboBox *sight;
    QComboBox *barrel;
    QComboBox *tactical;
    QComboBox *magazine;
    QSpinBox *ammo;
    QCheckBox *light;

    void setupUi(QDialog *Attachments)
    {
        if (Attachments->objectName().isEmpty())
            Attachments->setObjectName(QStringLiteral("Attachments"));
        Attachments->resize(400, 300);
        buttonBox = new QDialogButtonBox(Attachments);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Attachments);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 62, 16));
        label_2 = new QLabel(Attachments);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 62, 16));
        label_3 = new QLabel(Attachments);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 120, 62, 16));
        label_4 = new QLabel(Attachments);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 20, 62, 16));
        label_5 = new QLabel(Attachments);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 100, 121, 16));
        mode = new QComboBox(Attachments);
        mode->setObjectName(QStringLiteral("mode"));
        mode->setGeometry(QRect(10, 40, 111, 26));
        sight = new QComboBox(Attachments);
        sight->setObjectName(QStringLiteral("sight"));
        sight->setGeometry(QRect(10, 90, 111, 26));
        barrel = new QComboBox(Attachments);
        barrel->setObjectName(QStringLiteral("barrel"));
        barrel->setGeometry(QRect(10, 140, 111, 26));
        tactical = new QComboBox(Attachments);
        tactical->setObjectName(QStringLiteral("tactical"));
        tactical->setGeometry(QRect(190, 40, 111, 26));
        magazine = new QComboBox(Attachments);
        magazine->setObjectName(QStringLiteral("magazine"));
        magazine->setGeometry(QRect(190, 120, 111, 26));
        ammo = new QSpinBox(Attachments);
        ammo->setObjectName(QStringLiteral("ammo"));
        ammo->setGeometry(QRect(190, 150, 111, 24));
        light = new QCheckBox(Attachments);
        light->setObjectName(QStringLiteral("light"));
        light->setGeometry(QRect(190, 190, 121, 20));

        retranslateUi(Attachments);
        QObject::connect(buttonBox, SIGNAL(accepted()), Attachments, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Attachments, SLOT(reject()));

        QMetaObject::connectSlotsByName(Attachments);
    } // setupUi

    void retranslateUi(QDialog *Attachments)
    {
        Attachments->setWindowTitle(QApplication::translate("Attachments", "Dialog", 0));
        label->setText(QApplication::translate("Attachments", "Mode: ", 0));
        label_2->setText(QApplication::translate("Attachments", "Sight: ", 0));
        label_3->setText(QApplication::translate("Attachments", "Barrel: ", 0));
        label_4->setText(QApplication::translate("Attachments", "Tactical: ", 0));
        label_5->setText(QApplication::translate("Attachments", "Magazine/Ammo: ", 0));
        light->setText(QApplication::translate("Attachments", "Laser/Light On", 0));
    } // retranslateUi

};

namespace Ui {
    class Attachments: public Ui_Attachments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTACHMENTS_H
