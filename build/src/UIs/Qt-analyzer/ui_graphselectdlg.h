/********************************************************************************
** Form generated from reading UI file 'graphselectdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHSELECTDLG_H
#define UI_GRAPHSELECTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_graphSelectDialog
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *selectionBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *noiseButton;
    QRadioButton *dataButton;
    QRadioButton *spectDataButton;
    QRadioButton *filterButton;
    QRadioButton *weightButton;
    QRadioButton *beamButton;
    QRadioButton *combinedDataButton;
    QRadioButton *ensembleButton;
    QLabel *title;

    void setupUi(QDialog *graphSelectDialog)
    {
        if (graphSelectDialog->objectName().isEmpty())
            graphSelectDialog->setObjectName(QString::fromUtf8("graphSelectDialog"));
        graphSelectDialog->resize(536, 274);
        graphSelectDialog->setMinimumSize(QSize(448, 274));
        buttonBox = new QDialogButtonBox(graphSelectDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 230, 481, 36));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);
        selectionBox = new QGroupBox(graphSelectDialog);
        selectionBox->setObjectName(QString::fromUtf8("selectionBox"));
        selectionBox->setGeometry(QRect(10, 70, 511, 141));
        selectionBox->setMinimumSize(QSize(380, 110));
        layoutWidget = new QWidget(selectionBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 471, 86));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        noiseButton = new QRadioButton(layoutWidget);
        noiseButton->setObjectName(QString::fromUtf8("noiseButton"));

        gridLayout->addWidget(noiseButton, 0, 0, 1, 1);

        dataButton = new QRadioButton(layoutWidget);
        dataButton->setObjectName(QString::fromUtf8("dataButton"));
        dataButton->setChecked(true);

        gridLayout->addWidget(dataButton, 0, 1, 1, 1);

        spectDataButton = new QRadioButton(layoutWidget);
        spectDataButton->setObjectName(QString::fromUtf8("spectDataButton"));

        gridLayout->addWidget(spectDataButton, 0, 2, 1, 1);

        filterButton = new QRadioButton(layoutWidget);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));

        gridLayout->addWidget(filterButton, 1, 0, 1, 1);

        weightButton = new QRadioButton(layoutWidget);
        weightButton->setObjectName(QString::fromUtf8("weightButton"));

        gridLayout->addWidget(weightButton, 1, 1, 1, 1);

        beamButton = new QRadioButton(layoutWidget);
        beamButton->setObjectName(QString::fromUtf8("beamButton"));

        gridLayout->addWidget(beamButton, 2, 0, 1, 1);

        combinedDataButton = new QRadioButton(layoutWidget);
        combinedDataButton->setObjectName(QString::fromUtf8("combinedDataButton"));

        gridLayout->addWidget(combinedDataButton, 2, 1, 1, 1);

        ensembleButton = new QRadioButton(layoutWidget);
        ensembleButton->setObjectName(QString::fromUtf8("ensembleButton"));

        gridLayout->addWidget(ensembleButton, 1, 2, 1, 1);

        title = new QLabel(graphSelectDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(10, 10, 471, 20));
        title->setMinimumSize(QSize(380, 0));
        title->setAlignment(Qt::AlignCenter);

        retranslateUi(graphSelectDialog);

        QMetaObject::connectSlotsByName(graphSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *graphSelectDialog)
    {
        graphSelectDialog->setWindowTitle(QCoreApplication::translate("graphSelectDialog", "Spectrum Selection", nullptr));
        selectionBox->setTitle(QCoreApplication::translate("graphSelectDialog", "Select Spectral Type", nullptr));
        noiseButton->setText(QCoreApplication::translate("graphSelectDialog", "&Noise Data", nullptr));
        dataButton->setText(QCoreApplication::translate("graphSelectDialog", "Transformed &Data", nullptr));
        spectDataButton->setText(QCoreApplication::translate("graphSelectDialog", "&Spectral Data", nullptr));
        filterButton->setText(QCoreApplication::translate("graphSelectDialog", "&Filter Data", nullptr));
        weightButton->setText(QCoreApplication::translate("graphSelectDialog", "Transformed &Weights", nullptr));
        beamButton->setText(QCoreApplication::translate("graphSelectDialog", "&Beam Data", nullptr));
        combinedDataButton->setText(QCoreApplication::translate("graphSelectDialog", "Weighted &Transfomation", nullptr));
        ensembleButton->setText(QCoreApplication::translate("graphSelectDialog", "Ensemble Power Spectrum", nullptr));
        title->setText(QCoreApplication::translate("graphSelectDialog", "Please select the spectrum to be displayed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graphSelectDialog: public Ui_graphSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHSELECTDLG_H
