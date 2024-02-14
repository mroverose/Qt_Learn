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
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_record;
    QAction *action_pause;
    QAction *action_stop;
    QAction *action_quit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_recodeOutputFile;
    QLineEdit *lineEdit;
    QLabel *label;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox_recordDevice;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_inputDevice;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_voiceEncode;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_fileFormat;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *comboBox_sampleFrequency;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox_channelCnt;
    QGroupBox *groupBox_decodeMode;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButton_fixQuality;
    QSlider *horizontalSlider_quality;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *radioButton_fixBitRate;
    QComboBox *comboBox_byteRate;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(591, 373);
        action_record = new QAction(MainWindow);
        action_record->setObjectName("action_record");
        action_record->setMenuRole(QAction::NoRole);
        action_pause = new QAction(MainWindow);
        action_pause->setObjectName("action_pause");
        action_pause->setMenuRole(QAction::NoRole);
        action_stop = new QAction(MainWindow);
        action_stop->setObjectName("action_stop");
        action_stop->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_recodeOutputFile = new QPushButton(centralwidget);
        pushButton_recodeOutputFile->setObjectName("pushButton_recodeOutputFile");

        horizontalLayout->addWidget(pushButton_recodeOutputFile);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        groupBox_recordDevice = new QGroupBox(centralwidget);
        groupBox_recordDevice->setObjectName("groupBox_recordDevice");
        verticalLayout_2 = new QVBoxLayout(groupBox_recordDevice);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox_recordDevice);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        comboBox_inputDevice = new QComboBox(groupBox_recordDevice);
        comboBox_inputDevice->setObjectName("comboBox_inputDevice");

        horizontalLayout_2->addWidget(comboBox_inputDevice);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox_recordDevice);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        comboBox_voiceEncode = new QComboBox(groupBox_recordDevice);
        comboBox_voiceEncode->setObjectName("comboBox_voiceEncode");

        horizontalLayout_3->addWidget(comboBox_voiceEncode);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(groupBox_recordDevice);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        comboBox_fileFormat = new QComboBox(groupBox_recordDevice);
        comboBox_fileFormat->setObjectName("comboBox_fileFormat");

        horizontalLayout_4->addWidget(comboBox_fileFormat);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(groupBox_recordDevice);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        comboBox_sampleFrequency = new QComboBox(groupBox_recordDevice);
        comboBox_sampleFrequency->setObjectName("comboBox_sampleFrequency");

        horizontalLayout_5->addWidget(comboBox_sampleFrequency);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(groupBox_recordDevice);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        comboBox_channelCnt = new QComboBox(groupBox_recordDevice);
        comboBox_channelCnt->setObjectName("comboBox_channelCnt");

        horizontalLayout_6->addWidget(comboBox_channelCnt);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_9->addWidget(groupBox_recordDevice);

        groupBox_decodeMode = new QGroupBox(centralwidget);
        groupBox_decodeMode->setObjectName("groupBox_decodeMode");
        verticalLayout = new QVBoxLayout(groupBox_decodeMode);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        radioButton_fixQuality = new QRadioButton(groupBox_decodeMode);
        radioButton_fixQuality->setObjectName("radioButton_fixQuality");

        horizontalLayout_7->addWidget(radioButton_fixQuality);

        horizontalSlider_quality = new QSlider(groupBox_decodeMode);
        horizontalSlider_quality->setObjectName("horizontalSlider_quality");
        horizontalSlider_quality->setTracking(true);
        horizontalSlider_quality->setOrientation(Qt::Horizontal);
        horizontalSlider_quality->setInvertedAppearance(false);
        horizontalSlider_quality->setInvertedControls(false);
        horizontalSlider_quality->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_quality->setTickInterval(10);

        horizontalLayout_7->addWidget(horizontalSlider_quality);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        radioButton_fixBitRate = new QRadioButton(groupBox_decodeMode);
        radioButton_fixBitRate->setObjectName("radioButton_fixBitRate");

        horizontalLayout_8->addWidget(radioButton_fixBitRate);

        comboBox_byteRate = new QComboBox(groupBox_decodeMode);
        comboBox_byteRate->setObjectName("comboBox_byteRate");

        horizontalLayout_8->addWidget(comboBox_byteRate);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_9->addWidget(groupBox_decodeMode);


        verticalLayout_3->addLayout(horizontalLayout_9);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 591, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        QWidget::setTabOrder(comboBox_inputDevice, comboBox_voiceEncode);
        QWidget::setTabOrder(comboBox_voiceEncode, comboBox_fileFormat);
        QWidget::setTabOrder(comboBox_fileFormat, comboBox_sampleFrequency);
        QWidget::setTabOrder(comboBox_sampleFrequency, comboBox_channelCnt);
        QWidget::setTabOrder(comboBox_channelCnt, radioButton_fixQuality);
        QWidget::setTabOrder(radioButton_fixQuality, horizontalSlider_quality);
        QWidget::setTabOrder(horizontalSlider_quality, radioButton_fixBitRate);
        QWidget::setTabOrder(radioButton_fixBitRate, comboBox_byteRate);

        toolBar->addAction(action_record);
        toolBar->addAction(action_pause);
        toolBar->addAction(action_stop);
        toolBar->addSeparator();
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_record->setText(QCoreApplication::translate("MainWindow", "\345\275\225\351\237\263", nullptr));
#if QT_CONFIG(tooltip)
        action_record->setToolTip(QCoreApplication::translate("MainWindow", "\345\275\225\351\237\263", nullptr));
#endif // QT_CONFIG(tooltip)
        action_pause->setText(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
#if QT_CONFIG(tooltip)
        action_pause->setToolTip(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
#endif // QT_CONFIG(tooltip)
        action_stop->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
#if QT_CONFIG(tooltip)
        action_stop->setToolTip(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_recodeOutputFile->setText(QCoreApplication::translate("MainWindow", "\345\275\225\351\237\263\350\276\223\345\207\272\346\226\207\344\273\266", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\267\262\345\275\225\345\210\2660\347\247\222", nullptr));
        groupBox_recordDevice->setTitle(QCoreApplication::translate("MainWindow", "\345\275\225\351\237\263\350\256\276\347\275\256", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\350\256\276\345\244\207", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\351\237\263\351\242\221\347\274\226\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\346\240\274\345\274\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\351\207\207\346\240\267\351\242\221\347\216\207", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\351\200\232\351\201\223\346\225\260", nullptr));
        groupBox_decodeMode->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\347\240\201\346\250\241\345\274\217", nullptr));
        radioButton_fixQuality->setText(QCoreApplication::translate("MainWindow", "\345\233\272\345\256\232\345\223\201\350\264\250", nullptr));
        radioButton_fixBitRate->setText(QCoreApplication::translate("MainWindow", "\345\233\272\345\256\232\346\257\224\347\211\271\347\216\207", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
