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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_open;
    QAction *action_quit;
    QAction *action_save;
    QAction *action_RotateLeft;
    QAction *action_RotateRight;
    QAction *action_FlipUD;
    QAction *action_FlipLR;
    QAction *action_FileReload;
    QAction *action_File_SaveAs;
    QAction *action_Preview;
    QAction *action_Print;
    QAction *action_ZoomIn;
    QAction *action_ZoomOut;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_10;
    QSplitter *splitter;
    QGroupBox *groupBox_ImageProper;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_ImageFormat;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_ImageWidth;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_ImageHeight;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_ImageDepth;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_ImageBitCnt;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_ImageSize;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_ImageDpi;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_IsGray;
    QCheckBox *checkBox_IsAlpha;
    QGroupBox *groupBox_ImageTransform;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QPushButton *pushButton_ImageFormTrans;
    QGroupBox *groupBox_Rgb565;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *radioButton_LowBitForward;
    QRadioButton *radioButton_HighBitForward;
    QPushButton *pushButton_GenRgb565;
    QPushButton *pushButton_SaveDateFile;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_picture;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(616, 605);
        action_open = new QAction(MainWindow);
        action_open->setObjectName("action_open");
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_save = new QAction(MainWindow);
        action_save->setObjectName("action_save");
        action_RotateLeft = new QAction(MainWindow);
        action_RotateLeft->setObjectName("action_RotateLeft");
        action_RotateRight = new QAction(MainWindow);
        action_RotateRight->setObjectName("action_RotateRight");
        action_FlipUD = new QAction(MainWindow);
        action_FlipUD->setObjectName("action_FlipUD");
        action_FlipLR = new QAction(MainWindow);
        action_FlipLR->setObjectName("action_FlipLR");
        action_FileReload = new QAction(MainWindow);
        action_FileReload->setObjectName("action_FileReload");
        action_File_SaveAs = new QAction(MainWindow);
        action_File_SaveAs->setObjectName("action_File_SaveAs");
        action_Preview = new QAction(MainWindow);
        action_Preview->setObjectName("action_Preview");
        action_Print = new QAction(MainWindow);
        action_Print->setObjectName("action_Print");
        action_ZoomIn = new QAction(MainWindow);
        action_ZoomIn->setObjectName("action_ZoomIn");
        action_ZoomOut = new QAction(MainWindow);
        action_ZoomOut->setObjectName("action_ZoomOut");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_10 = new QHBoxLayout(centralwidget);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        groupBox_ImageProper = new QGroupBox(splitter);
        groupBox_ImageProper->setObjectName("groupBox_ImageProper");
        verticalLayout = new QVBoxLayout(groupBox_ImageProper);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox_ImageProper);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_ImageFormat = new QLineEdit(groupBox_ImageProper);
        lineEdit_ImageFormat->setObjectName("lineEdit_ImageFormat");

        horizontalLayout->addWidget(lineEdit_ImageFormat);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox_ImageProper);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_ImageWidth = new QLineEdit(groupBox_ImageProper);
        lineEdit_ImageWidth->setObjectName("lineEdit_ImageWidth");

        horizontalLayout_2->addWidget(lineEdit_ImageWidth);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox_ImageProper);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_ImageHeight = new QLineEdit(groupBox_ImageProper);
        lineEdit_ImageHeight->setObjectName("lineEdit_ImageHeight");

        horizontalLayout_3->addWidget(lineEdit_ImageHeight);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(groupBox_ImageProper);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit_ImageDepth = new QLineEdit(groupBox_ImageProper);
        lineEdit_ImageDepth->setObjectName("lineEdit_ImageDepth");

        horizontalLayout_4->addWidget(lineEdit_ImageDepth);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(groupBox_ImageProper);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        lineEdit_ImageBitCnt = new QLineEdit(groupBox_ImageProper);
        lineEdit_ImageBitCnt->setObjectName("lineEdit_ImageBitCnt");

        horizontalLayout_5->addWidget(lineEdit_ImageBitCnt);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(groupBox_ImageProper);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        lineEdit_ImageSize = new QLineEdit(groupBox_ImageProper);
        lineEdit_ImageSize->setObjectName("lineEdit_ImageSize");

        horizontalLayout_6->addWidget(lineEdit_ImageSize);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(groupBox_ImageProper);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        lineEdit_ImageDpi = new QLineEdit(groupBox_ImageProper);
        lineEdit_ImageDpi->setObjectName("lineEdit_ImageDpi");

        horizontalLayout_7->addWidget(lineEdit_ImageDpi);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        checkBox_IsGray = new QCheckBox(groupBox_ImageProper);
        checkBox_IsGray->setObjectName("checkBox_IsGray");

        horizontalLayout_8->addWidget(checkBox_IsGray);

        checkBox_IsAlpha = new QCheckBox(groupBox_ImageProper);
        checkBox_IsAlpha->setObjectName("checkBox_IsAlpha");

        horizontalLayout_8->addWidget(checkBox_IsAlpha);


        verticalLayout->addLayout(horizontalLayout_8);

        splitter->addWidget(groupBox_ImageProper);
        groupBox_ImageTransform = new QGroupBox(splitter);
        groupBox_ImageTransform->setObjectName("groupBox_ImageTransform");
        verticalLayout_2 = new QVBoxLayout(groupBox_ImageTransform);
        verticalLayout_2->setObjectName("verticalLayout_2");
        comboBox = new QComboBox(groupBox_ImageTransform);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout_2->addWidget(comboBox);

        pushButton_ImageFormTrans = new QPushButton(groupBox_ImageTransform);
        pushButton_ImageFormTrans->setObjectName("pushButton_ImageFormTrans");

        verticalLayout_2->addWidget(pushButton_ImageFormTrans);

        splitter->addWidget(groupBox_ImageTransform);
        groupBox_Rgb565 = new QGroupBox(splitter);
        groupBox_Rgb565->setObjectName("groupBox_Rgb565");
        verticalLayout_3 = new QVBoxLayout(groupBox_Rgb565);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        radioButton_LowBitForward = new QRadioButton(groupBox_Rgb565);
        radioButton_LowBitForward->setObjectName("radioButton_LowBitForward");

        horizontalLayout_9->addWidget(radioButton_LowBitForward);

        radioButton_HighBitForward = new QRadioButton(groupBox_Rgb565);
        radioButton_HighBitForward->setObjectName("radioButton_HighBitForward");

        horizontalLayout_9->addWidget(radioButton_HighBitForward);


        verticalLayout_3->addLayout(horizontalLayout_9);

        pushButton_GenRgb565 = new QPushButton(groupBox_Rgb565);
        pushButton_GenRgb565->setObjectName("pushButton_GenRgb565");

        verticalLayout_3->addWidget(pushButton_GenRgb565);

        pushButton_SaveDateFile = new QPushButton(groupBox_Rgb565);
        pushButton_SaveDateFile->setObjectName("pushButton_SaveDateFile");

        verticalLayout_3->addWidget(pushButton_SaveDateFile);

        splitter->addWidget(groupBox_Rgb565);

        horizontalLayout_10->addWidget(splitter);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_picture = new QLabel(tab);
        label_picture->setObjectName("label_picture");

        verticalLayout_5->addWidget(label_picture);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout_4->addWidget(plainTextEdit);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_10->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 616, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_open);
        toolBar->addAction(action_FileReload);
        toolBar->addAction(action_save);
        toolBar->addAction(action_File_SaveAs);
        toolBar->addAction(action_Preview);
        toolBar->addAction(action_Print);
        toolBar->addSeparator();
        toolBar->addAction(action_ZoomIn);
        toolBar->addAction(action_ZoomOut);
        toolBar->addAction(action_RotateLeft);
        toolBar->addAction(action_RotateRight);
        toolBar->addAction(action_FlipUD);
        toolBar->addAction(action_FlipLR);
        toolBar->addSeparator();
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\346\234\254\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        action_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        action_save->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\345\210\260\345\275\223\345\211\215\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_RotateLeft->setText(QCoreApplication::translate("MainWindow", "\345\267\246\346\227\213", nullptr));
#if QT_CONFIG(tooltip)
        action_RotateLeft->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\206\346\227\266\351\222\210\346\227\213\350\275\25490\342\200\230\342\200\231", nullptr));
