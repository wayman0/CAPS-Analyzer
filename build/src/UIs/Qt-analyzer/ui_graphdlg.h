/********************************************************************************
** Form generated from reading UI file 'graphdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHDLG_H
#define UI_GRAPHDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_graphDialog
{
public:
    QLabel *title;
    QGroupBox *pageBox;
    QGridLayout *gridLayout_3;
    QGroupBox *sizeGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *smallSizeButton;
    QRadioButton *largeSizeButton;
    QRadioButton *mediumSizeButton;
    QRadioButton *customSizeButton;
    QHBoxLayout *customSizeLayout;
    QLabel *widthLabel;
    QLineEdit *widthValue;
    QLabel *heightLabel;
    QLineEdit *heightValue;
    QGroupBox *scaleGroupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *linearButton;
    QRadioButton *logButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *graphDialog)
    {
        if (graphDialog->objectName().isEmpty())
            graphDialog->setObjectName(QString::fromUtf8("graphDialog"));
        graphDialog->resize(410, 340);
        graphDialog->setMinimumSize(QSize(410, 195));
        title = new QLabel(graphDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(4, 4, 400, 40));
        title->setMinimumSize(QSize(400, 40));
        title->setAlignment(Qt::AlignCenter);
        title->setWordWrap(true);
        pageBox = new QGroupBox(graphDialog);
        pageBox->setObjectName(QString::fromUtf8("pageBox"));
        pageBox->setGeometry(QRect(0, 50, 400, 284));
        pageBox->setMinimumSize(QSize(400, 90));
        gridLayout_3 = new QGridLayout(pageBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        sizeGroupBox = new QGroupBox(pageBox);
        sizeGroupBox->setObjectName(QString::fromUtf8("sizeGroupBox"));
        gridLayout = new QGridLayout(sizeGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        smallSizeButton = new QRadioButton(sizeGroupBox);
        smallSizeButton->setObjectName(QString::fromUtf8("smallSizeButton"));
        smallSizeButton->setChecked(true);

        gridLayout->addWidget(smallSizeButton, 0, 0, 1, 1);

        largeSizeButton = new QRadioButton(sizeGroupBox);
        largeSizeButton->setObjectName(QString::fromUtf8("largeSizeButton"));

        gridLayout->addWidget(largeSizeButton, 0, 1, 1, 1);

        mediumSizeButton = new QRadioButton(sizeGroupBox);
        mediumSizeButton->setObjectName(QString::fromUtf8("mediumSizeButton"));

        gridLayout->addWidget(mediumSizeButton, 1, 0, 1, 1);

        customSizeButton = new QRadioButton(sizeGroupBox);
        customSizeButton->setObjectName(QString::fromUtf8("customSizeButton"));

        gridLayout->addWidget(customSizeButton, 1, 1, 1, 1);

        customSizeLayout = new QHBoxLayout();
        customSizeLayout->setObjectName(QString::fromUtf8("customSizeLayout"));
        widthLabel = new QLabel(sizeGroupBox);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));

        customSizeLayout->addWidget(widthLabel);

        widthValue = new QLineEdit(sizeGroupBox);
        widthValue->setObjectName(QString::fromUtf8("widthValue"));

        customSizeLayout->addWidget(widthValue);

        heightLabel = new QLabel(sizeGroupBox);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));

        customSizeLayout->addWidget(heightLabel);

        heightValue = new QLineEdit(sizeGroupBox);
        heightValue->setObjectName(QString::fromUtf8("heightValue"));

        customSizeLayout->addWidget(heightValue);


        gridLayout->addLayout(customSizeLayout, 2, 0, 1, 2);


        gridLayout_3->addWidget(sizeGroupBox, 0, 0, 1, 1);

        scaleGroupBox = new QGroupBox(pageBox);
        scaleGroupBox->setObjectName(QString::fromUtf8("scaleGroupBox"));
        gridLayout_2 = new QGridLayout(scaleGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        linearButton = new QRadioButton(scaleGroupBox);
        linearButton->setObjectName(QString::fromUtf8("linearButton"));
        linearButton->setChecked(true);

        gridLayout_2->addWidget(linearButton, 0, 0, 1, 1);

        logButton = new QRadioButton(scaleGroupBox);
        logButton->setObjectName(QString::fromUtf8("logButton"));

        gridLayout_2->addWidget(logButton, 0, 1, 1, 1);


        gridLayout_3->addWidget(scaleGroupBox, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(pageBox);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(240, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(graphDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), graphDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), graphDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(graphDialog);
    } // setupUi

    void retranslateUi(QDialog *graphDialog)
    {
        graphDialog->setWindowTitle(QCoreApplication::translate("graphDialog", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("graphDialog", "<html><head/><body><p>The grapher requires additional configuration. Please make the appropriate changes below.</p></body></html>", nullptr));
        pageBox->setTitle(QCoreApplication::translate("graphDialog", "Page Size", nullptr));
        sizeGroupBox->setTitle(QCoreApplication::translate("graphDialog", "Size", nullptr));
        smallSizeButton->setText(QCoreApplication::translate("graphDialog", "&800 x 600", nullptr));
        largeSizeButton->setText(QCoreApplication::translate("graphDialog", "1&280 x 960", nullptr));
        mediumSizeButton->setText(QCoreApplication::translate("graphDialog", "&1024 x 768", nullptr));
        customSizeButton->setText(QCoreApplication::translate("graphDialog", "&Custom", nullptr));
        widthLabel->setText(QCoreApplication::translate("graphDialog", "Width", nullptr));
        widthValue->setText(QCoreApplication::translate("graphDialog", "800", nullptr));
        heightLabel->setText(QCoreApplication::translate("graphDialog", "Height", nullptr));
        heightValue->setText(QCoreApplication::translate("graphDialog", "600", nullptr));
        scaleGroupBox->setTitle(QCoreApplication::translate("graphDialog", "Scale", nullptr));
        linearButton->setText(QCoreApplication::translate("graphDialog", "linear", nullptr));
        logButton->setText(QCoreApplication::translate("graphDialog", "log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graphDialog: public Ui_graphDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHDLG_H
