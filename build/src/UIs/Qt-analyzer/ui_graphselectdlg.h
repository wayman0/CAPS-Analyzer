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

QT_BEGIN_NAMESPACE

class Ui_graphSelectDialog
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *selectionBox;
    QGridLayout *gridLayout;
    QRadioButton *dataButton;
    QRadioButton *noiseButton;
    QRadioButton *EnsAvgNoiseSpectrumButton;
    QRadioButton *weightButton;
    QRadioButton *weightedNoiseButton;
    QRadioButton *EnsAvgSpectrumButton;
    QRadioButton *combinedDataButton;
    QRadioButton *filterButton;
    QRadioButton *binnedSpectrumButton;
    QRadioButton *beamButton;
    QRadioButton *EnsAvgBinnedSpectrumButton;
    QLabel *title;

    void setupUi(QDialog *graphSelectDialog)
    {
        if (graphSelectDialog->objectName().isEmpty())
            graphSelectDialog->setObjectName(QString::fromUtf8("graphSelectDialog"));
        graphSelectDialog->setEnabled(true);
        graphSelectDialog->resize(619, 234);
        buttonBox = new QDialogButtonBox(graphSelectDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 190, 481, 36));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);
        selectionBox = new QGroupBox(graphSelectDialog);
        selectionBox->setObjectName(QString::fromUtf8("selectionBox"));
        selectionBox->setGeometry(QRect(0, 30, 610, 160));
        selectionBox->setMinimumSize(QSize(380, 110));
        gridLayout = new QGridLayout(selectionBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dataButton = new QRadioButton(selectionBox);
        dataButton->setObjectName(QString::fromUtf8("dataButton"));
        dataButton->setChecked(true);

        gridLayout->addWidget(dataButton, 0, 0, 1, 1);

        noiseButton = new QRadioButton(selectionBox);
        noiseButton->setObjectName(QString::fromUtf8("noiseButton"));

        gridLayout->addWidget(noiseButton, 0, 1, 1, 1);

        EnsAvgNoiseSpectrumButton = new QRadioButton(selectionBox);
        EnsAvgNoiseSpectrumButton->setObjectName(QString::fromUtf8("EnsAvgNoiseSpectrumButton"));

        gridLayout->addWidget(EnsAvgNoiseSpectrumButton, 0, 2, 2, 1);

        weightButton = new QRadioButton(selectionBox);
        weightButton->setObjectName(QString::fromUtf8("weightButton"));

        gridLayout->addWidget(weightButton, 1, 0, 2, 1);

        weightedNoiseButton = new QRadioButton(selectionBox);
        weightedNoiseButton->setObjectName(QString::fromUtf8("weightedNoiseButton"));

        gridLayout->addWidget(weightedNoiseButton, 2, 1, 1, 1);

        EnsAvgSpectrumButton = new QRadioButton(selectionBox);
        EnsAvgSpectrumButton->setObjectName(QString::fromUtf8("EnsAvgSpectrumButton"));

        gridLayout->addWidget(EnsAvgSpectrumButton, 2, 2, 2, 1);

        combinedDataButton = new QRadioButton(selectionBox);
        combinedDataButton->setObjectName(QString::fromUtf8("combinedDataButton"));

        gridLayout->addWidget(combinedDataButton, 3, 0, 2, 1);

        filterButton = new QRadioButton(selectionBox);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));

        gridLayout->addWidget(filterButton, 4, 1, 1, 1);

        binnedSpectrumButton = new QRadioButton(selectionBox);
        binnedSpectrumButton->setObjectName(QString::fromUtf8("binnedSpectrumButton"));

        gridLayout->addWidget(binnedSpectrumButton, 4, 2, 1, 1);

        beamButton = new QRadioButton(selectionBox);
        beamButton->setObjectName(QString::fromUtf8("beamButton"));

        gridLayout->addWidget(beamButton, 5, 1, 1, 1);

        EnsAvgBinnedSpectrumButton = new QRadioButton(selectionBox);
        EnsAvgBinnedSpectrumButton->setObjectName(QString::fromUtf8("EnsAvgBinnedSpectrumButton"));

        gridLayout->addWidget(EnsAvgBinnedSpectrumButton, 5, 2, 1, 1);

        title = new QLabel(graphSelectDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(80, 10, 471, 20));
        title->setMinimumSize(QSize(380, 0));
        title->setAlignment(Qt::AlignCenter);

        retranslateUi(graphSelectDialog);

        QMetaObject::connectSlotsByName(graphSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *graphSelectDialog)
    {
        graphSelectDialog->setWindowTitle(QCoreApplication::translate("graphSelectDialog", "Spectrum Selection", nullptr));
        selectionBox->setTitle(QCoreApplication::translate("graphSelectDialog", "Select Spectral Type", nullptr));
        dataButton->setText(QCoreApplication::translate("graphSelectDialog", "Transformed &Data", nullptr));
        noiseButton->setText(QCoreApplication::translate("graphSelectDialog", "&Noise Data", nullptr));
        EnsAvgNoiseSpectrumButton->setText(QCoreApplication::translate("graphSelectDialog", "Ensemble Averaged Noise Spectrum", nullptr));
        weightButton->setText(QCoreApplication::translate("graphSelectDialog", "Transformed &Weights", nullptr));
        weightedNoiseButton->setText(QCoreApplication::translate("graphSelectDialog", "Weighted Noise Data", nullptr));
        EnsAvgSpectrumButton->setText(QCoreApplication::translate("graphSelectDialog", "Ensemble Averaged Spectrum", nullptr));
        combinedDataButton->setText(QCoreApplication::translate("graphSelectDialog", "Weighted &Transfomation", nullptr));
        filterButton->setText(QCoreApplication::translate("graphSelectDialog", "&Filter Data", nullptr));
        binnedSpectrumButton->setText(QCoreApplication::translate("graphSelectDialog", "Binned Spectrum", nullptr));
        beamButton->setText(QCoreApplication::translate("graphSelectDialog", "&Beam Data", nullptr));
        EnsAvgBinnedSpectrumButton->setText(QCoreApplication::translate("graphSelectDialog", "Ensemble Averaged Binned Spectrum", nullptr));
        title->setText(QCoreApplication::translate("graphSelectDialog", "Please select the spectrum to be displayed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graphSelectDialog: public Ui_graphSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHSELECTDLG_H
