/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri May 16 12:17:56 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QComboBox *cameraNo;
    QPushButton *openCamera;
    QPushButton *writeFile;
    QPushButton *openFile;
    QPushButton *closeFile;
    QPushButton *pauseCamera;
    QPushButton *closeCamera;
    QPushButton *startCamera;
    QPushButton *newFile;
    QTabWidget *tabWidget;
    QWidget *tab_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QSlider *HValue_slider;
    QLineEdit *HValue_text;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QSlider *SValue_slider;
    QLineEdit *SValue_text;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSlider *VValue_slider;
    QLineEdit *VValue_text;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSlider *HThreshValue_slider;
    QLineEdit *HThreshValue_text;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QSlider *SThreshValue_slider;
    QLineEdit *SThreshValue_text;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QSlider *VThreshValue_slider;
    QLineEdit *VThreshValue_text;
    QWidget *tab_6;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QSlider *mblurSlider;
    QLineEdit *mblurValLineEdit;
    QLabel *label;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QSlider *gblurSlider;
    QLineEdit *gblurValLineEdit;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_5;
    QLabel *label_12;
    QSlider *blurSlider;
    QLineEdit *blurValLineEdit;
    QWidget *tab;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_6;
    QCheckBox *dilateCheck;
    QCheckBox *checkBox;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_8;
    QRadioButton *morphrect;
    QRadioButton *morphellipse;
    QRadioButton *morphcross;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_9;
    QLabel *label_15;
    QSlider *kernelSizeSlider;
    QLineEdit *kernelSizeLineEdit;
    QCheckBox *contoursCheck;
    QLabel *label_16;
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_7;
    QCheckBox *boundrectCheck;
    QCheckBox *boundcircleCheck;
    QCheckBox *approxpolyCheck;
    QWidget *tab_2;
    QLabel *label_17;
    QWidget *gridLayoutWidget_11;
    QGridLayout *gridLayout_13;
    QLabel *label_21;
    QSlider *houghMinRadius;
    QLineEdit *houghMinRadiusLineEdit;
    QWidget *gridLayoutWidget_12;
    QGridLayout *gridLayout_14;
    QLabel *label_22;
    QSlider *houghMaxRadius;
    QLineEdit *houghMaxRadiusLineEdit;
    QCheckBox *houghCheck;
    QLabel *label_55;
    QCheckBox *houghLinesCheck;
    QWidget *tab_13;
    QLabel *label_56;
    QWidget *gridLayoutWidget_29;
    QGridLayout *gridLayout_31;
    QLabel *label_57;
    QRadioButton *areablobLess;
    QRadioButton *areablobMore;
    QCheckBox *blobCheck;
    QWidget *gridLayoutWidget_10;
    QGridLayout *gridLayout_12;
    QLabel *label_26;
    QGridLayout *gridLayout_10;
    QSlider *backgroundRSlider;
    QLineEdit *backgroundRSliderLE;
    QLabel *label_18;
    QLabel *label_27;
    QLineEdit *foregroundRSliderLE;
    QLabel *label_25;
    QSlider *foregroundRSlider;
    QWidget *gridLayoutWidget_31;
    QGridLayout *gridLayout_35;
    QLabel *label_61;
    QRadioButton *blobInclude;
    QRadioButton *blobExclude;
    QWidget *gridLayoutWidget_9;
    QGridLayout *gridLayout_11;
    QLabel *label_29;
    QLineEdit *areablobSliderLE;
    QSlider *areablobSlider;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *binaryImage;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(828, 750);
        MainWindow->setMinimumSize(QSize(828, 750));
        MainWindow->setMaximumSize(QSize(828, 750));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cameraNo = new QComboBox(centralwidget);
        cameraNo->setObjectName(QString::fromUtf8("cameraNo"));

        gridLayout->addWidget(cameraNo, 0, 0, 1, 1);

        openCamera = new QPushButton(centralwidget);
        openCamera->setObjectName(QString::fromUtf8("openCamera"));

        gridLayout->addWidget(openCamera, 0, 1, 1, 1);

        writeFile = new QPushButton(centralwidget);
        writeFile->setObjectName(QString::fromUtf8("writeFile"));

        gridLayout->addWidget(writeFile, 3, 1, 1, 1);

        openFile = new QPushButton(centralwidget);
        openFile->setObjectName(QString::fromUtf8("openFile"));

        gridLayout->addWidget(openFile, 3, 0, 1, 1);

        closeFile = new QPushButton(centralwidget);
        closeFile->setObjectName(QString::fromUtf8("closeFile"));

        gridLayout->addWidget(closeFile, 3, 2, 1, 1);

        pauseCamera = new QPushButton(centralwidget);
        pauseCamera->setObjectName(QString::fromUtf8("pauseCamera"));

        gridLayout->addWidget(pauseCamera, 0, 2, 1, 1);

        closeCamera = new QPushButton(centralwidget);
        closeCamera->setObjectName(QString::fromUtf8("closeCamera"));

        gridLayout->addWidget(closeCamera, 1, 2, 1, 1);

        startCamera = new QPushButton(centralwidget);
        startCamera->setObjectName(QString::fromUtf8("startCamera"));

        gridLayout->addWidget(startCamera, 1, 1, 1, 1);

        newFile = new QPushButton(centralwidget);
        newFile->setObjectName(QString::fromUtf8("newFile"));

        gridLayout->addWidget(newFile, 1, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        layoutWidget = new QWidget(tab_5);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 476, 521));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(70, 20));
        label_11->setMaximumSize(QSize(70, 20));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_11);

        HValue_slider = new QSlider(layoutWidget);
        HValue_slider->setObjectName(QString::fromUtf8("HValue_slider"));
        HValue_slider->setMinimumSize(QSize(320, 30));
        HValue_slider->setMaximumSize(QSize(320, 30));
        HValue_slider->setMaximum(255);
        HValue_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(HValue_slider);

        HValue_text = new QLineEdit(layoutWidget);
        HValue_text->setObjectName(QString::fromUtf8("HValue_text"));
        HValue_text->setMinimumSize(QSize(70, 30));
        HValue_text->setMaximumSize(QSize(70, 30));
        HValue_text->setAlignment(Qt::AlignCenter);
        HValue_text->setReadOnly(true);

        horizontalLayout_7->addWidget(HValue_text);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(70, 20));
        label_5->setMaximumSize(QSize(70, 20));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_5);

        SValue_slider = new QSlider(layoutWidget);
        SValue_slider->setObjectName(QString::fromUtf8("SValue_slider"));
        SValue_slider->setMinimumSize(QSize(320, 30));
        SValue_slider->setMaximumSize(QSize(320, 30));
        SValue_slider->setMaximum(255);
        SValue_slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(SValue_slider);

        SValue_text = new QLineEdit(layoutWidget);
        SValue_text->setObjectName(QString::fromUtf8("SValue_text"));
        SValue_text->setMinimumSize(QSize(70, 30));
        SValue_text->setMaximumSize(QSize(70, 30));
        SValue_text->setAlignment(Qt::AlignCenter);
        SValue_text->setReadOnly(true);

        horizontalLayout->addWidget(SValue_text);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(70, 20));
        label_6->setMaximumSize(QSize(70, 20));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_6);

        VValue_slider = new QSlider(layoutWidget);
        VValue_slider->setObjectName(QString::fromUtf8("VValue_slider"));
        VValue_slider->setMinimumSize(QSize(320, 30));
        VValue_slider->setMaximumSize(QSize(320, 30));
        VValue_slider->setMaximum(255);
        VValue_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(VValue_slider);

        VValue_text = new QLineEdit(layoutWidget);
        VValue_text->setObjectName(QString::fromUtf8("VValue_text"));
        VValue_text->setMinimumSize(QSize(70, 30));
        VValue_text->setMaximumSize(QSize(70, 30));
        VValue_text->setAlignment(Qt::AlignCenter);
        VValue_text->setReadOnly(true);

        horizontalLayout_2->addWidget(VValue_text);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(70, 20));
        label_7->setMaximumSize(QSize(70, 20));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_7);

        HThreshValue_slider = new QSlider(layoutWidget);
        HThreshValue_slider->setObjectName(QString::fromUtf8("HThreshValue_slider"));
        HThreshValue_slider->setMinimumSize(QSize(320, 30));
        HThreshValue_slider->setMaximumSize(QSize(320, 30));
        HThreshValue_slider->setMaximum(255);
        HThreshValue_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(HThreshValue_slider);

        HThreshValue_text = new QLineEdit(layoutWidget);
        HThreshValue_text->setObjectName(QString::fromUtf8("HThreshValue_text"));
        HThreshValue_text->setMinimumSize(QSize(70, 30));
        HThreshValue_text->setMaximumSize(QSize(70, 30));
        HThreshValue_text->setAlignment(Qt::AlignCenter);
        HThreshValue_text->setReadOnly(true);

        horizontalLayout_3->addWidget(HThreshValue_text);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(70, 20));
        label_8->setMaximumSize(QSize(70, 20));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_8);

        SThreshValue_slider = new QSlider(layoutWidget);
        SThreshValue_slider->setObjectName(QString::fromUtf8("SThreshValue_slider"));
        SThreshValue_slider->setMinimumSize(QSize(320, 30));
        SThreshValue_slider->setMaximumSize(QSize(320, 30));
        SThreshValue_slider->setMaximum(255);
        SThreshValue_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(SThreshValue_slider);

        SThreshValue_text = new QLineEdit(layoutWidget);
        SThreshValue_text->setObjectName(QString::fromUtf8("SThreshValue_text"));
        SThreshValue_text->setMinimumSize(QSize(70, 30));
        SThreshValue_text->setMaximumSize(QSize(70, 30));
        SThreshValue_text->setAlignment(Qt::AlignCenter);
        SThreshValue_text->setReadOnly(true);

        horizontalLayout_4->addWidget(SThreshValue_text);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(70, 20));
        label_9->setMaximumSize(QSize(70, 20));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_9);

        VThreshValue_slider = new QSlider(layoutWidget);
        VThreshValue_slider->setObjectName(QString::fromUtf8("VThreshValue_slider"));
        VThreshValue_slider->setMinimumSize(QSize(320, 30));
        VThreshValue_slider->setMaximumSize(QSize(320, 30));
        VThreshValue_slider->setMaximum(255);
        VThreshValue_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(VThreshValue_slider);

        VThreshValue_text = new QLineEdit(layoutWidget);
        VThreshValue_text->setObjectName(QString::fromUtf8("VThreshValue_text"));
        VThreshValue_text->setMinimumSize(QSize(70, 30));
        VThreshValue_text->setMaximumSize(QSize(70, 30));
        VThreshValue_text->setAlignment(Qt::AlignCenter);
        VThreshValue_text->setReadOnly(true);

        horizontalLayout_5->addWidget(VThreshValue_text);


        verticalLayout_4->addLayout(horizontalLayout_5);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayoutWidget = new QWidget(tab_6);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 100, 461, 97));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mblurSlider = new QSlider(gridLayoutWidget);
        mblurSlider->setObjectName(QString::fromUtf8("mblurSlider"));
        mblurSlider->setMinimum(0);
        mblurSlider->setMaximum(11);
        mblurSlider->setSingleStep(1);
        mblurSlider->setPageStep(1);
        mblurSlider->setValue(0);
        mblurSlider->setSliderPosition(0);
        mblurSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(mblurSlider, 0, 1, 1, 1);

        mblurValLineEdit = new QLineEdit(gridLayoutWidget);
        mblurValLineEdit->setObjectName(QString::fromUtf8("mblurValLineEdit"));
        mblurValLineEdit->setMaximumSize(QSize(100, 16777215));
        mblurValLineEdit->setCursor(QCursor(Qt::BlankCursor));
        mblurValLineEdit->setMaxLength(50);
        mblurValLineEdit->setAlignment(Qt::AlignCenter);
        mblurValLineEdit->setReadOnly(true);

        gridLayout_3->addWidget(mblurValLineEdit, 0, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));
        label->setMaximumSize(QSize(80, 16777215));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(tab_6);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 190, 461, 80));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setMaximumSize(QSize(80, 16777215));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        gblurSlider = new QSlider(gridLayoutWidget_2);
        gblurSlider->setObjectName(QString::fromUtf8("gblurSlider"));
        gblurSlider->setMinimum(0);
        gblurSlider->setMaximum(11);
        gblurSlider->setSingleStep(1);
        gblurSlider->setPageStep(1);
        gblurSlider->setValue(0);
        gblurSlider->setSliderPosition(0);
        gblurSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(gblurSlider, 0, 1, 1, 1);

        gblurValLineEdit = new QLineEdit(gridLayoutWidget_2);
        gblurValLineEdit->setObjectName(QString::fromUtf8("gblurValLineEdit"));
        gblurValLineEdit->setMaximumSize(QSize(100, 16777215));
        gblurValLineEdit->setCursor(QCursor(Qt::BlankCursor));
        gblurValLineEdit->setMaxLength(50);
        gblurValLineEdit->setAlignment(Qt::AlignCenter);
        gblurValLineEdit->setReadOnly(true);

        gridLayout_4->addWidget(gblurValLineEdit, 0, 2, 1, 1);

        gridLayoutWidget_3 = new QWidget(tab_6);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 10, 461, 80));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(gridLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(80, 0));
        label_12->setMaximumSize(QSize(80, 16777215));

        gridLayout_5->addWidget(label_12, 0, 0, 1, 1);

        blurSlider = new QSlider(gridLayoutWidget_3);
        blurSlider->setObjectName(QString::fromUtf8("blurSlider"));
        blurSlider->setMinimum(1);
        blurSlider->setMaximum(11);
        blurSlider->setSingleStep(1);
        blurSlider->setPageStep(2);
        blurSlider->setSliderPosition(1);
        blurSlider->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(blurSlider, 0, 1, 1, 1);

        blurValLineEdit = new QLineEdit(gridLayoutWidget_3);
        blurValLineEdit->setObjectName(QString::fromUtf8("blurValLineEdit"));
        blurValLineEdit->setMaximumSize(QSize(100, 16777215));
        blurValLineEdit->setCursor(QCursor(Qt::BlankCursor));
        blurValLineEdit->setMaxLength(50);
        blurValLineEdit->setAlignment(Qt::AlignCenter);
        blurValLineEdit->setReadOnly(true);

        gridLayout_5->addWidget(blurValLineEdit, 0, 2, 1, 1);

        tabWidget->addTab(tab_6, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayoutWidget_4 = new QWidget(tab);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(110, 130, 281, 31));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        dilateCheck = new QCheckBox(gridLayoutWidget_4);
        dilateCheck->setObjectName(QString::fromUtf8("dilateCheck"));

        gridLayout_6->addWidget(dilateCheck, 0, 0, 1, 1);

        checkBox = new QCheckBox(gridLayoutWidget_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_6->addWidget(checkBox, 0, 1, 1, 1);

        gridLayoutWidget_5 = new QWidget(tab);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(20, 20, 160, 103));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        morphrect = new QRadioButton(gridLayoutWidget_5);
        morphrect->setObjectName(QString::fromUtf8("morphrect"));

        gridLayout_8->addWidget(morphrect, 4, 0, 1, 1);

        morphellipse = new QRadioButton(gridLayoutWidget_5);
        morphellipse->setObjectName(QString::fromUtf8("morphellipse"));

        gridLayout_8->addWidget(morphellipse, 3, 0, 1, 1);

        morphcross = new QRadioButton(gridLayoutWidget_5);
        morphcross->setObjectName(QString::fromUtf8("morphcross"));

        gridLayout_8->addWidget(morphcross, 5, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_8->addWidget(label_13, 2, 0, 1, 1);

        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 0, 461, 17));
        gridLayoutWidget_6 = new QWidget(tab);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(190, 20, 281, 87));
        gridLayout_9 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(gridLayoutWidget_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_9->addWidget(label_15, 0, 0, 1, 1);

        kernelSizeSlider = new QSlider(gridLayoutWidget_6);
        kernelSizeSlider->setObjectName(QString::fromUtf8("kernelSizeSlider"));
        kernelSizeSlider->setMinimum(1);
        kernelSizeSlider->setMaximum(12);
        kernelSizeSlider->setValue(3);
        kernelSizeSlider->setOrientation(Qt::Horizontal);

        gridLayout_9->addWidget(kernelSizeSlider, 1, 0, 1, 1);

        kernelSizeLineEdit = new QLineEdit(gridLayoutWidget_6);
        kernelSizeLineEdit->setObjectName(QString::fromUtf8("kernelSizeLineEdit"));
        kernelSizeLineEdit->setAlignment(Qt::AlignCenter);
        kernelSizeLineEdit->setReadOnly(true);

        gridLayout_9->addWidget(kernelSizeLineEdit, 2, 0, 1, 1);

        contoursCheck = new QCheckBox(tab);
        contoursCheck->setObjectName(QString::fromUtf8("contoursCheck"));
        contoursCheck->setGeometry(QRect(10, 210, 131, 22));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(0, 190, 451, 17));
        gridLayoutWidget_7 = new QWidget(tab);
        gridLayoutWidget_7->setObjectName(QString::fromUtf8("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(100, 240, 160, 80));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        boundrectCheck = new QCheckBox(gridLayoutWidget_7);
        boundrectCheck->setObjectName(QString::fromUtf8("boundrectCheck"));

        gridLayout_7->addWidget(boundrectCheck, 0, 0, 1, 1);

        boundcircleCheck = new QCheckBox(gridLayoutWidget_7);
        boundcircleCheck->setObjectName(QString::fromUtf8("boundcircleCheck"));

        gridLayout_7->addWidget(boundcircleCheck, 1, 0, 1, 1);

        approxpolyCheck = new QCheckBox(gridLayoutWidget_7);
        approxpolyCheck->setObjectName(QString::fromUtf8("approxpolyCheck"));

        gridLayout_7->addWidget(approxpolyCheck, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 10, 461, 17));
        gridLayoutWidget_11 = new QWidget(tab_2);
        gridLayoutWidget_11->setObjectName(QString::fromUtf8("gridLayoutWidget_11"));
        gridLayoutWidget_11->setGeometry(QRect(10, 70, 461, 41));
        gridLayout_13 = new QGridLayout(gridLayoutWidget_11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(gridLayoutWidget_11);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(80, 0));
        label_21->setMaximumSize(QSize(80, 16777215));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_21, 0, 0, 1, 1);

        houghMinRadius = new QSlider(gridLayoutWidget_11);
        houghMinRadius->setObjectName(QString::fromUtf8("houghMinRadius"));
        houghMinRadius->setOrientation(Qt::Horizontal);

        gridLayout_13->addWidget(houghMinRadius, 0, 1, 1, 1);

        houghMinRadiusLineEdit = new QLineEdit(gridLayoutWidget_11);
        houghMinRadiusLineEdit->setObjectName(QString::fromUtf8("houghMinRadiusLineEdit"));
        houghMinRadiusLineEdit->setMaximumSize(QSize(70, 16777215));
        houghMinRadiusLineEdit->setAlignment(Qt::AlignCenter);
        houghMinRadiusLineEdit->setReadOnly(true);

        gridLayout_13->addWidget(houghMinRadiusLineEdit, 0, 2, 1, 1);

        gridLayoutWidget_12 = new QWidget(tab_2);
        gridLayoutWidget_12->setObjectName(QString::fromUtf8("gridLayoutWidget_12"));
        gridLayoutWidget_12->setGeometry(QRect(10, 110, 461, 41));
        gridLayout_14 = new QGridLayout(gridLayoutWidget_12);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(gridLayoutWidget_12);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(80, 0));
        label_22->setMaximumSize(QSize(80, 16777215));
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_22, 0, 0, 1, 1);

        houghMaxRadius = new QSlider(gridLayoutWidget_12);
        houghMaxRadius->setObjectName(QString::fromUtf8("houghMaxRadius"));
        houghMaxRadius->setOrientation(Qt::Horizontal);

        gridLayout_14->addWidget(houghMaxRadius, 0, 1, 1, 1);

        houghMaxRadiusLineEdit = new QLineEdit(gridLayoutWidget_12);
        houghMaxRadiusLineEdit->setObjectName(QString::fromUtf8("houghMaxRadiusLineEdit"));
        houghMaxRadiusLineEdit->setMaximumSize(QSize(70, 16777215));
        houghMaxRadiusLineEdit->setAlignment(Qt::AlignCenter);
        houghMaxRadiusLineEdit->setReadOnly(true);

        gridLayout_14->addWidget(houghMaxRadiusLineEdit, 0, 2, 1, 1);

        houghCheck = new QCheckBox(tab_2);
        houghCheck->setObjectName(QString::fromUtf8("houghCheck"));
        houghCheck->setGeometry(QRect(180, 30, 121, 22));
        label_55 = new QLabel(tab_2);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(10, 170, 461, 17));
        houghLinesCheck = new QCheckBox(tab_2);
        houghLinesCheck->setObjectName(QString::fromUtf8("houghLinesCheck"));
        houghLinesCheck->setGeometry(QRect(180, 200, 111, 22));
        tabWidget->addTab(tab_2, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QString::fromUtf8("tab_13"));
        label_56 = new QLabel(tab_13);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(0, 20, 471, 20));
        gridLayoutWidget_29 = new QWidget(tab_13);
        gridLayoutWidget_29->setObjectName(QString::fromUtf8("gridLayoutWidget_29"));
        gridLayoutWidget_29->setGeometry(QRect(10, 90, 160, 75));
        gridLayout_31 = new QGridLayout(gridLayoutWidget_29);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        gridLayout_31->setContentsMargins(0, 0, 0, 0);
        label_57 = new QLabel(gridLayoutWidget_29);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        gridLayout_31->addWidget(label_57, 0, 0, 1, 1);

        areablobLess = new QRadioButton(gridLayoutWidget_29);
        areablobLess->setObjectName(QString::fromUtf8("areablobLess"));
        areablobLess->setChecked(true);

        gridLayout_31->addWidget(areablobLess, 1, 0, 1, 1);

        areablobMore = new QRadioButton(gridLayoutWidget_29);
        areablobMore->setObjectName(QString::fromUtf8("areablobMore"));

        gridLayout_31->addWidget(areablobMore, 2, 0, 1, 1);

        blobCheck = new QCheckBox(tab_13);
        blobCheck->setObjectName(QString::fromUtf8("blobCheck"));
        blobCheck->setGeometry(QRect(180, 50, 101, 22));
        gridLayoutWidget_10 = new QWidget(tab_13);
        gridLayoutWidget_10->setObjectName(QString::fromUtf8("gridLayoutWidget_10"));
        gridLayoutWidget_10->setGeometry(QRect(0, 260, 471, 116));
        gridLayout_12 = new QGridLayout(gridLayoutWidget_10);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(gridLayoutWidget_10);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_12->addWidget(label_26, 0, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        backgroundRSlider = new QSlider(gridLayoutWidget_10);
        backgroundRSlider->setObjectName(QString::fromUtf8("backgroundRSlider"));
        backgroundRSlider->setMaximum(255);
        backgroundRSlider->setValue(255);
        backgroundRSlider->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(backgroundRSlider, 0, 1, 1, 1);

        backgroundRSliderLE = new QLineEdit(gridLayoutWidget_10);
        backgroundRSliderLE->setObjectName(QString::fromUtf8("backgroundRSliderLE"));
        backgroundRSliderLE->setMinimumSize(QSize(100, 0));
        backgroundRSliderLE->setMaximumSize(QSize(100, 16777215));
        backgroundRSliderLE->setAlignment(Qt::AlignCenter);
        backgroundRSliderLE->setReadOnly(true);

        gridLayout_10->addWidget(backgroundRSliderLE, 0, 2, 1, 1);

        label_18 = new QLabel(gridLayoutWidget_10);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(80, 0));
        label_18->setMaximumSize(QSize(80, 16777215));
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_18, 0, 0, 1, 1);

        label_27 = new QLabel(gridLayoutWidget_10);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_10->addWidget(label_27, 1, 1, 1, 1);

        foregroundRSliderLE = new QLineEdit(gridLayoutWidget_10);
        foregroundRSliderLE->setObjectName(QString::fromUtf8("foregroundRSliderLE"));
        foregroundRSliderLE->setMinimumSize(QSize(100, 0));
        foregroundRSliderLE->setMaximumSize(QSize(100, 16777215));
        foregroundRSliderLE->setAlignment(Qt::AlignCenter);
        foregroundRSliderLE->setReadOnly(true);

        gridLayout_10->addWidget(foregroundRSliderLE, 2, 2, 1, 1);

        label_25 = new QLabel(gridLayoutWidget_10);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMinimumSize(QSize(80, 0));
        label_25->setMaximumSize(QSize(80, 16777215));
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_25, 2, 0, 1, 1);

        foregroundRSlider = new QSlider(gridLayoutWidget_10);
        foregroundRSlider->setObjectName(QString::fromUtf8("foregroundRSlider"));
        foregroundRSlider->setMaximum(255);
        foregroundRSlider->setValue(255);
        foregroundRSlider->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(foregroundRSlider, 2, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_10, 1, 0, 1, 1);

        gridLayoutWidget_31 = new QWidget(tab_13);
        gridLayoutWidget_31->setObjectName(QString::fromUtf8("gridLayoutWidget_31"));
        gridLayoutWidget_31->setGeometry(QRect(310, 90, 160, 75));
        gridLayout_35 = new QGridLayout(gridLayoutWidget_31);
        gridLayout_35->setObjectName(QString::fromUtf8("gridLayout_35"));
        gridLayout_35->setContentsMargins(0, 0, 0, 0);
        label_61 = new QLabel(gridLayoutWidget_31);
        label_61->setObjectName(QString::fromUtf8("label_61"));

        gridLayout_35->addWidget(label_61, 0, 0, 1, 1);

        blobInclude = new QRadioButton(gridLayoutWidget_31);
        blobInclude->setObjectName(QString::fromUtf8("blobInclude"));
        blobInclude->setChecked(true);

        gridLayout_35->addWidget(blobInclude, 1, 0, 1, 1);

        blobExclude = new QRadioButton(gridLayoutWidget_31);
        blobExclude->setObjectName(QString::fromUtf8("blobExclude"));

        gridLayout_35->addWidget(blobExclude, 2, 0, 1, 1);

        gridLayoutWidget_9 = new QWidget(tab_13);
        gridLayoutWidget_9->setObjectName(QString::fromUtf8("gridLayoutWidget_9"));
        gridLayoutWidget_9->setGeometry(QRect(0, 190, 469, 51));
        gridLayout_11 = new QGridLayout(gridLayoutWidget_9);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(gridLayoutWidget_9);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMinimumSize(QSize(80, 0));
        label_29->setMaximumSize(QSize(80, 16777215));
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_29, 0, 0, 1, 1);

        areablobSliderLE = new QLineEdit(gridLayoutWidget_9);
        areablobSliderLE->setObjectName(QString::fromUtf8("areablobSliderLE"));
        areablobSliderLE->setMinimumSize(QSize(100, 0));
        areablobSliderLE->setMaximumSize(QSize(100, 16777215));
        areablobSliderLE->setAlignment(Qt::AlignCenter);
        areablobSliderLE->setReadOnly(true);

        gridLayout_11->addWidget(areablobSliderLE, 0, 2, 1, 1);

        areablobSlider = new QSlider(gridLayoutWidget_9);
        areablobSlider->setObjectName(QString::fromUtf8("areablobSlider"));
        areablobSlider->setMaximum(1500);
        areablobSlider->setSingleStep(10);
        areablobSlider->setValue(500);
        areablobSlider->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(areablobSlider, 0, 1, 1, 1);

        tabWidget->addTab(tab_13, QString());

        verticalLayout_5->addWidget(tabWidget);


        horizontalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(320, 20));
        label_3->setMaximumSize(QSize(320, 20));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        binaryImage = new QLabel(centralwidget);
        binaryImage->setObjectName(QString::fromUtf8("binaryImage"));
        binaryImage->setMinimumSize(QSize(320, 240));
        binaryImage->setMaximumSize(QSize(320, 240));
        binaryImage->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(binaryImage);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(320, 20));
        label_4->setMaximumSize(QSize(320, 20));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_8->addLayout(verticalLayout_3);


        gridLayout_2->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        cameraNo->clear();
        cameraNo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8)
        );
        openCamera->setText(QApplication::translate("MainWindow", "Open Camera", 0, QApplication::UnicodeUTF8));
        writeFile->setText(QApplication::translate("MainWindow", "Write File", 0, QApplication::UnicodeUTF8));
        openFile->setText(QApplication::translate("MainWindow", "Open File", 0, QApplication::UnicodeUTF8));
        closeFile->setText(QApplication::translate("MainWindow", "Close File", 0, QApplication::UnicodeUTF8));
        pauseCamera->setText(QApplication::translate("MainWindow", "Pause Camera", 0, QApplication::UnicodeUTF8));
        closeCamera->setText(QApplication::translate("MainWindow", "Close Camera", 0, QApplication::UnicodeUTF8));
        startCamera->setText(QApplication::translate("MainWindow", "Start Camera", 0, QApplication::UnicodeUTF8));
        newFile->setText(QApplication::translate("MainWindow", "Write new file", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_11->setText(QApplication::translate("MainWindow", "H", 0, QApplication::UnicodeUTF8));
        HValue_text->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "S", 0, QApplication::UnicodeUTF8));
        SValue_text->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "V", 0, QApplication::UnicodeUTF8));
        VValue_text->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "H_thresh", 0, QApplication::UnicodeUTF8));
        HThreshValue_text->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "S_thresh", 0, QApplication::UnicodeUTF8));
        SThreshValue_text->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "V_thresh", 0, QApplication::UnicodeUTF8));
        VThreshValue_text->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Thresholding", 0, QApplication::UnicodeUTF8));
        mblurValLineEdit->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Median</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Gaussian</p></body></html>", 0, QApplication::UnicodeUTF8));
        gblurValLineEdit->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Blur</p></body></html>", 0, QApplication::UnicodeUTF8));
        blurValLineEdit->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Filters", 0, QApplication::UnicodeUTF8));
        dilateCheck->setText(QApplication::translate("MainWindow", "Dilate", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "Erode", 0, QApplication::UnicodeUTF8));
        morphrect->setText(QApplication::translate("MainWindow", "MORPH_RECT", 0, QApplication::UnicodeUTF8));
        morphellipse->setText(QApplication::translate("MainWindow", "MORPH_ELLIPSE", 0, QApplication::UnicodeUTF8));
        morphcross->setText(QApplication::translate("MainWindow", "MORPH_CROSS", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Shape</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Structuring Element</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Size</p></body></html>", 0, QApplication::UnicodeUTF8));
        kernelSizeLineEdit->setText(QApplication::translate("MainWindow", "3.0", 0, QApplication::UnicodeUTF8));
        contoursCheck->setText(QApplication::translate("MainWindow", "Draw Contours", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Contours</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        boundrectCheck->setText(QApplication::translate("MainWindow", "Bouding Rect", 0, QApplication::UnicodeUTF8));
        boundcircleCheck->setText(QApplication::translate("MainWindow", "Bounding Circle", 0, QApplication::UnicodeUTF8));
        approxpolyCheck->setText(QApplication::translate("MainWindow", "Approx Poly", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Dilate and Erode", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Hough Circles</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "Min Radius", 0, QApplication::UnicodeUTF8));
        houghMinRadiusLineEdit->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "Max Radius", 0, QApplication::UnicodeUTF8));
        houghMaxRadiusLineEdit->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        houghCheck->setText(QApplication::translate("MainWindow", "Hough Circles", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Hough Lines</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        houghLinesCheck->setText(QApplication::translate("MainWindow", "Hough Lines", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Hough", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Area Filter</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_57->setText(QApplication::translate("MainWindow", "Area must be", 0, QApplication::UnicodeUTF8));
        areablobLess->setText(QApplication::translate("MainWindow", "Less than", 0, QApplication::UnicodeUTF8));
        areablobMore->setText(QApplication::translate("MainWindow", "More than", 0, QApplication::UnicodeUTF8));
        blobCheck->setText(QApplication::translate("MainWindow", "Apply Blob", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Background</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        backgroundRSliderLE->setText(QApplication::translate("MainWindow", "255", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Color", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Foreground</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        foregroundRSliderLE->setText(QApplication::translate("MainWindow", "255", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "Color", 0, QApplication::UnicodeUTF8));
        label_61->setText(QApplication::translate("MainWindow", "This blob", 0, QApplication::UnicodeUTF8));
        blobInclude->setText(QApplication::translate("MainWindow", "Include it", 0, QApplication::UnicodeUTF8));
        blobExclude->setText(QApplication::translate("MainWindow", "Exclude it", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Area of</p><p align=\"center\">this blob</p></body></html>", 0, QApplication::UnicodeUTF8));
        areablobSliderLE->setText(QApplication::translate("MainWindow", "500", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_13), QApplication::translate("MainWindow", "Blob", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Color Image", 0, QApplication::UnicodeUTF8));
        binaryImage->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Threshold Image", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
