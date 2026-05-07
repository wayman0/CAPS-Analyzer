/********************************************************************************
** Form generated from reading UI file 'dataselectdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASELECTDLG_H
#define UI_DATASELECTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dataSelectDialog
{
public:
    QGroupBox *selectionBox;
    QGridLayout *gridLayout;
    QCheckBox *noiseWeightedAlmCB;
    QCheckBox *instrumentEffectsMatrixCB;
    QCheckBox *noiseAlmCB;
    QCheckBox *EnsIterNoiseCB;
    QCheckBox *binningMatrixCB;
    QCheckBox *inverseBinnedInstrumentMatrixCB;
    QCheckBox *inputDataCB;
    QCheckBox *transWeightCB;
    QCheckBox *pixelFilterCB;
    QCheckBox *WeightedInverseCB;
    QCheckBox *dataAlmCB;
    QCheckBox *EnsAvgNoiseCB;
    QCheckBox *WeightedInputCB;
    QCheckBox *EnsAvgSpectrumCB;
    QCheckBox *invWeightedNoiseCB;
    QCheckBox *binnedSpectrumCB;
    QCheckBox *EnsIterSpectrumCB;
    QCheckBox *binnedInstrumentEffectsMatrixCB;
    QCheckBox *inputNoiseCB;
    QCheckBox *WeightedPixelCB;
    QCheckBox *inputWeightedNoiseCB;
    QCheckBox *pixelBeamCB;
    QHBoxLayout *buttonLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *buttonSpacer;
    QPushButton *selectAllButton;
    QCheckBox *transWeightedNoiseCB;
    QCheckBox *transFilterCB;
    QCheckBox *invNoiseCB;
    QCheckBox *unbinningMatrixCB;
    QCheckBox *weightedAlmCB;
    QCheckBox *binnedExtrapolatedSpectrumCB;
    QCheckBox *transBeamCB;
    QCheckBox *pixelDataCB;
    QCheckBox *pixelNoiseCB;
    QCheckBox *weightAlmCB;
    QCheckBox *transDataCB;
    QCheckBox *WeightedTransformCB;
    QCheckBox *beamAlmCB;
    QCheckBox *transNoiseCB;
    QCheckBox *inputBeamCB;
    QCheckBox *inverseInstrumentEffectsMatrixCB;
    QCheckBox *invBeamCB;
    QCheckBox *invDataCB;
    QCheckBox *invWeightsCB;
    QCheckBox *extrapolatedInstrumentSpectrumCB;
    QCheckBox *filterAlmCB;
    QCheckBox *modeMatrixCB;
    QCheckBox *pixelWeightedNoiseCB;
    QCheckBox *invFilterCB;
    QCheckBox *inputWeightCB;
    QCheckBox *pixelWeightsCB;
    QCheckBox *inputFilterCB;
    QCheckBox *inverseModeMatrixCB;
    QCheckBox *extrapolatedSpectrumCB;
    QFrame *line;
    QCheckBox *binnedExtrapolatedInstrumentSpectrumCB;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *title;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *dataSelectDialog)
    {
        if (dataSelectDialog->objectName().isEmpty())
            dataSelectDialog->setObjectName(QString::fromUtf8("dataSelectDialog"));
        dataSelectDialog->resize(1156, 415);
        dataSelectDialog->setMinimumSize(QSize(500, 210));
        selectionBox = new QGroupBox(dataSelectDialog);
        selectionBox->setObjectName(QString::fromUtf8("selectionBox"));
        selectionBox->setGeometry(QRect(0, 40, 1148, 367));
        selectionBox->setMinimumSize(QSize(770, 140));
        gridLayout = new QGridLayout(selectionBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        noiseWeightedAlmCB = new QCheckBox(selectionBox);
        noiseWeightedAlmCB->setObjectName(QString::fromUtf8("noiseWeightedAlmCB"));

        gridLayout->addWidget(noiseWeightedAlmCB, 3, 4, 1, 1);

        instrumentEffectsMatrixCB = new QCheckBox(selectionBox);
        instrumentEffectsMatrixCB->setObjectName(QString::fromUtf8("instrumentEffectsMatrixCB"));

        gridLayout->addWidget(instrumentEffectsMatrixCB, 8, 4, 1, 1);

        noiseAlmCB = new QCheckBox(selectionBox);
        noiseAlmCB->setObjectName(QString::fromUtf8("noiseAlmCB"));

        gridLayout->addWidget(noiseAlmCB, 3, 3, 1, 1);

        EnsIterNoiseCB = new QCheckBox(selectionBox);
        EnsIterNoiseCB->setObjectName(QString::fromUtf8("EnsIterNoiseCB"));

        gridLayout->addWidget(EnsIterNoiseCB, 9, 0, 1, 2);

        binningMatrixCB = new QCheckBox(selectionBox);
        binningMatrixCB->setObjectName(QString::fromUtf8("binningMatrixCB"));

        gridLayout->addWidget(binningMatrixCB, 6, 6, 1, 1);

        inverseBinnedInstrumentMatrixCB = new QCheckBox(selectionBox);
        inverseBinnedInstrumentMatrixCB->setObjectName(QString::fromUtf8("inverseBinnedInstrumentMatrixCB"));

        gridLayout->addWidget(inverseBinnedInstrumentMatrixCB, 9, 6, 1, 2);

        inputDataCB = new QCheckBox(selectionBox);
        inputDataCB->setObjectName(QString::fromUtf8("inputDataCB"));

        gridLayout->addWidget(inputDataCB, 0, 0, 1, 1);

        transWeightCB = new QCheckBox(selectionBox);
        transWeightCB->setObjectName(QString::fromUtf8("transWeightCB"));

        gridLayout->addWidget(transWeightCB, 2, 1, 1, 1);

        pixelFilterCB = new QCheckBox(selectionBox);
        pixelFilterCB->setObjectName(QString::fromUtf8("pixelFilterCB"));

        gridLayout->addWidget(pixelFilterCB, 1, 6, 1, 1);

        WeightedInverseCB = new QCheckBox(selectionBox);
        WeightedInverseCB->setObjectName(QString::fromUtf8("WeightedInverseCB"));

        gridLayout->addWidget(WeightedInverseCB, 4, 2, 1, 1);

        dataAlmCB = new QCheckBox(selectionBox);
        dataAlmCB->setObjectName(QString::fromUtf8("dataAlmCB"));

        gridLayout->addWidget(dataAlmCB, 3, 0, 1, 1);

        EnsAvgNoiseCB = new QCheckBox(selectionBox);
        EnsAvgNoiseCB->setObjectName(QString::fromUtf8("EnsAvgNoiseCB"));

        gridLayout->addWidget(EnsAvgNoiseCB, 8, 0, 1, 2);

        WeightedInputCB = new QCheckBox(selectionBox);
        WeightedInputCB->setObjectName(QString::fromUtf8("WeightedInputCB"));

        gridLayout->addWidget(WeightedInputCB, 0, 2, 1, 1);

        EnsAvgSpectrumCB = new QCheckBox(selectionBox);
        EnsAvgSpectrumCB->setObjectName(QString::fromUtf8("EnsAvgSpectrumCB"));

        gridLayout->addWidget(EnsAvgSpectrumCB, 6, 0, 1, 2);

        invWeightedNoiseCB = new QCheckBox(selectionBox);
        invWeightedNoiseCB->setObjectName(QString::fromUtf8("invWeightedNoiseCB"));

        gridLayout->addWidget(invWeightedNoiseCB, 4, 4, 1, 1);

        binnedSpectrumCB = new QCheckBox(selectionBox);
        binnedSpectrumCB->setObjectName(QString::fromUtf8("binnedSpectrumCB"));

        gridLayout->addWidget(binnedSpectrumCB, 8, 2, 1, 2);

        EnsIterSpectrumCB = new QCheckBox(selectionBox);
        EnsIterSpectrumCB->setObjectName(QString::fromUtf8("EnsIterSpectrumCB"));

        gridLayout->addWidget(EnsIterSpectrumCB, 7, 0, 1, 2);

        binnedInstrumentEffectsMatrixCB = new QCheckBox(selectionBox);
        binnedInstrumentEffectsMatrixCB->setObjectName(QString::fromUtf8("binnedInstrumentEffectsMatrixCB"));

        gridLayout->addWidget(binnedInstrumentEffectsMatrixCB, 8, 6, 1, 2);

        inputNoiseCB = new QCheckBox(selectionBox);
        inputNoiseCB->setObjectName(QString::fromUtf8("inputNoiseCB"));

        gridLayout->addWidget(inputNoiseCB, 0, 3, 1, 1);

        WeightedPixelCB = new QCheckBox(selectionBox);
        WeightedPixelCB->setObjectName(QString::fromUtf8("WeightedPixelCB"));

        gridLayout->addWidget(WeightedPixelCB, 1, 2, 1, 1);

        inputWeightedNoiseCB = new QCheckBox(selectionBox);
        inputWeightedNoiseCB->setObjectName(QString::fromUtf8("inputWeightedNoiseCB"));

        gridLayout->addWidget(inputWeightedNoiseCB, 0, 4, 1, 1);

        pixelBeamCB = new QCheckBox(selectionBox);
        pixelBeamCB->setObjectName(QString::fromUtf8("pixelBeamCB"));

        gridLayout->addWidget(pixelBeamCB, 1, 7, 1, 1);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        buttonBox = new QDialogButtonBox(selectionBox);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(300, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        buttonLayout->addWidget(buttonBox);

        buttonSpacer = new QSpacerItem(100, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        buttonLayout->addItem(buttonSpacer);

        selectAllButton = new QPushButton(selectionBox);
        selectAllButton->setObjectName(QString::fromUtf8("selectAllButton"));

        buttonLayout->addWidget(selectAllButton);


        gridLayout->addLayout(buttonLayout, 11, 2, 1, 3);

        transWeightedNoiseCB = new QCheckBox(selectionBox);
        transWeightedNoiseCB->setObjectName(QString::fromUtf8("transWeightedNoiseCB"));

        gridLayout->addWidget(transWeightedNoiseCB, 2, 4, 1, 1);

        transFilterCB = new QCheckBox(selectionBox);
        transFilterCB->setObjectName(QString::fromUtf8("transFilterCB"));

        gridLayout->addWidget(transFilterCB, 2, 6, 1, 1);

        invNoiseCB = new QCheckBox(selectionBox);
        invNoiseCB->setObjectName(QString::fromUtf8("invNoiseCB"));

        gridLayout->addWidget(invNoiseCB, 4, 3, 1, 1);

        unbinningMatrixCB = new QCheckBox(selectionBox);
        unbinningMatrixCB->setObjectName(QString::fromUtf8("unbinningMatrixCB"));

        gridLayout->addWidget(unbinningMatrixCB, 7, 6, 1, 1);

        weightedAlmCB = new QCheckBox(selectionBox);
        weightedAlmCB->setObjectName(QString::fromUtf8("weightedAlmCB"));

        gridLayout->addWidget(weightedAlmCB, 3, 2, 1, 1);

        binnedExtrapolatedSpectrumCB = new QCheckBox(selectionBox);
        binnedExtrapolatedSpectrumCB->setObjectName(QString::fromUtf8("binnedExtrapolatedSpectrumCB"));

        gridLayout->addWidget(binnedExtrapolatedSpectrumCB, 9, 2, 1, 2);

        transBeamCB = new QCheckBox(selectionBox);
        transBeamCB->setObjectName(QString::fromUtf8("transBeamCB"));

        gridLayout->addWidget(transBeamCB, 2, 7, 1, 1);

        pixelDataCB = new QCheckBox(selectionBox);
        pixelDataCB->setObjectName(QString::fromUtf8("pixelDataCB"));

        gridLayout->addWidget(pixelDataCB, 1, 0, 1, 1);

        pixelNoiseCB = new QCheckBox(selectionBox);
        pixelNoiseCB->setObjectName(QString::fromUtf8("pixelNoiseCB"));

        gridLayout->addWidget(pixelNoiseCB, 1, 3, 1, 1);

        weightAlmCB = new QCheckBox(selectionBox);
        weightAlmCB->setObjectName(QString::fromUtf8("weightAlmCB"));

        gridLayout->addWidget(weightAlmCB, 3, 1, 1, 1);

        transDataCB = new QCheckBox(selectionBox);
        transDataCB->setObjectName(QString::fromUtf8("transDataCB"));

        gridLayout->addWidget(transDataCB, 2, 0, 1, 1);

        WeightedTransformCB = new QCheckBox(selectionBox);
        WeightedTransformCB->setObjectName(QString::fromUtf8("WeightedTransformCB"));

        gridLayout->addWidget(WeightedTransformCB, 2, 2, 1, 1);

        beamAlmCB = new QCheckBox(selectionBox);
        beamAlmCB->setObjectName(QString::fromUtf8("beamAlmCB"));

        gridLayout->addWidget(beamAlmCB, 3, 7, 1, 1);

        transNoiseCB = new QCheckBox(selectionBox);
        transNoiseCB->setObjectName(QString::fromUtf8("transNoiseCB"));

        gridLayout->addWidget(transNoiseCB, 2, 3, 1, 1);

        inputBeamCB = new QCheckBox(selectionBox);
        inputBeamCB->setObjectName(QString::fromUtf8("inputBeamCB"));

        gridLayout->addWidget(inputBeamCB, 0, 7, 1, 1);

        inverseInstrumentEffectsMatrixCB = new QCheckBox(selectionBox);
        inverseInstrumentEffectsMatrixCB->setObjectName(QString::fromUtf8("inverseInstrumentEffectsMatrixCB"));

        gridLayout->addWidget(inverseInstrumentEffectsMatrixCB, 9, 4, 1, 1);

        invBeamCB = new QCheckBox(selectionBox);
        invBeamCB->setObjectName(QString::fromUtf8("invBeamCB"));

        gridLayout->addWidget(invBeamCB, 4, 7, 1, 1);

        invDataCB = new QCheckBox(selectionBox);
        invDataCB->setObjectName(QString::fromUtf8("invDataCB"));

        gridLayout->addWidget(invDataCB, 4, 0, 1, 1);

        invWeightsCB = new QCheckBox(selectionBox);
        invWeightsCB->setObjectName(QString::fromUtf8("invWeightsCB"));

        gridLayout->addWidget(invWeightsCB, 4, 1, 1, 1);

        extrapolatedInstrumentSpectrumCB = new QCheckBox(selectionBox);
        extrapolatedInstrumentSpectrumCB->setObjectName(QString::fromUtf8("extrapolatedInstrumentSpectrumCB"));

        gridLayout->addWidget(extrapolatedInstrumentSpectrumCB, 7, 2, 1, 2);

        filterAlmCB = new QCheckBox(selectionBox);
        filterAlmCB->setObjectName(QString::fromUtf8("filterAlmCB"));

        gridLayout->addWidget(filterAlmCB, 3, 6, 1, 1);

        modeMatrixCB = new QCheckBox(selectionBox);
        modeMatrixCB->setObjectName(QString::fromUtf8("modeMatrixCB"));

        gridLayout->addWidget(modeMatrixCB, 6, 4, 1, 1);

        pixelWeightedNoiseCB = new QCheckBox(selectionBox);
        pixelWeightedNoiseCB->setObjectName(QString::fromUtf8("pixelWeightedNoiseCB"));

        gridLayout->addWidget(pixelWeightedNoiseCB, 1, 4, 1, 1);

        invFilterCB = new QCheckBox(selectionBox);
        invFilterCB->setObjectName(QString::fromUtf8("invFilterCB"));

        gridLayout->addWidget(invFilterCB, 4, 6, 1, 1);

        inputWeightCB = new QCheckBox(selectionBox);
        inputWeightCB->setObjectName(QString::fromUtf8("inputWeightCB"));

        gridLayout->addWidget(inputWeightCB, 0, 1, 1, 1);

        pixelWeightsCB = new QCheckBox(selectionBox);
        pixelWeightsCB->setObjectName(QString::fromUtf8("pixelWeightsCB"));

        gridLayout->addWidget(pixelWeightsCB, 1, 1, 1, 1);

        inputFilterCB = new QCheckBox(selectionBox);
        inputFilterCB->setObjectName(QString::fromUtf8("inputFilterCB"));

        gridLayout->addWidget(inputFilterCB, 0, 6, 1, 1);

        inverseModeMatrixCB = new QCheckBox(selectionBox);
        inverseModeMatrixCB->setObjectName(QString::fromUtf8("inverseModeMatrixCB"));

        gridLayout->addWidget(inverseModeMatrixCB, 7, 4, 1, 2);

        extrapolatedSpectrumCB = new QCheckBox(selectionBox);
        extrapolatedSpectrumCB->setObjectName(QString::fromUtf8("extrapolatedSpectrumCB"));

        gridLayout->addWidget(extrapolatedSpectrumCB, 6, 2, 1, 2);

        line = new QFrame(selectionBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 5, 0, 1, 8);

        binnedExtrapolatedInstrumentSpectrumCB = new QCheckBox(selectionBox);
        binnedExtrapolatedInstrumentSpectrumCB->setObjectName(QString::fromUtf8("binnedExtrapolatedInstrumentSpectrumCB"));

        gridLayout->addWidget(binnedExtrapolatedInstrumentSpectrumCB, 10, 2, 1, 2);

        layoutWidget = new QWidget(dataSelectDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(2, 0, 1141, 34));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(348, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        title = new QLineEdit(layoutWidget);
        title->setObjectName(QString::fromUtf8("title"));

        horizontalLayout_2->addWidget(title);

        horizontalSpacer_4 = new QSpacerItem(438, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        retranslateUi(dataSelectDialog);

        QMetaObject::connectSlotsByName(dataSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *dataSelectDialog)
    {
        dataSelectDialog->setWindowTitle(QCoreApplication::translate("dataSelectDialog", "Dialog", nullptr));
        selectionBox->setTitle(QCoreApplication::translate("dataSelectDialog", "Select Data Types", nullptr));
        noiseWeightedAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Noise Alm Matrix", nullptr));
        instrumentEffectsMatrixCB->setText(QCoreApplication::translate("dataSelectDialog", "Instrument Effects Matrix", nullptr));
        noiseAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Noise Alm Matrix", nullptr));
        EnsIterNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Noise Ensemble Iteration Matrix", nullptr));
        binningMatrixCB->setText(QCoreApplication::translate("dataSelectDialog", "Binning Matrix", nullptr));
        inverseBinnedInstrumentMatrixCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Binned Instrument Matrix", nullptr));
        inputDataCB->setText(QCoreApplication::translate("dataSelectDialog", "Input Data", nullptr));
        transWeightCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Mask", nullptr));
        pixelFilterCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Filter", nullptr));
        WeightedInverseCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Inverse", nullptr));
        dataAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Data Alm Matrix", nullptr));
        EnsAvgNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Noise Ensemble Average", nullptr));
        WeightedInputCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Input", nullptr));
        EnsAvgSpectrumCB->setText(QCoreApplication::translate("dataSelectDialog", "Pseudo Ensemble Average", nullptr));
        invWeightedNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Inverse Noise", nullptr));
        binnedSpectrumCB->setText(QCoreApplication::translate("dataSelectDialog", "Binned Spectrum", nullptr));
        EnsIterSpectrumCB->setText(QCoreApplication::translate("dataSelectDialog", "Pseudo Ensemble Iteration Matrix", nullptr));
        binnedInstrumentEffectsMatrixCB->setText(QCoreApplication::translate("dataSelectDialog", "Binned Instrument Effects Matrix", nullptr));
        inputNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Input Noise", nullptr));
        WeightedPixelCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Pixel", nullptr));
        inputWeightedNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Input Noise", nullptr));
        pixelBeamCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Beam", nullptr));
        selectAllButton->setText(QCoreApplication::translate("dataSelectDialog", "Select All", nullptr));
        transWeightedNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Transformed Noise", nullptr));
        transFilterCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Filter", nullptr));
        invNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Noise", nullptr));
        unbinningMatrixCB->setText(QCoreApplication::translate("dataSelectDialog", "Unbinning Matrix", nullptr));
        weightedAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Alm Matrix", nullptr));
        binnedExtrapolatedSpectrumCB->setText(QCoreApplication::translate("dataSelectDialog", "Binned Extrapolated Spectrum", nullptr));
        transBeamCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Beam", nullptr));
        pixelDataCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Data", nullptr));
        pixelNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Noise", nullptr));
        weightAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Mask Alm Matrix", nullptr));
        transDataCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Data", nullptr));
        WeightedTransformCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Transform", nullptr));
        beamAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Beam Alm Matrix", nullptr));
        transNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Noise", nullptr));
        inputBeamCB->setText(QCoreApplication::translate("dataSelectDialog", "Input Beam", nullptr));
        inverseInstrumentEffectsMatrixCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Instrument Effects Matrix", nullptr));
        invBeamCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Beam", nullptr));
        invDataCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Data", nullptr));
        invWeightsCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Mask", nullptr));
        extrapolatedInstrumentSpectrumCB->setText(QCoreApplication::translate("dataSelectDialog", "Extrapolated Instrumented Spectrum", nullptr));
        filterAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Filter Alm Matrix", nullptr));
        modeMatrixCB->setText(QCoreApplication::translate("dataSelectDialog", "Mode-Mode Coupling Matrix", nullptr));
        pixelWeightedNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Pixelized Noise", nullptr));
        invFilterCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Filter", nullptr));
        inputWeightCB->setText(QCoreApplication::translate("dataSelectDialog", "Input Mask", nullptr));
        pixelWeightsCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Mask", nullptr));
        inputFilterCB->setText(QCoreApplication::translate("dataSelectDialog", "Input Filter", nullptr));
        inverseModeMatrixCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Mode-Mode Coupling Matrix", nullptr));
        extrapolatedSpectrumCB->setText(QCoreApplication::translate("dataSelectDialog", "Extrapolated Spectrum", nullptr));
        binnedExtrapolatedInstrumentSpectrumCB->setText(QCoreApplication::translate("dataSelectDialog", "Binned Extrapolated Instrumented Spectrum", nullptr));
        title->setText(QCoreApplication::translate("dataSelectDialog", "Please select the data type to load", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dataSelectDialog: public Ui_dataSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASELECTDLG_H
