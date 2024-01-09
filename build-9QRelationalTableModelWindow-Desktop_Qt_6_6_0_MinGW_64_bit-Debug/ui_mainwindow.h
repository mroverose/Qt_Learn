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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_openDB;
    QAction *action_add;
    QAction *action_insert;
    QAction *action_del;
    QAction *action_save;
    QAction *action_cancel;
    QAction *action_listRecord;
    QAction *action_quit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action_openDB = new QAction(MainWindow);
        action_openDB->setObjectName("action_openDB");
        action_add = new QAction(MainWindow);
        action_add->setObjectName("action_add");
        action_insert = new QAction(MainWindow);
        action_insert->setObjectName("action_insert");
        action_del = new QAction(MainWindow);
        action_del->setObjectName("action_del");
        action_save = new QAction(MainWindow);
        action_save->setObjectName("action_save");
        action_cancel = new QAction(MainWindow);
        action_cancel->setObjectName("action_cancel");
        action_listRecord = new QAction(MainWindow);
        action_listRecord->setObjectName("action_listRecord");
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

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

        toolBar->addAction(action_openDB);
        toolBar->addAction(action_add);
        toolBar->addAction(action_insert);
        toolBar->addAction(action_del);
        toolBar->addSeparator();
        toolBar->addAction(action_save);
        toolBar->addAction(action_cancel);
        toolBar->addSeparator();
        toolBar->addAction(action_listRecord);
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_openDB->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_openDB->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        action_add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
#if QT_CONFIG(tooltip)
        action_add->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        action_insert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245", nullptr));
#if QT_CONFIG(tooltip)
        action_insert->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        action_del->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        action_del->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        action_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        action_save->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        action_cancel->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
#if QT_CONFIG(tooltip)
        action_cancel->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\346\233\264\346\224\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_listRecord->setText(QCoreApplication::translate("MainWindow", "\345\255\227\346\256\265\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(tooltip)
        action_listRecord->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\227\345\207\272\345\220\204\344\270\252\345\255\227\346\256\265", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
