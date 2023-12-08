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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionList_Ini;
    QAction *actionList_Clear;
    QAction *actionList_Insert;
    QAction *actionList_Append;
    QAction *actionList_Delete;
    QAction *actionList_SletectAll;
    QAction *actionList_SelectNone;
    QAction *actionList_SelectReverse;
    QAction *actionQuit;
    QAction *actionSelectPopMenu;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QToolButton *toolButton_Listini;
    QToolButton *toolButton_ListClear;
    QToolButton *toolButton_ListInsert;
    QToolButton *toolButton_ListAppend;
    QToolButton *toolButton_ListDelete;
    QWidget *page_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox_ListSort;
    QToolButton *toolButton_ListSortUporder;
    QToolButton *toolButton_ListSortDownorder;
    QSpacerItem *verticalSpacer;
    QWidget *page_3;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_TextClear;
    QPushButton *pushButton_TextAddLine;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *checkBox_Item;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *toolButton_SelectItem;
    QToolButton *toolButton_SeletcAll;
    QToolButton *toolButton_SelectNone;
    QToolButton *toolButton_SelectReverse;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(626, 479);
        actionList_Ini = new QAction(MainWindow);
        actionList_Ini->setObjectName("actionList_Ini");
        actionList_Clear = new QAction(MainWindow);
        actionList_Clear->setObjectName("actionList_Clear");
        actionList_Insert = new QAction(MainWindow);
        actionList_Insert->setObjectName("actionList_Insert");
        actionList_Append = new QAction(MainWindow);
        actionList_Append->setObjectName("actionList_Append");
        actionList_Delete = new QAction(MainWindow);
        actionList_Delete->setObjectName("actionList_Delete");
        actionList_SletectAll = new QAction(MainWindow);
        actionList_SletectAll->setObjectName("actionList_SletectAll");
        actionList_SelectNone = new QAction(MainWindow);
        actionList_SelectNone->setObjectName("actionList_SelectNone");
        actionList_SelectReverse = new QAction(MainWindow);
        actionList_SelectReverse->setObjectName("actionList_SelectReverse");
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionSelectPopMenu = new QAction(MainWindow);
        actionSelectPopMenu->setObjectName("actionSelectPopMenu");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 1);
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName("toolBox");
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 301, 305));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 3, 231, 271));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        toolButton_Listini = new QToolButton(layoutWidget);
        toolButton_Listini->setObjectName("toolButton_Listini");

        gridLayout->addWidget(toolButton_Listini, 0, 0, 1, 1);

        toolButton_ListClear = new QToolButton(layoutWidget);
        toolButton_ListClear->setObjectName("toolButton_ListClear");

        gridLayout->addWidget(toolButton_ListClear, 1, 0, 1, 1);

        toolButton_ListInsert = new QToolButton(layoutWidget);
        toolButton_ListInsert->setObjectName("toolButton_ListInsert");

        gridLayout->addWidget(toolButton_ListInsert, 2, 0, 1, 1);

        toolButton_ListAppend = new QToolButton(layoutWidget);
        toolButton_ListAppend->setObjectName("toolButton_ListAppend");

        gridLayout->addWidget(toolButton_ListAppend, 3, 0, 1, 1);

        toolButton_ListDelete = new QToolButton(layoutWidget);
        toolButton_ListDelete->setObjectName("toolButton_ListDelete");

        gridLayout->addWidget(toolButton_ListDelete, 4, 0, 1, 1);

        gridLayout->setRowMinimumHeight(0, 1);
        gridLayout->setRowMinimumHeight(1, 1);
        gridLayout->setRowMinimumHeight(2, 1);
        gridLayout->setRowMinimumHeight(3, 1);
        gridLayout->setRowMinimumHeight(4, 1);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../Work/QT/NewTest/favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page, icon, QString::fromUtf8("\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 301, 305));
        layoutWidget1 = new QWidget(page_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 10, 241, 271));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        checkBox_ListSort = new QCheckBox(layoutWidget1);
        checkBox_ListSort->setObjectName("checkBox_ListSort");

        gridLayout_3->addWidget(checkBox_ListSort, 0, 0, 1, 1);

        toolButton_ListSortUporder = new QToolButton(layoutWidget1);
        toolButton_ListSortUporder->setObjectName("toolButton_ListSortUporder");

        gridLayout_3->addWidget(toolButton_ListSortUporder, 1, 0, 1, 1);

        toolButton_ListSortDownorder = new QToolButton(layoutWidget1);
        toolButton_ListSortDownorder->setObjectName("toolButton_ListSortDownorder");

        gridLayout_3->addWidget(toolButton_ListSortDownorder, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 3, 0, 1, 1);

        gridLayout_3->setRowStretch(0, 1);
        gridLayout_3->setRowStretch(1, 2);
        gridLayout_3->setRowStretch(2, 2);
        gridLayout_3->setRowStretch(3, 1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../../Work/QT/NewTest/menu-ico/About.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_2, icon1, QString::fromUtf8("\345\210\227\350\241\250\346\216\222\345\272\217"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setGeometry(QRect(0, 0, 301, 305));
        layoutWidget2 = new QWidget(page_3);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(11, 11, 281, 301));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_TextClear = new QPushButton(layoutWidget2);
        pushButton_TextClear->setObjectName("pushButton_TextClear");

        horizontalLayout->addWidget(pushButton_TextClear);

        pushButton_TextAddLine = new QPushButton(layoutWidget2);
        pushButton_TextAddLine->setObjectName("pushButton_TextAddLine");

        horizontalLayout->addWidget(pushButton_TextAddLine);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(layoutWidget2);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout_2->addWidget(plainTextEdit, 1, 0, 1, 1);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../../Work/QT/NewTest/menu-ico/Check.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(page_3, icon2, QString::fromUtf8("\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272"));

        horizontalLayout_2->addWidget(toolBox);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_3->addWidget(lineEdit);

        checkBox_Item = new QCheckBox(groupBox);
        checkBox_Item->setObjectName("checkBox_Item");

        horizontalLayout_3->addWidget(checkBox_Item);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        toolButton_SelectItem = new QToolButton(groupBox);
        toolButton_SelectItem->setObjectName("toolButton_SelectItem");
        toolButton_SelectItem->setPopupMode(QToolButton::MenuButtonPopup);
        toolButton_SelectItem->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_4->addWidget(toolButton_SelectItem);

        toolButton_SeletcAll = new QToolButton(groupBox);
        toolButton_SeletcAll->setObjectName("toolButton_SeletcAll");
        toolButton_SeletcAll->setAutoRaise(true);

        horizontalLayout_4->addWidget(toolButton_SeletcAll);

        toolButton_SelectNone = new QToolButton(groupBox);
        toolButton_SelectNone->setObjectName("toolButton_SelectNone");
        toolButton_SelectNone->setAutoRaise(true);

        horizontalLayout_4->addWidget(toolButton_SelectNone);

        toolButton_SelectReverse = new QToolButton(groupBox);
        toolButton_SelectReverse->setObjectName("toolButton_SelectReverse");
        toolButton_SelectReverse->setAutoRaise(true);

        horizontalLayout_4->addWidget(toolButton_SelectReverse);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        listWidget = new QListWidget(groupBox);
        new QListWidgetItem(listWidget);
        QFont font;
        font.setItalic(false);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        listWidget->setObjectName("listWidget");
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout->addWidget(listWidget);


        horizontalLayout_2->addWidget(groupBox);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 626, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionList_Ini);
        toolBar->addAction(actionList_Clear);
        toolBar->addAction(actionList_Insert);
        toolBar->addAction(actionList_Append);
        toolBar->addAction(actionList_Delete);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionSelectPopMenu, &QAction::triggered, actionList_SelectReverse, qOverload<>(&QAction::trigger));
        QObject::connect(actionQuit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionList_Ini->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(tooltip)
        actionList_Ini->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionList_Ini->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionList_Clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(tooltip)
        actionList_Clear->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
        actionList_Insert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actionList_Insert->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionList_Insert->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionList_Append->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actionList_Append->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionList_Append->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionList_Delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        actionList_Delete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionList_Delete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionList_SletectAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actionList_SletectAll->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
        actionList_SelectNone->setText(QCoreApplication::translate("MainWindow", "\345\205\250\344\270\215\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actionList_SelectNone->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\344\270\215\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
        actionList_SelectReverse->setText(QCoreApplication::translate("MainWindow", "\350\277\224\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        actionList_SelectReverse->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\224\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actionQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSelectPopMenu->setText(QCoreApplication::translate("MainWindow", "\351\241\271\351\200\211\346\213\251", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectPopMenu->setToolTip(QCoreApplication::translate("MainWindow", "\351\241\271\351\200\211\346\213\251", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_Listini->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_ListClear->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_ListInsert->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_ListAppend->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_ListDelete->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234", nullptr));
        checkBox_ListSort->setText(QCoreApplication::translate("MainWindow", "\345\205\201\350\256\270\346\216\222\345\272\217", nullptr));
        toolButton_ListSortUporder->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217\346\216\222\345\272\217", nullptr));
        toolButton_ListSortDownorder->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217\346\216\222\345\272\217", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\346\216\222\345\272\217", nullptr));
        pushButton_TextClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        pushButton_TextAddLine->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\251\272\350\241\214", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("MainWindow", "\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226", nullptr));
        checkBox_Item->setText(QCoreApplication::translate("MainWindow", "\351\241\271\345\217\257\347\274\226\347\274\211", nullptr));
        toolButton_SelectItem->setText(QString());
        toolButton_SeletcAll->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_SelectNone->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_SelectReverse->setText(QCoreApplication::translate("MainWindow", "...", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "New Item2", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
