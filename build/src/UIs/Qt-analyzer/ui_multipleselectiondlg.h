/********************************************************************************
** Form generated from reading UI file 'multipleselectiondlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPLESELECTIONDLG_H
#define UI_MULTIPLESELECTIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_multipleSelectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *sliceBox;
    QRadioButton *singleButton;
    QRadioButton *multiButton;
    QHBoxLayout *selectionLayout;
    QVBoxLayout *minLayout;
    QLabel *minLabel;
    QListWidget *minList;
    QVBoxLayout *maxLayout;
    QLabel *maxLabel;
    QListWidget *maxList;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *multipleSelectionDialog)
    {
        if (multipleSelectionDialog->objectName().isEmpty())
            multipleSelectionDialog->setObjectName(QString::fromUtf8("multipleSelectionDialog"));
        multipleSelectionDialog->resize(534, 477);
        verticalLayout = new QVBoxLayout(multipleSelectionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        sliceBox = new QGroupBox(multipleSelectionDialog);
        sliceBox->setObjectName(QString::fromUtf8("sliceBox"));
        sliceBox->setMinimumSize(QSize(260, 60));
        singleButton = new QRadioButton(sliceBox);
        singleButton->setObjectName(QString::fromUtf8("singleButton"));
        singleButton->setGeometry(QRect(10, 30, 102, 21));
        multiButton = new QRadioButton(sliceBox);
        multiButton->setObjectName(QString::fromUtf8("multiButton"));
        multiButton->setGeometry(QRect(120, 30, 131, 21));

        verticalLayout->addWidget(sliceBox);

        selectionLayout = new QHBoxLayout();
        selectionLayout->setObjectName(QString::fromUtf8("selectionLayout"));
        minLayout = new QVBoxLayout();
        minLayout->setObjectName(QString::fromUtf8("minLayout"));
        minLabel = new QLabel(multipleSelectionDialog);
        minLabel->setObjectName(QString::fromUtf8("minLabel"));
        minLabel->setMinimumSize(QSize(125, 15));

        minLayout->addWidget(minLabel);

        minList = new QListWidget(multipleSelectionDialog);
        minList->setObjectName(QString::fromUtf8("minList"));
        minList->setMinimumSize(QSize(125, 175));

        minLayout->addWidget(minList);


        selectionLayout->addLayout(minLayout);

        maxLayout = new QVBoxLayout();
        maxLayout->setObjectName(QString::fromUtf8("maxLayout"));
        maxLabel = new QLabel(multipleSelectionDialog);
        maxLabel->setObjectName(QString::fromUtf8("maxLabel"));
        maxLabel->setMinimumSize(QSize(125, 15));

        maxLayout->addWidget(maxLabel);

        maxList = new QListWidget(multipleSelectionDialog);
        maxList->setObjectName(QString::fromUtf8("maxList"));
        maxList->setMinimumSize(QSize(125, 175));

        maxLayout->addWidget(maxList);


        selectionLayout->addLayout(maxLayout);


        verticalLayout->addLayout(selectionLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(multipleSelectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(240, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        horizontalLayout->addWidget(buttonBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(multipleSelectionDialog);

        QMetaObject::connectSlotsByName(multipleSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *multipleSelectionDialog)
    {
        multipleSelectionDialog->setWindowTitle(QCoreApplication::translate("multipleSelectionDialog", "Dialog", nullptr));
        sliceBox->setTitle(QCoreApplication::translate("multipleSelectionDialog", "Select Slices", nullptr));
        singleButton->setText(QCoreApplication::translate("multipleSelectionDialog", "Single slice", nullptr));
        multiButton->setText(QCoreApplication::translate("multipleSelectionDialog", "Multiple Slices", nullptr));
        minLabel->setText(QCoreApplication::translate("multipleSelectionDialog", "Minimum Energy", nullptr));
        maxLabel->setText(QCoreApplication::translate("multipleSelectionDialog", "Maximum Energy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class multipleSelectionDialog: public Ui_multipleSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLESELECTIONDLG_H
