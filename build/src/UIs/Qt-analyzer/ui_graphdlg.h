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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_graphDialog
{
public:
    QLabel *title;
    QGroupBox *pageBox;
    QWidget *layoutWidget;
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
    QWidget *widget;
    QHBoxLayout *ButtonLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *graphDialog)
    {
        if (graphDialog->objectName().isEmpty())
            graphDialog->setObjectName(QString::fromUtf8("graphDialog"));
        graphDialog->resize(410, 195);
        graphDialog->setMinimumSize(QSize(410, 195));
        title = new QLabel(graphDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(4, 4, 400, 40));
        title->setMinimumSize(QSize(400, 40));
        title->setAlignment(Qt::AlignCenter);
        title->setWordWrap(true);
        pageBox = new QGroupBox(graphDialog);
        pageBox->setObjectName(QString::fromUtf8("pageBox"));
        pageBox->setGeometry(QRect(0, 50, 400, 90));
        pageBox->setMinimumSize(QSize(400, 90));
        layoutWidget = new QWidget(pageBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 30, 391, 51));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        smallSizeButton = new QRadioButton(layoutWidget);
        smallSizeButton->setObjectName(QString::fromUtf8("smallSizeButton"));
        smallSizeButton->setChecked(true);

        gridLayout->addWidget(smallSizeButton, 0, 0, 1, 1);

        largeSizeButton = new QRadioButton(layoutWidget);
        largeSizeButton->setObjectName(QString::fromUtf8("largeSizeButton"));

        gridLayout->addWidget(largeSizeButton, 0, 1, 1, 1);

        mediumSizeButton = new QRadioButton(layoutWidget);
        mediumSizeButton->setObjectName(QString::fromUtf8("mediumSizeButton"));

        gridLayout->addWidget(mediumSizeButton, 1, 0, 1, 1);

        customSizeButton = new QRadioButton(layoutWidget);
        customSizeButton->setObjectName(QString::fromUtf8("customSizeButton"));

        gridLayout->addWidget(customSizeButton, 1, 1, 1, 1);

        customSizeLayout = new QHBoxLayout();
        customSizeLayout->setObjectName(QString::fromUtf8("customSizeLayout"));
        widthLabel = new QLabel(layoutWidget);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));

        customSizeLayout->addWidget(widthLabel);

        widthValue = new QLineEdit(layoutWidget);
        widthValue->setObjectName(QString::fromUtf8("widthValue"));

        customSizeLayout->addWidget(widthValue);

        heightLabel = new QLabel(layoutWidget);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));

        customSizeLayout->addWidget(heightLabel);

        heightValue = new QLineEdit(layoutWidget);
        heightValue->setObjectName(QString::fromUtf8("heightValue"));

        customSizeLayout->addWidget(heightValue);


        gridLayout->addLayout(customSizeLayout, 1, 2, 1, 1);

        widget = new QWidget(graphDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(3, 142, 391, 32));
        ButtonLayout = new QHBoxLayout(widget);
        ButtonLayout->setObjectName(QString::fromUtf8("ButtonLayout"));
        ButtonLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(240, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        ButtonLayout->addWidget(buttonBox);

        horizontalSpacer_2 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ButtonLayout->addItem(horizontalSpacer_2);


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
        smallSizeButton->setText(QCoreApplication::translate("graphDialog", "&800 x 600", nullptr));
        largeSizeButton->setText(QCoreApplication::translate("graphDialog", "1&280 x 960", nullptr));
        mediumSizeButton->setText(QCoreApplication::translate("graphDialog", "&1024 x 768", nullptr));
        customSizeButton->setText(QCoreApplication::translate("graphDialog", "&Custom", nullptr));
        widthLabel->setText(QCoreApplication::translate("graphDialog", "Width", nullptr));
        widthValue->setText(QCoreApplication::translate("graphDialog", "800", nullptr));
        heightLabel->setText(QCoreApplication::translate("graphDialog", "Height", nullptr));
        heightValue->setText(QCoreApplication::translate("graphDialog", "600", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graphDialog: public Ui_graphDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHDLG_H
