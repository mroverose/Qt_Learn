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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_open;
    QAction *action_editRec;
    QAction *action_insert;
    QAction *action_delete;
    QAction *action_setPhoto;
    QAction *action_delPhoto;
    QAction *action_submit;
    QAction *action_quit;
    QAction *action_Revert;
    QAction *action_scan;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_15;
    QGroupBox *groupBox_tableData;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_14;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(462, 564);
        action_open = new QAction(MainWindow);
        action_open->setObjectName("action_open");
        action_editRec = new QAction(MainWindow);
        action_editRec->setObjectName("action_editRec");
        action_insert = new QAction(MainWindow);
        action_insert->setObjectName("action_insert");
        action_delete = new QAction(MainWindow);
        action_delete->setObjectName("action_delete");
        action_setPhoto = new QAction(MainWindow);
        action_setPhoto->setObjectName("action_setPhoto");
        action_delPhoto = new QAction(MainWindow);
        action_delPhoto->setObjectName("action_delPhoto");
        action_submit = new QAction(MainWindow);
        action_submit->setObjectName("action_submit");
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_Revert = new QAction(MainWindow);
        action_Revert->setObjectName("action_Revert");
        action_scan = new QAction(MainWindow);
        action_scan->setObjectName("action_scan");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_15 = new QHBoxLayout(centralwidget);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        groupBox_tableData = new QGroupBox(centralwidget);
        groupBox_tableData->setObjectName("groupBox_tableData");
        verticalLayout_4 = new QVBoxLayout(groupBox_tableData);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");

        verticalLayout_4->addLayout(horizontalLayout_14);

        tableView = new QTableView(groupBox_tableData);
        tableView->setObjectName("tableView");

        verticalLayout_4->addWidget(tableView);


        horizontalLayout_15->addWidget(groupBox_tableData);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 462, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_open);
        toolBar->addSeparator();
        toolBar->addAction(action_insert);
        toolBar->addAction(action_editRec);
        toolBar->addAction(action_delete);
        toolBar->addSeparator();
        toolBar->addAction(action_scan);
        toolBar->addSeparator();
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", nullptr));
#if QT_CONFIG(tooltip)
        action_open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", nullptr));
#endif // QT_CONFIG(tooltip)
        action_editRec->setText(QCoreApplication::translate("MainWindow", "\347\274\226\347\274\211\350\256\260\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        action_editRec->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\226\347\274\211\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        action_insert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\256\260\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        action_insert->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\256\260\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        action_delete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_setPhoto->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\347\205\247\347\211\207", nullptr));
#if QT_CONFIG(tooltip)
        action_setPhoto->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\347\205\247\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        action_delPhoto->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\347\205\247\347\211\207", nullptr));
#if QT_CONFIG(tooltip)
        action_delPhoto->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\347\205\247\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        action_submit->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        action_submit->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Revert->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
#if QT_CONFIG(tooltip)
        action_Revert->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\344\277\256\344\277\256\346\224\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_scan->setText(QCoreApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", nullptr));
#if QT_CONFIG(tooltip)
        action_scan->setToolTip(QCoreApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_tableData->setTitle(QString());
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
