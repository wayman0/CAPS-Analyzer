/********************************************************************************
** Form generated from reading UI file 'energydlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENERGYDLG_H
#define UI_ENERGYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_energyDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *EgretBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *minLayout;
    QLabel *minLabel;
    QLineEdit *minEnergyEdit;
    QFormLayout *maxLayout;
    QLabel *maxLabel;
    QLineEdit *maxEnergyEdit;
    QHBoxLayout *buttonLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *energyDialog)
    {
        if (energyDialog->objectName().isEmpty())
            energyDialog->setObjectName(QString::fromUtf8("energyDialog"));
        energyDialog->resize(463, 156);
        verticalLayout_2 = new QVBoxLayout(energyDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        EgretBox = new QGroupBox(energyDialog);
        EgretBox->setObjectName(QString::fromUtf8("EgretBox"));
        EgretBox->setMinimumSize(QSize(455, 100));
        layoutWidget_2 = new QWidget(EgretBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 30, 230, 56));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        minLayout = new QFormLayout();
        minLayout->setObjectName(QString::fromUtf8("minLayout"));
        minLabel = new QLabel(layoutWidget_2);
        minLabel->setObjectName(QString::fromUtf8("minLabel"));

        minLayout->setWidget(0, QFormLayout::LabelRole, minLabel);

        minEnergyEdit = new QLineEdit(layoutWidget_2);
        minEnergyEdit->setObjectName(QString::fromUtf8("minEnergyEdit"));

        minLayout->setWidget(0, QFormLayout::FieldRole, minEnergyEdit);


        verticalLayout->addLayout(minLayout);

        maxLayout = new QFormLayout();
        maxLayout->setObjectName(QString::fromUtf8("maxLayout"));
        maxLabel = new QLabel(layoutWidget_2);
        maxLabel->setObjectName(QString::fromUtf8("maxLabel"));

        maxLayout->setWidget(0, QFormLayout::LabelRole, maxLabel);

        maxEnergyEdit = new QLineEdit(layoutWidget_2);
        maxEnergyEdit->setObjectName(QString::fromUtf8("maxEnergyEdit"));

        maxLayout->setWidget(0, QFormLayout::FieldRole, maxEnergyEdit);


        verticalLayout->addLayout(maxLayout);


        verticalLayout_2->addWidget(EgretBox);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        buttonBox = new QDialogButtonBox(energyDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(240, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        buttonLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(buttonLayout);


        retranslateUi(energyDialog);

        QMetaObject::connectSlotsByName(energyDialog);
    } // setupUi

    void retranslateUi(QDialog *energyDialog)
    {
        energyDialog->setWindowTitle(QCoreApplication::translate("energyDialog", "Dialog", nullptr));
        EgretBox->setTitle(QCoreApplication::translate("energyDialog", "Energy Range", nullptr));
        minLabel->setText(QCoreApplication::translate("energyDialog", "Minimum Energy", nullptr));
        maxLabel->setText(QCoreApplication::translate("energyDialog", "Maximum Energy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class energyDialog: public Ui_energyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENERGYDLG_H
