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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_OpenFile;
    QAction *action_SaveFile;
    QAction *action_SaveSaveFile;
    QAction *action_OpenQTextStream;
    QAction *action_SaveQTextStream;
    QAction *action_Close;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action_OpenFile = new QAction(MainWindow);
        action_OpenFile->setObjectName("action_OpenFile");
        action_SaveFile = new QAction(MainWindow);
        action_SaveFile->setObjectName("action_SaveFile");
        action_SaveSaveFile = new QAction(MainWindow);
        action_SaveSaveFile->setObjectName("action_SaveSaveFile");
        action_OpenQTextStream = new QAction(MainWindow);
        action_OpenQTextStream->setObjectName("action_OpenQTextStream");
        action_SaveQTextStream = new QAction(MainWindow);
        action_SaveQTextStream->setObjectName("action_SaveQTextStream");
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName("action_Close");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName("verticalLayout");
        plainTextEdit = new QPlainTextEdit(tab);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout->addWidget(plainTextEdit);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        plainTextEdit_2 = new QPlainTextEdit(tab_2);
        plainTextEdit_2->setObjectName("plainTextEdit_2");

        verticalLayout_2->addWidget(plainTextEdit_2);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);

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

        toolBar->addAction(action_OpenFile);
        toolBar->addAction(action_SaveFile);
        toolBar->addAction(action_SaveSaveFile);
        toolBar->addSeparator();
        toolBar->addAction(action_OpenQTextStream);
        toolBar->addAction(action_SaveQTextStream);
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
        action_OpenFile->setText(QCoreApplication::translate("MainWindow", "QFile\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_OpenFile->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SaveFile->setText(QCoreApplication::translate("MainWindow", "QFile\345\217\246\345\255\230\344\270\272", nullptr));
#if QT_CONFIG(tooltip)
        action_SaveFile->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\217\246\345\255\230\344\270\272", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SaveSaveFile->setText(QCoreApplication::translate("MainWindow", "QSaveFile\345\217\246\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        action_SaveSaveFile->setToolTip(QCoreApplication::translate("MainWindow", "Save\345\217\246\345\255\230\344\270\272", nullptr));
#endif // QT_CONFIG(tooltip)
        action_OpenQTextStream->setText(QCoreApplication::translate("MainWindow", "QTextStream\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_OpenQTextStream->setToolTip(QCoreApplication::translate("MainWindow", "Steam\346\250\241\345\274\217\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SaveQTextStream->setText(QCoreApplication::translate("MainWindow", "QTextStream\345\217\246\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        action_SaveQTextStream->setToolTip(QCoreApplication::translate("MainWindow", "Stream\346\250\241\345\274\217\346\226\207\344\273\266\345\217\246\345\255\230\344\270\272", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Close->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_Close->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
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
