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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_mapSelectDialog
{
public:
    QGridLayout *gridLayout_2;
    QLabel *title;
    QGroupBox *selectionBox;
    QGridLayout *gridLayout;
    QRadioButton *dataButton;
    QRadioButton *pixelDataButton;
    QRadioButton *inverseDataButton;
    QRadioButton *weightButton;
    QRadioButton *pixelWeightsButton;
    QRadioButton *inverseWeightsButton;
    QRadioButton *combinedDataButton;
    QRadioButton *combinedPixelButton;
    QRadioButton *combinedInverseButton;
    QRadioButton *noiseSkyButton;
    QRadioButton *noiseButton;
    QRadioButton *invNoiseButton;
    QRadioButton *weightedNoiseSkyButton;
    QRadioButton *pixelWeightedNoiseButton;
    QRadioButton *invWeightedNoiseButton;
    QRadioButton *filterSkyButton;
    QRadioButton *filterButton;
    QRadioButton *invFilterButton;
    QRadioButton *beamSkyButton;
    QRadioButton *beamButton;
    QRadioButton *invBeamButton;
    QRadioButton *pixelOccupancyButton;
    QHBoxLayout *buttonLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *buttonSpacer;

    void setupUi(QDialog *mapSelectDialog)
    {
        if (mapSelectDialog->objectName().isEmpty())
            mapSelectDialog->setObjectName(QString::fromUtf8("mapSelectDialog"));
        mapSelectDialog->resize(795, 344);
        mapSelectDialog->setMinimumSize(QSize(780, 210));
        gridLayout_2 = new QGridLayout(mapSelectDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        title = new QLabel(mapSelectDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMinimumSize(QSize(480, 0));
        title->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(title, 0, 0, 1, 1);

        selectionBox = new QGroupBox(mapSelectDialog);
        selectionBox->setObjectName(QString::fromUtf8("selectionBox"));
        selectionBox->setMinimumSize(QSize(770, 140));
        gridLayout = new QGridLayout(selectionBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dataButton = new QRadioButton(selectionBox);
        dataButton->setObjectName(QString::fromUtf8("dataButton"));

        gridLayout->addWidget(dataButton, 0, 0, 1, 1);

        pixelDataButton = new QRadioButton(selectionBox);
        pixelDataButton->setObjectName(QString::fromUtf8("pixelDataButton"));

        gridLayout->addWidget(pixelDataButton, 0, 1, 1, 1);

        inverseDataButton = new QRadioButton(selectionBox);
        inverseDataButton->setObjectName(QString::fromUtf8("inverseDataButton"));

        gridLayout->addWidget(inverseDataButton, 0, 2, 1, 1);

        weightButton = new QRadioButton(selectionBox);
        weightButton->setObjectName(QString::fromUtf8("weightButton"));

        gridLayout->addWidget(weightButton, 1, 0, 1, 1);

        pixelWeightsButton = new QRadioButton(selectionBox);
        pixelWeightsButton->setObjectName(QString::fromUtf8("pixelWeightsButton"));

        gridLayout->addWidget(pixelWeightsButton, 1, 1, 1, 1);

        inverseWeightsButton = new QRadioButton(selectionBox);
        inverseWeightsButton->setObjectName(QString::fromUtf8("inverseWeightsButton"));

        gridLayout->addWidget(inverseWeightsButton, 1, 2, 1, 1);

        combinedDataButton = new QRadioButton(selectionBox);
        combinedDataButton->setObjectName(QString::fromUtf8("combinedDataButton"));

        gridLayout->addWidget(combinedDataButton, 2, 0, 1, 1);

        combinedPixelButton = new QRadioButton(selectionBox);
        combinedPixelButton->setObjectName(QString::fromUtf8("combinedPixelButton"));

        gridLayout->addWidget(combinedPixelButton, 2, 1, 1, 1);

        combinedInverseButton = new QRadioButton(selectionBox);
        combinedInverseButton->setObjectName(QString::fromUtf8("combinedInverseButton"));

        gridLayout->addWidget(combinedInverseButton, 2, 2, 1, 1);

        noiseSkyButton = new QRadioButton(selectionBox);
        noiseSkyButton->setObjectName(QString::fromUtf8("noiseSkyButton"));

        gridLayout->addWidget(noiseSkyButton, 3, 0, 1, 1);

        noiseButton = new QRadioButton(selectionBox);
        noiseButton->setObjectName(QString::fromUtf8("noiseButton"));

        gridLayout->addWidget(noiseButton, 3, 1, 1, 1);

        invNoiseButton = new QRadioButton(selectionBox);
        invNoiseButton->setObjectName(QString::fromUtf8("invNoiseButton"));

        gridLayout->addWidget(invNoiseButton, 3, 2, 1, 1);

        weightedNoiseSkyButton = new QRadioButton(selectionBox);
        weightedNoiseSkyButton->setObjectName(QString::fromUtf8("weightedNoiseSkyButton"));

        gridLayout->addWidget(weightedNoiseSkyButton, 4, 0, 1, 1);

        pixelWeightedNoiseButton = new QRadioButton(selectionBox);
        pixelWeightedNoiseButton->setObjectName(QString::fromUtf8("pixelWeightedNoiseButton"));

        gridLayout->addWidget(pixelWeightedNoiseButton, 4, 1, 1, 1);

        invWeightedNoiseButton = new QRadioButton(selectionBox);
        invWeightedNoiseButton->setObjectName(QString::fromUtf8("invWeightedNoiseButton"));

        gridLayout->addWidget(invWeightedNoiseButton, 4, 2, 1, 1);

        filterSkyButton = new QRadioButton(selectionBox);
        filterSkyButton->setObjectName(QString::fromUtf8("filterSkyButton"));

        gridLayout->addWidget(filterSkyButton, 5, 0, 1, 1);

        filterButton = new QRadioButton(selectionBox);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));

        gridLayout->addWidget(filterButton, 5, 1, 1, 1);

        invFilterButton = new QRadioButton(selectionBox);
        invFilterButton->setObjectName(QString::fromUtf8("invFilterButton"));

        gridLayout->addWidget(invFilterButton, 5, 2, 1, 1);

        beamSkyButton = new QRadioButton(selectionBox);
        beamSkyButton->setObjectName(QString::fromUtf8("beamSkyButton"));

        gridLayout->addWidget(beamSkyButton, 6, 0, 1, 1);

        beamButton = new QRadioButton(selectionBox);
        beamButton->setObjectName(QString::fromUtf8("beamButton"));

        gridLayout->addWidget(beamButton, 6, 1, 1, 1);

        invBeamButton = new QRadioButton(selectionBox);
        invBeamButton->setObjectName(QString::fromUtf8("invBeamButton"));

        gridLayout->addWidget(invBeamButton, 6, 2, 1, 1);

        pixelOccupancyButton = new QRadioButton(selectionBox);
        pixelOccupancyButton->setObjectName(QString::fromUtf8("pixelOccupancyButton"));

        gridLayout->addWidget(pixelOccupancyButton, 7, 1, 1, 1);


        gridLayout_2->addWidget(selectionBox, 1, 0, 1, 1);

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


        gridLayout_2->addLayout(buttonLayout, 2, 0, 1, 1);


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
        dataButton->setText(QCoreApplication::translate("mapSelectDialog", "Input &Data", nullptr));
        pixelDataButton->setText(QCoreApplication::translate("mapSelectDialog", "&Pixelized Data", nullptr));
        inverseDataButton->setText(QCoreApplication::translate("mapSelectDialog", "&Inverse Data", nullptr));
        weightButton->setText(QCoreApplication::translate("mapSelectDialog", "Input &Weights", nullptr));
        pixelWeightsButton->setText(QCoreApplication::translate("mapSelectDialog", "Pi&xelized Weights", nullptr));
        inverseWeightsButton->setText(QCoreApplication::translate("mapSelectDialog", "In&verse Weights", nullptr));
        combinedDataButton->setText(QCoreApplication::translate("mapSelectDialog", "Wei&ghted Data", nullptr));
        combinedPixelButton->setText(QCoreApplication::translate("mapSelectDialog", "Weig&hted Pixelized Data", nullptr));
        combinedInverseButton->setText(QCoreApplication::translate("mapSelectDialog", "Weigh&ted Inverse Data", nullptr));
        noiseSkyButton->setText(QCoreApplication::translate("mapSelectDialog", "Noise &Sky Map", nullptr));
        noiseButton->setText(QCoreApplication::translate("mapSelectDialog", "Pixelized &Noise Map", nullptr));
        invNoiseButton->setText(QCoreApplication::translate("mapSelectDialog", "Inverse Noise Map", nullptr));
        weightedNoiseSkyButton->setText(QCoreApplication::translate("mapSelectDialog", "Weighted Noise &Sky Map", nullptr));
        pixelWeightedNoiseButton->setText(QCoreApplication::translate("mapSelectDialog", "Pixelized &Weighted Noise Map", nullptr));
        invWeightedNoiseButton->setText(QCoreApplication::translate("mapSelectDialog", "Inverse Weighted Noise Map", nullptr));
        filterSkyButton->setText(QCoreApplication::translate("mapSelectDialog", "Filter S&ky Map", nullptr));
        filterButton->setText(QCoreApplication::translate("mapSelectDialog", "Pixelized &Filter Map", nullptr));
        invFilterButton->setText(QCoreApplication::translate("mapSelectDialog", "Inverse Filter Map", nullptr));
        beamSkyButton->setText(QCoreApplication::translate("mapSelectDialog", "Beam Sk&y Map", nullptr));
        beamButton->setText(QCoreApplication::translate("mapSelectDialog", "Pixelized &Beam Map", nullptr));
        invBeamButton->setText(QCoreApplication::translate("mapSelectDialog", "Inverse Beam Map", nullptr));
        pixelOccupancyButton->setText(QCoreApplication::translate("mapSelectDialog", "Pixel &Occupancy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mapSelectDialog: public Ui_mapSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPSELECTDLG_H
