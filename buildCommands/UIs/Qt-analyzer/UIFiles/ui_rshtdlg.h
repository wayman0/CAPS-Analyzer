/********************************************************************************
** Form generated from reading UI file 'rshtdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RSHTDLG_H
#define UI_RSHTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rshtDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *title;
    QHBoxLayout *horizontalLayout;
    QGroupBox *spectrumBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *minLabel;
    QSpinBox *minBox;
    QLabel *maxLabel;
    QSpinBox *maxBox;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QFormLayout *formLayout;
    QLabel *iterationLabel;
    QSpinBox *iterationBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *buttonLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *buttonSpacer;

    void setupUi(QDialog *rshtDialog)
    {
        if (rshtDialog->objectName().isEmpty())
            rshtDialog->setObjectName(QString::fromUtf8("rshtDialog"));
        rshtDialog->resize(493, 227);
        verticalLayout_2 = new QVBoxLayout(rshtDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        title = new QLabel(rshtDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMinimumSize(QSize(470, 30));
        title->setAlignment(Qt::AlignCenter);
        title->setWordWrap(true);

        verticalLayout_2->addWidget(title);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spectrumBox = new QGroupBox(rshtDialog);
        spectrumBox->setObjectName(QString::fromUtf8("spectrumBox"));
        spectrumBox->setMinimumSize(QSize(190, 90));
        layoutWidget = new QWidget(spectrumBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 161, 76));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        minLabel = new QLabel(layoutWidget);
        minLabel->setObjectName(QString::fromUtf8("minLabel"));
        minLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(minLabel, 0, 0, 1, 1);

        minBox = new QSpinBox(layoutWidget);
        minBox->setObjectName(QString::fromUtf8("minBox"));
        minBox->setMaximum(12287);

        gridLayout->addWidget(minBox, 0, 1, 1, 1);

        maxLabel = new QLabel(layoutWidget);
        maxLabel->setObjectName(QString::fromUtf8("maxLabel"));
        maxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(maxLabel, 1, 0, 1, 1);

        maxBox = new QSpinBox(layoutWidget);
        maxBox->setObjectName(QString::fromUtf8("maxBox"));
        maxBox->setMinimum(1);
        maxBox->setMaximum(12287);

        gridLayout->addWidget(maxBox, 1, 1, 1, 1);


        horizontalLayout->addWidget(spectrumBox);

        horizontalSpacer = new QSpacerItem(91, 78, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        iterationLabel = new QLabel(rshtDialog);
        iterationLabel->setObjectName(QString::fromUtf8("iterationLabel"));
        iterationLabel->setMinimumSize(QSize(133, 22));

        formLayout->setWidget(0, QFormLayout::LabelRole, iterationLabel);

        iterationBox = new QSpinBox(rshtDialog);
        iterationBox->setObjectName(QString::fromUtf8("iterationBox"));
        iterationBox->setMinimumSize(QSize(56, 22));
        iterationBox->setMaximum(6);

        formLayout->setWidget(0, QFormLayout::FieldRole, iterationBox);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        buttonBox = new QDialogButtonBox(rshtDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(240, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        buttonLayout->addWidget(buttonBox);

        buttonSpacer = new QSpacerItem(348, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(buttonSpacer);


        verticalLayout_2->addLayout(buttonLayout);


        retranslateUi(rshtDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), rshtDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), rshtDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(rshtDialog);
    } // setupUi

    void retranslateUi(QDialog *rshtDialog)
    {
        rshtDialog->setWindowTitle(QCoreApplication::translate("rshtDialog", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("rshtDialog", "<html><head/><body><p>RSHT requires additional configuration. Please make the appropriate changes below</p></body></html>", nullptr));
        spectrumBox->setTitle(QCoreApplication::translate("rshtDialog", "Spectral Indicies", nullptr));
        minLabel->setText(QCoreApplication::translate("rshtDialog", "Minimum: ", nullptr));
        maxLabel->setText(QCoreApplication::translate("rshtDialog", "Maximum: ", nullptr));
        iterationLabel->setText(QCoreApplication::translate("rshtDialog", "Number of Iterations:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rshtDialog: public Ui_rshtDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RSHTDLG_H
