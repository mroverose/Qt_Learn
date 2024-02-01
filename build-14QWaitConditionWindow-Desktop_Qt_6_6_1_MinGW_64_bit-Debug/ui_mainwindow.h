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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_startThread;
    QAction *action_start;
    QAction *action_pause;
    QAction *action_stopThread;
    QAction *action_clearText;
    QAction *action_close;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action_startThread = new QAction(MainWindow);
        action_startThread->setObjectName("action_startThread");
        action_startThread->setMenuRole(QAction::NoRole);
        action_start = new QAction(MainWindow);
        action_start->setObjectName("action_start");
        action_start->setMenuRole(QAction::NoRole);
        action_pause = new QAction(MainWindow);
        action_pause->setObjectName("action_pause");
        action_pause->setMenuRole(QAction::NoRole);
        action_stopThread = new QAction(MainWindow);
        action_stopThread->setObjectName("action_stopThread");
        action_stopThread->setMenuRole(QAction::NoRole);
        action_clearText = new QAction(MainWindow);
        action_clearText->setObjectName("action_clearText");
        action_clearText->setMenuRole(QAction::NoRole);
        action_close = new QAction(MainWindow);
        action_close->setObjectName("action_close");
        action_close->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");

        horizontalLayout->addWidget(plainTextEdit);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        verticalLayout->addWidget(label);


        horizontalLayout->addWidget(groupBox);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        horizontalLayout_2->addLayout(horizontalLayout);

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

        toolBar->addAction(action_startThread);
        toolBar->addAction(action_stopThread);
        toolBar->addSeparator();
        toolBar->addAction(action_clearText);
        toolBar->addSeparator();
        toolBar->addAction(action_close);

        retranslateUi(MainWindow);
        QObject::connect(action_close, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_startThread->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250\347\272\277\347\250\213", nullptr));
#if QT_CONFIG(tooltip)
        action_startThread->setToolTip(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250\347\272\277\347\250\213", nullptr));
#endif // QT_CONFIG(tooltip)
        action_start->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
#if QT_CONFIG(tooltip)
        action_start->setToolTip(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\350\277\220\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        action_pause->setText(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
#if QT_CONFIG(tooltip)
        action_pause->setToolTip(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234\350\277\220\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        action_stopThread->setText(QCoreApplication::translate("MainWindow", "\347\273\223\346\235\237\347\272\277\347\250\213", nullptr));
#if QT_CONFIG(tooltip)
        action_stopThread->setToolTip(QCoreApplication::translate("MainWindow", "\347\273\223\346\235\237\347\272\277\347\250\213", nullptr));
#endif // QT_CONFIG(tooltip)
        action_clearText->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        action_clearText->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
        action_close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        action_close->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
