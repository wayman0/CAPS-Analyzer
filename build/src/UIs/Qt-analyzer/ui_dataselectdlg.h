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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dataSelectDialog
{
public:
    QGroupBox *selectionBox;
    QCheckBox *inputDataCB;
    QCheckBox *inputWeightCB;
    QCheckBox *WeightedInputCB;
    QCheckBox *inputNoiseCB;
    QCheckBox *pixelNoiseCB;
    QCheckBox *transNoiseCB;
    QCheckBox *noiseAlmCB;
    QCheckBox *invNoiseCB;
    QCheckBox *pixelDataCB;
    QCheckBox *transDataCB;
    QCheckBox *dataAlmCB;
    QCheckBox *invDataCB;
    QCheckBox *pixelWeightsCB;
    QCheckBox *transWeightCB;
    QCheckBox *weightAlmCB;
    QCheckBox *invWeightsCB;
    QCheckBox *WeightedPixelCB;
    QCheckBox *WeightedTransformCB;
    QCheckBox *weightedAlmCB;
    QCheckBox *WeightedInverseCB;
    QFrame *line;
    QCheckBox *EnsIterNoiseCB;
    QCheckBox *EnsIterSpectrumCB;
    QCheckBox *EnsIterBinnedSpectrumCB;
    QCheckBox *EnsAvgSpectrumCB;
    QCheckBox *EnsAvgNoiseCB;
    QCheckBox *EnsAvgBinnedSpectrumCB;
    QCheckBox *modeMatrixCB;
    QCheckBox *binningMatrixCB;
    QCheckBox *unbinningMatrixCB;
    QCheckBox *instrumentEffectsMatrixCB;
    QCheckBox *binnedInstrumentEffectsMatrixCB;
    QWidget *layoutWidget;
    QHBoxLayout *buttonLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *buttonSpacer;
    QCheckBox *inverseBinnedInstrumentMatrixCB;
    QCheckBox *transFilterCB;
    QCheckBox *beamAlmCB;
    QCheckBox *filterAlmCB;
    QCheckBox *inputBeamCB;
    QCheckBox *invFilterCB;
    QCheckBox *pixelFilterCB;
    QCheckBox *pixelBeamCB;
    QCheckBox *invBeamCB;
    QCheckBox *transBeamCB;
    QCheckBox *inputFilterCB;
    QCheckBox *invWeightedNoiseCB;
    QCheckBox *noiseWeightedAlmCB;
    QCheckBox *transWeightedNoiseCB;
    QCheckBox *inputWeightedNoiseCB;
    QCheckBox *pixelWeightedNoiseCB;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *title;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *dataSelectDialog)
    {
        if (dataSelectDialog->objectName().isEmpty())
            dataSelectDialog->setObjectName(QString::fromUtf8("dataSelectDialog"));
        dataSelectDialog->resize(1173, 416);
        dataSelectDialog->setMinimumSize(QSize(500, 210));
        selectionBox = new QGroupBox(dataSelectDialog);
        selectionBox->setObjectName(QString::fromUtf8("selectionBox"));
        selectionBox->setGeometry(QRect(0, 40, 1141, 371));
        selectionBox->setMinimumSize(QSize(770, 140));
        inputDataCB = new QCheckBox(selectionBox);
        inputDataCB->setObjectName(QString::fromUtf8("inputDataCB"));
        inputDataCB->setGeometry(QRect(8, 34, 92, 22));
        inputWeightCB = new QCheckBox(selectionBox);
        inputWeightCB->setObjectName(QString::fromUtf8("inputWeightCB"));
        inputWeightCB->setGeometry(QRect(149, 34, 96, 22));
        WeightedInputCB = new QCheckBox(selectionBox);
        WeightedInputCB->setObjectName(QString::fromUtf8("WeightedInputCB"));
        WeightedInputCB->setGeometry(QRect(300, 34, 122, 22));
        inputNoiseCB = new QCheckBox(selectionBox);
        inputNoiseCB->setObjectName(QString::fromUtf8("inputNoiseCB"));
        inputNoiseCB->setGeometry(QRect(470, 34, 98, 22));
        pixelNoiseCB = new QCheckBox(selectionBox);
        pixelNoiseCB->setObjectName(QString::fromUtf8("pixelNoiseCB"));
        pixelNoiseCB->setGeometry(QRect(470, 62, 117, 22));
        transNoiseCB = new QCheckBox(selectionBox);
        transNoiseCB->setObjectName(QString::fromUtf8("transNoiseCB"));
        transNoiseCB->setGeometry(QRect(470, 90, 141, 22));
        noiseAlmCB = new QCheckBox(selectionBox);
        noiseAlmCB->setObjectName(QString::fromUtf8("noiseAlmCB"));
        noiseAlmCB->setGeometry(QRect(470, 118, 130, 22));
        invNoiseCB = new QCheckBox(selectionBox);
        invNoiseCB->setObjectName(QString::fromUtf8("invNoiseCB"));
        invNoiseCB->setGeometry(QRect(470, 146, 109, 22));
        pixelDataCB = new QCheckBox(selectionBox);
        pixelDataCB->setObjectName(QString::fromUtf8("pixelDataCB"));
        pixelDataCB->setGeometry(QRect(8, 62, 111, 22));
        transDataCB = new QCheckBox(selectionBox);
        transDataCB->setObjectName(QString::fromUtf8("transDataCB"));
        transDataCB->setGeometry(QRect(8, 90, 135, 22));
        dataAlmCB = new QCheckBox(selectionBox);
        dataAlmCB->setObjectName(QString::fromUtf8("dataAlmCB"));
        dataAlmCB->setGeometry(QRect(8, 118, 124, 22));
        invDataCB = new QCheckBox(selectionBox);
        invDataCB->setObjectName(QString::fromUtf8("invDataCB"));
        invDataCB->setGeometry(QRect(8, 146, 103, 22));
        pixelWeightsCB = new QCheckBox(selectionBox);
        pixelWeightsCB->setObjectName(QString::fromUtf8("pixelWeightsCB"));
        pixelWeightsCB->setGeometry(QRect(149, 62, 115, 22));
        transWeightCB = new QCheckBox(selectionBox);
        transWeightCB->setObjectName(QString::fromUtf8("transWeightCB"));
        transWeightCB->setGeometry(QRect(149, 90, 139, 22));
        weightAlmCB = new QCheckBox(selectionBox);
        weightAlmCB->setObjectName(QString::fromUtf8("weightAlmCB"));
        weightAlmCB->setGeometry(QRect(149, 118, 128, 22));
        invWeightsCB = new QCheckBox(selectionBox);
        invWeightsCB->setObjectName(QString::fromUtf8("invWeightsCB"));
        invWeightsCB->setGeometry(QRect(149, 146, 107, 22));
        WeightedPixelCB = new QCheckBox(selectionBox);
        WeightedPixelCB->setObjectName(QString::fromUtf8("WeightedPixelCB"));
        WeightedPixelCB->setGeometry(QRect(300, 62, 117, 22));
        WeightedTransformCB = new QCheckBox(selectionBox);
        WeightedTransformCB->setObjectName(QString::fromUtf8("WeightedTransformCB"));
        WeightedTransformCB->setGeometry(QRect(300, 90, 150, 22));
        weightedAlmCB = new QCheckBox(selectionBox);
        weightedAlmCB->setObjectName(QString::fromUtf8("weightedAlmCB"));
        weightedAlmCB->setGeometry(QRect(300, 118, 154, 22));
        WeightedInverseCB = new QCheckBox(selectionBox);
        WeightedInverseCB->setObjectName(QString::fromUtf8("WeightedInverseCB"));
        WeightedInverseCB->setGeometry(QRect(300, 146, 133, 22));
        line = new QFrame(selectionBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 180, 1061, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        EnsIterNoiseCB = new QCheckBox(selectionBox);
        EnsIterNoiseCB->setObjectName(QString::fromUtf8("EnsIterNoiseCB"));
        EnsIterNoiseCB->setGeometry(QRect(220, 200, 231, 22));
        EnsIterSpectrumCB = new QCheckBox(selectionBox);
        EnsIterSpectrumCB->setObjectName(QString::fromUtf8("EnsIterSpectrumCB"));
        EnsIterSpectrumCB->setGeometry(QRect(220, 230, 231, 22));
        EnsIterBinnedSpectrumCB = new QCheckBox(selectionBox);
        EnsIterBinnedSpectrumCB->setObjectName(QString::fromUtf8("EnsIterBinnedSpectrumCB"));
        EnsIterBinnedSpectrumCB->setGeometry(QRect(220, 260, 231, 22));
        EnsAvgSpectrumCB = new QCheckBox(selectionBox);
        EnsAvgSpectrumCB->setObjectName(QString::fromUtf8("EnsAvgSpectrumCB"));
        EnsAvgSpectrumCB->setGeometry(QRect(10, 230, 191, 22));
        EnsAvgNoiseCB = new QCheckBox(selectionBox);
        EnsAvgNoiseCB->setObjectName(QString::fromUtf8("EnsAvgNoiseCB"));
        EnsAvgNoiseCB->setGeometry(QRect(10, 200, 191, 22));
        EnsAvgBinnedSpectrumCB = new QCheckBox(selectionBox);
        EnsAvgBinnedSpectrumCB->setObjectName(QString::fromUtf8("EnsAvgBinnedSpectrumCB"));
        EnsAvgBinnedSpectrumCB->setGeometry(QRect(10, 260, 191, 22));
        modeMatrixCB = new QCheckBox(selectionBox);
        modeMatrixCB->setObjectName(QString::fromUtf8("modeMatrixCB"));
        modeMatrixCB->setGeometry(QRect(470, 200, 201, 22));
        binningMatrixCB = new QCheckBox(selectionBox);
        binningMatrixCB->setObjectName(QString::fromUtf8("binningMatrixCB"));
        binningMatrixCB->setGeometry(QRect(470, 230, 116, 22));
        unbinningMatrixCB = new QCheckBox(selectionBox);
        unbinningMatrixCB->setObjectName(QString::fromUtf8("unbinningMatrixCB"));
        unbinningMatrixCB->setGeometry(QRect(470, 260, 141, 22));
        instrumentEffectsMatrixCB = new QCheckBox(selectionBox);
        instrumentEffectsMatrixCB->setObjectName(QString::fromUtf8("instrumentEffectsMatrixCB"));
        instrumentEffectsMatrixCB->setGeometry(QRect(690, 200, 191, 22));
        binnedInstrumentEffectsMatrixCB = new QCheckBox(selectionBox);
        binnedInstrumentEffectsMatrixCB->setObjectName(QString::fromUtf8("binnedInstrumentEffectsMatrixCB"));
        binnedInstrumentEffectsMatrixCB->setGeometry(QRect(690, 230, 231, 22));
        layoutWidget = new QWidget(selectionBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(400, 320, 408, 36));
        buttonLayout = new QHBoxLayout(layoutWidget);
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        buttonLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(300, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        buttonLayout->addWidget(buttonBox);

        buttonSpacer = new QSpacerItem(100, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        buttonLayout->addItem(buttonSpacer);

        inverseBinnedInstrumentMatrixCB = new QCheckBox(selectionBox);
        inverseBinnedInstrumentMatrixCB->setObjectName(QString::fromUtf8("inverseBinnedInstrumentMatrixCB"));
        inverseBinnedInstrumentMatrixCB->setGeometry(QRect(690, 260, 248, 22));
        transFilterCB = new QCheckBox(selectionBox);
        transFilterCB->setObjectName(QString::fromUtf8("transFilterCB"));
        transFilterCB->setGeometry(QRect(830, 86, 138, 22));
        beamAlmCB = new QCheckBox(selectionBox);
        beamAlmCB->setObjectName(QString::fromUtf8("beamAlmCB"));
        beamAlmCB->setGeometry(QRect(980, 114, 130, 22));
        filterAlmCB = new QCheckBox(selectionBox);
        filterAlmCB->setObjectName(QString::fromUtf8("filterAlmCB"));
        filterAlmCB->setGeometry(QRect(830, 114, 126, 22));
        inputBeamCB = new QCheckBox(selectionBox);
        inputBeamCB->setObjectName(QString::fromUtf8("inputBeamCB"));
        inputBeamCB->setGeometry(QRect(980, 30, 98, 22));
        invFilterCB = new QCheckBox(selectionBox);
        invFilterCB->setObjectName(QString::fromUtf8("invFilterCB"));
        invFilterCB->setGeometry(QRect(830, 142, 106, 22));
        pixelFilterCB = new QCheckBox(selectionBox);
        pixelFilterCB->setObjectName(QString::fromUtf8("pixelFilterCB"));
        pixelFilterCB->setGeometry(QRect(829, 58, 114, 22));
        pixelBeamCB = new QCheckBox(selectionBox);
        pixelBeamCB->setObjectName(QString::fromUtf8("pixelBeamCB"));
        pixelBeamCB->setGeometry(QRect(980, 58, 117, 22));
        invBeamCB = new QCheckBox(selectionBox);
        invBeamCB->setObjectName(QString::fromUtf8("invBeamCB"));
        invBeamCB->setGeometry(QRect(980, 142, 109, 22));
        transBeamCB = new QCheckBox(selectionBox);
        transBeamCB->setObjectName(QString::fromUtf8("transBeamCB"));
        transBeamCB->setGeometry(QRect(980, 86, 141, 22));
        inputFilterCB = new QCheckBox(selectionBox);
        inputFilterCB->setObjectName(QString::fromUtf8("inputFilterCB"));
        inputFilterCB->setGeometry(QRect(830, 30, 95, 22));
        invWeightedNoiseCB = new QCheckBox(selectionBox);
        invWeightedNoiseCB->setObjectName(QString::fromUtf8("invWeightedNoiseCB"));
        invWeightedNoiseCB->setGeometry(QRect(620, 144, 181, 22));
        noiseWeightedAlmCB = new QCheckBox(selectionBox);
        noiseWeightedAlmCB->setObjectName(QString::fromUtf8("noiseWeightedAlmCB"));
        noiseWeightedAlmCB->setGeometry(QRect(620, 116, 201, 22));
        transWeightedNoiseCB = new QCheckBox(selectionBox);
        transWeightedNoiseCB->setObjectName(QString::fromUtf8("transWeightedNoiseCB"));
        transWeightedNoiseCB->setGeometry(QRect(620, 88, 201, 22));
        inputWeightedNoiseCB = new QCheckBox(selectionBox);
        inputWeightedNoiseCB->setObjectName(QString::fromUtf8("inputWeightedNoiseCB"));
        inputWeightedNoiseCB->setGeometry(QRect(620, 32, 171, 22));
        pixelWeightedNoiseCB = new QCheckBox(selectionBox);
        pixelWeightedNoiseCB->setObjectName(QString::fromUtf8("pixelWeightedNoiseCB"));
        pixelWeightedNoiseCB->setGeometry(QRect(620, 60, 181, 22));
        layoutWidget1 = new QWidget(dataSelectDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(2, 0, 1141, 34));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(348, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        title = new QLineEdit(layoutWidget1);
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
        inputDataCB->setText(QCoreApplication::translate("dataSelectDialog", "Input Data", nullptr));
        inputWeightCB->setText(QCoreApplication::translate("dataSelectDialog", "Input Mask", nullptr));
        WeightedInputCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Input", nullptr));
        inputNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Input Noise", nullptr));
        pixelNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Noise", nullptr));
        transNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Noise", nullptr));
        noiseAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Noise Alm Matrix", nullptr));
        invNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Noise", nullptr));
        pixelDataCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Data", nullptr));
        transDataCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Data", nullptr));
        dataAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Data Alm Matrix", nullptr));
        invDataCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Data", nullptr));
        pixelWeightsCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Mask", nullptr));
        transWeightCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Mask", nullptr));
        weightAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Mask Alm Matrix", nullptr));
        invWeightsCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Mask", nullptr));
        WeightedPixelCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Pixel", nullptr));
        WeightedTransformCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Transform", nullptr));
        weightedAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Alm Matrix", nullptr));
        WeightedInverseCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Inverse", nullptr));
        EnsIterNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Noise Ensemble Iteration Matrix", nullptr));
        EnsIterSpectrumCB->setText(QCoreApplication::translate("dataSelectDialog", "Pseudo Ensemble Iteration Matrix", nullptr));
        EnsIterBinnedSpectrumCB->setText(QCoreApplication::translate("dataSelectDialog", "Binned Ensemble Iteration Matrix", nullptr));
        EnsAvgSpectrumCB->setText(QCoreApplication::translate("dataSelectDialog", "Pseudo Ensemble Average", nullptr));
        EnsAvgNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Noise Ensemble Average", nullptr));
        EnsAvgBinnedSpectrumCB->setText(QCoreApplication::translate("dataSelectDialog", "Binned Ensemble Average", nullptr));
        modeMatrixCB->setText(QCoreApplication::translate("dataSelectDialog", "Mode-Mode Coupling Matrix", nullptr));
        binningMatrixCB->setText(QCoreApplication::translate("dataSelectDialog", "Binning Matrix", nullptr));
        unbinningMatrixCB->setText(QCoreApplication::translate("dataSelectDialog", "Unbinning Matrix", nullptr));
        instrumentEffectsMatrixCB->setText(QCoreApplication::translate("dataSelectDialog", "Instrument Effects Matrix", nullptr));
        binnedInstrumentEffectsMatrixCB->setText(QCoreApplication::translate("dataSelectDialog", "Binned Instrument Effects Matrix", nullptr));
        inverseBinnedInstrumentMatrixCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Binned Instrument Matrix", nullptr));
        transFilterCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Filter", nullptr));
        beamAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Beam Alm Matrix", nullptr));
        filterAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Filter Alm Matrix", nullptr));
        inputBeamCB->setText(QCoreApplication::translate("dataSelectDialog", "Input Beam", nullptr));
        invFilterCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Filter", nullptr));
        pixelFilterCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Filter", nullptr));
        pixelBeamCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Beam", nullptr));
        invBeamCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Beam", nullptr));
        transBeamCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Beam", nullptr));
        inputFilterCB->setText(QCoreApplication::translate("dataSelectDialog", "Input Filter", nullptr));
        invWeightedNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Inverse Noise", nullptr));
        noiseWeightedAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Noise Alm Matrix", nullptr));
        transWeightedNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Transformed Noise", nullptr));
        inputWeightedNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Input Noise", nullptr));
        pixelWeightedNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Weighted Pixelized Noise", nullptr));
        title->setText(QCoreApplication::translate("dataSelectDialog", "Please select the data type to load", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dataSelectDialog: public Ui_dataSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASELECTDLG_H
