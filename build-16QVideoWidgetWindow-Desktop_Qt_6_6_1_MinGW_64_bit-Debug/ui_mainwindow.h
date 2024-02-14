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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tmyvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    TMyVideoWidget *videoWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_openFile;
    QPushButton *pushButton_play;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_mutex;
    QSlider *horizontalSlider_volumn;
    QPushButton *pushButton_fullScreen;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_fileName;
    QSlider *horizontalSlider_playPosition;
    QLabel *label_playTime;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        videoWidget = new TMyVideoWidget(centralwidget);
        videoWidget->setObjectName("videoWidget");

        verticalLayout->addWidget(videoWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_openFile = new QPushButton(centralwidget);
        pushButton_openFile->setObjectName("pushButton_openFile");

        horizontalLayout->addWidget(pushButton_openFile);

        pushButton_play = new QPushButton(centralwidget);
        pushButton_play->setObjectName("pushButton_play");

        horizontalLayout->addWidget(pushButton_play);

        pushButton_pause = new QPushButton(centralwidget);
        pushButton_pause->setObjectName("pushButton_pause");

        horizontalLayout->addWidget(pushButton_pause);

        pushButton_stop = new QPushButton(centralwidget);
        pushButton_stop->setObjectName("pushButton_stop");

        horizontalLayout->addWidget(pushButton_stop);

        pushButton_mutex = new QPushButton(centralwidget);
        pushButton_mutex->setObjectName("pushButton_mutex");

        horizontalLayout->addWidget(pushButton_mutex);

        horizontalSlider_volumn = new QSlider(centralwidget);
        horizontalSlider_volumn->setObjectName("horizontalSlider_volumn");
        horizontalSlider_volumn->setMaximum(100);
        horizontalSlider_volumn->setValue(10);
        horizontalSlider_volumn->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_volumn);

        pushButton_fullScreen = new QPushButton(centralwidget);
        pushButton_fullScreen->setObjectName("pushButton_fullScreen");

        horizontalLayout->addWidget(pushButton_fullScreen);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_fileName = new QLabel(centralwidget);
        label_fileName->setObjectName("label_fileName");

        horizontalLayout_2->addWidget(label_fileName);

        horizontalSlider_playPosition = new QSlider(centralwidget);
        horizontalSlider_playPosition->setObjectName("horizontalSlider_playPosition");
        horizontalSlider_playPosition->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_playPosition);

        label_playTime = new QLabel(centralwidget);
        label_playTime->setObjectName("label_playTime");

        horizontalLayout_2->addWidget(label_playTime);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 89);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_openFile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        pushButton_play->setText(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276", nullptr));
        pushButton_pause->setText(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        pushButton_mutex->setText(QCoreApplication::translate("MainWindow", "\345\243\260\351\237\263", nullptr));
        pushButton_fullScreen->setText(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\217", nullptr));
        label_fileName->setText(QCoreApplication::translate("MainWindow", "\345\220\215\347\247\260", nullptr));
        label_playTime->setText(QCoreApplication::translate("MainWindow", "00:00/00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
