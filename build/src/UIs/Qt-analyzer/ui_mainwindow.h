/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qledlabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *controlAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *informationAction;
    QAction *printAction;
    QAction *clearAction;
    QAction *exitAction;
    QAction *pixelizeAction;
    QAction *transformAction;
    QAction *analyzeAction;
    QAction *inverseAction;
    QAction *selectMapsAction;
    QAction *selectGraphsAction;
    QAction *zoomInAction;
    QAction *zoomOutAction;
    QAction *zoomNormalAction;
    QAction *analyzerHandbookAction;
    QAction *aboutAnalyzerAction;
    QAction *configureMapper;
    QAction *configurePixelizer;
    QAction *configureTransformer;
    QAction *configureGrapher;
    QAction *actionChange_Coordinate_System;
    QAction *selectAssociation;
    QAction *addAssociationAction;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *mapTab;
    QVBoxLayout *verticalLayout_3;
    QGraphicsView *mapView;
    QWidget *powerTab;
    QVBoxLayout *verticalLayout_4;
    QGraphicsView *powerView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *statusLabel;
    QGridLayout *gridLayout;
    QLabel *inputLabel;
    QLabel *pixelLabel;
    QLabel *transformLabel;
    QLabel *almLabel;
    QLabel *inverseLabel;
    QLabel *dataLabel;
    QLabel *maskLabel;
    QLabel *noiseLabel;
    QLabel *filterLabel;
    QLabel *beamLabel;
    QLedLabel *inputDataLED;
    QLedLabel *pixelDataLED;
    QLedLabel *transDataLED;
    QLedLabel *almDataLED;
    QLedLabel *inverseDataLED;
    QLedLabel *inputMaskLED;
    QLedLabel *pixelMaskLED;
    QLedLabel *transMaskLED;
    QLedLabel *almMaskLED;
    QLedLabel *inverseMaskLED;
    QLedLabel *inputNoiseLED;
    QLedLabel *pixelNoiseLED;
    QLedLabel *transNoiseLED;
    QLedLabel *almNoiseLED;
    QLedLabel *inverseNoiseLED;
    QLedLabel *inputFilterLED;
    QLedLabel *pixelFilterLED;
    QLedLabel *transFilterLED;
    QLedLabel *almFilterLED;
    QLedLabel *inverseFilterLED;
    QLedLabel *inputBeamLED;
    QLedLabel *pixelBeamLED;
    QLedLabel *transBeamLED;
    QLedLabel *almBeamLED;
    QLedLabel *inverseBeamLED;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *progressLabel;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer;
    QLabel *coordinateLabel;
    QLabel *displayCoordinates;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Actions;
    QMenu *menu_Display;
    QMenu *menu_Help;
    QMenu *menu_Configure;
    QStatusBar *statusbar;
    QToolBar *fileToolBar;
    QToolBar *actionToolBar;
    QToolBar *displayToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1248, 838);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/analyzer.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        controlAction = new QAction(MainWindow);
        controlAction->setObjectName(QString::fromUtf8("controlAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        controlAction->setIcon(icon1);
        openAction = new QAction(MainWindow);
        openAction->setObjectName(QString::fromUtf8("openAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        openAction->setIcon(icon2);
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName(QString::fromUtf8("saveAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAction->setIcon(icon3);
        informationAction = new QAction(MainWindow);
        informationAction->setObjectName(QString::fromUtf8("informationAction"));
        printAction = new QAction(MainWindow);
        printAction->setObjectName(QString::fromUtf8("printAction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        printAction->setIcon(icon4);
        clearAction = new QAction(MainWindow);
        clearAction->setObjectName(QString::fromUtf8("clearAction"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearAction->setIcon(icon5);
        exitAction = new QAction(MainWindow);
        exitAction->setObjectName(QString::fromUtf8("exitAction"));
        pixelizeAction = new QAction(MainWindow);
        pixelizeAction->setObjectName(QString::fromUtf8("pixelizeAction"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/healpix.png"), QSize(), QIcon::Normal, QIcon::Off);
        pixelizeAction->setIcon(icon6);
        transformAction = new QAction(MainWindow);
        transformAction->setObjectName(QString::fromUtf8("transformAction"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/rsht.png"), QSize(), QIcon::Normal, QIcon::Off);
        transformAction->setIcon(icon7);
        analyzeAction = new QAction(MainWindow);
        analyzeAction->setObjectName(QString::fromUtf8("analyzeAction"));
        analyzeAction->setIcon(icon);
        inverseAction = new QAction(MainWindow);
        inverseAction->setObjectName(QString::fromUtf8("inverseAction"));
        selectMapsAction = new QAction(MainWindow);
        selectMapsAction->setObjectName(QString::fromUtf8("selectMapsAction"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/mollweide.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectMapsAction->setIcon(icon8);
        selectGraphsAction = new QAction(MainWindow);
        selectGraphsAction->setObjectName(QString::fromUtf8("selectGraphsAction"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/spectrum.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectGraphsAction->setIcon(icon9);
        zoomInAction = new QAction(MainWindow);
        zoomInAction->setObjectName(QString::fromUtf8("zoomInAction"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/zoom+.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomInAction->setIcon(icon10);
        zoomOutAction = new QAction(MainWindow);
        zoomOutAction->setObjectName(QString::fromUtf8("zoomOutAction"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/zoom-.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomOutAction->setIcon(icon11);
        zoomNormalAction = new QAction(MainWindow);
        zoomNormalAction->setObjectName(QString::fromUtf8("zoomNormalAction"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/zoom1.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomNormalAction->setIcon(icon12);
        analyzerHandbookAction = new QAction(MainWindow);
        analyzerHandbookAction->setObjectName(QString::fromUtf8("analyzerHandbookAction"));
        aboutAnalyzerAction = new QAction(MainWindow);
        aboutAnalyzerAction->setObjectName(QString::fromUtf8("aboutAnalyzerAction"));
        configureMapper = new QAction(MainWindow);
        configureMapper->setObjectName(QString::fromUtf8("configureMapper"));
        configurePixelizer = new QAction(MainWindow);
        configurePixelizer->setObjectName(QString::fromUtf8("configurePixelizer"));
        configureTransformer = new QAction(MainWindow);
        configureTransformer->setObjectName(QString::fromUtf8("configureTransformer"));
        configureGrapher = new QAction(MainWindow);
        configureGrapher->setObjectName(QString::fromUtf8("configureGrapher"));
        actionChange_Coordinate_System = new QAction(MainWindow);
        actionChange_Coordinate_System->setObjectName(QString::fromUtf8("actionChange_Coordinate_System"));
        selectAssociation = new QAction(MainWindow);
        selectAssociation->setObjectName(QString::fromUtf8("selectAssociation"));
        addAssociationAction = new QAction(MainWindow);
        addAssociationAction->setObjectName(QString::fromUtf8("addAssociationAction"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(7, 7, 861, 681));
        mapTab = new QWidget();
        mapTab->setObjectName(QString::fromUtf8("mapTab"));
        verticalLayout_3 = new QVBoxLayout(mapTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mapView = new QGraphicsView(mapTab);
        mapView->setObjectName(QString::fromUtf8("mapView"));
        mapView->setMinimumSize(QSize(800, 600));

        verticalLayout_3->addWidget(mapView);

        tabWidget->addTab(mapTab, QString());
        powerTab = new QWidget();
        powerTab->setObjectName(QString::fromUtf8("powerTab"));
        verticalLayout_4 = new QVBoxLayout(powerTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        powerView = new QGraphicsView(powerTab);
        powerView->setObjectName(QString::fromUtf8("powerView"));

        verticalLayout_4->addWidget(powerView);

        tabWidget->addTab(powerTab, QString());
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(870, 40, 379, 179));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        statusLabel = new QLabel(layoutWidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        statusLabel->setFont(font);
        statusLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(statusLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        inputLabel = new QLabel(layoutWidget);
        inputLabel->setObjectName(QString::fromUtf8("inputLabel"));
        QFont font1;
        font1.setPointSize(9);
        inputLabel->setFont(font1);

        gridLayout->addWidget(inputLabel, 0, 1, 1, 1);

        pixelLabel = new QLabel(layoutWidget);
        pixelLabel->setObjectName(QString::fromUtf8("pixelLabel"));
        pixelLabel->setFont(font1);

        gridLayout->addWidget(pixelLabel, 0, 2, 1, 1);

        transformLabel = new QLabel(layoutWidget);
        transformLabel->setObjectName(QString::fromUtf8("transformLabel"));
        transformLabel->setFont(font1);

        gridLayout->addWidget(transformLabel, 0, 3, 1, 1);

        almLabel = new QLabel(layoutWidget);
        almLabel->setObjectName(QString::fromUtf8("almLabel"));
        almLabel->setFont(font1);

        gridLayout->addWidget(almLabel, 0, 4, 1, 1);

        inverseLabel = new QLabel(layoutWidget);
        inverseLabel->setObjectName(QString::fromUtf8("inverseLabel"));
        inverseLabel->setFont(font1);

        gridLayout->addWidget(inverseLabel, 0, 5, 1, 1);

        dataLabel = new QLabel(layoutWidget);
        dataLabel->setObjectName(QString::fromUtf8("dataLabel"));
        dataLabel->setFont(font1);

        gridLayout->addWidget(dataLabel, 1, 0, 1, 1);

        maskLabel = new QLabel(layoutWidget);
        maskLabel->setObjectName(QString::fromUtf8("maskLabel"));
        maskLabel->setFont(font1);

        gridLayout->addWidget(maskLabel, 2, 0, 1, 1);

        noiseLabel = new QLabel(layoutWidget);
        noiseLabel->setObjectName(QString::fromUtf8("noiseLabel"));
        noiseLabel->setFont(font1);

        gridLayout->addWidget(noiseLabel, 3, 0, 1, 1);

        filterLabel = new QLabel(layoutWidget);
        filterLabel->setObjectName(QString::fromUtf8("filterLabel"));
        filterLabel->setFont(font1);

        gridLayout->addWidget(filterLabel, 4, 0, 1, 1);

        beamLabel = new QLabel(layoutWidget);
        beamLabel->setObjectName(QString::fromUtf8("beamLabel"));
        beamLabel->setFont(font1);

        gridLayout->addWidget(beamLabel, 5, 0, 1, 1);

        inputDataLED = new QLedLabel(layoutWidget);
        inputDataLED->setObjectName(QString::fromUtf8("inputDataLED"));
        inputDataLED->setAlignment(Qt::AlignCenter);
        inputDataLED->setIndent(-1);

        gridLayout->addWidget(inputDataLED, 1, 1, 1, 1);

        pixelDataLED = new QLedLabel(layoutWidget);
        pixelDataLED->setObjectName(QString::fromUtf8("pixelDataLED"));
        pixelDataLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pixelDataLED, 1, 2, 1, 1);

        transDataLED = new QLedLabel(layoutWidget);
        transDataLED->setObjectName(QString::fromUtf8("transDataLED"));
        transDataLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(transDataLED, 1, 3, 1, 1);

        almDataLED = new QLedLabel(layoutWidget);
        almDataLED->setObjectName(QString::fromUtf8("almDataLED"));
        almDataLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(almDataLED, 1, 4, 1, 1);

        inverseDataLED = new QLedLabel(layoutWidget);
        inverseDataLED->setObjectName(QString::fromUtf8("inverseDataLED"));
        inverseDataLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(inverseDataLED, 1, 5, 1, 1);

        inputMaskLED = new QLedLabel(layoutWidget);
        inputMaskLED->setObjectName(QString::fromUtf8("inputMaskLED"));
        inputMaskLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(inputMaskLED, 2, 1, 1, 1);

        pixelMaskLED = new QLedLabel(layoutWidget);
        pixelMaskLED->setObjectName(QString::fromUtf8("pixelMaskLED"));
        pixelMaskLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pixelMaskLED, 2, 2, 1, 1);

        transMaskLED = new QLedLabel(layoutWidget);
        transMaskLED->setObjectName(QString::fromUtf8("transMaskLED"));
        transMaskLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(transMaskLED, 2, 3, 1, 1);

        almMaskLED = new QLedLabel(layoutWidget);
        almMaskLED->setObjectName(QString::fromUtf8("almMaskLED"));
        almMaskLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(almMaskLED, 2, 4, 1, 1);

        inverseMaskLED = new QLedLabel(layoutWidget);
        inverseMaskLED->setObjectName(QString::fromUtf8("inverseMaskLED"));
        inverseMaskLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(inverseMaskLED, 2, 5, 1, 1);

        inputNoiseLED = new QLedLabel(layoutWidget);
        inputNoiseLED->setObjectName(QString::fromUtf8("inputNoiseLED"));
        inputNoiseLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(inputNoiseLED, 3, 1, 1, 1);

        pixelNoiseLED = new QLedLabel(layoutWidget);
        pixelNoiseLED->setObjectName(QString::fromUtf8("pixelNoiseLED"));
        pixelNoiseLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pixelNoiseLED, 3, 2, 1, 1);

        transNoiseLED = new QLedLabel(layoutWidget);
        transNoiseLED->setObjectName(QString::fromUtf8("transNoiseLED"));
        transNoiseLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(transNoiseLED, 3, 3, 1, 1);

        almNoiseLED = new QLedLabel(layoutWidget);
        almNoiseLED->setObjectName(QString::fromUtf8("almNoiseLED"));
        almNoiseLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(almNoiseLED, 3, 4, 1, 1);

        inverseNoiseLED = new QLedLabel(layoutWidget);
        inverseNoiseLED->setObjectName(QString::fromUtf8("inverseNoiseLED"));
        inverseNoiseLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(inverseNoiseLED, 3, 5, 1, 1);

        inputFilterLED = new QLedLabel(layoutWidget);
        inputFilterLED->setObjectName(QString::fromUtf8("inputFilterLED"));
        inputFilterLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(inputFilterLED, 4, 1, 1, 1);

        pixelFilterLED = new QLedLabel(layoutWidget);
        pixelFilterLED->setObjectName(QString::fromUtf8("pixelFilterLED"));
        pixelFilterLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pixelFilterLED, 4, 2, 1, 1);

        transFilterLED = new QLedLabel(layoutWidget);
        transFilterLED->setObjectName(QString::fromUtf8("transFilterLED"));
        transFilterLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(transFilterLED, 4, 3, 1, 1);

        almFilterLED = new QLedLabel(layoutWidget);
        almFilterLED->setObjectName(QString::fromUtf8("almFilterLED"));
        almFilterLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(almFilterLED, 4, 4, 1, 1);

        inverseFilterLED = new QLedLabel(layoutWidget);
        inverseFilterLED->setObjectName(QString::fromUtf8("inverseFilterLED"));
        inverseFilterLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(inverseFilterLED, 4, 5, 1, 1);

        inputBeamLED = new QLedLabel(layoutWidget);
        inputBeamLED->setObjectName(QString::fromUtf8("inputBeamLED"));
        inputBeamLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(inputBeamLED, 5, 1, 1, 1);

        pixelBeamLED = new QLedLabel(layoutWidget);
        pixelBeamLED->setObjectName(QString::fromUtf8("pixelBeamLED"));
        pixelBeamLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pixelBeamLED, 5, 2, 1, 1);

        transBeamLED = new QLedLabel(layoutWidget);
        transBeamLED->setObjectName(QString::fromUtf8("transBeamLED"));
        transBeamLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(transBeamLED, 5, 3, 1, 1);

        almBeamLED = new QLedLabel(layoutWidget);
        almBeamLED->setObjectName(QString::fromUtf8("almBeamLED"));
        almBeamLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(almBeamLED, 5, 4, 1, 1);

        inverseBeamLED = new QLedLabel(layoutWidget);
        inverseBeamLED->setObjectName(QString::fromUtf8("inverseBeamLED"));
        inverseBeamLED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(inverseBeamLED, 5, 5, 1, 1);


        verticalLayout->addLayout(gridLayout);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 700, 861, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        progressLabel = new QLabel(layoutWidget1);
        progressLabel->setObjectName(QString::fromUtf8("progressLabel"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        progressLabel->setFont(font2);

        horizontalLayout->addWidget(progressLabel);

        progressBar = new QProgressBar(layoutWidget1);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        coordinateLabel = new QLabel(layoutWidget1);
        coordinateLabel->setObjectName(QString::fromUtf8("coordinateLabel"));
        coordinateLabel->setFont(font2);

        horizontalLayout->addWidget(coordinateLabel);

        displayCoordinates = new QLabel(layoutWidget1);
        displayCoordinates->setObjectName(QString::fromUtf8("displayCoordinates"));

        horizontalLayout->addWidget(displayCoordinates);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1248, 30));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Actions = new QMenu(menubar);
        menu_Actions->setObjectName(QString::fromUtf8("menu_Actions"));
        menu_Display = new QMenu(menubar);
        menu_Display->setObjectName(QString::fromUtf8("menu_Display"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menu_Configure = new QMenu(menubar);
        menu_Configure->setObjectName(QString::fromUtf8("menu_Configure"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        fileToolBar = new QToolBar(MainWindow);
        fileToolBar->setObjectName(QString::fromUtf8("fileToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, fileToolBar);
        actionToolBar = new QToolBar(MainWindow);
        actionToolBar->setObjectName(QString::fromUtf8("actionToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, actionToolBar);
        displayToolBar = new QToolBar(MainWindow);
        displayToolBar->setObjectName(QString::fromUtf8("displayToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, displayToolBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Actions->menuAction());
        menubar->addAction(menu_Display->menuAction());
        menubar->addAction(menu_Configure->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_File->addAction(controlAction);
        menu_File->addAction(openAction);
        menu_File->addAction(saveAction);
        menu_File->addAction(informationAction);
        menu_File->addAction(printAction);
        menu_File->addAction(clearAction);
        menu_File->addSeparator();
        menu_File->addAction(exitAction);
        menu_Actions->addAction(pixelizeAction);
        menu_Actions->addAction(transformAction);
        menu_Actions->addAction(analyzeAction);
        menu_Actions->addSeparator();
        menu_Actions->addAction(inverseAction);
        menu_Display->addAction(selectMapsAction);
        menu_Display->addAction(selectGraphsAction);
        menu_Display->addSeparator();
        menu_Display->addAction(zoomInAction);
        menu_Display->addAction(zoomOutAction);
        menu_Display->addAction(zoomNormalAction);
        menu_Display->addSeparator();
        menu_Display->addSeparator();
        menu_Display->addAction(actionChange_Coordinate_System);
        menu_Help->addAction(analyzerHandbookAction);
        menu_Help->addAction(aboutAnalyzerAction);
        menu_Configure->addAction(configureMapper);
        menu_Configure->addAction(configureGrapher);
        menu_Configure->addAction(configurePixelizer);
        menu_Configure->addAction(configureTransformer);
        fileToolBar->addAction(clearAction);
        fileToolBar->addAction(controlAction);
        fileToolBar->addAction(openAction);
        fileToolBar->addAction(saveAction);
        fileToolBar->addAction(addAssociationAction);
        fileToolBar->addAction(selectAssociation);
        actionToolBar->addAction(pixelizeAction);
        actionToolBar->addAction(transformAction);
        actionToolBar->addAction(analyzeAction);
        displayToolBar->addAction(selectMapsAction);
        displayToolBar->addAction(selectGraphsAction);
        displayToolBar->addAction(zoomInAction);
        displayToolBar->addAction(zoomOutAction);
        displayToolBar->addAction(zoomNormalAction);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        controlAction->setText(QCoreApplication::translate("MainWindow", "&Control", nullptr));
#if QT_CONFIG(tooltip)
        controlAction->setToolTip(QCoreApplication::translate("MainWindow", "Create Control Data Set", nullptr));
#endif // QT_CONFIG(tooltip)
        openAction->setText(QCoreApplication::translate("MainWindow", "&Open", nullptr));
        saveAction->setText(QCoreApplication::translate("MainWindow", "&Save", nullptr));
        informationAction->setText(QCoreApplication::translate("MainWindow", "&Information", nullptr));
        printAction->setText(QCoreApplication::translate("MainWindow", "&Print", nullptr));
        clearAction->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        exitAction->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
        pixelizeAction->setText(QCoreApplication::translate("MainWindow", "Pixe&lize", nullptr));
        transformAction->setText(QCoreApplication::translate("MainWindow", "&Transform", nullptr));
        analyzeAction->setText(QCoreApplication::translate("MainWindow", "Anal&yze", nullptr));
        inverseAction->setText(QCoreApplication::translate("MainWindow", "In&verse", nullptr));
        selectMapsAction->setText(QCoreApplication::translate("MainWindow", "Select &Maps", nullptr));
        selectGraphsAction->setText(QCoreApplication::translate("MainWindow", "Select S&pectrum", nullptr));
        zoomInAction->setText(QCoreApplication::translate("MainWindow", "Zoom In", nullptr));
#if QT_CONFIG(shortcut)
        zoomInAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        zoomOutAction->setText(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
#if QT_CONFIG(shortcut)
        zoomOutAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        zoomNormalAction->setText(QCoreApplication::translate("MainWindow", "Zoom&1:1", nullptr));
        analyzerHandbookAction->setText(QCoreApplication::translate("MainWindow", "Analyzer Handbook", nullptr));
        aboutAnalyzerAction->setText(QCoreApplication::translate("MainWindow", "About Analyzer", nullptr));
        configureMapper->setText(QCoreApplication::translate("MainWindow", "&Mapper", nullptr));
        configurePixelizer->setText(QCoreApplication::translate("MainWindow", "&Pixelizer", nullptr));
        configureTransformer->setText(QCoreApplication::translate("MainWindow", "&Transformer", nullptr));
        configureGrapher->setText(QCoreApplication::translate("MainWindow", "&Grapher", nullptr));
        actionChange_Coordinate_System->setText(QCoreApplication::translate("MainWindow", "Change Coordinate System", nullptr));
        selectAssociation->setText(QCoreApplication::translate("MainWindow", "Choose DataSet", nullptr));
#if QT_CONFIG(tooltip)
        selectAssociation->setToolTip(QCoreApplication::translate("MainWindow", "Choose DataSet", nullptr));
#endif // QT_CONFIG(tooltip)
        addAssociationAction->setText(QCoreApplication::translate("MainWindow", "Add Data Set", nullptr));
#if QT_CONFIG(tooltip)
        addAssociationAction->setToolTip(QCoreApplication::translate("MainWindow", "Add Data Set", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(mapTab), QCoreApplication::translate("MainWindow", "Map", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(powerTab), QCoreApplication::translate("MainWindow", "Power Spectrum", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainWindow", "Data Status", nullptr));
        inputLabel->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        pixelLabel->setText(QCoreApplication::translate("MainWindow", "Pixelized", nullptr));
        transformLabel->setText(QCoreApplication::translate("MainWindow", "Transformed", nullptr));
        almLabel->setText(QCoreApplication::translate("MainWindow", "Alm", nullptr));
        inverseLabel->setText(QCoreApplication::translate("MainWindow", "Inverse", nullptr));
        dataLabel->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        maskLabel->setText(QCoreApplication::translate("MainWindow", "Mask", nullptr));
        noiseLabel->setText(QCoreApplication::translate("MainWindow", "Noise", nullptr));
        filterLabel->setText(QCoreApplication::translate("MainWindow", "Filter", nullptr));
        beamLabel->setText(QCoreApplication::translate("MainWindow", "Beam", nullptr));
        inputDataLED->setText(QString());
        pixelDataLED->setText(QString());
        transDataLED->setText(QString());
        almDataLED->setText(QString());
        inverseDataLED->setText(QString());
        inputMaskLED->setText(QString());
        pixelMaskLED->setText(QString());
        transMaskLED->setText(QString());
        almMaskLED->setText(QString());
        inverseMaskLED->setText(QString());
        inputNoiseLED->setText(QString());
        pixelNoiseLED->setText(QString());
        transNoiseLED->setText(QString());
        almNoiseLED->setText(QString());
        inverseNoiseLED->setText(QString());
        inputFilterLED->setText(QString());
        pixelFilterLED->setText(QString());
        transFilterLED->setText(QString());
        almFilterLED->setText(QString());
        inverseFilterLED->setText(QString());
        inputBeamLED->setText(QString());
        pixelBeamLED->setText(QString());
        transBeamLED->setText(QString());
        almBeamLED->setText(QString());
        inverseBeamLED->setText(QString());
        progressLabel->setText(QCoreApplication::translate("MainWindow", "Progress", nullptr));
        coordinateLabel->setText(QCoreApplication::translate("MainWindow", "Displayed Coodrdinates:", nullptr));
        displayCoordinates->setText(QCoreApplication::translate("MainWindow", "RA/Dec", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menu_Actions->setTitle(QCoreApplication::translate("MainWindow", "&Actions", nullptr));
        menu_Display->setTitle(QCoreApplication::translate("MainWindow", "&Display", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menu_Configure->setTitle(QCoreApplication::translate("MainWindow", "&Configure", nullptr));
        fileToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        actionToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        displayToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
