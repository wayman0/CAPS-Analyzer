/********************************************************************************
** Form generated from reading UI file 'transformerdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFORMERDLG_H
#define UI_TRANSFORMERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_transformerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QGroupBox *transformerBox;
    QRadioButton *rshtButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *transformerDialog)
    {
        if (transformerDialog->objectName().isEmpty())
            transformerDialog->setObjectName(QString::fromUtf8("transformerDialog"));
        transformerDialog->resize(400, 218);
        verticalLayout = new QVBoxLayout(transformerDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        title = new QLabel(transformerDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title);

        transformerBox = new QGroupBox(transformerDialog);
        transformerBox->setObjectName(QString::fromUtf8("transformerBox"));
        rshtButton = new QRadioButton(transformerBox);
        rshtButton->setObjectName(QString::fromUtf8("rshtButton"));
        rshtButton->setGeometry(QRect(10, 20, 271, 21));
        rshtButton->setChecked(true);

        verticalLayout->addWidget(transformerBox);

        buttonBox = new QDialogButtonBox(transformerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(transformerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), transformerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), transformerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(transformerDialog);
    } // setupUi

    void retranslateUi(QDialog *transformerDialog)
    {
        transformerDialog->setWindowTitle(QCoreApplication::translate("transformerDialog", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("transformerDialog", "Select the transformation scheme to be used", nullptr));
        transformerBox->setTitle(QString());
        rshtButton->setText(QCoreApplication::translate("transformerDialog", "RSHT (Rapid Spherical Harmonic Transformer)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transformerDialog: public Ui_transformerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFORMERDLG_H
