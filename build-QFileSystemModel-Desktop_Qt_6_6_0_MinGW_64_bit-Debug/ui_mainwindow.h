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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSetRoot;
    QAction *actionClose;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_ShowDirAndFiles;
    QRadioButton *radioButton_ShowDir;
    QGroupBox *groupBox_filter;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_FileNameFilter;
    QComboBox *comboBox_FileNameFilter;
    QPushButton *pushButton_Apply;
    QTreeView *treeView;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QListView *listView;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QTableView *tableView;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_FileName;
    QLabel *label_FileSize;
    QLabel *label_FileType;
    QCheckBox *checkBox_FileIsDir;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(532, 411);
        actionSetRoot = new QAction(MainWindow);
        actionSetRoot->setObjectName("actionSetRoot");
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName("actionClose");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setSpacing(1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, -1, -1, 1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        radioButton_ShowDirAndFiles = new QRadioButton(groupBox);
        radioButton_ShowDirAndFiles->setObjectName("radioButton_ShowDirAndFiles");

        horizontalLayout->addWidget(radioButton_ShowDirAndFiles);

        radioButton_ShowDir = new QRadioButton(groupBox);
        radioButton_ShowDir->setObjectName("radioButton_ShowDir");

        horizontalLayout->addWidget(radioButton_ShowDir);


        verticalLayout->addLayout(horizontalLayout);

        groupBox_filter = new QGroupBox(groupBox);
        groupBox_filter->setObjectName("groupBox_filter");
        horizontalLayout_2 = new QHBoxLayout(groupBox_filter);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBox_FileNameFilter = new QCheckBox(groupBox_filter);
        checkBox_FileNameFilter->setObjectName("checkBox_FileNameFilter");

        horizontalLayout_2->addWidget(checkBox_FileNameFilter);

        comboBox_FileNameFilter = new QComboBox(groupBox_filter);
        comboBox_FileNameFilter->addItem(QString());
        comboBox_FileNameFilter->addItem(QString());
        comboBox_FileNameFilter->setObjectName("comboBox_FileNameFilter");

        horizontalLayout_2->addWidget(comboBox_FileNameFilter);

        pushButton_Apply = new QPushButton(groupBox_filter);
        pushButton_Apply->setObjectName("pushButton_Apply");

        horizontalLayout_2->addWidget(pushButton_Apply);


        verticalLayout->addWidget(groupBox_filter);

        treeView = new QTreeView(groupBox);
        treeView->setObjectName("treeView");

        verticalLayout->addWidget(treeView);


        horizontalLayout_3->addWidget(groupBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        listView = new QListView(groupBox_2);
        listView->setObjectName("listView");

        verticalLayout_4->addWidget(listView);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(groupBox_3);
        tableView->setObjectName("tableView");

        verticalLayout_5->addWidget(tableView);


        verticalLayout_2->addWidget(groupBox_3);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_3);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, 8, -1, 0);
        label_FileName = new QLabel(groupBox_4);
        label_FileName->setObjectName("label_FileName");

        horizontalLayout_4->addWidget(label_FileName);

        label_FileSize = new QLabel(groupBox_4);
        label_FileSize->setObjectName("label_FileSize");

        horizontalLayout_4->addWidget(label_FileSize);

        label_FileType = new QLabel(groupBox_4);
        label_FileType->setObjectName("label_FileType");

        horizontalLayout_4->addWidget(label_FileType);

        checkBox_FileIsDir = new QCheckBox(groupBox_4);
        checkBox_FileIsDir->setObjectName("checkBox_FileIsDir");

        horizontalLayout_4->addWidget(checkBox_FileIsDir);


        verticalLayout_3->addWidget(groupBox_4);

        verticalLayout_3->setStretch(0, 6);
        verticalLayout_3->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 532, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionSetRoot);
        toolBar->addSeparator();
        toolBar->addAction(actionClose);

        retranslateUi(MainWindow);
        QObject::connect(actionClose, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\347\263\273\347\273\237Mode/View", nullptr));
        actionSetRoot->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\271\347\233\256\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        actionSetRoot->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\271\347\233\256\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        actionClose->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "TreeView", nullptr));
        radioButton_ShowDirAndFiles->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\347\233\256\345\275\225\345\222\214\346\226\207\344\273\266", nullptr));
        radioButton_ShowDir->setText(QCoreApplication::translate("MainWindow", "\345\217\252\346\230\276\347\244\272\347\233\256\345\275\225", nullptr));
        groupBox_filter->setTitle(QString());
        checkBox_FileNameFilter->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215\350\277\207\346\273\244", nullptr));
        comboBox_FileNameFilter->setItemText(0, QCoreApplication::translate("MainWindow", "*.h;*.cpp;*.ui", nullptr));
        comboBox_FileNameFilter->setItemText(1, QCoreApplication::translate("MainWindow", "*.txt;*.jpg;*.png;*.jpej;*.gif", nullptr));

        pushButton_Apply->setText(QCoreApplication::translate("MainWindow", "\345\272\224\347\224\250", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "ListView", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "TableView", nullptr));
        groupBox_4->setTitle(QString());
        label_FileName->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215", nullptr));
        label_FileSize->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\247\345\260\217", nullptr));
        label_FileType->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\347\261\273\345\236\213", nullptr));
        checkBox_FileIsDir->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\346\230\257\347\233\256\345\275\225", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
