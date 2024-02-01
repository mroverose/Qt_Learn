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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_joinGroupCast;
    QAction *action_quitGroupCast;
    QAction *action_clearText;
    QAction *action_quit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_groupPort;
    QLabel *label_2;
    QComboBox *comboBox_groupIP;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_message;
    QPushButton *pushButton_sendMessage;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(529, 543);
        action_joinGroupCast = new QAction(MainWindow);
        action_joinGroupCast->setObjectName("action_joinGroupCast");
        action_joinGroupCast->setMenuRole(QAction::NoRole);
        action_quitGroupCast = new QAction(MainWindow);
        action_quitGroupCast->setObjectName("action_quitGroupCast");
        action_quitGroupCast->setMenuRole(QAction::NoRole);
        action_clearText = new QAction(MainWindow);
        action_clearText->setObjectName("action_clearText");
        action_clearText->setMenuRole(QAction::NoRole);
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

        spinBox_groupPort = new QSpinBox(centralwidget);
        spinBox_groupPort->setObjectName("spinBox_groupPort");
        spinBox_groupPort->setMinimum(4000);
        spinBox_groupPort->setMaximum(8000);

        horizontalLayout->addWidget(spinBox_groupPort);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        comboBox_groupIP = new QComboBox(centralwidget);
        comboBox_groupIP->addItem(QString());
        comboBox_groupIP->addItem(QString());
        comboBox_groupIP->setObjectName("comboBox_groupIP");

        horizontalLayout->addWidget(comboBox_groupIP);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit_message = new QLineEdit(centralwidget);
        lineEdit_message->setObjectName("lineEdit_message");

        horizontalLayout_2->addWidget(lineEdit_message);

        pushButton_sendMessage = new QPushButton(centralwidget);
        pushButton_sendMessage->setObjectName("pushButton_sendMessage");

        horizontalLayout_2->addWidget(pushButton_sendMessage);


        verticalLayout->addLayout(horizontalLayout_2);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 529, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_joinGroupCast);
        toolBar->addAction(action_quitGroupCast);
        toolBar->addSeparator();
        toolBar->addAction(action_clearText);
        toolBar->addSeparator();
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_clearText, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::clear));
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_joinGroupCast->setText(QCoreApplication::translate("MainWindow", "\345\212\240\345\205\245\347\273\204\346\222\255", nullptr));
#if QT_CONFIG(tooltip)
        action_joinGroupCast->setToolTip(QCoreApplication::translate("MainWindow", "\345\212\240\345\205\245\347\273\204\346\222\255", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quitGroupCast->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\273\204\346\222\255", nullptr));
#if QT_CONFIG(tooltip)
        action_quitGroupCast->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\273\204\346\222\255", nullptr));
#endif // QT_CONFIG(tooltip)
        action_clearText->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
#if QT_CONFIG(tooltip)
        action_clearText->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "\347\273\204\346\222\255\347\253\257\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\273\204\346\222\255IP\345\234\260\345\235\200", nullptr));
        comboBox_groupIP->setItemText(0, QCoreApplication::translate("MainWindow", "239.255.43.21", nullptr));
        comboBox_groupIP->setItemText(1, QCoreApplication::translate("MainWindow", "239.255.40.221", nullptr));

        pushButton_sendMessage->setText(QCoreApplication::translate("MainWindow", "\347\273\204\346\222\255\346\266\210\346\201\257", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
