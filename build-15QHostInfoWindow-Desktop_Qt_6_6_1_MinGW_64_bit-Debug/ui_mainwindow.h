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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_getLocalHost;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_name;
    QPushButton *pushButton_findNameIP;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_allAddresses;
    QPushButton *pushButton_allInterfaces;
    QCheckBox *checkBox;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(499, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_getLocalHost = new QPushButton(groupBox);
        pushButton_getLocalHost->setObjectName("pushButton_getLocalHost");

        verticalLayout->addWidget(pushButton_getLocalHost);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox_name = new QComboBox(groupBox);
        comboBox_name->addItem(QString());
        comboBox_name->addItem(QString());
        comboBox_name->addItem(QString());
        comboBox_name->addItem(QString());
        comboBox_name->addItem(QString());
        comboBox_name->setObjectName("comboBox_name");

        horizontalLayout->addWidget(comboBox_name);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_findNameIP = new QPushButton(groupBox);
        pushButton_findNameIP->setObjectName("pushButton_findNameIP");

        verticalLayout->addWidget(pushButton_findNameIP);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_allAddresses = new QPushButton(groupBox_2);
        pushButton_allAddresses->setObjectName("pushButton_allAddresses");

        verticalLayout_2->addWidget(pushButton_allAddresses);

        pushButton_allInterfaces = new QPushButton(groupBox_2);
        pushButton_allInterfaces->setObjectName("pushButton_allInterfaces");

        verticalLayout_2->addWidget(pushButton_allInterfaces);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName("checkBox");

        verticalLayout_2->addWidget(checkBox);


        horizontalLayout_2->addWidget(groupBox_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout_3->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 499, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "QHostInfo", nullptr));
        pushButton_getLocalHost->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\346\234\254\346\234\272\344\270\273\346\234\272\345\220\215\345\222\214\345\234\260\345\235\200", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\237\237\345\220\215", nullptr));
        comboBox_name->setItemText(0, QCoreApplication::translate("MainWindow", "www.baidu.com", nullptr));
        comboBox_name->setItemText(1, QCoreApplication::translate("MainWindow", "www.ptpress.com.cn", nullptr));
        comboBox_name->setItemText(2, QCoreApplication::translate("MainWindow", "www.facebook.com", nullptr));
        comboBox_name->setItemText(3, QCoreApplication::translate("MainWindow", "www.google.com", nullptr));
        comboBox_name->setItemText(4, QCoreApplication::translate("MainWindow", "www.douban.com", nullptr));

        pushButton_findNameIP->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276\345\237\237\345\220\215\347\232\204IP\345\234\260\345\235\200", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "QNetworkInterface", nullptr));
        pushButton_allAddresses->setText(QCoreApplication::translate("MainWindow", "allAddresses()", nullptr));
        pushButton_allInterfaces->setText(QCoreApplication::translate("MainWindow", "allInterfaces()", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\217\252\346\230\276\347\244\272IPv4\345\234\260\345\235\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
