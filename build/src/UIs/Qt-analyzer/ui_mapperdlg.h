/********************************************************************************
** Form generated from reading UI file 'mapperdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPPERDLG_H
#define UI_MAPPERDLG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mapperDialog
{
public:
    QVBoxLayout *verticalLayout;
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
    QHBoxLayout *detailsLayout;
    QGroupBox *mapLayoutBox;
    QRadioButton *mollweideButton;
    QRadioButton *gnomicButton;
    QRadioButton *atoffButton;
    QGroupBox *scaleBox;
    QRadioButton *linearButton;
    QRadioButton *logButton;
    QRadioButton *sLogButton;
    QGroupBox *longBox;
    QRadioButton *astroButton;
    QRadioButton *terrestrialButton;
    QHBoxLayout *buttonLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *mapperDialog)
    {
        if (mapperDialog->objectName().isEmpty())
            mapperDialog->setObjectName(QString::fromUtf8("mapperDialog"));
        mapperDialog->resize(405, 362);
        verticalLayout = new QVBoxLayout(mapperDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        title = new QLabel(mapperDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMinimumSize(QSize(400, 40));
        title->setAlignment(Qt::AlignCenter);
        title->setWordWrap(true);

        verticalLayout->addWidget(title);

        pageBox = new QGroupBox(mapperDialog);
        pageBox->setObjectName(QString::fromUtf8("pageBox"));
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


        verticalLayout->addWidget(pageBox);

        detailsLayout = new QHBoxLayout();
        detailsLayout->setObjectName(QString::fromUtf8("detailsLayout"));
        mapLayoutBox = new QGroupBox(mapperDialog);
        mapLayoutBox->setObjectName(QString::fromUtf8("mapLayoutBox"));
        mapLayoutBox->setMinimumSize(QSize(100, 110));
        mollweideButton = new QRadioButton(mapLayoutBox);
        mollweideButton->setObjectName(QString::fromUtf8("mollweideButton"));
        mollweideButton->setGeometry(QRect(10, 20, 102, 21));
        mollweideButton->setChecked(true);
        gnomicButton = new QRadioButton(mapLayoutBox);
        gnomicButton->setObjectName(QString::fromUtf8("gnomicButton"));
        gnomicButton->setGeometry(QRect(10, 80, 81, 21));
        atoffButton = new QRadioButton(mapLayoutBox);
        atoffButton->setObjectName(QString::fromUtf8("atoffButton"));
        atoffButton->setGeometry(QRect(10, 50, 85, 21));

        detailsLayout->addWidget(mapLayoutBox);

        scaleBox = new QGroupBox(mapperDialog);
        scaleBox->setObjectName(QString::fromUtf8("scaleBox"));
        scaleBox->setMinimumSize(QSize(120, 110));
        linearButton = new QRadioButton(scaleBox);
        linearButton->setObjectName(QString::fromUtf8("linearButton"));
        linearButton->setGeometry(QRect(10, 20, 91, 21));
        linearButton->setChecked(true);
        logButton = new QRadioButton(scaleBox);
        logButton->setObjectName(QString::fromUtf8("logButton"));
        logButton->setGeometry(QRect(10, 50, 91, 21));
        sLogButton = new QRadioButton(scaleBox);
        sLogButton->setObjectName(QString::fromUtf8("sLogButton"));
        sLogButton->setGeometry(QRect(10, 80, 91, 21));

        detailsLayout->addWidget(scaleBox);

        longBox = new QGroupBox(mapperDialog);
        longBox->setObjectName(QString::fromUtf8("longBox"));
        longBox->setMinimumSize(QSize(100, 100));
        astroButton = new QRadioButton(longBox);
        astroButton->setObjectName(QString::fromUtf8("astroButton"));
        astroButton->setGeometry(QRect(10, 30, 111, 21));
        astroButton->setChecked(true);
        terrestrialButton = new QRadioButton(longBox);
        terrestrialButton->setObjectName(QString::fromUtf8("terrestrialButton"));
        terrestrialButton->setGeometry(QRect(10, 70, 102, 21));

        detailsLayout->addWidget(longBox);


        verticalLayout->addLayout(detailsLayout);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        buttonBox = new QDialogButtonBox(mapperDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setMinimumSize(QSize(240, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        buttonLayout->addWidget(buttonBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(mapperDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), mapperDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), mapperDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(mapperDialog);
    } // setupUi

    void retranslateUi(QDialog *mapperDialog)
    {
        mapperDialog->setWindowTitle(QCoreApplication::translate("mapperDialog", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("mapperDialog", "<html><head/><body><p>The mapper requires additional configuration. Please make the appropriate changes below.</p></body></html>", nullptr));
        pageBox->setTitle(QCoreApplication::translate("mapperDialog", "Page Size", nullptr));
        smallSizeButton->setText(QCoreApplication::translate("mapperDialog", "&800 x 600", nullptr));
        largeSizeButton->setText(QCoreApplication::translate("mapperDialog", "1&280 x 960", nullptr));
        mediumSizeButton->setText(QCoreApplication::translate("mapperDialog", "&1024 x 768", nullptr));
        customSizeButton->setText(QCoreApplication::translate("mapperDialog", "&Custom", nullptr));
        widthLabel->setText(QCoreApplication::translate("mapperDialog", "Width", nullptr));
        widthValue->setText(QCoreApplication::translate("mapperDialog", "800", nullptr));
        heightLabel->setText(QCoreApplication::translate("mapperDialog", "Height", nullptr));
        heightValue->setText(QCoreApplication::translate("mapperDialog", "600", nullptr));
        mapLayoutBox->setTitle(QCoreApplication::translate("mapperDialog", "Map Layout", nullptr));
        mollweideButton->setText(QCoreApplication::translate("mapperDialog", "&Mollweide", nullptr));
        gnomicButton->setText(QCoreApplication::translate("mapperDialog", "&Gnomic", nullptr));
        atoffButton->setText(QCoreApplication::translate("mapperDialog", "Atof&f", nullptr));
        scaleBox->setTitle(QCoreApplication::translate("mapperDialog", "Color Scale", nullptr));
        linearButton->setText(QCoreApplication::translate("mapperDialog", "Linear", nullptr));
        logButton->setText(QCoreApplication::translate("mapperDialog", "Log", nullptr));
        sLogButton->setText(QCoreApplication::translate("mapperDialog", "Super Log", nullptr));
        longBox->setTitle(QCoreApplication::translate("mapperDialog", "Longitude Convention", nullptr));
        astroButton->setText(QCoreApplication::translate("mapperDialog", "&Astronomical", nullptr));
        terrestrialButton->setText(QCoreApplication::translate("mapperDialog", "&Terrestrial", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mapperDialog: public Ui_mapperDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPPERDLG_H
