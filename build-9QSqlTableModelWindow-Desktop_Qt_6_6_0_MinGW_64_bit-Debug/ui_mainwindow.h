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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
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
    QAction *action_add;
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
    QGroupBox *groupBox_sort;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QComboBox *comboBox_sortItem;
    QRadioButton *radioButton_ascend;
    QRadioButton *radioButton_Descend;
    QGroupBox *groupBox_dataFilter;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QRadioButton *radioButton_all;
    QTableView *tableView;
    QGroupBox *groupBox_curRecord;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_numberID;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_gender;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_birth;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_province;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_department;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpinBox *spinBox_salary;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_photo;
    QGroupBox *groupBox_notation;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(875, 564);
        action_open = new QAction(MainWindow);
        action_open->setObjectName("action_open");
        action_add = new QAction(MainWindow);
        action_add->setObjectName("action_add");
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
        groupBox_sort = new QGroupBox(groupBox_tableData);
        groupBox_sort->setObjectName("groupBox_sort");
        horizontalLayout_11 = new QHBoxLayout(groupBox_sort);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label = new QLabel(groupBox_sort);
        label->setObjectName("label");

        horizontalLayout_10->addWidget(label);

        comboBox_sortItem = new QComboBox(groupBox_sort);
        comboBox_sortItem->setObjectName("comboBox_sortItem");

        horizontalLayout_10->addWidget(comboBox_sortItem);

        radioButton_ascend = new QRadioButton(groupBox_sort);
        radioButton_ascend->setObjectName("radioButton_ascend");

        horizontalLayout_10->addWidget(radioButton_ascend);

        radioButton_Descend = new QRadioButton(groupBox_sort);
        radioButton_Descend->setObjectName("radioButton_Descend");

        horizontalLayout_10->addWidget(radioButton_Descend);


        horizontalLayout_11->addLayout(horizontalLayout_10);


        horizontalLayout_14->addWidget(groupBox_sort);

        groupBox_dataFilter = new QGroupBox(groupBox_tableData);
        groupBox_dataFilter->setObjectName("groupBox_dataFilter");
        horizontalLayout_13 = new QHBoxLayout(groupBox_dataFilter);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        radioButton_male = new QRadioButton(groupBox_dataFilter);
        radioButton_male->setObjectName("radioButton_male");

        horizontalLayout_12->addWidget(radioButton_male);

        radioButton_female = new QRadioButton(groupBox_dataFilter);
        radioButton_female->setObjectName("radioButton_female");

        horizontalLayout_12->addWidget(radioButton_female);

        radioButton_all = new QRadioButton(groupBox_dataFilter);
        radioButton_all->setObjectName("radioButton_all");

        horizontalLayout_12->addWidget(radioButton_all);


        horizontalLayout_13->addLayout(horizontalLayout_12);


        horizontalLayout_14->addWidget(groupBox_dataFilter);


        verticalLayout_4->addLayout(horizontalLayout_14);

        tableView = new QTableView(groupBox_tableData);
        tableView->setObjectName("tableView");

        verticalLayout_4->addWidget(tableView);


        horizontalLayout_15->addWidget(groupBox_tableData);

        groupBox_curRecord = new QGroupBox(centralwidget);
        groupBox_curRecord->setObjectName("groupBox_curRecord");
        verticalLayout_5 = new QVBoxLayout(groupBox_curRecord);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        groupBox_5 = new QGroupBox(groupBox_curRecord);
        groupBox_5->setObjectName("groupBox_5");
        verticalLayout = new QVBoxLayout(groupBox_5);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        spinBox_numberID = new QSpinBox(groupBox_5);
        spinBox_numberID->setObjectName("spinBox_numberID");
        spinBox_numberID->setMinimum(1);
        spinBox_numberID->setMaximum(9999);

        horizontalLayout_2->addWidget(spinBox_numberID);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_name = new QLineEdit(groupBox_5);
        lineEdit_name->setObjectName("lineEdit_name");

        horizontalLayout_3->addWidget(lineEdit_name);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit_gender = new QLineEdit(groupBox_5);
        lineEdit_gender->setObjectName("lineEdit_gender");

        horizontalLayout_4->addWidget(lineEdit_gender);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        lineEdit_birth = new QLineEdit(groupBox_5);
        lineEdit_birth->setObjectName("lineEdit_birth");

        horizontalLayout_5->addWidget(lineEdit_birth);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        lineEdit_province = new QLineEdit(groupBox_5);
        lineEdit_province->setObjectName("lineEdit_province");

        horizontalLayout_6->addWidget(lineEdit_province);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        lineEdit_department = new QLineEdit(groupBox_5);
        lineEdit_department->setObjectName("lineEdit_department");

        horizontalLayout_7->addWidget(lineEdit_department);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName("label_8");

        horizontalLayout_8->addWidget(label_8);

        spinBox_salary = new QSpinBox(groupBox_5);
        spinBox_salary->setObjectName("spinBox_salary");
        spinBox_salary->setMinimum(1000);
        spinBox_salary->setMaximum(999999);

        horizontalLayout_8->addWidget(spinBox_salary);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_9->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(groupBox_curRecord);
        groupBox_6->setObjectName("groupBox_6");
        verticalLayout_2 = new QVBoxLayout(groupBox_6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_photo = new QLabel(groupBox_6);
        label_photo->setObjectName("label_photo");

        verticalLayout_2->addWidget(label_photo);


        horizontalLayout_9->addWidget(groupBox_6);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_9);

        groupBox_notation = new QGroupBox(groupBox_curRecord);
        groupBox_notation->setObjectName("groupBox_notation");
        horizontalLayout = new QHBoxLayout(groupBox_notation);
        horizontalLayout->setObjectName("horizontalLayout");
        plainTextEdit = new QPlainTextEdit(groupBox_notation);
        plainTextEdit->setObjectName("plainTextEdit");

        horizontalLayout->addWidget(plainTextEdit);


        verticalLayout_3->addWidget(groupBox_notation);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);

        verticalLayout_5->addLayout(verticalLayout_3);


        horizontalLayout_15->addWidget(groupBox_curRecord);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 875, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_open);
        toolBar->addSeparator();
        toolBar->addAction(action_add);
        toolBar->addAction(action_insert);
        toolBar->addAction(action_delete);
        toolBar->addSeparator();
        toolBar->addAction(action_setPhoto);
        toolBar->addAction(action_delPhoto);
        toolBar->addAction(action_scan);
        toolBar->addSeparator();
        toolBar->addAction(action_submit);
        toolBar->addAction(action_Revert);
        toolBar->addSeparator();
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", nullptr));
#endif // QT_CONFIG(tooltip)
        action_add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
#if QT_CONFIG(tooltip)
        action_add->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_insert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245", nullptr));
#if QT_CONFIG(tooltip)
        action_insert->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
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
        groupBox_tableData->setTitle(QCoreApplication::translate("MainWindow", "\350\241\250\346\240\274\346\225\260\346\215\256", nullptr));
        groupBox_sort->setTitle(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217\345\255\227\346\256\265", nullptr));
        radioButton_ascend->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217", nullptr));
        radioButton_Descend->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217", nullptr));
        groupBox_dataFilter->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\350\277\207\346\273\244", nullptr));
        radioButton_male->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        radioButton_female->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        radioButton_all->setText(QCoreApplication::translate("MainWindow", "\345\205\250\346\230\276\347\244\272", nullptr));
        groupBox_curRecord->setTitle(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\256\260\345\275\225", nullptr));
        groupBox_5->setTitle(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\267\245\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\347\234\201\344\273\275", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\351\203\250\351\227\250", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\267\245\350\265\204", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\347\205\247\347\211\207", nullptr));
        label_photo->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_notation->setTitle(QCoreApplication::translate("MainWindow", "\345\244\207\346\263\250", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
