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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_DocNew;
    QAction *action_Quit;
    QAction *action_DocOpen;
    QAction *action_Font;
    QAction *action_Cut;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *action_MDI;
    QAction *action_Cascase;
    QAction *action_Tile;
    QAction *action_CloseAll;
    QAction *action_DocSave;
    QWidget *centralwidget;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action_DocNew = new QAction(MainWindow);
        action_DocNew->setObjectName("action_DocNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico/menu-ico/New.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8("menu-ico/New.png"), QSize(), QIcon::Normal, QIcon::On);
        action_DocNew->setIcon(icon);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName("action_Quit");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ico/menu-ico/Close.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Quit->setIcon(icon1);
        action_DocOpen = new QAction(MainWindow);
        action_DocOpen->setObjectName("action_DocOpen");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ico/menu-ico/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_DocOpen->setIcon(icon2);
        action_Font = new QAction(MainWindow);
        action_Font->setObjectName("action_Font");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ico/menu-ico/Pink drop.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Font->setIcon(icon3);
        action_Cut = new QAction(MainWindow);
        action_Cut->setObjectName("action_Cut");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ico/menu-ico/Cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cut->setIcon(icon4);
        action_Copy = new QAction(MainWindow);
        action_Copy->setObjectName("action_Copy");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/ico/menu-ico/Copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copy->setIcon(icon5);
        action_Paste = new QAction(MainWindow);
        action_Paste->setObjectName("action_Paste");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/ico/menu-ico/Paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Paste->setIcon(icon6);
        action_MDI = new QAction(MainWindow);
        action_MDI->setObjectName("action_MDI");
        action_MDI->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/ico/menu-ico/About.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_MDI->setIcon(icon7);
        action_Cascase = new QAction(MainWindow);
        action_Cascase->setObjectName("action_Cascase");
        action_Cascase->setIcon(icon7);
        action_Tile = new QAction(MainWindow);
        action_Tile->setObjectName("action_Tile");
        action_Tile->setIcon(icon7);
        action_CloseAll = new QAction(MainWindow);
        action_CloseAll->setObjectName("action_CloseAll");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/ico/menu-ico/Check.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_CloseAll->setIcon(icon8);
        action_DocSave = new QAction(MainWindow);
        action_DocSave->setObjectName("action_DocSave");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/ico/menu-ico/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_DocSave->setIcon(icon9);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName("mdiArea");
        mdiArea->setGeometry(QRect(20, 130, 200, 160));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_DocNew);
        toolBar->addAction(action_DocOpen);
        toolBar->addAction(action_DocSave);
        toolBar->addAction(action_CloseAll);
        toolBar->addSeparator();
        toolBar->addAction(action_Cut);
        toolBar->addAction(action_Copy);
        toolBar->addAction(action_Paste);
        toolBar->addAction(action_Font);
        toolBar->addSeparator();
        toolBar->addAction(action_MDI);
        toolBar->addAction(action_Cascase);
        toolBar->addAction(action_Tile);
        toolBar->addSeparator();
        toolBar->addAction(action_Quit);

        retranslateUi(MainWindow);
        QObject::connect(action_Quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_DocNew->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        action_DocNew->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\346\241\243\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_DocNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_Quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\346\234\254\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        action_DocOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_DocOpen->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\346\241\243", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_DocOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Font->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        action_Font->setToolTip(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Cut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        action_Cut->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Cut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Copy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        action_Copy->setToolTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Paste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        action_Paste->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Paste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_MDI->setText(QCoreApplication::translate("MainWindow", "MDI\346\250\241\345\274\217", nullptr));
#if QT_CONFIG(tooltip)
        action_MDI->setToolTip(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\345\274\217\346\210\226\351\241\265\351\235\242\346\250\241\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Cascase->setText(QCoreApplication::translate("MainWindow", "\347\272\247\350\201\224\345\261\225\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_Cascase->setToolTip(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\347\272\247\350\201\224\345\261\225\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Tile->setText(QCoreApplication::translate("MainWindow", "\345\271\263\351\223\272\345\261\225\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_Tile->setToolTip(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\345\271\263\351\223\272\345\261\225\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
        action_CloseAll->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\345\205\250\351\203\250", nullptr));
#if QT_CONFIG(tooltip)
        action_CloseAll->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\345\205\250\351\203\250\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        action_DocSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        action_DocSave->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_DocSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
