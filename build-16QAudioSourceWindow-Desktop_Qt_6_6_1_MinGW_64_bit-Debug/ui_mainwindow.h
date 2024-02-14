/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtGui/QAction>
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_preferAudioFormat;
    QAction *action_testAudioFormat;
    QAction *action_beginRecord;
    QAction *action_stopRecord;
    QAction *action_playRecFile;
    QAction *action_quit_;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_showWave;
    QCheckBox *checkBox_dataRecordToFile;
    QPushButton *pushButton_dataFile;
    QLineEdit *lineEdit_dataFile;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox_audioDeviceAndFormat;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox_audioInputDevice;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *comboBox_sampleFormat;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *spinBox_sampleFreq;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QLabel *label_sampleRateRange;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpinBox *spinBox_channelCnt;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_channelCnt;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSpinBox *spinBox_sampleByteCnt;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpinBox *spinBox_frameByteCnt;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_notation;
    QLabel *label_8;
    QLabel *label_9;
    QGroupBox *groupBox_audioWave;
    QVBoxLayout *verticalLayout;
    QChartView *chartView;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_recordTime;
    QLabel *label_dataByteCnt;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action_preferAudioFormat = new QAction(MainWindow);
        action_preferAudioFormat->setObjectName("action_preferAudioFormat");
        action_preferAudioFormat->setMenuRole(QAction::NoRole);
        action_testAudioFormat = new QAction(MainWindow);
        action_testAudioFormat->setObjectName("action_testAudioFormat");
        action_testAudioFormat->setMenuRole(QAction::NoRole);
        action_beginRecord = new QAction(MainWindow);
        action_beginRecord->setObjectName("action_beginRecord");
        action_beginRecord->setMenuRole(QAction::NoRole);
        action_stopRecord = new QAction(MainWindow);
        action_stopRecord->setObjectName("action_stopRecord");
        action_stopRecord->setMenuRole(QAction::NoRole);
        action_playRecFile = new QAction(MainWindow);
        action_playRecFile->setObjectName("action_playRecFile");
        action_playRecFile->setMenuRole(QAction::NoRole);
        action_quit_ = new QAction(MainWindow);
        action_quit_->setObjectName("action_quit_");
        action_quit_->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBox_showWave = new QCheckBox(centralwidget);
        checkBox_showWave->setObjectName("checkBox_showWave");

        horizontalLayout->addWidget(checkBox_showWave);

        checkBox_dataRecordToFile = new QCheckBox(centralwidget);
        checkBox_dataRecordToFile->setObjectName("checkBox_dataRecordToFile");

        horizontalLayout->addWidget(checkBox_dataRecordToFile);

        pushButton_dataFile = new QPushButton(centralwidget);
        pushButton_dataFile->setObjectName("pushButton_dataFile");

        horizontalLayout->addWidget(pushButton_dataFile);

        lineEdit_dataFile = new QLineEdit(centralwidget);
        lineEdit_dataFile->setObjectName("lineEdit_dataFile");

        horizontalLayout->addWidget(lineEdit_dataFile);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        groupBox_audioDeviceAndFormat = new QGroupBox(centralwidget);
        groupBox_audioDeviceAndFormat->setObjectName("groupBox_audioDeviceAndFormat");
        verticalLayout_4 = new QVBoxLayout(groupBox_audioDeviceAndFormat);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(groupBox_audioDeviceAndFormat);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        comboBox_audioInputDevice = new QComboBox(groupBox_audioDeviceAndFormat);
        comboBox_audioInputDevice->setObjectName("comboBox_audioInputDevice");

        horizontalLayout_2->addWidget(comboBox_audioInputDevice);


        verticalLayout_4->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(groupBox_audioDeviceAndFormat);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        comboBox_sampleFormat = new QComboBox(groupBox_2);
        comboBox_sampleFormat->setObjectName("comboBox_sampleFormat");

        horizontalLayout_3->addWidget(comboBox_sampleFormat);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        spinBox_sampleFreq = new QSpinBox(groupBox_2);
        spinBox_sampleFreq->setObjectName("spinBox_sampleFreq");

        horizontalLayout_4->addWidget(spinBox_sampleFreq);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        label_sampleRateRange = new QLabel(groupBox_2);
        label_sampleRateRange->setObjectName("label_sampleRateRange");

        horizontalLayout_10->addWidget(label_sampleRateRange);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        spinBox_channelCnt = new QSpinBox(groupBox_2);
        spinBox_channelCnt->setObjectName("spinBox_channelCnt");

        horizontalLayout_5->addWidget(spinBox_channelCnt);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);

        label_channelCnt = new QLabel(groupBox_2);
        label_channelCnt->setObjectName("label_channelCnt");

        horizontalLayout_11->addWidget(label_channelCnt);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        horizontalLayout_6->addWidget(label_5);

        spinBox_sampleByteCnt = new QSpinBox(groupBox_2);
        spinBox_sampleByteCnt->setObjectName("spinBox_sampleByteCnt");

        horizontalLayout_6->addWidget(spinBox_sampleByteCnt);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        horizontalLayout_7->addWidget(label_6);

        spinBox_frameByteCnt = new QSpinBox(groupBox_2);
        spinBox_frameByteCnt->setObjectName("spinBox_frameByteCnt");

        horizontalLayout_7->addWidget(spinBox_frameByteCnt);


        verticalLayout_5->addLayout(horizontalLayout_7);


        verticalLayout_4->addWidget(groupBox_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_notation = new QLabel(groupBox_audioDeviceAndFormat);
        label_notation->setObjectName("label_notation");

        verticalLayout_2->addWidget(label_notation);

        label_8 = new QLabel(groupBox_audioDeviceAndFormat);
        label_8->setObjectName("label_8");

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(groupBox_audioDeviceAndFormat);
        label_9->setObjectName("label_9");

        verticalLayout_2->addWidget(label_9);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_4->setStretch(1, 2);
        verticalLayout_4->setStretch(2, 1);

        horizontalLayout_9->addWidget(groupBox_audioDeviceAndFormat);

        groupBox_audioWave = new QGroupBox(centralwidget);
        groupBox_audioWave->setObjectName("groupBox_audioWave");
        verticalLayout = new QVBoxLayout(groupBox_audioWave);
        verticalLayout->setObjectName("verticalLayout");
        chartView = new QChartView(groupBox_audioWave);
        chartView->setObjectName("chartView");

        verticalLayout->addWidget(chartView);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_recordTime = new QLabel(groupBox_audioWave);
        label_recordTime->setObjectName("label_recordTime");

        horizontalLayout_8->addWidget(label_recordTime);

        label_dataByteCnt = new QLabel(groupBox_audioWave);
        label_dataByteCnt->setObjectName("label_dataByteCnt");

        horizontalLayout_8->addWidget(label_dataByteCnt);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_9->addWidget(groupBox_audioWave);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_9);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_preferAudioFormat);
        toolBar->addAction(action_testAudioFormat);
        toolBar->addAction(action_beginRecord);
        toolBar->addAction(action_stopRecord);
        toolBar->addSeparator();
        toolBar->addAction(action_playRecFile);
        toolBar->addAction(action_quit_);

        retranslateUi(MainWindow);
        QObject::connect(action_quit_, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_preferAudioFormat->setText(QCoreApplication::translate("MainWindow", "\351\246\226\351\200\211\351\237\263\351\242\221\346\240\274\345\274\217", nullptr));
#if QT_CONFIG(tooltip)
        action_preferAudioFormat->setToolTip(QCoreApplication::translate("MainWindow", "\351\246\226\351\200\211\351\237\263\351\242\221\346\240\274\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
        action_testAudioFormat->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\351\237\263\351\242\221\346\240\274\345\274\217", nullptr));
#if QT_CONFIG(tooltip)
        action_testAudioFormat->setToolTip(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\351\237\263\351\242\221\346\240\274\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
        action_beginRecord->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\351\207\207\351\233\206", nullptr));
#if QT_CONFIG(tooltip)
        action_beginRecord->setToolTip(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\351\207\207\351\233\206", nullptr));
#endif // QT_CONFIG(tooltip)
        action_stopRecord->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\351\207\207\351\233\206", nullptr));
#if QT_CONFIG(tooltip)
        action_stopRecord->setToolTip(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\274\221\351\233\206", nullptr));
#endif // QT_CONFIG(tooltip)
        action_playRecFile->setText(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        action_playRecFile->setToolTip(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit_->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit_->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_showWave->setText(QCoreApplication::translate("MainWindow", "\345\256\236\346\227\266\346\230\276\347\244\272\346\263\242\345\275\242", nullptr));
        checkBox_dataRecordToFile->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\350\256\260\345\275\225\345\210\260\346\226\207\344\273\266", nullptr));
        pushButton_dataFile->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\346\226\207\344\273\266", nullptr));
        groupBox_audioDeviceAndFormat->setTitle(QCoreApplication::translate("MainWindow", "\351\237\263\351\242\221\350\276\223\345\205\245\350\256\276\345\244\207\345\222\214\346\240\274\345\274\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\273\230\350\256\244\351\237\263\351\242\221\350\276\223\345\205\245\350\256\276\345\244\207", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\351\237\263\351\242\221\346\240\274\345\274\217\357\274\210QAudioFormat)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\351\207\207\346\240\267\347\202\271\346\240\274\345\274\217", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\351\207\207\346\240\267\351\242\221\347\216\207", nullptr));
        label_sampleRateRange->setText(QCoreApplication::translate("MainWindow", "\350\214\203\345\233\264\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\351\200\232\351\201\223\346\225\260", nullptr));
        label_channelCnt->setText(QCoreApplication::translate("MainWindow", "\351\200\232\351\201\223\346\225\260\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\257\217\351\207\207\346\240\267\347\202\271\345\255\227\350\212\202\346\225\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\346\257\217\345\270\247\345\255\227\350\212\202\346\225\260", nullptr));
        label_notation->setText(QCoreApplication::translate("MainWindow", "\346\263\250\346\204\217\357\274\232\346\273\241\350\266\263\344\273\245\344\270\213\346\235\241\344\273\266\346\211\215\345\217\257\344\273\245\346\230\276\347\244\272 \346\233\262\347\272\277", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\351\207\207\346\240\267\347\202\271\346\240\274\345\274\217 == UInt8", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\351\200\232\351\201\223\346\225\260 == 1", nullptr));
        groupBox_audioWave->setTitle(QCoreApplication::translate("MainWindow", "\345\256\236\346\227\266\351\207\207\351\233\206\347\232\204\351\237\263\351\242\221\346\263\242\345\275\242", nullptr));
        label_recordTime->setText(QCoreApplication::translate("MainWindow", "\345\267\262\345\275\225\345\210\266\346\227\266\351\227\264 = 0.0\347\247\222", nullptr));
        label_dataByteCnt->setText(QCoreApplication::translate("MainWindow", "\345\256\236\351\231\205\346\225\260\346\215\256\345\235\227\345\255\227\350\212\202\346\225\260 = 0", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