#endif // QT_CONFIG(tooltip)
        action_RotateRight->setText(QCoreApplication::translate("MainWindow", "\345\217\263\346\227\213", nullptr));
#if QT_CONFIG(tooltip)
        action_RotateRight->setToolTip(QCoreApplication::translate("MainWindow", "\351\241\272\346\227\266\351\222\210\346\227\213\350\275\25490\342\200\230\342\200\231", nullptr));
#endif // QT_CONFIG(tooltip)
        action_FlipUD->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\213\347\277\273\350\275\254", nullptr));
#if QT_CONFIG(tooltip)
        action_FlipUD->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\213\347\277\273\350\275\254", nullptr));
#endif // QT_CONFIG(tooltip)
        action_FlipLR->setText(QCoreApplication::translate("MainWindow", "\345\267\246\345\217\263\347\277\273\350\275\254", nullptr));
#if QT_CONFIG(tooltip)
        action_FlipLR->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\246\345\217\263\347\277\273\350\275\254", nullptr));
#endif // QT_CONFIG(tooltip)
        action_FileReload->setText(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\350\275\275\345\205\245", nullptr));
#if QT_CONFIG(tooltip)
        action_FileReload->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\350\275\275\345\205\245\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        action_File_SaveAs->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        action_File_SaveAs->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\345\233\276\347\211\207\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Preview->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\351\242\204\350\247\210", nullptr));
#if QT_CONFIG(tooltip)
        action_Preview->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\351\242\204\350\247\210", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Preview->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Print->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260", nullptr));
