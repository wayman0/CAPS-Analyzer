/********************************************************************************
** Form generated from reading UI file 'mapselectdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPSELECTDLG_H
#define UI_MAPSELECTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mapSelectDialog
{
public:
    QFormLayout *formLayout;
    QLabel *title;
    QGroupBox *selectionBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *filterSkyButton;
    QRadioButton *inverseWeightsButton;
    QRadioButton *inverseDataButton;
    QRadioButton *pixelDataButton;
    QRadioButton *combinedInverseButton;
    QRadioButton *weightButton;
    QRadioButton *pixelOccupancyButton;
    QRadioButton *dataButton;
    QRadioButton *noiseSkyButton;
    QRadioButton *beamSkyButton;
    QRadioButton *combinedDataButton;
    QRadioButton *combinedPixelButton;
    QRadioButton *pixelWeightsButton;
    QRadioButton *noiseButton;
    QRadioButton *filterButton;
    QRadioButton *beamButton;
    QHBoxLayout *buttonLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *buttonSpacer;

    void setupUi(QDialog *mapSelectDialog)
    {
        if (mapSelectDialog->objectName().isEmpty())
            mapSelectDialog->setObjectName(QString::fromUtf8("mapSelectDialog"));
        mapSelectDialog->resize(782, 210);
        mapSelectDialog->setMinimumSize(QSize(780, 210));
        formLayout = new QFormLayout(mapSelectDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        title = new QLabel(mapSelectDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMinimumSize(QSize(480, 0));
        title->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, title);

        selectionBox = new QGroupBox(mapSelectDialog);
        selectionBox->setObjectName(QString::fromUtf8("selectionBox"));
        selectionBox->setMinimumSize(QSize(770, 140));
        layoutWidget = new QWidget(selectionBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 751, 98));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        filterSkyButton = new QRadioButton(layoutWidget);
        filterSkyButton->setObjectName(QString::fromUtf8("filterSkyButton"));

        gridLayout->addWidget(filterSkyButton, 1, 3, 1, 1);

        inverseWeightsButton = new QRadioButton(layoutWidget);
        inverseWeightsButton->setObjectName(QString::fromUtf8("inverseWeightsButton"));

        gridLayout->addWidget(inverseWeightsButton, 1, 2, 1, 1);

        inverseDataButton = new QRadioButton(layoutWidget);
        inverseDataButton->setObjectName(QString::fromUtf8("inverseDataButton"));

        gridLayout->addWidget(inverseDataButton, 0, 2, 1, 1);

        pixelDataButton = new QRadioButton(layoutWidget);
        pixelDataButton->setObjectName(QString::fromUtf8("pixelDataButton"));

        gridLayout->addWidget(pixelDataButton, 0, 1, 1, 1);

        combinedInverseButton = new QRadioButton(layoutWidget);
        combinedInverseButton->setObjectName(QString::fromUtf8("combinedInverseButton"));

        gridLayout->addWidget(combinedInverseButton, 2, 2, 1, 1);

        weightButton = new QRadioButton(layoutWidget);
        weightButton->setObjectName(QString::fromUtf8("weightButton"));

        gridLayout->addWidget(weightButton, 1, 0, 1, 1);

        pixelOccupancyButton = new QRadioButton(layoutWidget);
        pixelOccupancyButton->setObjectName(QString::fromUtf8("pixelOccupancyButton"));

        gridLayout->addWidget(pixelOccupancyButton, 3, 1, 1, 1);

        dataButton = new QRadioButton(layoutWidget);
        dataButton->setObjectName(QString::fromUtf8("dataButton"));

        gridLayout->addWidget(dataButton, 0, 0, 1, 1);

        noiseSkyButton = new QRadioButton(layoutWidget);
        noiseSkyButton->setObjectName(QString::fromUtf8("noiseSkyButton"));

        gridLayout->addWidget(noiseSkyButton, 0, 3, 1, 1);

        beamSkyButton = new QRadioButton(layoutWidget);
        beamSkyButton->setObjectName(QString::fromUtf8("beamSkyButton"));

        gridLayout->addWidget(beamSkyButton, 2, 3, 1, 1);

        combinedDataButton = new QRadioButton(layoutWidget);
        combinedDataButton->setObjectName(QString::fromUtf8("combinedDataButton"));

        gridLayout->addWidget(combinedDataButton, 2, 0, 1, 1);

        combinedPixelButton = new QRadioButton(layoutWidget);
        combinedPixelButton->setObjectName(QString::fromUtf8("combinedPixelButton"));

        gridLayout->addWidget(combinedPixelButton, 2, 1, 1, 1);

        pixelWeightsButton = new QRadioButton(layoutWidget);
        pixelWeightsButton->setObjectName(QString::fromUtf8("pixelWeightsButton"));

        gridLayout->addWidget(pixelWeightsButton, 1, 1, 1, 1);

        noiseButton = new QRadioButton(layoutWidget);
        noiseButton->setObjectName(QString::fromUtf8("noiseButton"));

        gridLayout->addWidget(noiseButton, 0, 4, 1, 1);

        filterButton = new QRadioButton(layoutWidget);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));

        gridLayout->addWidget(filterButton, 1, 4, 1, 1);

        beamButton = new QRadioButton(layoutWidget);
        beamButton->setObjectName(QString::fromUtf8("beamButton"));

        gridLayout->addWidget(beamButton, 2, 4, 1, 1);


        formLayout->setWidget(1, QFormLayout::LabelRole, selectionBox);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        buttonBox = new QDialogButtonBox(mapSelectDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(300, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        buttonLayout->addWidget(buttonBox);

        buttonSpacer = new QSpacerItem(100, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        buttonLayout->addItem(buttonSpacer);


        formLayout->setLayout(2, QFormLayout::LabelRole, buttonLayout);


        retranslateUi(mapSelectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), mapSelectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), mapSelectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(mapSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *mapSelectDialog)
    {
        mapSelectDialog->setWindowTitle(QCoreApplication::translate("mapSelectDialog", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("mapSelectDialog", "Please select the map to be displayed", nullptr));
        selectionBox->setTitle(QCoreApplication::translate("mapSelectDialog", "Select Display Type", nullptr));
        filterSkyButton->setText(QCoreApplication::translate("mapSelectDialog", "Filter S&ky Map", nullptr));
        inverseWeightsButton->setText(QCoreApplication::translate("mapSelectDialog", "In&verse Weights", nullptr));
        inverseDataButton->setText(QCoreApplication::translate("mapSelectDialog", "&Inverse Data", nullptr));
        pixelDataButton->setText(QCoreApplication::translate("mapSelectDialog", "&Pixelized Data", nullptr));
        combinedInverseButton->setText(QCoreApplication::translate("mapSelectDialog", "Weigh&ted Inverse Data", nullptr));
        weightButton->setText(QCoreApplication::translate("mapSelectDialog", "Input &Weights", nullptr));
        pixelOccupancyButton->setText(QCoreApplication::translate("mapSelectDialog", "Pixel &Occupancy", nullptr));
        dataButton->setText(QCoreApplication::translate("mapSelectDialog", "Input &Data", nullptr));
        noiseSkyButton->setText(QCoreApplication::translate("mapSelectDialog", "Noise &Sky Map", nullptr));
        beamSkyButton->setText(QCoreApplication::translate("mapSelectDialog", "Beam Sk&y Map", nullptr));
        combinedDataButton->setText(QCoreApplication::translate("mapSelectDialog", "Wei&ghted Data", nullptr));
        combinedPixelButton->setText(QCoreApplication::translate("mapSelectDialog", "Weig&hted Pixelized Data", nullptr));
        pixelWeightsButton->setText(QCoreApplication::translate("mapSelectDialog", "Pi&xelized Weights", nullptr));
        noiseButton->setText(QCoreApplication::translate("mapSelectDialog", "Pixelized &Noise Map", nullptr));
        filterButton->setText(QCoreApplication::translate("mapSelectDialog", "Pixelized &Filter Map", nullptr));
        beamButton->setText(QCoreApplication::translate("mapSelectDialog", "Pixelized &Beam Map", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mapSelectDialog: public Ui_mapSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPSELECTDLG_H
