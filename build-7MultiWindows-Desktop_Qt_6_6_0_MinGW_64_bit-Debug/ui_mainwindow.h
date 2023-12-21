/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_BuildInWidget;
    QAction *action_StandWidget;
    QAction *action_BuildInMainWindow;
    QAction *action_StandMainWindow;
    QAction *action_Close;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action_BuildInWidget = new QAction(MainWindow);
        action_BuildInWidget->setObjectName("action_BuildInWidget");
        action_StandWidget = new QAction(MainWindow);
        action_StandWidget->setObjectName("action_StandWidget");
        action_BuildInMainWindow = new QAction(MainWindow);
        action_BuildInMainWindow->setObjectName("action_BuildInMainWindow");
        action_StandMainWindow = new QAction(MainWindow);
        action_StandMainWindow->setObjectName("action_StandMainWindow");
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName("action_Close");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(30, 180, 231, 271));
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_BuildInWidget);
        toolBar->addAction(action_StandWidget);
        toolBar->addSeparator();
        toolBar->addAction(action_BuildInMainWindow);
        toolBar->addAction(action_StandMainWindow);
        toolBar->addSeparator();
        toolBar->addAction(action_Close);

        retranslateUi(MainWindow);
        QObject::connect(action_Close, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_BuildInWidget->setText(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217Widget", nullptr));
#if QT_CONFIG(tooltip)
        action_BuildInWidget->setToolTip(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217Widget\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        action_StandWidget->setText(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213Widget\347\252\227\345\217\243", nullptr));
#if QT_CONFIG(tooltip)
        action_StandWidget->setToolTip(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213Widget\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        action_BuildInMainWindow->setText(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        action_BuildInMainWindow->setToolTip(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217MainWindow\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        action_StandMainWindow->setText(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", nullptr));
#if QT_CONFIG(tooltip)
        action_StandMainWindow->setToolTip(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        action_Close->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Close->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