#if QT_CONFIG(tooltip)
        action_Print->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ZoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#if QT_CONFIG(tooltip)
        action_ZoomIn->setToolTip(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_ZoomIn->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        action_ZoomOut->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        action_ZoomOut->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_ZoomOut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox_ImageProper->setTitle(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\345\261\236\346\200\247", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\346\240\274\345\274\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\345\256\275\345\272\246", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\351\253\230\345\272\246", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\346\267\261\345\272\246", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\344\275\215\345\271\263\351\235\242\346\225\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\345\244\247\345\260\217", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "DPI\345\210\206\350\276\250\347\216\207", nullptr));
        checkBox_IsGray->setText(QCoreApplication::translate("MainWindow", "\347\201\260\345\272\246\345\233\276", nullptr));
        checkBox_IsAlpha->setText(QCoreApplication::translate("MainWindow", "\345\205\267\346\234\211Alpha\351\200\232\351\201\223", nullptr));
        groupBox_ImageTransform->setTitle(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\346\240\274\345\274\217\350\275\254\346\215\242", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "RGB888", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "RGB16", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "RGBx888", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "RGB32", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Grayscale8", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "GrayScale16", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Indexed8", nullptr));

        pushButton_ImageFormTrans->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\346\240\274\345\274\217\350\275\254\346\215\242", nullptr));
        groupBox_Rgb565->setTitle(QCoreApplication::translate("MainWindow", "RGB565\346\225\260\346\215\256", nullptr));
        radioButton_LowBitForward->setText(QCoreApplication::translate("MainWindow", "\344\275\216\345\255\227\350\212\202\345\234\250\345\211\215", nullptr));
        radioButton_HighBitForward->setText(QCoreApplication::translate("MainWindow", "\351\253\230\345\255\227\350\212\202\345\234\250\345\211\215", nullptr));
        pushButton_GenRgb565->setText(QCoreApplication::translate("MainWindow", "\347\224\237\346\210\220RGB565\346\225\260\346\215\256", nullptr));
        pushButton_SaveDateFile->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256\346\226\207\344\273\266", nullptr));
        label_picture->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
