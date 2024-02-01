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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_seriesColor;
    QAction *action_reBuildChart;
    QAction *action_changValue;
    QAction *action_addRow;
    QAction *action_insertRow;
    QAction *action_delRow;
    QAction *action_quit;
    QWidget *centralwidget;
    QFrame *frame_setupChart;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QComboBox *comboBox_preView;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QSlider *horizontalSlider_horizontalRotate;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QSlider *horizontalSlider_VerticalRotate;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_4;
    QSlider *horizontalSlider_scaled;
    QFrame *frame;
    QGridLayout *gridLayout;
    QToolButton *toolButton_up;
    QToolButton *toolButton_left;
    QToolButton *toolButton_refresh;
    QToolButton *toolButton_right;
    QToolButton *toolButton_down;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QComboBox *comboBox_mapTheme;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSpinBox *spinBox_fontSize;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QComboBox *comboBox_selectMode;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_showBackground;
    QCheckBox *checkBox_showGrid;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_showReflection;
    QCheckBox *checkBox_reverseValueAxis;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox_showAxisTitle;
    QCheckBox *checkBox_showAxisLabelBackground;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QComboBox *comboBox_barStyle;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_scatterSize;
    QCheckBox *checkBox_smoothEffect;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBox_showSelectedBarLabels;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(865, 690);
        action_seriesColor = new QAction(MainWindow);
        action_seriesColor->setObjectName("action_seriesColor");
        action_seriesColor->setMenuRole(QAction::NoRole);
        action_reBuildChart = new QAction(MainWindow);
        action_reBuildChart->setObjectName("action_reBuildChart");
        action_reBuildChart->setMenuRole(QAction::NoRole);
        action_changValue = new QAction(MainWindow);
        action_changValue->setObjectName("action_changValue");
        action_changValue->setMenuRole(QAction::NoRole);
        action_addRow = new QAction(MainWindow);
        action_addRow->setObjectName("action_addRow");
        action_addRow->setMenuRole(QAction::NoRole);
        action_insertRow = new QAction(MainWindow);
        action_insertRow->setObjectName("action_insertRow");
        action_insertRow->setMenuRole(QAction::NoRole);
        action_delRow = new QAction(MainWindow);
        action_delRow->setObjectName("action_delRow");
        action_delRow->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame_setupChart = new QFrame(centralwidget);
        frame_setupChart->setObjectName("frame_setupChart");
        frame_setupChart->setGeometry(QRect(10, 0, 364, 603));
        frame_setupChart->setFrameShape(QFrame::StyledPanel);
        frame_setupChart->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_setupChart);
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox = new QGroupBox(frame_setupChart);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_7->addWidget(label);

        comboBox_preView = new QComboBox(groupBox);
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->addItem(QString());
        comboBox_preView->setObjectName("comboBox_preView");

        horizontalLayout_7->addWidget(comboBox_preView);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_8->addWidget(label_2);

        horizontalSlider_horizontalRotate = new QSlider(groupBox);
        horizontalSlider_horizontalRotate->setObjectName("horizontalSlider_horizontalRotate");
        horizontalSlider_horizontalRotate->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalSlider_horizontalRotate);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_9->addWidget(label_3);

        horizontalSlider_VerticalRotate = new QSlider(groupBox);
        horizontalSlider_VerticalRotate->setObjectName("horizontalSlider_VerticalRotate");
        horizontalSlider_VerticalRotate->setMinimum(-180);
        horizontalSlider_VerticalRotate->setMaximum(180);
        horizontalSlider_VerticalRotate->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSlider_VerticalRotate);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        horizontalLayout_10->addWidget(label_4);

        horizontalSlider_scaled = new QSlider(groupBox);
        horizontalSlider_scaled->setObjectName("horizontalSlider_scaled");
        horizontalSlider_scaled->setMinimum(10);
        horizontalSlider_scaled->setMaximum(100);
        horizontalSlider_scaled->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalSlider_scaled);


        verticalLayout_2->addLayout(horizontalLayout_10);


        horizontalLayout_11->addLayout(verticalLayout_2);

        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        toolButton_up = new QToolButton(frame);
        toolButton_up->setObjectName("toolButton_up");
        toolButton_up->setArrowType(Qt::UpArrow);

        gridLayout->addWidget(toolButton_up, 0, 1, 1, 1);

        toolButton_left = new QToolButton(frame);
        toolButton_left->setObjectName("toolButton_left");
        toolButton_left->setArrowType(Qt::LeftArrow);

        gridLayout->addWidget(toolButton_left, 1, 0, 1, 1);

        toolButton_refresh = new QToolButton(frame);
        toolButton_refresh->setObjectName("toolButton_refresh");

        gridLayout->addWidget(toolButton_refresh, 1, 1, 1, 1);

        toolButton_right = new QToolButton(frame);
        toolButton_right->setObjectName("toolButton_right");
        toolButton_right->setArrowType(Qt::RightArrow);

        gridLayout->addWidget(toolButton_right, 1, 2, 1, 1);

        toolButton_down = new QToolButton(frame);
        toolButton_down->setObjectName("toolButton_down");
        toolButton_down->setArrowType(Qt::DownArrow);

        gridLayout->addWidget(toolButton_down, 2, 1, 1, 1);


        horizontalLayout_11->addWidget(frame);


        verticalLayout_3->addLayout(horizontalLayout_11);


        verticalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frame_setupChart);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        comboBox_mapTheme = new QComboBox(groupBox_2);
        comboBox_mapTheme->addItem(QString());
        comboBox_mapTheme->addItem(QString());
        comboBox_mapTheme->addItem(QString());
        comboBox_mapTheme->addItem(QString());
        comboBox_mapTheme->addItem(QString());
        comboBox_mapTheme->addItem(QString());
        comboBox_mapTheme->addItem(QString());
        comboBox_mapTheme->addItem(QString());
        comboBox_mapTheme->addItem(QString());
        comboBox_mapTheme->setObjectName("comboBox_mapTheme");

        horizontalLayout->addWidget(comboBox_mapTheme);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        spinBox_fontSize = new QSpinBox(groupBox_2);
        spinBox_fontSize->setObjectName("spinBox_fontSize");

        horizontalLayout_2->addWidget(spinBox_fontSize);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);

        comboBox_selectMode = new QComboBox(groupBox_2);
        comboBox_selectMode->addItem(QString());
        comboBox_selectMode->addItem(QString());
        comboBox_selectMode->addItem(QString());
        comboBox_selectMode->addItem(QString());
        comboBox_selectMode->addItem(QString());
        comboBox_selectMode->addItem(QString());
        comboBox_selectMode->addItem(QString());
        comboBox_selectMode->addItem(QString());
        comboBox_selectMode->addItem(QString());
        comboBox_selectMode->addItem(QString());
        comboBox_selectMode->setObjectName("comboBox_selectMode");

        horizontalLayout_3->addWidget(comboBox_selectMode);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        checkBox_showBackground = new QCheckBox(groupBox_2);
        checkBox_showBackground->setObjectName("checkBox_showBackground");

        horizontalLayout_4->addWidget(checkBox_showBackground);

        checkBox_showGrid = new QCheckBox(groupBox_2);
        checkBox_showGrid->setObjectName("checkBox_showGrid");

        horizontalLayout_4->addWidget(checkBox_showGrid);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        checkBox_showReflection = new QCheckBox(groupBox_2);
        checkBox_showReflection->setObjectName("checkBox_showReflection");

        horizontalLayout_5->addWidget(checkBox_showReflection);

        checkBox_reverseValueAxis = new QCheckBox(groupBox_2);
        checkBox_reverseValueAxis->setObjectName("checkBox_reverseValueAxis");

        horizontalLayout_5->addWidget(checkBox_reverseValueAxis);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        checkBox_showAxisTitle = new QCheckBox(groupBox_2);
        checkBox_showAxisTitle->setObjectName("checkBox_showAxisTitle");

        horizontalLayout_6->addWidget(checkBox_showAxisTitle);

        checkBox_showAxisLabelBackground = new QCheckBox(groupBox_2);
        checkBox_showAxisLabelBackground->setObjectName("checkBox_showAxisLabelBackground");

        horizontalLayout_6->addWidget(checkBox_showAxisLabelBackground);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_5->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(frame_setupChart);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName("label_8");

        horizontalLayout_13->addWidget(label_8);

        comboBox_barStyle = new QComboBox(groupBox_3);
        comboBox_barStyle->addItem(QString());
        comboBox_barStyle->addItem(QString());
        comboBox_barStyle->addItem(QString());
        comboBox_barStyle->addItem(QString());
        comboBox_barStyle->addItem(QString());
        comboBox_barStyle->addItem(QString());
        comboBox_barStyle->addItem(QString());
        comboBox_barStyle->addItem(QString());
        comboBox_barStyle->addItem(QString());
        comboBox_barStyle->addItem(QString());
        comboBox_barStyle->addItem(QString());
        comboBox_barStyle->setObjectName("comboBox_barStyle");

        horizontalLayout_13->addWidget(comboBox_barStyle);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_2);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");

        horizontalLayout_14->addWidget(label_9);

        doubleSpinBox_scatterSize = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_scatterSize->setObjectName("doubleSpinBox_scatterSize");
        doubleSpinBox_scatterSize->setMaximum(1.000000000000000);
        doubleSpinBox_scatterSize->setSingleStep(0.050000000000000);

        horizontalLayout_14->addWidget(doubleSpinBox_scatterSize);

        checkBox_smoothEffect = new QCheckBox(groupBox_3);
        checkBox_smoothEffect->setObjectName("checkBox_smoothEffect");

        horizontalLayout_14->addWidget(checkBox_smoothEffect);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_3);

        checkBox_showSelectedBarLabels = new QCheckBox(groupBox_3);
        checkBox_showSelectedBarLabels->setObjectName("checkBox_showSelectedBarLabels");

        horizontalLayout_12->addWidget(checkBox_showSelectedBarLabels);


        verticalLayout_4->addLayout(horizontalLayout_12);


        verticalLayout_5->addWidget(groupBox_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 865, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_seriesColor);
        toolBar->addAction(action_reBuildChart);
        toolBar->addAction(action_changValue);
        toolBar->addSeparator();
        toolBar->addAction(action_addRow);
        toolBar->addAction(action_delRow);
        toolBar->addSeparator();
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Q3DScatter\344\270\211\347\273\264\346\225\243\347\202\271\345\233\276", nullptr));
        action_seriesColor->setText(QCoreApplication::translate("MainWindow", "\345\272\217\345\210\227\351\242\234\350\211\262", nullptr));
