/********************************************************************************
** Form generated from reading UI file 'healpixdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEALPIXDLG_H
#define UI_HEALPIXDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_healpixDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *Title;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *sidesLabel;
    QLineEdit *sideEdit;
    QLabel *resLabel;
    QLineEdit *resEdit;
    QSpacerItem *verticalSpacer;
    QGroupBox *schemeBox;
    QRadioButton *nestedButton;
    QRadioButton *ringButton;
    QGridLayout *gridLayout;
    QCheckBox *avgNormalize;
    QCheckBox *varNormalize;
    QCheckBox *minMaxScale;
    QCheckBox *pixelAvg;
    QCheckBox *pixelDev;
    QCheckBox *pixelVar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *healpixDialog)
    {
        if (healpixDialog->objectName().isEmpty())
            healpixDialog->setObjectName(QString::fromUtf8("healpixDialog"));
        healpixDialog->resize(533, 263);
        layoutWidget = new QWidget(healpixDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 7, 516, 237));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Title = new QLabel(layoutWidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setAlignment(Qt::AlignCenter);
        Title->setWordWrap(true);

        verticalLayout_2->addWidget(Title);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        sidesLabel = new QLabel(layoutWidget);
        sidesLabel->setObjectName(QString::fromUtf8("sidesLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, sidesLabel);

        sideEdit = new QLineEdit(layoutWidget);
        sideEdit->setObjectName(QString::fromUtf8("sideEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, sideEdit);

        resLabel = new QLabel(layoutWidget);
        resLabel->setObjectName(QString::fromUtf8("resLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, resLabel);

        resEdit = new QLineEdit(layoutWidget);
        resEdit->setObjectName(QString::fromUtf8("resEdit"));
        resEdit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, resEdit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        schemeBox = new QGroupBox(layoutWidget);
        schemeBox->setObjectName(QString::fromUtf8("schemeBox"));
        nestedButton = new QRadioButton(schemeBox);
        nestedButton->setObjectName(QString::fromUtf8("nestedButton"));
        nestedButton->setGeometry(QRect(10, 30, 111, 24));
        nestedButton->setChecked(true);
        ringButton = new QRadioButton(schemeBox);
        ringButton->setObjectName(QString::fromUtf8("ringButton"));
        ringButton->setGeometry(QRect(10, 60, 111, 24));

        horizontalLayout->addWidget(schemeBox);


        verticalLayout_2->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        avgNormalize = new QCheckBox(layoutWidget);
        avgNormalize->setObjectName(QString::fromUtf8("avgNormalize"));

        gridLayout->addWidget(avgNormalize, 0, 0, 1, 1);

        varNormalize = new QCheckBox(layoutWidget);
        varNormalize->setObjectName(QString::fromUtf8("varNormalize"));

        gridLayout->addWidget(varNormalize, 0, 1, 1, 1);

        minMaxScale = new QCheckBox(layoutWidget);
        minMaxScale->setObjectName(QString::fromUtf8("minMaxScale"));

        gridLayout->addWidget(minMaxScale, 0, 2, 1, 1);

        pixelAvg = new QCheckBox(layoutWidget);
        pixelAvg->setObjectName(QString::fromUtf8("pixelAvg"));

        gridLayout->addWidget(pixelAvg, 1, 0, 1, 1);

        pixelDev = new QCheckBox(layoutWidget);
        pixelDev->setObjectName(QString::fromUtf8("pixelDev"));

        gridLayout->addWidget(pixelDev, 1, 1, 1, 1);

        pixelVar = new QCheckBox(layoutWidget);
        pixelVar->setObjectName(QString::fromUtf8("pixelVar"));

        gridLayout->addWidget(pixelVar, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(healpixDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), healpixDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), healpixDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(healpixDialog);
    } // setupUi

    void retranslateUi(QDialog *healpixDialog)
    {
        healpixDialog->setWindowTitle(QCoreApplication::translate("healpixDialog", "Dialog", nullptr));
        Title->setText(QCoreApplication::translate("healpixDialog", "HealPIX requires additional configuration. Please make the appropriate changes below", nullptr));
        sidesLabel->setText(QCoreApplication::translate("healpixDialog", "Number of Sides (power of 2):", nullptr));
        resLabel->setText(QCoreApplication::translate("healpixDialog", "Angular Resolution (degrees):", nullptr));
        schemeBox->setTitle(QCoreApplication::translate("healpixDialog", "Numbering Scheme", nullptr));
        nestedButton->setText(QCoreApplication::translate("healpixDialog", "Nested", nullptr));
        ringButton->setText(QCoreApplication::translate("healpixDialog", "Ringed", nullptr));
        avgNormalize->setText(QCoreApplication::translate("healpixDialog", "Normalize over Mean", nullptr));
        varNormalize->setText(QCoreApplication::translate("healpixDialog", "Normalize over Variance", nullptr));
        minMaxScale->setText(QCoreApplication::translate("healpixDialog", "Min Max Scaling", nullptr));
        pixelAvg->setText(QCoreApplication::translate("healpixDialog", "Use Pixel Mean", nullptr));
        pixelDev->setText(QCoreApplication::translate("healpixDialog", "Use Pixel Deviation", nullptr));
        pixelVar->setText(QCoreApplication::translate("healpixDialog", "Use Pixel Variance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class healpixDialog: public Ui_healpixDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEALPIXDLG_H
