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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_spectrumDialog
{
public:
    QLabel *title;
    QLabel *maskLabel_2;
    QLabel *maskUnits_2;
    QSpinBox *ensembleIter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *binCheckBox;
    QCheckBox *inverseCheckBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *maskLabel;
    QSpinBox *maskSpinBox;
    QLabel *maskUnits;
    QCheckBox *weightCheckBox;
    QSpinBox *countSpinBox;
    QLabel *countLabel;

    void setupUi(QDialog *spectrumDialog)
    {
        if (spectrumDialog->objectName().isEmpty())
            spectrumDialog->setObjectName(QString::fromUtf8("spectrumDialog"));
        spectrumDialog->resize(523, 195);
        spectrumDialog->setMinimumSize(QSize(500, 160));
        title = new QLabel(spectrumDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(16, 6, 450, 36));
        title->setMinimumSize(QSize(450, 30));
        title->setAlignment(Qt::AlignCenter);
        title->setWordWrap(true);
        maskLabel_2 = new QLabel(spectrumDialog);
        maskLabel_2->setObjectName(QString::fromUtf8("maskLabel_2"));
        maskLabel_2->setGeometry(QRect(10, 130, 97, 16));
        maskUnits_2 = new QLabel(spectrumDialog);
        maskUnits_2->setObjectName(QString::fromUtf8("maskUnits_2"));
        maskUnits_2->setGeometry(QRect(142, 130, 121, 16));
        ensembleIter = new QSpinBox(spectrumDialog);
        ensembleIter->setObjectName(QString::fromUtf8("ensembleIter"));
        ensembleIter->setGeometry(QRect(72, 130, 63, 16));
        ensembleIter->setMinimum(1);
        layoutWidget = new QWidget(spectrumDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 160, 312, 36));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(240, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        binCheckBox = new QCheckBox(spectrumDialog);
        binCheckBox->setObjectName(QString::fromUtf8("binCheckBox"));
        binCheckBox->setGeometry(QRect(7, 49, 216, 18));
        binCheckBox->setChecked(true);
        inverseCheckBox = new QCheckBox(spectrumDialog);
        inverseCheckBox->setObjectName(QString::fromUtf8("inverseCheckBox"));
        inverseCheckBox->setGeometry(QRect(280, 50, 236, 18));
        inverseCheckBox->setChecked(true);
        layoutWidget1 = new QWidget(spectrumDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(280, 90, 206, 34));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        maskLabel = new QLabel(layoutWidget1);
        maskLabel->setObjectName(QString::fromUtf8("maskLabel"));

        horizontalLayout->addWidget(maskLabel);

        maskSpinBox = new QSpinBox(layoutWidget1);
        maskSpinBox->setObjectName(QString::fromUtf8("maskSpinBox"));

        horizontalLayout->addWidget(maskSpinBox);

        maskUnits = new QLabel(layoutWidget1);
        maskUnits->setObjectName(QString::fromUtf8("maskUnits"));

        horizontalLayout->addWidget(maskUnits);

        weightCheckBox = new QCheckBox(spectrumDialog);
        weightCheckBox->setObjectName(QString::fromUtf8("weightCheckBox"));
        weightCheckBox->setGeometry(QRect(140, 50, 121, 18));
        countSpinBox = new QSpinBox(spectrumDialog);
        countSpinBox->setObjectName(QString::fromUtf8("countSpinBox"));
        countSpinBox->setGeometry(QRect(170, 90, 51, 32));
        countSpinBox->setMinimum(1);
        countSpinBox->setValue(1);
        countLabel = new QLabel(spectrumDialog);
        countLabel->setObjectName(QString::fromUtf8("countLabel"));
        countLabel->setGeometry(QRect(7, 90, 157, 32));

        retranslateUi(spectrumDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), spectrumDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), spectrumDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(spectrumDialog);
    } // setupUi

    void retranslateUi(QDialog *spectrumDialog)
    {
        spectrumDialog->setWindowTitle(QCoreApplication::translate("spectrumDialog", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("spectrumDialog", "In order to display the power spectrum, please choose from the following options", nullptr));
        maskLabel_2->setText(QCoreApplication::translate("spectrumDialog", "Calculate ", nullptr));
        maskUnits_2->setText(QCoreApplication::translate("spectrumDialog", "Ensemble Averages", nullptr));
        binCheckBox->setText(QCoreApplication::translate("spectrumDialog", "Bin Spectrum?", nullptr));
        inverseCheckBox->setText(QCoreApplication::translate("spectrumDialog", "Compute Inverse Coupling Matrix?", nullptr));
        maskLabel->setText(QCoreApplication::translate("spectrumDialog", "Mask the lowest", nullptr));
        maskUnits->setText(QCoreApplication::translate("spectrumDialog", "l values", nullptr));
        weightCheckBox->setText(QCoreApplication::translate("spectrumDialog", "Weigh Indices?", nullptr));
        countLabel->setText(QCoreApplication::translate("spectrumDialog", "Number of indicies per bin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class spectrumDialog: public Ui_spectrumDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECTRUMDLG_H
