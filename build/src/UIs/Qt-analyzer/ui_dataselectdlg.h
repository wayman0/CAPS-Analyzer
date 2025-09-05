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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dataSelectDialog
{
public:
    QGroupBox *selectionBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QCheckBox *inputDataCB;
    QCheckBox *inputWeightCB;
    QCheckBox *inputNoiseCB;
    QCheckBox *inputFilterCB;
    QCheckBox *inputBeamCB;
    QCheckBox *binCB;
    QCheckBox *pixelDataCB;
    QCheckBox *pixelWeightsCB;
    QCheckBox *pixelNoiseCB;
    QCheckBox *pixelFilterCB;
    QCheckBox *pixelBeamCB;
    QCheckBox *invBinCB;
    QCheckBox *transDataCB;
    QCheckBox *transWeightCB;
    QCheckBox *transNoiseCB;
    QCheckBox *transFilterCB;
    QCheckBox *transBeamCB;
    QCheckBox *modeCB;
    QCheckBox *dataAlmCB;
    QCheckBox *weightAlmCB;
    QCheckBox *noiseAlmCB;
    QCheckBox *filterAlmCB;
    QCheckBox *beamAlmCB;
    QCheckBox *invModeCB;
    QCheckBox *invDataCB;
    QCheckBox *invWeightsCB;
    QCheckBox *invNoiseCB;
    QCheckBox *invFilterCB;
    QCheckBox *invBeamCB;
    QCheckBox *comboSpectrumCB;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *ensembleCB;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget;
    QHBoxLayout *buttonLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *buttonSpacer;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *title;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *dataSelectDialog)
    {
        if (dataSelectDialog->objectName().isEmpty())
            dataSelectDialog->setObjectName(QString::fromUtf8("dataSelectDialog"));
        dataSelectDialog->resize(1055, 310);
        dataSelectDialog->setMinimumSize(QSize(500, 210));
        selectionBox = new QGroupBox(dataSelectDialog);
        selectionBox->setObjectName(QString::fromUtf8("selectionBox"));
        selectionBox->setGeometry(QRect(0, 30, 1041, 221));
        selectionBox->setMinimumSize(QSize(770, 140));
        widget = new QWidget(selectionBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(32, 40, 979, 168));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        inputDataCB = new QCheckBox(widget);
        inputDataCB->setObjectName(QString::fromUtf8("inputDataCB"));

        gridLayout->addWidget(inputDataCB, 0, 0, 1, 1);

        inputWeightCB = new QCheckBox(widget);
        inputWeightCB->setObjectName(QString::fromUtf8("inputWeightCB"));

        gridLayout->addWidget(inputWeightCB, 0, 1, 1, 1);

        inputNoiseCB = new QCheckBox(widget);
        inputNoiseCB->setObjectName(QString::fromUtf8("inputNoiseCB"));

        gridLayout->addWidget(inputNoiseCB, 0, 2, 1, 1);

        inputFilterCB = new QCheckBox(widget);
        inputFilterCB->setObjectName(QString::fromUtf8("inputFilterCB"));

        gridLayout->addWidget(inputFilterCB, 0, 3, 1, 1);

        inputBeamCB = new QCheckBox(widget);
        inputBeamCB->setObjectName(QString::fromUtf8("inputBeamCB"));

        gridLayout->addWidget(inputBeamCB, 0, 4, 1, 1);

        binCB = new QCheckBox(widget);
        binCB->setObjectName(QString::fromUtf8("binCB"));

        gridLayout->addWidget(binCB, 0, 5, 1, 1);

        pixelDataCB = new QCheckBox(widget);
        pixelDataCB->setObjectName(QString::fromUtf8("pixelDataCB"));

        gridLayout->addWidget(pixelDataCB, 1, 0, 1, 1);

        pixelWeightsCB = new QCheckBox(widget);
        pixelWeightsCB->setObjectName(QString::fromUtf8("pixelWeightsCB"));

        gridLayout->addWidget(pixelWeightsCB, 1, 1, 1, 1);

        pixelNoiseCB = new QCheckBox(widget);
        pixelNoiseCB->setObjectName(QString::fromUtf8("pixelNoiseCB"));

        gridLayout->addWidget(pixelNoiseCB, 1, 2, 1, 1);

        pixelFilterCB = new QCheckBox(widget);
        pixelFilterCB->setObjectName(QString::fromUtf8("pixelFilterCB"));

        gridLayout->addWidget(pixelFilterCB, 1, 3, 1, 1);

        pixelBeamCB = new QCheckBox(widget);
        pixelBeamCB->setObjectName(QString::fromUtf8("pixelBeamCB"));

        gridLayout->addWidget(pixelBeamCB, 1, 4, 1, 1);

        invBinCB = new QCheckBox(widget);
        invBinCB->setObjectName(QString::fromUtf8("invBinCB"));

        gridLayout->addWidget(invBinCB, 1, 5, 1, 1);

        transDataCB = new QCheckBox(widget);
        transDataCB->setObjectName(QString::fromUtf8("transDataCB"));

        gridLayout->addWidget(transDataCB, 2, 0, 1, 1);

        transWeightCB = new QCheckBox(widget);
        transWeightCB->setObjectName(QString::fromUtf8("transWeightCB"));

        gridLayout->addWidget(transWeightCB, 2, 1, 1, 1);

        transNoiseCB = new QCheckBox(widget);
        transNoiseCB->setObjectName(QString::fromUtf8("transNoiseCB"));

        gridLayout->addWidget(transNoiseCB, 2, 2, 1, 1);

        transFilterCB = new QCheckBox(widget);
        transFilterCB->setObjectName(QString::fromUtf8("transFilterCB"));

        gridLayout->addWidget(transFilterCB, 2, 3, 1, 1);

        transBeamCB = new QCheckBox(widget);
        transBeamCB->setObjectName(QString::fromUtf8("transBeamCB"));

        gridLayout->addWidget(transBeamCB, 2, 4, 1, 1);

        modeCB = new QCheckBox(widget);
        modeCB->setObjectName(QString::fromUtf8("modeCB"));

        gridLayout->addWidget(modeCB, 2, 5, 1, 1);

        dataAlmCB = new QCheckBox(widget);
        dataAlmCB->setObjectName(QString::fromUtf8("dataAlmCB"));

        gridLayout->addWidget(dataAlmCB, 3, 0, 1, 1);

        weightAlmCB = new QCheckBox(widget);
        weightAlmCB->setObjectName(QString::fromUtf8("weightAlmCB"));

        gridLayout->addWidget(weightAlmCB, 3, 1, 1, 1);

        noiseAlmCB = new QCheckBox(widget);
        noiseAlmCB->setObjectName(QString::fromUtf8("noiseAlmCB"));

        gridLayout->addWidget(noiseAlmCB, 3, 2, 1, 1);

        filterAlmCB = new QCheckBox(widget);
        filterAlmCB->setObjectName(QString::fromUtf8("filterAlmCB"));

        gridLayout->addWidget(filterAlmCB, 3, 3, 1, 1);

        beamAlmCB = new QCheckBox(widget);
        beamAlmCB->setObjectName(QString::fromUtf8("beamAlmCB"));

        gridLayout->addWidget(beamAlmCB, 3, 4, 1, 1);

        invModeCB = new QCheckBox(widget);
        invModeCB->setObjectName(QString::fromUtf8("invModeCB"));

        gridLayout->addWidget(invModeCB, 3, 5, 1, 1);

        invDataCB = new QCheckBox(widget);
        invDataCB->setObjectName(QString::fromUtf8("invDataCB"));

        gridLayout->addWidget(invDataCB, 4, 0, 1, 1);

        invWeightsCB = new QCheckBox(widget);
        invWeightsCB->setObjectName(QString::fromUtf8("invWeightsCB"));

        gridLayout->addWidget(invWeightsCB, 4, 1, 1, 1);

        invNoiseCB = new QCheckBox(widget);
        invNoiseCB->setObjectName(QString::fromUtf8("invNoiseCB"));

        gridLayout->addWidget(invNoiseCB, 4, 2, 1, 1);

        invFilterCB = new QCheckBox(widget);
        invFilterCB->setObjectName(QString::fromUtf8("invFilterCB"));

        gridLayout->addWidget(invFilterCB, 4, 3, 1, 1);

        invBeamCB = new QCheckBox(widget);
        invBeamCB->setObjectName(QString::fromUtf8("invBeamCB"));

        gridLayout->addWidget(invBeamCB, 4, 4, 1, 1);

        comboSpectrumCB = new QCheckBox(widget);
        comboSpectrumCB->setObjectName(QString::fromUtf8("comboSpectrumCB"));

        gridLayout->addWidget(comboSpectrumCB, 4, 5, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        ensembleCB = new QCheckBox(widget);
        ensembleCB->setObjectName(QString::fromUtf8("ensembleCB"));

        horizontalLayout->addWidget(ensembleCB);

        horizontalSpacer = new QSpacerItem(448, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget = new QWidget(dataSelectDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(630, 260, 408, 36));
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

        widget1 = new QWidget(dataSelectDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(2, 0, 1041, 34));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(348, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        title = new QLineEdit(widget1);
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
        inputNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Input Noise", nullptr));
        inputFilterCB->setText(QCoreApplication::translate("dataSelectDialog", "Input Filter", nullptr));
        inputBeamCB->setText(QCoreApplication::translate("dataSelectDialog", "Input Beam", nullptr));
        binCB->setText(QCoreApplication::translate("dataSelectDialog", "Bin-Bin Coupling Matrix", nullptr));
        pixelDataCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Data", nullptr));
        pixelWeightsCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Mask", nullptr));
        pixelNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Noise", nullptr));
        pixelFilterCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Filter", nullptr));
        pixelBeamCB->setText(QCoreApplication::translate("dataSelectDialog", "Pixelized Beam", nullptr));
        invBinCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Bin-Bin Coupling Matrix", nullptr));
        transDataCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Data", nullptr));
        transWeightCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Mask", nullptr));
        transNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Noise", nullptr));
        transFilterCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Filter", nullptr));
        transBeamCB->setText(QCoreApplication::translate("dataSelectDialog", "Transformed Beam", nullptr));
        modeCB->setText(QCoreApplication::translate("dataSelectDialog", "Mode-Mode Coupling Matrix", nullptr));
        dataAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Data Alm Matrix", nullptr));
        weightAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Mask Alm Matrix", nullptr));
        noiseAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Noise Alm Matrix", nullptr));
        filterAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Filter Alm Matrix", nullptr));
        beamAlmCB->setText(QCoreApplication::translate("dataSelectDialog", "Beam Alm Matrix", nullptr));
        invModeCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Mode-Mode Coupling Matrix", nullptr));
        invDataCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Data", nullptr));
        invWeightsCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Mask", nullptr));
        invNoiseCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Noise", nullptr));
        invFilterCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Filter", nullptr));
        invBeamCB->setText(QCoreApplication::translate("dataSelectDialog", "Inverse Beam", nullptr));
        comboSpectrumCB->setText(QCoreApplication::translate("dataSelectDialog", "Combined Transformation", nullptr));
        ensembleCB->setText(QCoreApplication::translate("dataSelectDialog", "Angular Power Spectrum", nullptr));
        title->setText(QCoreApplication::translate("dataSelectDialog", "Please select the data type to load", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dataSelectDialog: public Ui_dataSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASELECTDLG_H
