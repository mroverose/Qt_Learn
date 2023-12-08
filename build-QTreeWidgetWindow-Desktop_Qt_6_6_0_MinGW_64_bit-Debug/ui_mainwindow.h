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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAddFolder;
    QAction *actionAddFiles;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionZoomRealSize;
    QAction *actionZoomFitWidth;
    QAction *actionDeleteItem;
    QAction *actionQuit;
    QAction *actionZoomFitHeight;
    QAction *actionScanItems;
    QAction *actionDockVisible;
    QAction *actionDockFloat;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeWidget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionAddFolder = new QAction(MainWindow);
        actionAddFolder->setObjectName("actionAddFolder");
        actionAddFiles = new QAction(MainWindow);
        actionAddFiles->setObjectName("actionAddFiles");
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName("actionZoomIn");
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName("actionZoomOut");
        actionZoomRealSize = new QAction(MainWindow);
        actionZoomRealSize->setObjectName("actionZoomRealSize");
        actionZoomFitWidth = new QAction(MainWindow);
        actionZoomFitWidth->setObjectName("actionZoomFitWidth");
        actionDeleteItem = new QAction(MainWindow);
        actionDeleteItem->setObjectName("actionDeleteItem");
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionZoomFitHeight = new QAction(MainWindow);
        actionZoomFitHeight->setObjectName("actionZoomFitHeight");
        actionScanItems = new QAction(MainWindow);
        actionScanItems->setObjectName("actionScanItems");
        actionDockVisible = new QAction(MainWindow);
        actionDockVisible->setObjectName("actionDockVisible");
        actionDockVisible->setCheckable(true);
        actionDockFloat = new QAction(MainWindow);
        actionDockFloat->setObjectName("actionDockFloat");
        actionDockFloat->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(-1, 180, 74, 36));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 72, 34));
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName("dockWidget");
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setObjectName("horizontalLayout");
        treeWidget = new QTreeWidget(dockWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignCenter);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem3);
        treeWidget->setObjectName("treeWidget");

        horizontalLayout->addWidget(treeWidget);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionAddFolder);
        toolBar->addAction(actionAddFiles);
        toolBar->addAction(actionDeleteItem);
        toolBar->addAction(actionScanItems);
        toolBar->addSeparator();
        toolBar->addAction(actionZoomIn);
        toolBar->addAction(actionZoomOut);
        toolBar->addAction(actionZoomRealSize);
        toolBar->addAction(actionZoomFitWidth);
        toolBar->addAction(actionZoomFitHeight);
        toolBar->addSeparator();
        toolBar->addAction(actionDockVisible);
        toolBar->addAction(actionDockFloat);
        toolBar->addSeparator();
        toolBar->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAddFolder->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        actionAddFolder->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAddFolder->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAddFiles->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        actionAddFiles->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAddFiles->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomIn->setToolTip(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomIn->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOut->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOut->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomRealSize->setText(QCoreApplication::translate("MainWindow", "\345\256\236\351\231\205\345\244\247\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomRealSize->setToolTip(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\345\256\236\351\231\205\345\244\247\345\260\217\346\230\276\347\244\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomFitWidth->setText(QCoreApplication::translate("MainWindow", "\351\200\202\345\220\210\345\256\275\345\272\246", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomFitWidth->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\202\345\220\210\345\256\275\345\272\246\346\230\276\347\244\272\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomFitWidth->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDeleteItem->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        actionDeleteItem->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actionQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\346\234\254\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomFitHeight->setText(QCoreApplication::translate("MainWindow", "\351\200\202\345\220\210\351\253\230\345\272\246", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomFitHeight->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\202\345\220\210\351\253\230\345\272\246\346\230\276\347\244\272\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomFitHeight->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionScanItems->setText(QCoreApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        actionScanItems->setToolTip(QCoreApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDockVisible->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\345\217\257\350\247\201", nullptr));
#if QT_CONFIG(tooltip)
        actionDockVisible->setToolTip(QCoreApplication::translate("MainWindow", "\345\201\234\351\235\240\347\252\227\345\217\243\345\217\257\350\247\201", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDockFloat->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\346\265\256\345\212\250", nullptr));
#if QT_CONFIG(tooltip)
        actionDockFloat->setToolTip(QCoreApplication::translate("MainWindow", "\345\201\234\351\235\240\347\252\227\345\217\243\346\265\256\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\347\261\273\345\236\213", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\346\226\207\344\273\266", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "\345\210\206\347\273\204\350\212\202\347\202\271", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\350\212\202\347\202\271", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("MainWindow", "\345\210\206\347\273\204\350\212\202\347\202\2712", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\350\212\202\347\202\2712", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
