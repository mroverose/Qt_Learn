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
    QAction *action_bindPort;
    QAction *action_unBindPort;
    QAction *action_clearText;
    QAction *action_quit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_bindPort;
    QLabel *label_2;
    QComboBox *comboBox_tartgetAddr;
    QLabel *label_3;
    QSpinBox *spinBox_targetPort;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_sendMessage;
    QPushButton *pushButton_broadcastMessage;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(494, 600);
        action_bindPort = new QAction(MainWindow);
        action_bindPort->setObjectName("action_bindPort");
        action_bindPort->setMenuRole(QAction::NoRole);
        action_unBindPort = new QAction(MainWindow);
        action_unBindPort->setObjectName("action_unBindPort");
        action_unBindPort->setMenuRole(QAction::NoRole);
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

        spinBox_bindPort = new QSpinBox(centralwidget);
        spinBox_bindPort->setObjectName("spinBox_bindPort");
        spinBox_bindPort->setMinimum(4000);
        spinBox_bindPort->setMaximum(8000);

        horizontalLayout->addWidget(spinBox_bindPort);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        comboBox_tartgetAddr = new QComboBox(centralwidget);
        comboBox_tartgetAddr->setObjectName("comboBox_tartgetAddr");

        horizontalLayout->addWidget(comboBox_tartgetAddr);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        spinBox_targetPort = new QSpinBox(centralwidget);
        spinBox_targetPort->setObjectName("spinBox_targetPort");
        spinBox_targetPort->setMinimum(4000);
        spinBox_targetPort->setMaximum(8000);

        horizontalLayout->addWidget(spinBox_targetPort);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_sendMessage = new QPushButton(centralwidget);
        pushButton_sendMessage->setObjectName("pushButton_sendMessage");

        horizontalLayout_2->addWidget(pushButton_sendMessage);

        pushButton_broadcastMessage = new QPushButton(centralwidget);
        pushButton_broadcastMessage->setObjectName("pushButton_broadcastMessage");

        horizontalLayout_2->addWidget(pushButton_broadcastMessage);


        verticalLayout->addLayout(horizontalLayout_2);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 494, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_bindPort);
        toolBar->addAction(action_unBindPort);
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
        action_bindPort->setText(QCoreApplication::translate("MainWindow", "\347\273\221\345\256\232\347\253\257\345\217\243", nullptr));
#if QT_CONFIG(tooltip)
        action_bindPort->setToolTip(QCoreApplication::translate("MainWindow", "\347\273\221\345\256\232\347\253\257\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        action_unBindPort->setText(QCoreApplication::translate("MainWindow", "\350\247\243\347\273\221\347\253\257\345\217\243", nullptr));
#if QT_CONFIG(tooltip)
        action_unBindPort->setToolTip(QCoreApplication::translate("MainWindow", "\350\247\243\347\273\221\347\253\257\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        action_clearText->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
#if QT_CONFIG(tooltip)
        action_clearText->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "\347\273\221\345\256\232\347\253\257\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207\345\234\260\345\235\200", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207\347\253\257\345\217\243", nullptr));
        pushButton_sendMessage->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        pushButton_broadcastMessage->setText(QCoreApplication::translate("MainWindow", "\345\271\277\346\222\255\346\266\210\346\201\257", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
