/********************************************************************************
** Form generated from reading UI file 'tformtable.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TFORMTABLE_H
#define UI_TFORMTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TFormTable
{
public:
    QAction *action_TableSize;
    QAction *action_TableHeader;
    QAction *action_Close;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QMenuBar *menubar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TFormTable)
    {
        if (TFormTable->objectName().isEmpty())
            TFormTable->setObjectName("TFormTable");
        TFormTable->resize(554, 395);
        action_TableSize = new QAction(TFormTable);
        action_TableSize->setObjectName("action_TableSize");
        action_TableHeader = new QAction(TFormTable);
        action_TableHeader->setObjectName("action_TableHeader");
        action_Close = new QAction(TFormTable);
        action_Close->setObjectName("action_Close");
        centralwidget = new QWidget(TFormTable);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        TFormTable->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TFormTable);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 554, 21));
        TFormTable->setMenuBar(menubar);
        toolBar = new QToolBar(TFormTable);
        toolBar->setObjectName("toolBar");
        TFormTable->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_TableSize);
        toolBar->addAction(action_TableHeader);
        toolBar->addSeparator();
        toolBar->addAction(action_Close);

        retranslateUi(TFormTable);
        QObject::connect(action_Close, &QAction::triggered, TFormTable, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(TFormTable);
    } // setupUi

    void retranslateUi(QMainWindow *TFormTable)
    {
        TFormTable->setWindowTitle(QCoreApplication::translate("TFormTable", "MainWindow", nullptr));
        action_TableSize->setText(QCoreApplication::translate("TFormTable", "\345\256\232\344\271\211\350\241\250\346\240\274\345\244\247\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        action_TableSize->setToolTip(QCoreApplication::translate("TFormTable", "\345\256\232\344\271\211\350\241\250\346\240\274\345\244\247\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        action_TableSize->setStatusTip(QCoreApplication::translate("TFormTable", "\345\256\232\344\271\211\350\241\250\346\240\274\345\244\247\345\260\217", nullptr));
#endif // QT_CONFIG(statustip)
        action_TableHeader->setText(QCoreApplication::translate("TFormTable", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
#if QT_CONFIG(tooltip)
        action_TableHeader->setToolTip(QCoreApplication::translate("TFormTable", "\350\256\276\347\275\256\350\241\250\346\240\274\350\241\250\345\244\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        action_TableHeader->setStatusTip(QCoreApplication::translate("TFormTable", "\350\256\276\347\275\256\350\241\250\346\240\274\350\241\250\345\244\264", nullptr));
#endif // QT_CONFIG(statustip)
        action_Close->setText(QCoreApplication::translate("TFormTable", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        action_Close->setToolTip(QCoreApplication::translate("TFormTable", "\345\205\263\351\227\255\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        action_Close->setStatusTip(QCoreApplication::translate("TFormTable", "\345\205\263\351\227\255\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(statustip)
        toolBar->setWindowTitle(QCoreApplication::translate("TFormTable", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TFormTable: public Ui_TFormTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TFORMTABLE_H
