/********************************************************************************
** Form generated from reading UI file 'pixelizerdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIXELIZERDLG_H
#define UI_PIXELIZERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pixelizerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QGroupBox *pixelizerBox;
    QRadioButton *healpixButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pixelizerDialog)
    {
        if (pixelizerDialog->objectName().isEmpty())
            pixelizerDialog->setObjectName(QString::fromUtf8("pixelizerDialog"));
        pixelizerDialog->resize(400, 218);
        verticalLayout = new QVBoxLayout(pixelizerDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        title = new QLabel(pixelizerDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title);

        pixelizerBox = new QGroupBox(pixelizerDialog);
        pixelizerBox->setObjectName(QString::fromUtf8("pixelizerBox"));
        healpixButton = new QRadioButton(pixelizerBox);
        healpixButton->setObjectName(QString::fromUtf8("healpixButton"));
        healpixButton->setGeometry(QRect(10, 20, 251, 21));
        healpixButton->setChecked(true);

        verticalLayout->addWidget(pixelizerBox);

        buttonBox = new QDialogButtonBox(pixelizerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(pixelizerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pixelizerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pixelizerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pixelizerDialog);
    } // setupUi

    void retranslateUi(QDialog *pixelizerDialog)
    {
        pixelizerDialog->setWindowTitle(QCoreApplication::translate("pixelizerDialog", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("pixelizerDialog", "Select the pixelization scheme to be used", nullptr));
        pixelizerBox->setTitle(QString());
        healpixButton->setText(QCoreApplication::translate("pixelizerDialog", "HealPIX (Equal Area Pixelization)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pixelizerDialog: public Ui_pixelizerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIXELIZERDLG_H
