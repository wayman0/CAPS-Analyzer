/********************************************************************************
** Form generated from reading UI file 'associationselectdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSOCIATIONSELECTDLG_H
#define UI_ASSOCIATIONSELECTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_associationSelectDialog
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *assocSelectBox;
    QLabel *title;

    void setupUi(QDialog *associationSelectDialog)
    {
        if (associationSelectDialog->objectName().isEmpty())
            associationSelectDialog->setObjectName(QString::fromUtf8("associationSelectDialog"));
        associationSelectDialog->resize(221, 115);
        buttonBox = new QDialogButtonBox(associationSelectDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 70, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        assocSelectBox = new QComboBox(associationSelectDialog);
        assocSelectBox->setObjectName(QString::fromUtf8("assocSelectBox"));
        assocSelectBox->setGeometry(QRect(20, 30, 171, 32));
        title = new QLabel(associationSelectDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(20, 10, 181, 18));

        retranslateUi(associationSelectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), associationSelectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), associationSelectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(associationSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *associationSelectDialog)
    {
        associationSelectDialog->setWindowTitle(QCoreApplication::translate("associationSelectDialog", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("associationSelectDialog", "Please select the data to use", nullptr));
    } // retranslateUi

};

namespace Ui {
    class associationSelectDialog: public Ui_associationSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSOCIATIONSELECTDLG_H
