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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_addFile;
    QAction *action_removeFile;
    QAction *action_clearList;
    QAction *action_quit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_addItem;
    QPushButton *pushButton_removeItem;
    QPushButton *pushButton_clearList;
    QPushButton *pushButton_quit;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *listWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_picture;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_play;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_preItem;
    QPushButton *pushButton_nextItem;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton_recyclePlay;
    QPushButton *pushButton_mutex;
    QSlider *horizontalSlider_volumn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_playItem;
    QSlider *horizontalSlider_playTimeLine;
    QLabel *label_playProgress;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(490, 600);
        action_addFile = new QAction(MainWindow);
        action_addFile->setObjectName("action_addFile");
        action_addFile->setMenuRole(QAction::NoRole);
        action_removeFile = new QAction(MainWindow);
        action_removeFile->setObjectName("action_removeFile");
        action_removeFile->setMenuRole(QAction::NoRole);
        action_clearList = new QAction(MainWindow);
        action_clearList->setObjectName("action_clearList");
        action_clearList->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_addItem = new QPushButton(centralwidget);
        pushButton_addItem->setObjectName("pushButton_addItem");

        horizontalLayout_3->addWidget(pushButton_addItem);

        pushButton_removeItem = new QPushButton(centralwidget);
        pushButton_removeItem->setObjectName("pushButton_removeItem");

        horizontalLayout_3->addWidget(pushButton_removeItem);

        pushButton_clearList = new QPushButton(centralwidget);
        pushButton_clearList->setObjectName("pushButton_clearList");

        horizontalLayout_3->addWidget(pushButton_clearList);

        pushButton_quit = new QPushButton(centralwidget);
        pushButton_quit->setObjectName("pushButton_quit");

        horizontalLayout_3->addWidget(pushButton_quit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        horizontalLayout_4->addWidget(listWidget);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 227, 419));
        label_picture = new QLabel(scrollAreaWidgetContents);
        label_picture->setObjectName("label_picture");
        label_picture->setGeometry(QRect(10, 0, 182, 421));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_4->addWidget(scrollArea);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_play = new QPushButton(centralwidget);
        pushButton_play->setObjectName("pushButton_play");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/play.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_play->setIcon(icon);

        horizontalLayout->addWidget(pushButton_play);

        pushButton_pause = new QPushButton(centralwidget);
        pushButton_pause->setObjectName("pushButton_pause");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/pause.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_pause->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_pause);

        pushButton_stop = new QPushButton(centralwidget);
        pushButton_stop->setObjectName("pushButton_stop");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/stop.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_stop->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_stop);

        pushButton_preItem = new QPushButton(centralwidget);
        pushButton_preItem->setObjectName("pushButton_preItem");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/prev.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_preItem->setIcon(icon3);

        horizontalLayout->addWidget(pushButton_preItem);

        pushButton_nextItem = new QPushButton(centralwidget);
        pushButton_nextItem->setObjectName("pushButton_nextItem");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/next.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_nextItem->setIcon(icon4);

        horizontalLayout->addWidget(pushButton_nextItem);

        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setDecimals(2);
        doubleSpinBox->setMinimum(0.000000000000000);
        doubleSpinBox->setMaximum(3.000000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);
        doubleSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox);

        pushButton_recyclePlay = new QPushButton(centralwidget);
        pushButton_recyclePlay->setObjectName("pushButton_recyclePlay");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/next(1).ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_recyclePlay->setIcon(icon5);
        pushButton_recyclePlay->setCheckable(true);
        pushButton_recyclePlay->setChecked(false);
        pushButton_recyclePlay->setAutoDefault(false);
        pushButton_recyclePlay->setFlat(false);

        horizontalLayout->addWidget(pushButton_recyclePlay);

        pushButton_mutex = new QPushButton(centralwidget);
        pushButton_mutex->setObjectName("pushButton_mutex");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/volumn.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_mutex->setIcon(icon6);

        horizontalLayout->addWidget(pushButton_mutex);

        horizontalSlider_volumn = new QSlider(centralwidget);
        horizontalSlider_volumn->setObjectName("horizontalSlider_volumn");
        horizontalSlider_volumn->setValue(10);
        horizontalSlider_volumn->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_volumn);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_playItem = new QLabel(centralwidget);
        label_playItem->setObjectName("label_playItem");

        horizontalLayout_2->addWidget(label_playItem);

        horizontalSlider_playTimeLine = new QSlider(centralwidget);
        horizontalSlider_playTimeLine->setObjectName("horizontalSlider_playTimeLine");
        horizontalSlider_playTimeLine->setSingleStep(0);
        horizontalSlider_playTimeLine->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_playTimeLine);

        label_playProgress = new QLabel(centralwidget);
        label_playProgress->setObjectName("label_playProgress");

        horizontalLayout_2->addWidget(label_playProgress);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 10);
        horizontalLayout_2->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 490, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButton_recyclePlay->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_addFile->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
#if QT_CONFIG(tooltip)
        action_addFile->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        action_removeFile->setText(QCoreApplication::translate("MainWindow", "\347\247\273\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        action_removeFile->setToolTip(QCoreApplication::translate("MainWindow", "\347\247\273\351\231\244\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        action_clearList->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        action_clearList->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\222\255\346\224\276\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\346\222\255\346\224\276\345\231\250", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_addItem->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        pushButton_removeItem->setText(QCoreApplication::translate("MainWindow", "\347\247\273\351\231\244", nullptr));
        pushButton_clearList->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        pushButton_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label_picture->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_play->setText(QString());
        pushButton_pause->setText(QString());
        pushButton_stop->setText(QString());
        pushButton_preItem->setText(QString());
        pushButton_nextItem->setText(QString());
        pushButton_recyclePlay->setText(QCoreApplication::translate("MainWindow", "\345\276\252\347\216\257", nullptr));
        pushButton_mutex->setText(QString());
        label_playItem->setText(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276\346\233\262\347\233\256", nullptr));
        label_playProgress->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
