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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionAppend;
    QAction *actionInsert;
    QAction *actionDelete;
    QAction *actionExit;
    QAction *actionModelData;
    QAction *actionAlignLeft;
    QAction *actionAlignRight;
    QAction *actionAlighCenter;
    QAction *actionFontBold;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(541, 434);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionAppend = new QAction(MainWindow);
        actionAppend->setObjectName("actionAppend");
        actionInsert = new QAction(MainWindow);
        actionInsert->setObjectName("actionInsert");
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName("actionDelete");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionModelData = new QAction(MainWindow);
        actionModelData->setObjectName("actionModelData");
        actionAlignLeft = new QAction(MainWindow);
        actionAlignLeft->setObjectName("actionAlignLeft");
        actionAlignRight = new QAction(MainWindow);
        actionAlignRight->setObjectName("actionAlignRight");
        actionAlighCenter = new QAction(MainWindow);
        actionAlighCenter->setObjectName("actionAlighCenter");
        actionFontBold = new QAction(MainWindow);
        actionFontBold->setObjectName("actionFontBold");
        actionFontBold->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        tableView = new QTableView(groupBox);
        tableView->setObjectName("tableView");

        verticalLayout_2->addWidget(tableView);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout->addWidget(plainTextEdit);


        horizontalLayout->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 541, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionOpen);
        toolBar->addAction(actionModelData);
        toolBar->addSeparator();
        toolBar->addAction(actionAppend);
        toolBar->addAction(actionInsert);
        toolBar->addAction(actionDelete);
        toolBar->addSeparator();
        toolBar->addAction(actionAlignLeft);
        toolBar->addAction(actionAlighCenter);
        toolBar->addAction(actionAlignRight);
        toolBar->addAction(actionFontBold);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSave->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("MainWindow", "\350\241\250\346\240\274\345\206\205\345\256\271\345\217\246\345\255\230\344\270\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAppend->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", nullptr));
#if QT_CONFIG(tooltip)
        actionAppend->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\344\270\200\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInsert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
#if QT_CONFIG(tooltip)
        actionInsert->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\344\270\200\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\241\214", nullptr));
#if QT_CONFIG(tooltip)
        actionDelete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actionModelData->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\351\242\204\350\247\210", nullptr));
#if QT_CONFIG(tooltip)
        actionModelData->setToolTip(QCoreApplication::translate("MainWindow", "\346\250\241\345\236\213\346\225\260\346\215\256\346\230\276\347\244\272\345\210\260\346\226\207\346\234\254\346\241\206\351\207\214", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAlignLeft->setText(QCoreApplication::translate("MainWindow", "\345\261\205\345\267\246", nullptr));
#if QT_CONFIG(tooltip)
        actionAlignLeft->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\345\267\246\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAlignRight->setText(QCoreApplication::translate("MainWindow", "\345\261\205\345\217\263", nullptr));
#if QT_CONFIG(tooltip)
        actionAlignRight->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\345\217\263\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAlighCenter->setText(QCoreApplication::translate("MainWindow", "\345\261\205\344\270\255", nullptr));
#if QT_CONFIG(tooltip)
        actionAlighCenter->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\345\261\205\344\270\255\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFontBold->setText(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actionFontBold->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223\346\226\207\345\255\227", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "TableView", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "PlainTextEdit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
