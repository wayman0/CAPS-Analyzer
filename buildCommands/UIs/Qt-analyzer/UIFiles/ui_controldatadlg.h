/********************************************************************************
** Form generated from reading UI file 'controldatadlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLDATADLG_H
#define UI_CONTROLDATADLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_controlDataDialog
{
public:
    QLabel *title;
    QGroupBox *dataTypeGroup;
    QRadioButton *dataButton;
    QRadioButton *filterButton;
    QRadioButton *weightsButton;
    QRadioButton *noiseButton;
    QRadioButton *beamButton;
    QGroupBox *representationGroup;
    QWidget *layoutWidget;
    QVBoxLayout *representationVLayout;
    QHBoxLayout *resolutionLayout;
    QLabel *decResolutionLabel;
    QLineEdit *decResolutionValue;
    QLabel *RAResolutionLabel;
    QLineEdit *RAResolutionValue;
    QGroupBox *coordinateGroup;
    QWidget *layoutWidget1;
    QHBoxLayout *coordinateLayout;
    QRadioButton *RADecButton;
    QRadioButton *galLatLongButton;
    QRadioButton *earthLatLongButton;
    QFrame *dataSetFrame;
    QGroupBox *dataSetGroup;
    QWidget *layoutWidget2;
    QVBoxLayout *dataSetLayout;
    QRadioButton *uniformButton;
    QRadioButton *regionalButton;
    QRadioButton *deltaButton;
    QRadioButton *gaussianButton;
    QRadioButton *checkerButton;
    QRadioButton *harmonicButton;
    QGroupBox *supplementalGroup;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *sigLabel;
    QLineEdit *sigValue;
    QLabel *sigUnit;
    QStackedWidget *stackedWidget;
    QWidget *blankPage;
    QWidget *regionPage;
    QGroupBox *regionGroup;
    QWidget *layoutWidget_15;
    QGridLayout *regionLayout;
    QLabel *regionDecLabel;
    QLabel *regionRALabel;
    QLabel *regionTopLabel;
    QLabel *regionFromLabel;
    QLineEdit *regionFromValue;
    QLabel *regionBottomLabel;
    QLineEdit *regionBottomValue;
    QLabel *regionToLabel;
    QLineEdit *regionTopValue;
    QLineEdit *regionToValue;
    QWidget *deltaPage;
    QGroupBox *peakGroup;
    QWidget *layoutWidget_11;
    QGridLayout *peakLayout;
    QLabel *peakDecLabel;
    QLineEdit *decValue;
    QLabel *peakRALabel;
    QLineEdit *RAValue;
    QLabel *fwhmLabel;
    QLineEdit *fwhmValue;
    QLabel *fwhmUnit;
    QWidget *checkerboardPage;
    QGroupBox *checkerGroup;
    QWidget *layoutWidget_12;
    QHBoxLayout *checkerLayout;
    QLabel *decScaleLabel;
    QLineEdit *decScaleValue;
    QLabel *RAScaleLabel;
    QLineEdit *RAScaleValue;
    QWidget *SHPage;
    QGroupBox *SHGroup;
    QWidget *layoutWidget_13;
    QHBoxLayout *SHLayout;
    QLabel *lLabel;
    QSpinBox *lSpinner;
    QSpacerItem *SHSpacer;
    QLabel *mLabel;
    QSpinBox *mSpinner;
    QGroupBox *opGroup;
    QRadioButton *addButton;
    QRadioButton *subtractButton;
    QRadioButton *scaleButton;
    QRadioButton *replaceButton;
    QRadioButton *invertButton;
    QRadioButton *mirrorButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *controlDataDialog)
    {
        if (controlDataDialog->objectName().isEmpty())
            controlDataDialog->setObjectName(QString::fromUtf8("controlDataDialog"));
        controlDataDialog->resize(707, 930);
        controlDataDialog->setMinimumSize(QSize(560, 620));
        title = new QLabel(controlDataDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(6, 6, 661, 111));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy);
        title->setMinimumSize(QSize(550, 60));
        title->setWordWrap(true);
        dataTypeGroup = new QGroupBox(controlDataDialog);
        dataTypeGroup->setObjectName(QString::fromUtf8("dataTypeGroup"));
        dataTypeGroup->setGeometry(QRect(0, 130, 677, 140));
        sizePolicy.setHeightForWidth(dataTypeGroup->sizePolicy().hasHeightForWidth());
        dataTypeGroup->setSizePolicy(sizePolicy);
        dataTypeGroup->setMinimumSize(QSize(550, 140));
        dataButton = new QRadioButton(dataTypeGroup);
        dataButton->setObjectName(QString::fromUtf8("dataButton"));
        dataButton->setGeometry(QRect(90, 30, 121, 21));
        sizePolicy.setHeightForWidth(dataButton->sizePolicy().hasHeightForWidth());
        dataButton->setSizePolicy(sizePolicy);
        dataButton->setChecked(true);
        filterButton = new QRadioButton(dataTypeGroup);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));
        filterButton->setGeometry(QRect(270, 60, 211, 21));
        weightsButton = new QRadioButton(dataTypeGroup);
        weightsButton->setObjectName(QString::fromUtf8("weightsButton"));
        weightsButton->setGeometry(QRect(90, 60, 131, 21));
        sizePolicy.setHeightForWidth(weightsButton->sizePolicy().hasHeightForWidth());
        weightsButton->setSizePolicy(sizePolicy);
        weightsButton->setChecked(false);
        noiseButton = new QRadioButton(dataTypeGroup);
        noiseButton->setObjectName(QString::fromUtf8("noiseButton"));
        noiseButton->setGeometry(QRect(270, 30, 211, 21));
        beamButton = new QRadioButton(dataTypeGroup);
        beamButton->setObjectName(QString::fromUtf8("beamButton"));
        beamButton->setGeometry(QRect(270, 90, 211, 21));
        representationGroup = new QGroupBox(controlDataDialog);
        representationGroup->setObjectName(QString::fromUtf8("representationGroup"));
        representationGroup->setGeometry(QRect(3, 270, 677, 221));
        sizePolicy.setHeightForWidth(representationGroup->sizePolicy().hasHeightForWidth());
        representationGroup->setSizePolicy(sizePolicy);
        representationGroup->setMinimumSize(QSize(550, 90));
        layoutWidget = new QWidget(representationGroup);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 651, 171));
        representationVLayout = new QVBoxLayout(layoutWidget);
        representationVLayout->setObjectName(QString::fromUtf8("representationVLayout"));
        representationVLayout->setContentsMargins(0, 0, 0, 0);
        resolutionLayout = new QHBoxLayout();
        resolutionLayout->setObjectName(QString::fromUtf8("resolutionLayout"));
        decResolutionLabel = new QLabel(layoutWidget);
        decResolutionLabel->setObjectName(QString::fromUtf8("decResolutionLabel"));

        resolutionLayout->addWidget(decResolutionLabel);

        decResolutionValue = new QLineEdit(layoutWidget);
        decResolutionValue->setObjectName(QString::fromUtf8("decResolutionValue"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(decResolutionValue->sizePolicy().hasHeightForWidth());
        decResolutionValue->setSizePolicy(sizePolicy1);
        decResolutionValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        resolutionLayout->addWidget(decResolutionValue);

        RAResolutionLabel = new QLabel(layoutWidget);
        RAResolutionLabel->setObjectName(QString::fromUtf8("RAResolutionLabel"));

        resolutionLayout->addWidget(RAResolutionLabel);

        RAResolutionValue = new QLineEdit(layoutWidget);
        RAResolutionValue->setObjectName(QString::fromUtf8("RAResolutionValue"));
        sizePolicy1.setHeightForWidth(RAResolutionValue->sizePolicy().hasHeightForWidth());
        RAResolutionValue->setSizePolicy(sizePolicy1);
        RAResolutionValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        resolutionLayout->addWidget(RAResolutionValue);


        representationVLayout->addLayout(resolutionLayout);

        coordinateGroup = new QGroupBox(layoutWidget);
        coordinateGroup->setObjectName(QString::fromUtf8("coordinateGroup"));
        layoutWidget1 = new QWidget(coordinateGroup);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 40, 621, 26));
        coordinateLayout = new QHBoxLayout(layoutWidget1);
        coordinateLayout->setObjectName(QString::fromUtf8("coordinateLayout"));
        coordinateLayout->setContentsMargins(0, 0, 0, 0);
        RADecButton = new QRadioButton(layoutWidget1);
        RADecButton->setObjectName(QString::fromUtf8("RADecButton"));
        RADecButton->setChecked(true);

        coordinateLayout->addWidget(RADecButton);

        galLatLongButton = new QRadioButton(layoutWidget1);
        galLatLongButton->setObjectName(QString::fromUtf8("galLatLongButton"));

        coordinateLayout->addWidget(galLatLongButton);

        earthLatLongButton = new QRadioButton(layoutWidget1);
        earthLatLongButton->setObjectName(QString::fromUtf8("earthLatLongButton"));

        coordinateLayout->addWidget(earthLatLongButton);


        representationVLayout->addWidget(coordinateGroup);

        dataSetFrame = new QFrame(controlDataDialog);
        dataSetFrame->setObjectName(QString::fromUtf8("dataSetFrame"));
        dataSetFrame->setGeometry(QRect(3, 500, 677, 271));
        sizePolicy1.setHeightForWidth(dataSetFrame->sizePolicy().hasHeightForWidth());
        dataSetFrame->setSizePolicy(sizePolicy1);
        dataSetFrame->setMinimumSize(QSize(550, 220));
        dataSetFrame->setFrameShape(QFrame::StyledPanel);
        dataSetFrame->setFrameShadow(QFrame::Raised);
        dataSetGroup = new QGroupBox(dataSetFrame);
        dataSetGroup->setObjectName(QString::fromUtf8("dataSetGroup"));
        dataSetGroup->setGeometry(QRect(0, 0, 201, 261));
        layoutWidget2 = new QWidget(dataSetGroup);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 31, 161, 176));
        dataSetLayout = new QVBoxLayout(layoutWidget2);
        dataSetLayout->setObjectName(QString::fromUtf8("dataSetLayout"));
        dataSetLayout->setContentsMargins(0, 0, 0, 0);
        uniformButton = new QRadioButton(layoutWidget2);
        uniformButton->setObjectName(QString::fromUtf8("uniformButton"));
        sizePolicy.setHeightForWidth(uniformButton->sizePolicy().hasHeightForWidth());
        uniformButton->setSizePolicy(sizePolicy);

        dataSetLayout->addWidget(uniformButton);

        regionalButton = new QRadioButton(layoutWidget2);
        regionalButton->setObjectName(QString::fromUtf8("regionalButton"));

        dataSetLayout->addWidget(regionalButton);

        deltaButton = new QRadioButton(layoutWidget2);
        deltaButton->setObjectName(QString::fromUtf8("deltaButton"));
        sizePolicy.setHeightForWidth(deltaButton->sizePolicy().hasHeightForWidth());
        deltaButton->setSizePolicy(sizePolicy);

        dataSetLayout->addWidget(deltaButton);

        gaussianButton = new QRadioButton(layoutWidget2);
        gaussianButton->setObjectName(QString::fromUtf8("gaussianButton"));
        sizePolicy.setHeightForWidth(gaussianButton->sizePolicy().hasHeightForWidth());
        gaussianButton->setSizePolicy(sizePolicy);

        dataSetLayout->addWidget(gaussianButton);

        checkerButton = new QRadioButton(layoutWidget2);
        checkerButton->setObjectName(QString::fromUtf8("checkerButton"));
        sizePolicy.setHeightForWidth(checkerButton->sizePolicy().hasHeightForWidth());
        checkerButton->setSizePolicy(sizePolicy);

        dataSetLayout->addWidget(checkerButton);

        harmonicButton = new QRadioButton(layoutWidget2);
        harmonicButton->setObjectName(QString::fromUtf8("harmonicButton"));
        sizePolicy.setHeightForWidth(harmonicButton->sizePolicy().hasHeightForWidth());
        harmonicButton->setSizePolicy(sizePolicy);

        dataSetLayout->addWidget(harmonicButton);

        supplementalGroup = new QGroupBox(dataSetFrame);
        supplementalGroup->setObjectName(QString::fromUtf8("supplementalGroup"));
        supplementalGroup->setGeometry(QRect(200, 0, 471, 81));
        widget = new QWidget(supplementalGroup);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 31, 441, 36));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sigLabel = new QLabel(widget);
        sigLabel->setObjectName(QString::fromUtf8("sigLabel"));

        horizontalLayout->addWidget(sigLabel);

        sigValue = new QLineEdit(widget);
        sigValue->setObjectName(QString::fromUtf8("sigValue"));
        sigValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(sigValue);

        sigUnit = new QLabel(widget);
        sigUnit->setObjectName(QString::fromUtf8("sigUnit"));

        horizontalLayout->addWidget(sigUnit);

        stackedWidget = new QStackedWidget(dataSetFrame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(200, 90, 471, 171));
        blankPage = new QWidget();
        blankPage->setObjectName(QString::fromUtf8("blankPage"));
        stackedWidget->addWidget(blankPage);
        regionPage = new QWidget();
        regionPage->setObjectName(QString::fromUtf8("regionPage"));
        regionGroup = new QGroupBox(regionPage);
        regionGroup->setObjectName(QString::fromUtf8("regionGroup"));
        regionGroup->setGeometry(QRect(0, 20, 471, 151));
        layoutWidget_15 = new QWidget(regionGroup);
        layoutWidget_15->setObjectName(QString::fromUtf8("layoutWidget_15"));
        layoutWidget_15->setGeometry(QRect(10, 30, 451, 102));
        regionLayout = new QGridLayout(layoutWidget_15);
        regionLayout->setObjectName(QString::fromUtf8("regionLayout"));
        regionLayout->setContentsMargins(0, 0, 0, 0);
        regionDecLabel = new QLabel(layoutWidget_15);
        regionDecLabel->setObjectName(QString::fromUtf8("regionDecLabel"));
        regionDecLabel->setLineWidth(1);

        regionLayout->addWidget(regionDecLabel, 0, 0, 1, 3);

        regionRALabel = new QLabel(layoutWidget_15);
        regionRALabel->setObjectName(QString::fromUtf8("regionRALabel"));

        regionLayout->addWidget(regionRALabel, 0, 3, 1, 3);

        regionTopLabel = new QLabel(layoutWidget_15);
        regionTopLabel->setObjectName(QString::fromUtf8("regionTopLabel"));
        regionTopLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        regionLayout->addWidget(regionTopLabel, 1, 0, 1, 1);

        regionFromLabel = new QLabel(layoutWidget_15);
        regionFromLabel->setObjectName(QString::fromUtf8("regionFromLabel"));
        regionFromLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        regionLayout->addWidget(regionFromLabel, 1, 3, 1, 2);

        regionFromValue = new QLineEdit(layoutWidget_15);
        regionFromValue->setObjectName(QString::fromUtf8("regionFromValue"));
        regionFromValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        regionLayout->addWidget(regionFromValue, 1, 5, 1, 1);

        regionBottomLabel = new QLabel(layoutWidget_15);
        regionBottomLabel->setObjectName(QString::fromUtf8("regionBottomLabel"));
        regionBottomLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        regionLayout->addWidget(regionBottomLabel, 2, 0, 1, 2);

        regionBottomValue = new QLineEdit(layoutWidget_15);
        regionBottomValue->setObjectName(QString::fromUtf8("regionBottomValue"));
        regionBottomValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        regionLayout->addWidget(regionBottomValue, 2, 2, 1, 1);

        regionToLabel = new QLabel(layoutWidget_15);
        regionToLabel->setObjectName(QString::fromUtf8("regionToLabel"));
        regionToLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        regionLayout->addWidget(regionToLabel, 2, 3, 1, 1);

        regionTopValue = new QLineEdit(layoutWidget_15);
        regionTopValue->setObjectName(QString::fromUtf8("regionTopValue"));
        regionTopValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        regionLayout->addWidget(regionTopValue, 1, 2, 1, 1);

        regionToValue = new QLineEdit(layoutWidget_15);
        regionToValue->setObjectName(QString::fromUtf8("regionToValue"));
        regionToValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        regionLayout->addWidget(regionToValue, 2, 5, 1, 1);

        stackedWidget->addWidget(regionPage);
        deltaPage = new QWidget();
        deltaPage->setObjectName(QString::fromUtf8("deltaPage"));
        peakGroup = new QGroupBox(deltaPage);
        peakGroup->setObjectName(QString::fromUtf8("peakGroup"));
        peakGroup->setGeometry(QRect(0, 20, 471, 141));
        layoutWidget_11 = new QWidget(peakGroup);
        layoutWidget_11->setObjectName(QString::fromUtf8("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(10, 40, 451, 76));
        peakLayout = new QGridLayout(layoutWidget_11);
        peakLayout->setObjectName(QString::fromUtf8("peakLayout"));
        peakLayout->setContentsMargins(0, 0, 0, 0);
        peakDecLabel = new QLabel(layoutWidget_11);
        peakDecLabel->setObjectName(QString::fromUtf8("peakDecLabel"));

        peakLayout->addWidget(peakDecLabel, 0, 0, 1, 1);

        decValue = new QLineEdit(layoutWidget_11);
        decValue->setObjectName(QString::fromUtf8("decValue"));
        decValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        peakLayout->addWidget(decValue, 0, 1, 1, 2);

        peakRALabel = new QLabel(layoutWidget_11);
        peakRALabel->setObjectName(QString::fromUtf8("peakRALabel"));

        peakLayout->addWidget(peakRALabel, 0, 4, 1, 1);

        RAValue = new QLineEdit(layoutWidget_11);
        RAValue->setObjectName(QString::fromUtf8("RAValue"));
        RAValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        peakLayout->addWidget(RAValue, 0, 5, 1, 1);

        fwhmLabel = new QLabel(layoutWidget_11);
        fwhmLabel->setObjectName(QString::fromUtf8("fwhmLabel"));

        peakLayout->addWidget(fwhmLabel, 1, 0, 1, 2);

        fwhmValue = new QLineEdit(layoutWidget_11);
        fwhmValue->setObjectName(QString::fromUtf8("fwhmValue"));
        fwhmValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        peakLayout->addWidget(fwhmValue, 1, 2, 1, 1);

        fwhmUnit = new QLabel(layoutWidget_11);
        fwhmUnit->setObjectName(QString::fromUtf8("fwhmUnit"));

        peakLayout->addWidget(fwhmUnit, 1, 3, 1, 1);

        stackedWidget->addWidget(deltaPage);
        checkerboardPage = new QWidget();
        checkerboardPage->setObjectName(QString::fromUtf8("checkerboardPage"));
        checkerGroup = new QGroupBox(checkerboardPage);
        checkerGroup->setObjectName(QString::fromUtf8("checkerGroup"));
        checkerGroup->setGeometry(QRect(-10, 20, 481, 91));
        layoutWidget_12 = new QWidget(checkerGroup);
        layoutWidget_12->setObjectName(QString::fromUtf8("layoutWidget_12"));
        layoutWidget_12->setGeometry(QRect(10, 40, 386, 36));
        checkerLayout = new QHBoxLayout(layoutWidget_12);
        checkerLayout->setObjectName(QString::fromUtf8("checkerLayout"));
        checkerLayout->setContentsMargins(0, 0, 0, 0);
        decScaleLabel = new QLabel(layoutWidget_12);
        decScaleLabel->setObjectName(QString::fromUtf8("decScaleLabel"));

        checkerLayout->addWidget(decScaleLabel);

        decScaleValue = new QLineEdit(layoutWidget_12);
        decScaleValue->setObjectName(QString::fromUtf8("decScaleValue"));
        decScaleValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        checkerLayout->addWidget(decScaleValue);

        RAScaleLabel = new QLabel(layoutWidget_12);
        RAScaleLabel->setObjectName(QString::fromUtf8("RAScaleLabel"));

        checkerLayout->addWidget(RAScaleLabel);

        RAScaleValue = new QLineEdit(layoutWidget_12);
        RAScaleValue->setObjectName(QString::fromUtf8("RAScaleValue"));
        RAScaleValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        checkerLayout->addWidget(RAScaleValue);

        stackedWidget->addWidget(checkerboardPage);
        SHPage = new QWidget();
        SHPage->setObjectName(QString::fromUtf8("SHPage"));
        SHGroup = new QGroupBox(SHPage);
        SHGroup->setObjectName(QString::fromUtf8("SHGroup"));
        SHGroup->setGeometry(QRect(0, 20, 471, 81));
        layoutWidget_13 = new QWidget(SHGroup);
        layoutWidget_13->setObjectName(QString::fromUtf8("layoutWidget_13"));
        layoutWidget_13->setGeometry(QRect(14, 30, 451, 36));
        SHLayout = new QHBoxLayout(layoutWidget_13);
        SHLayout->setObjectName(QString::fromUtf8("SHLayout"));
        SHLayout->setContentsMargins(0, 0, 0, 0);
        lLabel = new QLabel(layoutWidget_13);
        lLabel->setObjectName(QString::fromUtf8("lLabel"));

        SHLayout->addWidget(lLabel);

        lSpinner = new QSpinBox(layoutWidget_13);
        lSpinner->setObjectName(QString::fromUtf8("lSpinner"));

        SHLayout->addWidget(lSpinner);

        SHSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        SHLayout->addItem(SHSpacer);

        mLabel = new QLabel(layoutWidget_13);
        mLabel->setObjectName(QString::fromUtf8("mLabel"));

        SHLayout->addWidget(mLabel);

        mSpinner = new QSpinBox(layoutWidget_13);
        mSpinner->setObjectName(QString::fromUtf8("mSpinner"));

        SHLayout->addWidget(mSpinner);

        stackedWidget->addWidget(SHPage);
        opGroup = new QGroupBox(controlDataDialog);
        opGroup->setObjectName(QString::fromUtf8("opGroup"));
        opGroup->setGeometry(QRect(10, 780, 677, 101));
        opGroup->setMinimumSize(QSize(550, 45));
        addButton = new QRadioButton(opGroup);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(50, 30, 85, 21));
        addButton->setChecked(true);
        subtractButton = new QRadioButton(opGroup);
        subtractButton->setObjectName(QString::fromUtf8("subtractButton"));
        subtractButton->setGeometry(QRect(280, 30, 85, 21));
        scaleButton = new QRadioButton(opGroup);
        scaleButton->setObjectName(QString::fromUtf8("scaleButton"));
        scaleButton->setGeometry(QRect(470, 30, 85, 21));
        replaceButton = new QRadioButton(opGroup);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setGeometry(QRect(50, 60, 111, 24));
        invertButton = new QRadioButton(opGroup);
        invertButton->setObjectName(QString::fromUtf8("invertButton"));
        invertButton->setGeometry(QRect(280, 60, 111, 24));
        mirrorButton = new QRadioButton(opGroup);
        mirrorButton->setObjectName(QString::fromUtf8("mirrorButton"));
        mirrorButton->setGeometry(QRect(470, 60, 111, 24));
        buttonBox = new QDialogButtonBox(controlDataDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 890, 671, 36));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        retranslateUi(controlDataDialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(controlDataDialog);
    } // setupUi

    void retranslateUi(QDialog *controlDataDialog)
    {
        controlDataDialog->setWindowTitle(QCoreApplication::translate("controlDataDialog", "Control Data Specifications", nullptr));
        title->setText(QCoreApplication::translate("controlDataDialog", "<html><head/><body><p align=\"center\">Control data sets are used to confirm operation of the analyzer by running it on data whose structure is already known. Chose among the following sets to create the control set. Complex data sets can be created by combining multiple sets together by using the Add button. Click Finish when the control data set is complete.</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        dataTypeGroup->setToolTip(QCoreApplication::translate("controlDataDialog", "<html><head/><body><p>Select whether you are creating a data set showing a signal or masking a region</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        dataTypeGroup->setTitle(QCoreApplication::translate("controlDataDialog", "Type of Data Set", nullptr));
        dataButton->setText(QCoreApplication::translate("controlDataDialog", "Input Signal", nullptr));
        filterButton->setText(QCoreApplication::translate("controlDataDialog", "Instrumental Filter Effects", nullptr));
        weightsButton->setText(QCoreApplication::translate("controlDataDialog", "Input Mask", nullptr));
        noiseButton->setText(QCoreApplication::translate("controlDataDialog", "Instrumental Noise Effects", nullptr));
        beamButton->setText(QCoreApplication::translate("controlDataDialog", "Instrumental Beam Effects", nullptr));
#if QT_CONFIG(tooltip)
        representationGroup->setToolTip(QCoreApplication::translate("controlDataDialog", "<html><head/><body><p>Enter the angular resolution in degrees for the control set. This establishes the underlying grid used to distribute the data points on the spherical surface.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        representationGroup->setTitle(QCoreApplication::translate("controlDataDialog", "Data Representation", nullptr));
        decResolutionLabel->setText(QCoreApplication::translate("controlDataDialog", "Dec/Latitude Resolution", nullptr));
        decResolutionValue->setText(QCoreApplication::translate("controlDataDialog", "0.0", nullptr));
        RAResolutionLabel->setText(QCoreApplication::translate("controlDataDialog", "RA/Longitude Resolution", nullptr));
        RAResolutionValue->setText(QCoreApplication::translate("controlDataDialog", "0.0", nullptr));
        coordinateGroup->setTitle(QCoreApplication::translate("controlDataDialog", "Coordinate System", nullptr));
        RADecButton->setText(QCoreApplication::translate("controlDataDialog", "RA/Dec", nullptr));
        galLatLongButton->setText(QCoreApplication::translate("controlDataDialog", "Galactic Latitude/Longitude", nullptr));
        earthLatLongButton->setText(QCoreApplication::translate("controlDataDialog", "Terrestrial Latitude/Longitude", nullptr));
#if QT_CONFIG(tooltip)
        dataSetGroup->setToolTip(QCoreApplication::translate("controlDataDialog", "<html><head/><body><p>Select the type of data set you want to add to the control data set</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        dataSetGroup->setTitle(QCoreApplication::translate("controlDataDialog", "Available Data Sets", nullptr));
        uniformButton->setText(QCoreApplication::translate("controlDataDialog", "&Uniform Sky", nullptr));
        regionalButton->setText(QCoreApplication::translate("controlDataDialog", "Uniform &Region", nullptr));
        deltaButton->setText(QCoreApplication::translate("controlDataDialog", "&Delta Function", nullptr));
        gaussianButton->setText(QCoreApplication::translate("controlDataDialog", "Gaussian", nullptr));
        checkerButton->setText(QCoreApplication::translate("controlDataDialog", "&Checkerboard", nullptr));
        harmonicButton->setText(QCoreApplication::translate("controlDataDialog", "Specific Harmonic", nullptr));
        supplementalGroup->setTitle(QCoreApplication::translate("controlDataDialog", "Supplemental Information", nullptr));
        sigLabel->setText(QCoreApplication::translate("controlDataDialog", "Signal Strength", nullptr));
        sigValue->setText(QCoreApplication::translate("controlDataDialog", "0.0", nullptr));
        sigUnit->setText(QCoreApplication::translate("controlDataDialog", "(arbitrary units)", nullptr));
        regionGroup->setTitle(QCoreApplication::translate("controlDataDialog", "Restrict data to the region bounded by", nullptr));
        regionDecLabel->setText(QCoreApplication::translate("controlDataDialog", "Dec/Latitude", nullptr));
        regionRALabel->setText(QCoreApplication::translate("controlDataDialog", "RA/Longitude", nullptr));
        regionTopLabel->setText(QCoreApplication::translate("controlDataDialog", "Top", nullptr));
        regionFromLabel->setText(QCoreApplication::translate("controlDataDialog", "From", nullptr));
        regionFromValue->setText(QCoreApplication::translate("controlDataDialog", "-180.0", nullptr));
        regionBottomLabel->setText(QCoreApplication::translate("controlDataDialog", "Bottom", nullptr));
        regionBottomValue->setText(QCoreApplication::translate("controlDataDialog", "-90.0", nullptr));
        regionToLabel->setText(QCoreApplication::translate("controlDataDialog", "To", nullptr));
        regionTopValue->setText(QCoreApplication::translate("controlDataDialog", "90.0", nullptr));
        regionToValue->setText(QCoreApplication::translate("controlDataDialog", "180.0", nullptr));
        peakGroup->setTitle(QCoreApplication::translate("controlDataDialog", "Peak Location (deg)", nullptr));
        peakDecLabel->setText(QCoreApplication::translate("controlDataDialog", "Dec/Latitude", nullptr));
        decValue->setText(QCoreApplication::translate("controlDataDialog", "0.0", nullptr));
        peakRALabel->setText(QCoreApplication::translate("controlDataDialog", "RA/Longitude", nullptr));
        RAValue->setText(QCoreApplication::translate("controlDataDialog", "0.0", nullptr));
        fwhmLabel->setText(QCoreApplication::translate("controlDataDialog", "Std Dev Width", nullptr));
        fwhmValue->setText(QCoreApplication::translate("controlDataDialog", "0.1", nullptr));
        fwhmUnit->setText(QCoreApplication::translate("controlDataDialog", "(deg)", nullptr));
        checkerGroup->setTitle(QCoreApplication::translate("controlDataDialog", "Chekcerboard Pattern (deg)", nullptr));
        decScaleLabel->setText(QCoreApplication::translate("controlDataDialog", "Dec/Latitude Scale", nullptr));
        decScaleValue->setText(QCoreApplication::translate("controlDataDialog", "0.1", nullptr));
        RAScaleLabel->setText(QCoreApplication::translate("controlDataDialog", "RA/Longitude Scale", nullptr));
        RAScaleValue->setText(QCoreApplication::translate("controlDataDialog", "0.1", nullptr));
        SHGroup->setTitle(QCoreApplication::translate("controlDataDialog", "Spherical Harmonic Values", nullptr));
        lLabel->setText(QCoreApplication::translate("controlDataDialog", "l Value", nullptr));
        mLabel->setText(QCoreApplication::translate("controlDataDialog", "m Value", nullptr));
        opGroup->setTitle(QCoreApplication::translate("controlDataDialog", "Operation", nullptr));
        addButton->setText(QCoreApplication::translate("controlDataDialog", "Add", nullptr));
        subtractButton->setText(QCoreApplication::translate("controlDataDialog", "Subtract", nullptr));
        scaleButton->setText(QCoreApplication::translate("controlDataDialog", "Scale", nullptr));
        replaceButton->setText(QCoreApplication::translate("controlDataDialog", "Replace", nullptr));
        invertButton->setText(QCoreApplication::translate("controlDataDialog", "Invert", nullptr));
        mirrorButton->setText(QCoreApplication::translate("controlDataDialog", "Mirror", nullptr));
    } // retranslateUi

};

namespace Ui {
    class controlDataDialog: public Ui_controlDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLDATADLG_H
