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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tchartview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_cancelSelect;
    QAction *action_zoomIn;
    QAction *action_zoomOut;
    QAction *action_resetSize;
    QAction *action_quit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer;
    TChartView *chartView;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action_cancelSelect = new QAction(MainWindow);
        action_cancelSelect->setObjectName("action_cancelSelect");
        action_cancelSelect->setMenuRole(QAction::NoRole);
        action_zoomIn = new QAction(MainWindow);
        action_zoomIn->setObjectName("action_zoomIn");
        action_zoomIn->setMenuRole(QAction::NoRole);
        action_zoomOut = new QAction(MainWindow);
        action_zoomOut->setObjectName("action_zoomOut");
        action_zoomOut->setMenuRole(QAction::NoRole);
        action_resetSize = new QAction(MainWindow);
        action_resetSize->setObjectName("action_resetSize");
        action_resetSize->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout->addWidget(comboBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);

        chartView = new TChartView(centralwidget);
        chartView->setObjectName("chartView");

        verticalLayout->addWidget(chartView);

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

        toolBar->addAction(action_cancelSelect);
        toolBar->addSeparator();
        toolBar->addAction(action_zoomIn);
        toolBar->addAction(action_zoomOut);
        toolBar->addAction(action_resetSize);
        toolBar->addSeparator();
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_cancelSelect->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\351\200\211\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        action_cancelSelect->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\351\200\211\346\213\251\347\232\204\346\225\260\346\215\256\347\202\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_zoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#if QT_CONFIG(tooltip)
        action_zoomIn->setToolTip(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#endif // QT_CONFIG(tooltip)
        action_zoomOut->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        action_zoomOut->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
        action_resetSize->setText(QCoreApplication::translate("MainWindow", "\345\216\237\345\247\213\345\244\247\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        action_resetSize->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\347\275\256\344\270\272\345\216\237\345\247\213\345\244\247\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\346\234\254\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "Drag Mode", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "NoDrag", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "ScrollHandDrag", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "RubberBandDrag", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Rubber Band", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "NoRubberBand", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "VerticalRubberBand", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "HorizontalRubberBand", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "RectangleRubberBand", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("MainWindow", "RectangleRubberBand_Custom", nullptr));

        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
