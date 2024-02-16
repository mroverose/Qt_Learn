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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEdit_Cut;
    QAction *actionEdit_Copy;
    QAction *actionEdit_Paste;
    QAction *actionFont_Bold;
    QAction *actionFont_Italic;
    QAction *actionFont_Underline;
    QAction *actionClose;
    QAction *actionSys_ToggleText;
    QAction *actionEdit_Clear;
    QAction *actionEdit_Undo;
    QAction *actionEdit_Redo;
    QAction *actionEdit_SeletcAll;
    QAction *actionFile_New;
    QAction *actionFile_Open;
    QAction *actionFile_Save;
    QAction *actionLang_CN;
    QAction *actionLang_EN;
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menu_Main;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QMenu *menu_Format;
    QMenu *menu_Format_Lang;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionEdit_Cut = new QAction(MainWindow);
        actionEdit_Cut->setObjectName("actionEdit_Cut");
        QIcon icon;
        icon.addFile(QString::fromUtf8("menu-ico/Cut.png"), QSize(), QIcon::Normal, QIcon::On);
        actionEdit_Cut->setIcon(icon);
        actionEdit_Copy = new QAction(MainWindow);
        actionEdit_Copy->setObjectName("actionEdit_Copy");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("menu-ico/Copy.png"), QSize(), QIcon::Normal, QIcon::On);
        actionEdit_Copy->setIcon(icon1);
        actionEdit_Paste = new QAction(MainWindow);
        actionEdit_Paste->setObjectName("actionEdit_Paste");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("menu-ico/Paste.png"), QSize(), QIcon::Normal, QIcon::On);
        actionEdit_Paste->setIcon(icon2);
        actionFont_Bold = new QAction(MainWindow);
        actionFont_Bold->setObjectName("actionFont_Bold");
        actionFont_Bold->setCheckable(true);
        actionFont_Italic = new QAction(MainWindow);
        actionFont_Italic->setObjectName("actionFont_Italic");
        actionFont_Italic->setCheckable(true);
        actionFont_Underline = new QAction(MainWindow);
        actionFont_Underline->setObjectName("actionFont_Underline");
        actionFont_Underline->setCheckable(true);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName("actionClose");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("menu-ico/Close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon3);
        actionSys_ToggleText = new QAction(MainWindow);
        actionSys_ToggleText->setObjectName("actionSys_ToggleText");
        actionEdit_Clear = new QAction(MainWindow);
        actionEdit_Clear->setObjectName("actionEdit_Clear");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("menu-ico/New.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_Clear->setIcon(icon4);
        actionEdit_Undo = new QAction(MainWindow);
        actionEdit_Undo->setObjectName("actionEdit_Undo");
        actionEdit_Redo = new QAction(MainWindow);
        actionEdit_Redo->setObjectName("actionEdit_Redo");
        actionEdit_SeletcAll = new QAction(MainWindow);
        actionEdit_SeletcAll->setObjectName("actionEdit_SeletcAll");
        actionFile_New = new QAction(MainWindow);
        actionFile_New->setObjectName("actionFile_New");
        actionFile_Open = new QAction(MainWindow);
        actionFile_Open->setObjectName("actionFile_Open");
        actionFile_Save = new QAction(MainWindow);
        actionFile_Save->setObjectName("actionFile_Save");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("menu-ico/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFile_Save->setIcon(icon5);
        actionLang_CN = new QAction(MainWindow);
        actionLang_CN->setObjectName("actionLang_CN");
        actionLang_EN = new QAction(MainWindow);
        actionLang_EN->setObjectName("actionLang_EN");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(20, 40, 441, 261));
        MainWindow->setCentralWidget(centralwidget);
        menu_Main = new QMenuBar(MainWindow);
        menu_Main->setObjectName("menu_Main");
        menu_Main->setGeometry(QRect(0, 0, 800, 25));
        menu_File = new QMenu(menu_Main);
        menu_File->setObjectName("menu_File");
        menu_Edit = new QMenu(menu_Main);
        menu_Edit->setObjectName("menu_Edit");
        menu_Format = new QMenu(menu_Main);
        menu_Format->setObjectName("menu_Format");
        menu_Format_Lang = new QMenu(menu_Format);
        menu_Format_Lang->setObjectName("menu_Format_Lang");
        MainWindow->setMenuBar(menu_Main);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menu_Main->addAction(menu_File->menuAction());
        menu_Main->addAction(menu_Edit->menuAction());
        menu_Main->addAction(menu_Format->menuAction());
        menu_File->addAction(actionFile_Open);
        menu_File->addAction(actionFile_New);
        menu_File->addAction(actionFile_Save);
        menu_File->addSeparator();
        menu_File->addAction(actionClose);
        menu_Edit->addAction(actionEdit_Cut);
        menu_Edit->addAction(actionEdit_Copy);
        menu_Edit->addAction(actionEdit_Paste);
        menu_Edit->addAction(actionEdit_Undo);
        menu_Edit->addAction(actionEdit_Redo);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionEdit_SeletcAll);
        menu_Edit->addAction(actionEdit_Clear);
        menu_Format->addAction(actionFont_Bold);
        menu_Format->addAction(actionFont_Italic);
        menu_Format->addAction(actionFont_Underline);
        menu_Format->addSeparator();
        menu_Format->addAction(actionSys_ToggleText);
        menu_Format->addAction(menu_Format_Lang->menuAction());
        menu_Format_Lang->addAction(actionLang_CN);
        menu_Format_Lang->addAction(actionLang_EN);
        toolBar->addAction(actionFile_New);
        toolBar->addAction(actionFile_Open);
        toolBar->addAction(actionFile_Save);
        toolBar->addSeparator();
        toolBar->addAction(actionEdit_Cut);
        toolBar->addAction(actionEdit_Copy);
        toolBar->addAction(actionEdit_Paste);
        toolBar->addSeparator();
        toolBar->addAction(actionEdit_Undo);
        toolBar->addAction(actionEdit_Redo);
        toolBar->addSeparator();
        toolBar->addAction(actionFont_Bold);
        toolBar->addAction(actionFont_Italic);
        toolBar->addAction(actionFont_Underline);
        toolBar->addSeparator();
        toolBar->addAction(actionLang_CN);
        toolBar->addAction(actionLang_EN);
        toolBar->addSeparator();
        toolBar->addAction(actionClose);

        retranslateUi(MainWindow);
        QObject::connect(plainTextEdit, &QPlainTextEdit::undoAvailable, actionEdit_Undo, &QAction::setEnabled);
        QObject::connect(plainTextEdit, &QPlainTextEdit::redoAvailable, actionEdit_Redo, &QAction::setEnabled);
        QObject::connect(plainTextEdit, &QPlainTextEdit::modificationChanged, actionFile_Save, &QAction::setEnabled);
        QObject::connect(actionEdit_Undo, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::undo));
        QObject::connect(actionEdit_Redo, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::redo));
        QObject::connect(actionEdit_SeletcAll, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::selectAll));
        QObject::connect(actionEdit_Paste, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::paste));
        QObject::connect(actionEdit_Cut, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::cut));
        QObject::connect(actionEdit_Copy, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::copy));
        QObject::connect(actionEdit_Clear, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::clear));
        QObject::connect(actionClose, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionEdit_Cut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        actionEdit_Cut->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207\345\210\260\347\262\230\350\264\264\346\235\277", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionEdit_Cut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEdit_Copy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        actionEdit_Copy->setToolTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266\345\210\260\347\262\230\350\264\264\346\235\277", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionEdit_Copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEdit_Paste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        actionEdit_Paste->setToolTip(QCoreApplication::translate("MainWindow", "\344\273\216\347\262\230\350\264\264\346\235\277\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionEdit_Paste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont_Bold->setText(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actionFont_Bold->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFont_Italic->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actionFont_Italic->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFont_Underline->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        actionFont_Underline->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\213\346\273\221\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        actionClose->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\234\254\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSys_ToggleText->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\214\211\351\222\256\346\226\207\345\255\227", nullptr));
#if QT_CONFIG(tooltip)
        actionSys_ToggleText->setToolTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\214\211\351\222\256\346\226\207\345\255\227", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEdit_Clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        actionEdit_Clear->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEdit_Undo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#if QT_CONFIG(tooltip)
        actionEdit_Undo->setToolTip(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200\344\270\212\346\254\241\347\274\226\350\276\221\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionEdit_Undo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEdit_Redo->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232", nullptr));
#if QT_CONFIG(tooltip)
        actionEdit_Redo->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232\344\270\212\346\254\241\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionEdit_Redo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEdit_SeletcAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actionEdit_SeletcAll->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionEdit_SeletcAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFile_New->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        actionFile_New->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFile_New->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFile_Open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actionFile_Open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFile_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFile_Save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actionFile_Save->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFile_Save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLang_CN->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
#if QT_CONFIG(tooltip)
        actionLang_CN->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207\347\225\214\351\235\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLang_EN->setText(QCoreApplication::translate("MainWindow", "English", nullptr));
#if QT_CONFIG(tooltip)
        actionLang_EN->setToolTip(QCoreApplication::translate("MainWindow", "English Interface", nullptr));
#endif // QT_CONFIG(tooltip)
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_Edit->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(E)", nullptr));
        menu_Format->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217(M)", nullptr));
        menu_Format_Lang->setTitle(QCoreApplication::translate("MainWindow", "\347\225\214\351\235\242\350\257\255\350\250\200", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