#if QT_CONFIG(tooltip)
        action_seriesColor->setToolTip(QCoreApplication::translate("MainWindow", "\345\272\217\345\210\227\351\242\234\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        action_reBuildChart->setText(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\347\224\237\346\210\220", nullptr));
#if QT_CONFIG(tooltip)
        action_reBuildChart->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\347\224\237\346\210\220", nullptr));
#endif // QT_CONFIG(tooltip)
        action_changValue->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\347\202\271\345\235\220\346\240\207", nullptr));
#if QT_CONFIG(tooltip)
        action_changValue->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\347\202\271\345\235\220\346\240\207", nullptr));
#endif // QT_CONFIG(tooltip)
        action_addRow->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\232\217\346\234\272\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        action_addRow->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\232\217\346\234\272\347\202\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_insertRow->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
#if QT_CONFIG(tooltip)
        action_insertRow->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        action_delRow->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        action_delRow->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\347\202\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\227\213\350\275\254\345\222\214\345\271\263\347\247\273", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\242\204\350\256\276\350\247\206\350\247\222", nullptr));
        comboBox_preView->setItemText(0, QCoreApplication::translate("MainWindow", "FrontLow", nullptr));
        comboBox_preView->setItemText(1, QCoreApplication::translate("MainWindow", "Front", nullptr));
        comboBox_preView->setItemText(2, QCoreApplication::translate("MainWindow", "FrontHigh", nullptr));
        comboBox_preView->setItemText(3, QCoreApplication::translate("MainWindow", "LeftLow", nullptr));
        comboBox_preView->setItemText(4, QCoreApplication::translate("MainWindow", "Left", nullptr));
        comboBox_preView->setItemText(5, QCoreApplication::translate("MainWindow", "LeftHigh", nullptr));
        comboBox_preView->setItemText(6, QCoreApplication::translate("MainWindow", "RightLow", nullptr));
        comboBox_preView->setItemText(7, QCoreApplication::translate("MainWindow", "Right", nullptr));
        comboBox_preView->setItemText(8, QCoreApplication::translate("MainWindow", "RightHigh", nullptr));
        comboBox_preView->setItemText(9, QCoreApplication::translate("MainWindow", "BehindLow", nullptr));
        comboBox_preView->setItemText(10, QCoreApplication::translate("MainWindow", "Behind", nullptr));
        comboBox_preView->setItemText(11, QCoreApplication::translate("MainWindow", "BehindHigh", nullptr));
        comboBox_preView->setItemText(12, QCoreApplication::translate("MainWindow", "sometricLeft", nullptr));
        comboBox_preView->setItemText(13, QCoreApplication::translate("MainWindow", "sometricLeftHigh", nullptr));
        comboBox_preView->setItemText(14, QCoreApplication::translate("MainWindow", "sometricRight", nullptr));
        comboBox_preView->setItemText(15, QCoreApplication::translate("MainWindow", "sometricRightHigh", nullptr));
        comboBox_preView->setItemText(16, QCoreApplication::translate("MainWindow", "DirectlyAbove", nullptr));
        comboBox_preView->setItemText(17, QCoreApplication::translate("MainWindow", "DirectlyAboveCW45", nullptr));
        comboBox_preView->setItemText(18, QCoreApplication::translate("MainWindow", "DirectlyAboveCCW45", nullptr));
        comboBox_preView->setItemText(19, QCoreApplication::translate("MainWindow", "FrontBelow", nullptr));
        comboBox_preView->setItemText(20, QCoreApplication::translate("MainWindow", "LeftBelow", nullptr));
        comboBox_preView->setItemText(21, QCoreApplication::translate("MainWindow", "RightBelow", nullptr));
        comboBox_preView->setItemText(22, QCoreApplication::translate("MainWindow", "BehindBelow", nullptr));
        comboBox_preView->setItemText(23, QCoreApplication::translate("MainWindow", "DirectlyBelow", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "\346\260\264\345\271\263\346\227\213\350\275\254", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\236\202\347\233\264\346\227\213\350\275\254", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\347\274\251\346\224\276", nullptr));
        toolButton_up->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_left->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_refresh->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_right->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_down->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\233\276\345\275\242\346\200\273\344\275\223", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\275\242\344\270\273\351\242\230", nullptr));
        comboBox_mapTheme->setItemText(0, QCoreApplication::translate("MainWindow", "ThemeQt", nullptr));
        comboBox_mapTheme->setItemText(1, QCoreApplication::translate("MainWindow", "ThemePrimaryColors", nullptr));
        comboBox_mapTheme->setItemText(2, QCoreApplication::translate("MainWindow", "ThemeDigia", nullptr));
        comboBox_mapTheme->setItemText(3, QCoreApplication::translate("MainWindow", "ThemeStoneMoss", nullptr));
        comboBox_mapTheme->setItemText(4, QCoreApplication::translate("MainWindow", "ThemeArmyBlue", nullptr));
        comboBox_mapTheme->setItemText(5, QCoreApplication::translate("MainWindow", "ThemeRetro", nullptr));
        comboBox_mapTheme->setItemText(6, QCoreApplication::translate("MainWindow", "ThemeEbony", nullptr));
        comboBox_mapTheme->setItemText(7, QCoreApplication::translate("MainWindow", "ThemeIsabelle", nullptr));
        comboBox_mapTheme->setItemText(8, QCoreApplication::translate("MainWindow", "ThemeUserDefined", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\345\244\247\345\260\217", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\250\241\345\274\217", nullptr));
        comboBox_selectMode->setItemText(0, QCoreApplication::translate("MainWindow", "SelectionNone", nullptr));
        comboBox_selectMode->setItemText(1, QCoreApplication::translate("MainWindow", "SelectionItem", nullptr));
        comboBox_selectMode->setItemText(2, QCoreApplication::translate("MainWindow", "SelectionRow", nullptr));
        comboBox_selectMode->setItemText(3, QCoreApplication::translate("MainWindow", "SelectionItemAndRow", nullptr));
        comboBox_selectMode->setItemText(4, QCoreApplication::translate("MainWindow", "SelectionColumn", nullptr));
        comboBox_selectMode->setItemText(5, QCoreApplication::translate("MainWindow", "SelectionItemAndColumn", nullptr));
        comboBox_selectMode->setItemText(6, QCoreApplication::translate("MainWindow", "SelectionRowAndColumn", nullptr));
        comboBox_selectMode->setItemText(7, QCoreApplication::translate("MainWindow", "SelectionItemRowAndColumn", nullptr));
        comboBox_selectMode->setItemText(8, QCoreApplication::translate("MainWindow", "SelectionSlice", nullptr));
        comboBox_selectMode->setItemText(9, QCoreApplication::translate("MainWindow", "SelectionMultiSeries", nullptr));

        checkBox_showBackground->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\203\214\346\231\257", nullptr));
        checkBox_showGrid->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\203\214\346\231\257\347\275\221\346\240\274", nullptr));
        checkBox_showReflection->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\351\230\264\345\275\261", nullptr));
        checkBox_reverseValueAxis->setText(QCoreApplication::translate("MainWindow", "\345\236\202\347\233\264\345\235\220\346\240\207\350\275\264\345\217\215\345\220\221", nullptr));
        checkBox_showAxisTitle->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\275\264\346\240\207\351\242\230", nullptr));
        checkBox_showAxisLabelBackground->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\275\264\346\240\207\347\255\276\350\203\214\346\231\257", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\345\272\217\345\210\227\350\256\276\347\275\256", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\243\222\346\237\261\346\240\267\345\274\217", nullptr));
        comboBox_barStyle->setItemText(0, QCoreApplication::translate("MainWindow", "MeshUserDefined", nullptr));
        comboBox_barStyle->setItemText(1, QCoreApplication::translate("MainWindow", "MeshBar", nullptr));
        comboBox_barStyle->setItemText(2, QCoreApplication::translate("MainWindow", "MeshCube", nullptr));
        comboBox_barStyle->setItemText(3, QCoreApplication::translate("MainWindow", "MeshPyramid", nullptr));
        comboBox_barStyle->setItemText(4, QCoreApplication::translate("MainWindow", "MeshCone", nullptr));
        comboBox_barStyle->setItemText(5, QCoreApplication::translate("MainWindow", "MeshCylinder", nullptr));
        comboBox_barStyle->setItemText(6, QCoreApplication::translate("MainWindow", "MeshBevelBar", nullptr));
        comboBox_barStyle->setItemText(7, QCoreApplication::translate("MainWindow", "MeshSphere", nullptr));
        comboBox_barStyle->setItemText(8, QCoreApplication::translate("MainWindow", "MeshMinimal", nullptr));
        comboBox_barStyle->setItemText(9, QCoreApplication::translate("MainWindow", "MeshArrow", nullptr));
        comboBox_barStyle->setItemText(10, QCoreApplication::translate("MainWindow", "MeshPoint", nullptr));

        label_9->setText(QCoreApplication::translate("MainWindow", "\346\225\243\347\202\271\345\244\247\345\260\217", nullptr));
        checkBox_smoothEffect->setText(QCoreApplication::translate("MainWindow", "\345\205\211\346\273\221\346\225\210\346\236\234", nullptr));
        checkBox_showSelectedBarLabels->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\351\200\211\344\270\255\346\225\243\347\202\271\347\232\204\346\240\207\347\255\276", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
