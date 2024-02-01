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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
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
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_url;
    QPushButton *pushButton_downLoad;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_saveFilePath;
    QPushButton *pushButton_defaultSavePath;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QProgressBar *progressBar_downLoad;
    QCheckBox *checkBox_openAfterDownload;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(682, 272);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        lineEdit_url = new QLineEdit(groupBox);
        lineEdit_url->setObjectName("lineEdit_url");

        horizontalLayout_3->addWidget(lineEdit_url);

        pushButton_downLoad = new QPushButton(groupBox);
        pushButton_downLoad->setObjectName("pushButton_downLoad");

        horizontalLayout_3->addWidget(pushButton_downLoad);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit_saveFilePath = new QLineEdit(groupBox_2);
        lineEdit_saveFilePath->setObjectName("lineEdit_saveFilePath");

        horizontalLayout->addWidget(lineEdit_saveFilePath);

        pushButton_defaultSavePath = new QPushButton(groupBox_2);
        pushButton_defaultSavePath->setObjectName("pushButton_defaultSavePath");

        horizontalLayout->addWidget(pushButton_defaultSavePath);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        progressBar_downLoad = new QProgressBar(groupBox_2);
        progressBar_downLoad->setObjectName("progressBar_downLoad");
        progressBar_downLoad->setValue(24);

        horizontalLayout_2->addWidget(progressBar_downLoad);

        checkBox_openAfterDownload = new QCheckBox(groupBox_2);
        checkBox_openAfterDownload->setObjectName("checkBox_openAfterDownload");

        horizontalLayout_2->addWidget(checkBox_openAfterDownload);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(1, 2);

        verticalLayout_3->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 682, 25));
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
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "URL:", nullptr));
        pushButton_downLoad->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\275\275", nullptr));
        groupBox_2->setTitle(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\275\275\346\226\207\344\273\266\344\277\235\345\255\230\350\267\257\345\276\204", nullptr));
        pushButton_defaultSavePath->setText(QCoreApplication::translate("MainWindow", "\351\273\230\350\256\244\350\267\257\345\276\204", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\344\270\213\350\275\275\350\277\233\345\272\246", nullptr));
        checkBox_openAfterDownload->setText(QCoreApplication::translate("MainWindow", "\345\256\214\346\210\220\345\220\216\346\211\223\345\274\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
