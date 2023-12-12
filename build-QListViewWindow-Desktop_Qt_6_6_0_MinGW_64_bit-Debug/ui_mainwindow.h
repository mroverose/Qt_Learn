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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
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
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_ListRestore;
    QPushButton *pushButton_ListClear;
    QCheckBox *checkBox_Editable;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_ListAddItem;
    QPushButton *pushButton_ListInsertItem;
    QPushButton *pushButton_ListDelItem;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_ListMoveUp;
    QPushButton *pushButton_ListMoveDown;
    QPushButton *pushButton_ListSort;
    QListView *listView;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_TextClear;
    QPushButton *pushButton_TextShowStringList;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(542, 406);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_ListRestore = new QPushButton(groupBox);
        pushButton_ListRestore->setObjectName("pushButton_ListRestore");

        horizontalLayout->addWidget(pushButton_ListRestore);

        pushButton_ListClear = new QPushButton(groupBox);
        pushButton_ListClear->setObjectName("pushButton_ListClear");

        horizontalLayout->addWidget(pushButton_ListClear);

        checkBox_Editable = new QCheckBox(groupBox);
        checkBox_Editable->setObjectName("checkBox_Editable");

        horizontalLayout->addWidget(checkBox_Editable);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_ListAddItem = new QPushButton(groupBox);
        pushButton_ListAddItem->setObjectName("pushButton_ListAddItem");

        horizontalLayout_2->addWidget(pushButton_ListAddItem);

        pushButton_ListInsertItem = new QPushButton(groupBox);
        pushButton_ListInsertItem->setObjectName("pushButton_ListInsertItem");

        horizontalLayout_2->addWidget(pushButton_ListInsertItem);

        pushButton_ListDelItem = new QPushButton(groupBox);
        pushButton_ListDelItem->setObjectName("pushButton_ListDelItem");

        horizontalLayout_2->addWidget(pushButton_ListDelItem);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_ListMoveUp = new QPushButton(groupBox);
        pushButton_ListMoveUp->setObjectName("pushButton_ListMoveUp");

        horizontalLayout_3->addWidget(pushButton_ListMoveUp);

        pushButton_ListMoveDown = new QPushButton(groupBox);
        pushButton_ListMoveDown->setObjectName("pushButton_ListMoveDown");

        horizontalLayout_3->addWidget(pushButton_ListMoveDown);

        pushButton_ListSort = new QPushButton(groupBox);
        pushButton_ListSort->setObjectName("pushButton_ListSort");
        pushButton_ListSort->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_ListSort);


        verticalLayout_2->addLayout(horizontalLayout_3);

        listView = new QListView(groupBox);
        listView->setObjectName("listView");

        verticalLayout_2->addWidget(listView);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_TextClear = new QPushButton(groupBox_2);
        pushButton_TextClear->setObjectName("pushButton_TextClear");

        verticalLayout->addWidget(pushButton_TextClear);

        pushButton_TextShowStringList = new QPushButton(groupBox_2);
        pushButton_TextShowStringList->setObjectName("pushButton_TextShowStringList");

        verticalLayout->addWidget(pushButton_TextShowStringList);

        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout->addWidget(plainTextEdit);


        horizontalLayout_4->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 542, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QStringListModel\345\222\214QListView", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "ListView", nullptr));
        pushButton_ListRestore->setText(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215\345\210\227\350\241\250", nullptr));
        pushButton_ListClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        checkBox_Editable->setText(QCoreApplication::translate("MainWindow", "\345\205\201\350\256\270\347\274\226\347\274\211", nullptr));
        pushButton_ListAddItem->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
        pushButton_ListInsertItem->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
        pushButton_ListDelItem->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\241\271", nullptr));
        pushButton_ListMoveUp->setText(QCoreApplication::translate("MainWindow", "\344\270\212\347\247\273", nullptr));
        pushButton_ListMoveDown->setText(QCoreApplication::translate("MainWindow", "\344\270\213\347\247\273", nullptr));
        pushButton_ListSort->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "PlainTextEdit", nullptr));
        pushButton_TextClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        pushButton_TextShowStringList->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\225\260\346\215\256\346\250\241\345\236\213\347\232\204StringList", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
