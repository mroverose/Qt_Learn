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
    QAction *action_SetRowAndCol;
    QAction *action_SetTableHeader;
    QAction *action_LocateCell;
    QAction *action_Close;
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
        MainWindow->resize(526, 351);
        action_SetRowAndCol = new QAction(MainWindow);
        action_SetRowAndCol->setObjectName("action_SetRowAndCol");
        action_SetTableHeader = new QAction(MainWindow);
        action_SetTableHeader->setObjectName("action_SetTableHeader");
        action_LocateCell = new QAction(MainWindow);
        action_LocateCell->setObjectName("action_LocateCell");
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName("action_Close");
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
        menubar->setGeometry(QRect(0, 0, 526, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_SetRowAndCol);
        toolBar->addAction(action_SetTableHeader);
        toolBar->addAction(action_LocateCell);
        toolBar->addAction(action_Close);

        retranslateUi(MainWindow);
        QObject::connect(action_Close, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\345\257\271\350\257\235\346\241\206\347\232\204\344\275\277\347\224\250", nullptr));
        action_SetRowAndCol->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\214\345\210\227\346\225\260", nullptr));
#if QT_CONFIG(tooltip)
        action_SetRowAndCol->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\214\345\210\227\346\225\260", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SetTableHeader->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
#if QT_CONFIG(tooltip)
        action_SetTableHeader->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
#endif // QT_CONFIG(tooltip)
        action_LocateCell->setText(QCoreApplication::translate("MainWindow", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", nullptr));
#if QT_CONFIG(tooltip)
        action_LocateCell->setToolTip(QCoreApplication::translate("MainWindow", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Close->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_Close->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
