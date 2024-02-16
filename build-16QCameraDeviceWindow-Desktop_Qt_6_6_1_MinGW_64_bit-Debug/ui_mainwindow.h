/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_openCamera;
    QAction *action_closeCamera;
    QAction *action_capture;
    QAction *action_beginRecord;
    QAction *action_stopRecord;
    QAction *action_quite;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_cameraDevice;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QComboBox *comboBox_camera;
    QLabel *label_3;
    QComboBox *comboBox_captureRes;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QComboBox *comboBox_cameraPos;
    QLabel *label_recorderRes;
    QComboBox *comboBox_supportedRecorderRes;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QComboBox *comboBox_recorderFrameRate;
    QGroupBox *groupBox_cameraPreview;
    QVideoWidget *videoWidget;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_cameraFeature;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_colorTemperature;
    QCheckBox *checkBox_manualExposureTime;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_exposureCompensation;
    QCheckBox *checkBox_customFocusPoint;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_isoSensitivity;
    QCheckBox *checkBox_focusDistance;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QComboBox *comboBox_encodeQuality;
    QCheckBox *checkBox_soundEffect;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QComboBox *comboBox_imageRes;
    QCheckBox *checkBox_saveAsFile;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_capturePic;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_saveFile;
    QLineEdit *lineEdit_saveFileName;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QComboBox *comboBox_recorderEncode;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QComboBox *comboBox_recorderFormat;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_9;
    QComboBox *comboBox_recorderEncodeQuality;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_10;
    QComboBox *comboBox_recorderRes;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(845, 600);
        action_openCamera = new QAction(MainWindow);
        action_openCamera->setObjectName("action_openCamera");
        action_openCamera->setMenuRole(QAction::NoRole);
        action_closeCamera = new QAction(MainWindow);
        action_closeCamera->setObjectName("action_closeCamera");
        action_closeCamera->setMenuRole(QAction::NoRole);
        action_capture = new QAction(MainWindow);
        action_capture->setObjectName("action_capture");
        action_capture->setMenuRole(QAction::NoRole);
        action_beginRecord = new QAction(MainWindow);
        action_beginRecord->setObjectName("action_beginRecord");
        action_beginRecord->setMenuRole(QAction::NoRole);
        action_stopRecord = new QAction(MainWindow);
        action_stopRecord->setObjectName("action_stopRecord");
        action_stopRecord->setMenuRole(QAction::NoRole);
        action_quite = new QAction(MainWindow);
        action_quite->setObjectName("action_quite");
        action_quite->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_9 = new QHBoxLayout(centralwidget);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox_cameraDevice = new QGroupBox(centralwidget);
        groupBox_cameraDevice->setObjectName("groupBox_cameraDevice");
        verticalLayout_3 = new QVBoxLayout(groupBox_cameraDevice);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(groupBox_cameraDevice);
        label->setObjectName("label");

        horizontalLayout_6->addWidget(label);

        comboBox_camera = new QComboBox(groupBox_cameraDevice);
        comboBox_camera->setObjectName("comboBox_camera");

        horizontalLayout_6->addWidget(comboBox_camera);

        label_3 = new QLabel(groupBox_cameraDevice);
        label_3->setObjectName("label_3");

        horizontalLayout_6->addWidget(label_3);

        comboBox_captureRes = new QComboBox(groupBox_cameraDevice);
        comboBox_captureRes->setObjectName("comboBox_captureRes");

        horizontalLayout_6->addWidget(comboBox_captureRes);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_2 = new QLabel(groupBox_cameraDevice);
        label_2->setObjectName("label_2");

        horizontalLayout_7->addWidget(label_2);

        comboBox_cameraPos = new QComboBox(groupBox_cameraDevice);
        comboBox_cameraPos->setObjectName("comboBox_cameraPos");

        horizontalLayout_7->addWidget(comboBox_cameraPos);

        label_recorderRes = new QLabel(groupBox_cameraDevice);
        label_recorderRes->setObjectName("label_recorderRes");

        horizontalLayout_7->addWidget(label_recorderRes);

        comboBox_supportedRecorderRes = new QComboBox(groupBox_cameraDevice);
        comboBox_supportedRecorderRes->setObjectName("comboBox_supportedRecorderRes");

        horizontalLayout_7->addWidget(comboBox_supportedRecorderRes);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        label_5 = new QLabel(groupBox_cameraDevice);
        label_5->setObjectName("label_5");

        horizontalLayout_8->addWidget(label_5);

        comboBox_recorderFrameRate = new QComboBox(groupBox_cameraDevice);
        comboBox_recorderFrameRate->setObjectName("comboBox_recorderFrameRate");

        horizontalLayout_8->addWidget(comboBox_recorderFrameRate);


        verticalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_4->addWidget(groupBox_cameraDevice);

        groupBox_cameraPreview = new QGroupBox(centralwidget);
        groupBox_cameraPreview->setObjectName("groupBox_cameraPreview");
        videoWidget = new QVideoWidget(groupBox_cameraPreview);
        videoWidget->setObjectName("videoWidget");
        videoWidget->setGeometry(QRect(60, 30, 271, 171));

        verticalLayout_4->addWidget(groupBox_cameraPreview);


        horizontalLayout_9->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox_cameraFeature = new QGroupBox(centralwidget);
        groupBox_cameraFeature->setObjectName("groupBox_cameraFeature");
        verticalLayout = new QVBoxLayout(groupBox_cameraFeature);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBox_colorTemperature = new QCheckBox(groupBox_cameraFeature);
        checkBox_colorTemperature->setObjectName("checkBox_colorTemperature");

        horizontalLayout->addWidget(checkBox_colorTemperature);

        checkBox_manualExposureTime = new QCheckBox(groupBox_cameraFeature);
        checkBox_manualExposureTime->setObjectName("checkBox_manualExposureTime");

        horizontalLayout->addWidget(checkBox_manualExposureTime);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBox_exposureCompensation = new QCheckBox(groupBox_cameraFeature);
        checkBox_exposureCompensation->setObjectName("checkBox_exposureCompensation");

        horizontalLayout_2->addWidget(checkBox_exposureCompensation);

        checkBox_customFocusPoint = new QCheckBox(groupBox_cameraFeature);
        checkBox_customFocusPoint->setObjectName("checkBox_customFocusPoint");

        horizontalLayout_2->addWidget(checkBox_customFocusPoint);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        checkBox_isoSensitivity = new QCheckBox(groupBox_cameraFeature);
        checkBox_isoSensitivity->setObjectName("checkBox_isoSensitivity");

        horizontalLayout_3->addWidget(checkBox_isoSensitivity);

        checkBox_focusDistance = new QCheckBox(groupBox_cameraFeature);
        checkBox_focusDistance->setObjectName("checkBox_focusDistance");

        horizontalLayout_3->addWidget(checkBox_focusDistance);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_5->addWidget(groupBox_cameraFeature);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_9 = new QVBoxLayout(tab);
        verticalLayout_9->setObjectName("verticalLayout_9");
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        comboBox_encodeQuality = new QComboBox(groupBox_4);
        comboBox_encodeQuality->setObjectName("comboBox_encodeQuality");

        horizontalLayout_4->addWidget(comboBox_encodeQuality);

        checkBox_soundEffect = new QCheckBox(groupBox_4);
        checkBox_soundEffect->setObjectName("checkBox_soundEffect");

        horizontalLayout_4->addWidget(checkBox_soundEffect);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName("label_7");

        horizontalLayout_5->addWidget(label_7);

        comboBox_imageRes = new QComboBox(groupBox_4);
        comboBox_imageRes->setObjectName("comboBox_imageRes");

        horizontalLayout_5->addWidget(comboBox_imageRes);

        checkBox_saveAsFile = new QCheckBox(groupBox_4);
        checkBox_saveAsFile->setObjectName("checkBox_saveAsFile");

        horizontalLayout_5->addWidget(checkBox_saveAsFile);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_9->addWidget(groupBox_4);

        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 366, 192));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_capturePic = new QLabel(scrollAreaWidgetContents);
        label_capturePic->setObjectName("label_capturePic");

        verticalLayout_10->addWidget(label_capturePic);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_9->addWidget(scrollArea);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_8 = new QVBoxLayout(tab_2);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        pushButton_saveFile = new QPushButton(tab_2);
        pushButton_saveFile->setObjectName("pushButton_saveFile");

        horizontalLayout_10->addWidget(pushButton_saveFile);

        lineEdit_saveFileName = new QLineEdit(tab_2);
        lineEdit_saveFileName->setObjectName("lineEdit_saveFileName");

        horizontalLayout_10->addWidget(lineEdit_saveFileName);


        verticalLayout_7->addLayout(horizontalLayout_10);

        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName("groupBox");
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        horizontalLayout_11->addWidget(label_4);

        comboBox_recorderEncode = new QComboBox(groupBox);
        comboBox_recorderEncode->setObjectName("comboBox_recorderEncode");

        horizontalLayout_11->addWidget(comboBox_recorderEncode);


        verticalLayout_6->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        horizontalLayout_12->addWidget(label_8);

        comboBox_recorderFormat = new QComboBox(groupBox);
        comboBox_recorderFormat->setObjectName("comboBox_recorderFormat");

        horizontalLayout_12->addWidget(comboBox_recorderFormat);


        verticalLayout_6->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        horizontalLayout_13->addWidget(label_9);

        comboBox_recorderEncodeQuality = new QComboBox(groupBox);
        comboBox_recorderEncodeQuality->setObjectName("comboBox_recorderEncodeQuality");

        horizontalLayout_13->addWidget(comboBox_recorderEncodeQuality);


        verticalLayout_6->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");

        horizontalLayout_14->addWidget(label_10);

        comboBox_recorderRes = new QComboBox(groupBox);
        comboBox_recorderRes->setObjectName("comboBox_recorderRes");

        horizontalLayout_14->addWidget(comboBox_recorderRes);


        verticalLayout_6->addLayout(horizontalLayout_14);


        verticalLayout_7->addWidget(groupBox);

        verticalLayout_7->setStretch(1, 1);

        verticalLayout_8->addLayout(verticalLayout_7);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_5->addWidget(tabWidget);


        horizontalLayout_9->addLayout(verticalLayout_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 845, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_openCamera);
        toolBar->addAction(action_closeCamera);
        toolBar->addSeparator();
        toolBar->addAction(action_capture);
        toolBar->addSeparator();
        toolBar->addAction(action_beginRecord);
        toolBar->addAction(action_stopRecord);
        toolBar->addSeparator();
        toolBar->addAction(action_quite);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_openCamera->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
