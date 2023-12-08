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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_SetTableHeader;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_SetTableCol;
    QSpinBox *spinBox;
    QPushButton *pushButton_SetTableIni;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_SetTableInsertCol;
    QPushButton *pushButton_SetTableAddCol;
    QPushButton *pushButton_SetTableDelCol;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_SetTableHeight;
    QPushButton *pushButton_SetTableWidth;
    QPushButton *pushButton_SetTableContentToText;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_TabelEditabel;
    QCheckBox *checkBox_TableColBkColor;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_TableShowHeader;
    QCheckBox *checkBox_TableShowCol;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_TableColSelect;
    QRadioButton *radioButton_TableTdSelect;
    QSplitter *splitter;
    QTableWidget *tableWidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 438);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_7 = new QHBoxLayout(centralwidget);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_SetTableHeader = new QPushButton(groupBox);
        pushButton_SetTableHeader->setObjectName("pushButton_SetTableHeader");

        verticalLayout->addWidget(pushButton_SetTableHeader);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_SetTableCol = new QPushButton(groupBox);
        pushButton_SetTableCol->setObjectName("pushButton_SetTableCol");

        horizontalLayout->addWidget(pushButton_SetTableCol);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName("spinBox");
        spinBox->setValue(1);

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_SetTableIni = new QPushButton(groupBox);
        pushButton_SetTableIni->setObjectName("pushButton_SetTableIni");

        verticalLayout->addWidget(pushButton_SetTableIni);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_SetTableInsertCol = new QPushButton(groupBox);
        pushButton_SetTableInsertCol->setObjectName("pushButton_SetTableInsertCol");

        horizontalLayout_2->addWidget(pushButton_SetTableInsertCol);

        pushButton_SetTableAddCol = new QPushButton(groupBox);
        pushButton_SetTableAddCol->setObjectName("pushButton_SetTableAddCol");

        horizontalLayout_2->addWidget(pushButton_SetTableAddCol);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_SetTableDelCol = new QPushButton(groupBox);
        pushButton_SetTableDelCol->setObjectName("pushButton_SetTableDelCol");

        verticalLayout->addWidget(pushButton_SetTableDelCol);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_SetTableHeight = new QPushButton(groupBox);
        pushButton_SetTableHeight->setObjectName("pushButton_SetTableHeight");

        horizontalLayout_3->addWidget(pushButton_SetTableHeight);

        pushButton_SetTableWidth = new QPushButton(groupBox);
        pushButton_SetTableWidth->setObjectName("pushButton_SetTableWidth");

        horizontalLayout_3->addWidget(pushButton_SetTableWidth);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_SetTableContentToText = new QPushButton(groupBox);
        pushButton_SetTableContentToText->setObjectName("pushButton_SetTableContentToText");

        verticalLayout->addWidget(pushButton_SetTableContentToText);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        checkBox_TabelEditabel = new QCheckBox(groupBox);
        checkBox_TabelEditabel->setObjectName("checkBox_TabelEditabel");

        horizontalLayout_4->addWidget(checkBox_TabelEditabel);

        checkBox_TableColBkColor = new QCheckBox(groupBox);
        checkBox_TableColBkColor->setObjectName("checkBox_TableColBkColor");

        horizontalLayout_4->addWidget(checkBox_TableColBkColor);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        checkBox_TableShowHeader = new QCheckBox(groupBox);
        checkBox_TableShowHeader->setObjectName("checkBox_TableShowHeader");

        horizontalLayout_5->addWidget(checkBox_TableShowHeader);

        checkBox_TableShowCol = new QCheckBox(groupBox);
        checkBox_TableShowCol->setObjectName("checkBox_TableShowCol");

        horizontalLayout_5->addWidget(checkBox_TableShowCol);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        radioButton_TableColSelect = new QRadioButton(groupBox);
        radioButton_TableColSelect->setObjectName("radioButton_TableColSelect");

        horizontalLayout_6->addWidget(radioButton_TableColSelect);

        radioButton_TableTdSelect = new QRadioButton(groupBox);
        radioButton_TableTdSelect->setObjectName("radioButton_TableTdSelect");

        horizontalLayout_6->addWidget(radioButton_TableTdSelect);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_7->addWidget(groupBox);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        tableWidget = new QTableWidget(splitter);
        tableWidget->setObjectName("tableWidget");
        splitter->addWidget(tableWidget);
        plainTextEdit = new QPlainTextEdit(splitter);
        plainTextEdit->setObjectName("plainTextEdit");
        splitter->addWidget(plainTextEdit);

        horizontalLayout_7->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 21));
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
        pushButton_SetTableHeader->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\260\264\345\271\263\350\241\250\345\244\264", nullptr));
        pushButton_SetTableCol->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\214\346\225\260", nullptr));
        pushButton_SetTableIni->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\350\241\250\346\240\274\346\225\260\346\215\256", nullptr));
        pushButton_SetTableInsertCol->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
        pushButton_SetTableAddCol->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", nullptr));
        pushButton_SetTableDelCol->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", nullptr));
        pushButton_SetTableHeight->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\350\241\214\351\253\230", nullptr));
        pushButton_SetTableWidth->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\345\210\227\345\256\275", nullptr));
        pushButton_SetTableContentToText->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226\350\241\250\346\240\274\345\206\205\345\256\271\345\210\260\346\226\207\346\234\254", nullptr));
        checkBox_TabelEditabel->setText(QCoreApplication::translate("MainWindow", "\350\241\250\346\240\274\345\217\257\347\274\226\350\276\221", nullptr));
        checkBox_TableColBkColor->setText(QCoreApplication::translate("MainWindow", "\351\227\264\351\232\224\350\241\214\345\272\225\350\211\262", nullptr));
        checkBox_TableShowHeader->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\260\264\345\271\263\350\241\250\345\244\264", nullptr));
        checkBox_TableShowCol->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\236\202\347\233\264\350\241\250\345\244\264", nullptr));
        radioButton_TableColSelect->setText(QCoreApplication::translate("MainWindow", "\350\241\214\351\200\211\346\213\251", nullptr));
        radioButton_TableTdSelect->setText(QCoreApplication::translate("MainWindow", "\345\215\225\345\205\203\346\240\274\351\200\211\346\213\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
