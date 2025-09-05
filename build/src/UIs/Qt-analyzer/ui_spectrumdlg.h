/********************************************************************************
** Form generated from reading UI file 'spectrumdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECTRUMDLG_H
#define UI_SPECTRUMDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_spectrumDialog
{
public:
    QFormLayout *formLayout;
    QLabel *title;
    QGridLayout *gridLayout;
    QCheckBox *binCheckBox;
    QCheckBox *inverseCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *countLabel;
    QSpinBox *countSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *maskLabel;
    QSpinBox *maskSpinBox;
    QLabel *maskUnits;
    QCheckBox *weightCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *spectrumDialog)
    {
        if (spectrumDialog->objectName().isEmpty())
            spectrumDialog->setObjectName(QString::fromUtf8("spectrumDialog"));
        spectrumDialog->resize(502, 160);
        spectrumDialog->setMinimumSize(QSize(500, 160));
        formLayout = new QFormLayout(spectrumDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        title = new QLabel(spectrumDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMinimumSize(QSize(450, 30));
        title->setAlignment(Qt::AlignCenter);
        title->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, title);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        binCheckBox = new QCheckBox(spectrumDialog);
        binCheckBox->setObjectName(QString::fromUtf8("binCheckBox"));
        binCheckBox->setChecked(true);

        gridLayout->addWidget(binCheckBox, 0, 0, 1, 1);

        inverseCheckBox = new QCheckBox(spectrumDialog);
        inverseCheckBox->setObjectName(QString::fromUtf8("inverseCheckBox"));
        inverseCheckBox->setChecked(true);

        gridLayout->addWidget(inverseCheckBox, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        countLabel = new QLabel(spectrumDialog);
        countLabel->setObjectName(QString::fromUtf8("countLabel"));

        horizontalLayout_2->addWidget(countLabel);

        countSpinBox = new QSpinBox(spectrumDialog);
        countSpinBox->setObjectName(QString::fromUtf8("countSpinBox"));
        countSpinBox->setMinimum(1);
        countSpinBox->setValue(1);

        horizontalLayout_2->addWidget(countSpinBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        maskLabel = new QLabel(spectrumDialog);
        maskLabel->setObjectName(QString::fromUtf8("maskLabel"));

        horizontalLayout->addWidget(maskLabel);

        maskSpinBox = new QSpinBox(spectrumDialog);
        maskSpinBox->setObjectName(QString::fromUtf8("maskSpinBox"));

        horizontalLayout->addWidget(maskSpinBox);

        maskUnits = new QLabel(spectrumDialog);
        maskUnits->setObjectName(QString::fromUtf8("maskUnits"));

        horizontalLayout->addWidget(maskUnits);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        weightCheckBox = new QCheckBox(spectrumDialog);
        weightCheckBox->setObjectName(QString::fromUtf8("weightCheckBox"));

        gridLayout->addWidget(weightCheckBox, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 1, 1, 1);


        formLayout->setLayout(1, QFormLayout::LabelRole, gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        buttonBox = new QDialogButtonBox(spectrumDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(240, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout_3);


        retranslateUi(spectrumDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), spectrumDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), spectrumDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(spectrumDialog);
    } // setupUi

    void retranslateUi(QDialog *spectrumDialog)
    {
        spectrumDialog->setWindowTitle(QCoreApplication::translate("spectrumDialog", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("spectrumDialog", "In order to display the power spectrum, please choose from the following options", nullptr));
        binCheckBox->setText(QCoreApplication::translate("spectrumDialog", "Bin Spectrum?", nullptr));
        inverseCheckBox->setText(QCoreApplication::translate("spectrumDialog", "Compute Inverse Coupling Matrix?", nullptr));
        countLabel->setText(QCoreApplication::translate("spectrumDialog", "Number of indicies per bin", nullptr));
        maskLabel->setText(QCoreApplication::translate("spectrumDialog", "Mask the lowest", nullptr));
        maskUnits->setText(QCoreApplication::translate("spectrumDialog", "l values", nullptr));
        weightCheckBox->setText(QCoreApplication::translate("spectrumDialog", "Weigh Indices?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class spectrumDialog: public Ui_spectrumDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECTRUMDLG_H