#if QT_CONFIG(tooltip)
        action_openCamera->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\344\270\200\346\221\204\345\203\217\345\244\264", nullptr));
#endif // QT_CONFIG(tooltip)
        action_closeCamera->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", nullptr));
#if QT_CONFIG(tooltip)
        action_closeCamera->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\212\245\345\203\217\345\244\264", nullptr));
#endif // QT_CONFIG(tooltip)
        action_capture->setText(QCoreApplication::translate("MainWindow", "\346\213\215\347\205\247 ", nullptr));
#if QT_CONFIG(tooltip)
        action_capture->setToolTip(QCoreApplication::translate("MainWindow", "\346\213\215\347\205\247", nullptr));
#endif // QT_CONFIG(tooltip)
        action_beginRecord->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\345\275\225\345\203\217", nullptr));
#if QT_CONFIG(tooltip)
        action_beginRecord->setToolTip(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\345\275\225\345\203\217", nullptr));
#endif // QT_CONFIG(tooltip)
        action_stopRecord->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\345\275\225\345\203\217", nullptr));
#if QT_CONFIG(tooltip)
        action_stopRecord->setToolTip(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\345\275\225\345\203\217", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quite->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quite->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_cameraDevice->setTitle(QCoreApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\350\256\276\345\244\207", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\224\257\346\214\201\347\232\204\346\213\215\347\205\247\345\210\206\350\276\250\347\216\207", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\344\275\215\347\275\256", nullptr));
        label_recorderRes->setText(QCoreApplication::translate("MainWindow", "\346\224\257\346\214\201\347\232\204\345\275\225\345\203\217\345\210\206\350\276\250\347\216\207", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\345\270\247\347\216\207\350\214\203\345\233\264", nullptr));
        groupBox_cameraPreview->setTitle(QCoreApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\351\242\204\350\247\210", nullptr));
        groupBox_cameraFeature->setTitle(QCoreApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\346\216\247\345\210\266\347\211\271\346\200\247", nullptr));
        checkBox_colorTemperature->setText(QCoreApplication::translate("MainWindow", "ColorTemperature", nullptr));
        checkBox_manualExposureTime->setText(QCoreApplication::translate("MainWindow", "ManualExposureTime", nullptr));
        checkBox_exposureCompensation->setText(QCoreApplication::translate("MainWindow", "ExposureCompensation", nullptr));
        checkBox_customFocusPoint->setText(QCoreApplication::translate("MainWindow", "CustomFocusPoint", nullptr));
        checkBox_isoSensitivity->setText(QCoreApplication::translate("MainWindow", "IsoSensitivity", nullptr));
        checkBox_focusDistance->setText(QCoreApplication::translate("MainWindow", "FocusDistance", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\346\213\215\347\205\247\350\256\276\347\275\256", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\347\274\226\347\240\201\345\223\201\350\264\250", nullptr));
        checkBox_soundEffect->setText(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276\351\237\263\346\225\210", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\345\210\206\350\276\250\347\216\207", nullptr));
        checkBox_saveAsFile->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\344\270\272\346\226\207\344\273\266", nullptr));
        label_capturePic->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\346\213\215\346\221\204\347\232\204\345\233\276\347\211\207", nullptr));
        pushButton_saveFile->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\275\225\345\203\217\350\256\276\347\275\256", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\347\274\226\347\240\201", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\346\240\274\345\274\217", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\347\274\226\347\240\201\345\223\201\350\264\250", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\345\210\206\350\276\250\347\216\207", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\345\275\225\345\203\217\350\256\276\347\275\256", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
