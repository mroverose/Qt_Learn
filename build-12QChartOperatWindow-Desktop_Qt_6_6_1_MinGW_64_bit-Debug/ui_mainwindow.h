/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_RedrawChart;
    QAction *action_quit;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_6;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupBox_title;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_setTitle;
    QLineEdit *lineEdit_titleText;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_titleTextColor;
    QPushButton *pushButton_titleFont;
    QGroupBox *groupBox_graphItem;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *radioButton_top;
    QRadioButton *radioButton_bottom;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButton_left;
    QRadioButton *radioButton_right;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_textColor;
    QPushButton *pushButton_itemFont;
    QGroupBox *groupBox_margin;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_3;
    QSpinBox *spinBox_left;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_4;
    QSpinBox *spinBox_right;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_5;
    QSpinBox *spinBox_top;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_6;
    QSpinBox *spinBox_bottom;
    QPushButton *pushButton_setMargin;
    QGroupBox *groupBox_animatEffect;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_7;
    QComboBox *comboBox_animationEffect;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_8;
    QComboBox *comboBox_theme;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_chooseSeries;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_sinLine;
    QRadioButton *radioButton_cosLine;
    QGroupBox *groupBox_seriesLine;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_seriesName;
    QLineEdit *lineEdit_SeriesName;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_LineColor;
    QPushButton *pushButton_LinePen;
    QGroupBox *groupBox_useOpenGL;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSlider *horizontalSlider;
    QGroupBox *groupBox_dataPoint;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton_dataColor;
    QGroupBox *groupBox_dataLabel;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton_labelStyley;
    QRadioButton *radioButton_labelStylexy;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_20;
    QGroupBox *groupBox_chooseRadix;
    QHBoxLayout *horizontalLayout_18;
    QRadioButton *radioButton_radixX;
    QRadioButton *radioButton_radixY;
    QGroupBox *groupBox_radixLineSet;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_minValue;
    QCheckBox *checkBox_inverseRadix;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_maxValue;
    QPushButton *pushButton_setRadixRange;
    QGroupBox *groupBox_radixLineTitle;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *pushButton_setLineTitle;
    QLineEdit *lineEdit_LineTitle;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *pushButton_setLineTitleColor;
    QPushButton *pushButton_setLineTitleFont;
    QGroupBox *groupBox_radixTickLabel;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *pushButton_setLabelFormat;
    QLineEdit *lineEdit_radixLineTickLabelFormat;
    QHBoxLayout *horizontalLayout_22;
    QPushButton *pushButton_6;
    QPushButton *pushButton_setLabelFont;
    QGroupBox *groupBox_radixLine;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_29;
    QRadioButton *radioButton_fixTick;
    QRadioButton *radioButton_dynimicTick;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_11;
    QSpinBox *spinBox_tickCnt;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBox_startTickValue;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_13;
    QDoubleSpinBox *doubleSpinBox_tickInterValue;
    QHBoxLayout *horizontalLayout_25;
    QPushButton *pushButton_lineTickPen;
    QPushButton *pushButton_LineTickColor;
    QGroupBox *groupBox_radixGridLine;
    QHBoxLayout *horizontalLayout_30;
    QPushButton *pushButton_GridPen;
    QPushButton *pushButton_GridColor;
    QGroupBox *groupBox_radixMinorGridLine;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_14;
    QSpinBox *spinBox_minorTickCnt;
    QHBoxLayout *horizontalLayout_32;
    QPushButton *pushButton_minorGridPen;
    QPushButton *pushButton_MinorGridColor;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QChartView *chartView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 733);
        action_RedrawChart = new QAction(MainWindow);
        action_RedrawChart->setObjectName("action_RedrawChart");
        action_RedrawChart->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_6 = new QHBoxLayout(centralwidget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName("toolBox");
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, -66, 453, 601));
        verticalLayout_13 = new QVBoxLayout(page);
        verticalLayout_13->setObjectName("verticalLayout_13");
        groupBox_title = new QGroupBox(page);
        groupBox_title->setObjectName("groupBox_title");
        verticalLayout_10 = new QVBoxLayout(groupBox_title);
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton_setTitle = new QPushButton(groupBox_title);
        pushButton_setTitle->setObjectName("pushButton_setTitle");

        horizontalLayout_7->addWidget(pushButton_setTitle);

        lineEdit_titleText = new QLineEdit(groupBox_title);
        lineEdit_titleText->setObjectName("lineEdit_titleText");

        horizontalLayout_7->addWidget(lineEdit_titleText);


        verticalLayout_10->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton_titleTextColor = new QPushButton(groupBox_title);
        pushButton_titleTextColor->setObjectName("pushButton_titleTextColor");

        horizontalLayout_8->addWidget(pushButton_titleTextColor);

        pushButton_titleFont = new QPushButton(groupBox_title);
        pushButton_titleFont->setObjectName("pushButton_titleFont");

        horizontalLayout_8->addWidget(pushButton_titleFont);


        verticalLayout_10->addLayout(horizontalLayout_8);


        verticalLayout_13->addWidget(groupBox_title);

        groupBox_graphItem = new QGroupBox(page);
        groupBox_graphItem->setObjectName("groupBox_graphItem");
        groupBox_graphItem->setCheckable(true);
        verticalLayout_11 = new QVBoxLayout(groupBox_graphItem);
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        radioButton_top = new QRadioButton(groupBox_graphItem);
        radioButton_top->setObjectName("radioButton_top");

        horizontalLayout_9->addWidget(radioButton_top);

        radioButton_bottom = new QRadioButton(groupBox_graphItem);
        radioButton_bottom->setObjectName("radioButton_bottom");

        horizontalLayout_9->addWidget(radioButton_bottom);


        verticalLayout_11->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        radioButton_left = new QRadioButton(groupBox_graphItem);
        radioButton_left->setObjectName("radioButton_left");

        horizontalLayout_10->addWidget(radioButton_left);

        radioButton_right = new QRadioButton(groupBox_graphItem);
        radioButton_right->setObjectName("radioButton_right");

        horizontalLayout_10->addWidget(radioButton_right);


        verticalLayout_11->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        pushButton_textColor = new QPushButton(groupBox_graphItem);
        pushButton_textColor->setObjectName("pushButton_textColor");

        horizontalLayout_11->addWidget(pushButton_textColor);

        pushButton_itemFont = new QPushButton(groupBox_graphItem);
        pushButton_itemFont->setObjectName("pushButton_itemFont");

        horizontalLayout_11->addWidget(pushButton_itemFont);


        verticalLayout_11->addLayout(horizontalLayout_11);


        verticalLayout_13->addWidget(groupBox_graphItem);

        groupBox_margin = new QGroupBox(page);
        groupBox_margin->setObjectName("groupBox_margin");
        verticalLayout_12 = new QVBoxLayout(groupBox_margin);
        verticalLayout_12->setObjectName("verticalLayout_12");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_3 = new QLabel(groupBox_margin);
        label_3->setObjectName("label_3");

        horizontalLayout_12->addWidget(label_3);

        spinBox_left = new QSpinBox(groupBox_margin);
        spinBox_left->setObjectName("spinBox_left");

        horizontalLayout_12->addWidget(spinBox_left);


        verticalLayout_12->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_4 = new QLabel(groupBox_margin);
        label_4->setObjectName("label_4");

        horizontalLayout_13->addWidget(label_4);

        spinBox_right = new QSpinBox(groupBox_margin);
        spinBox_right->setObjectName("spinBox_right");

        horizontalLayout_13->addWidget(spinBox_right);


        verticalLayout_12->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_5 = new QLabel(groupBox_margin);
        label_5->setObjectName("label_5");

        horizontalLayout_14->addWidget(label_5);

        spinBox_top = new QSpinBox(groupBox_margin);
        spinBox_top->setObjectName("spinBox_top");

        horizontalLayout_14->addWidget(spinBox_top);


        verticalLayout_12->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_6 = new QLabel(groupBox_margin);
        label_6->setObjectName("label_6");

        horizontalLayout_15->addWidget(label_6);

        spinBox_bottom = new QSpinBox(groupBox_margin);
        spinBox_bottom->setObjectName("spinBox_bottom");

        horizontalLayout_15->addWidget(spinBox_bottom);


        verticalLayout_12->addLayout(horizontalLayout_15);

        pushButton_setMargin = new QPushButton(groupBox_margin);
        pushButton_setMargin->setObjectName("pushButton_setMargin");

        verticalLayout_12->addWidget(pushButton_setMargin);


        verticalLayout_13->addWidget(groupBox_margin);

        groupBox_animatEffect = new QGroupBox(page);
        groupBox_animatEffect->setObjectName("groupBox_animatEffect");
        verticalLayout_14 = new QVBoxLayout(groupBox_animatEffect);
        verticalLayout_14->setObjectName("verticalLayout_14");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_7 = new QLabel(groupBox_animatEffect);
        label_7->setObjectName("label_7");

        horizontalLayout_16->addWidget(label_7);

        comboBox_animationEffect = new QComboBox(groupBox_animatEffect);
        comboBox_animationEffect->addItem(QString());
        comboBox_animationEffect->addItem(QString());
        comboBox_animationEffect->addItem(QString());
        comboBox_animationEffect->addItem(QString());
        comboBox_animationEffect->setObjectName("comboBox_animationEffect");

        horizontalLayout_16->addWidget(comboBox_animationEffect);


        verticalLayout_14->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_8 = new QLabel(groupBox_animatEffect);
        label_8->setObjectName("label_8");

        horizontalLayout_17->addWidget(label_8);

        comboBox_theme = new QComboBox(groupBox_animatEffect);
        comboBox_theme->addItem(QString());
        comboBox_theme->addItem(QString());
        comboBox_theme->addItem(QString());
        comboBox_theme->addItem(QString());
        comboBox_theme->addItem(QString());
        comboBox_theme->addItem(QString());
        comboBox_theme->addItem(QString());
        comboBox_theme->addItem(QString());
        comboBox_theme->addItem(QString());
        comboBox_theme->setObjectName("comboBox_theme");

        horizontalLayout_17->addWidget(comboBox_theme);


        verticalLayout_14->addLayout(horizontalLayout_17);


        verticalLayout_13->addWidget(groupBox_animatEffect);

        toolBox->addItem(page, QString::fromUtf8("\345\233\276\350\241\250\350\256\276\347\275\256"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 386, 556));
        verticalLayout_9 = new QVBoxLayout(page_2);
        verticalLayout_9->setObjectName("verticalLayout_9");
        groupBox_chooseSeries = new QGroupBox(page_2);
        groupBox_chooseSeries->setObjectName("groupBox_chooseSeries");
        verticalLayout_2 = new QVBoxLayout(groupBox_chooseSeries);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        radioButton_sinLine = new QRadioButton(groupBox_chooseSeries);
        radioButton_sinLine->setObjectName("radioButton_sinLine");

        horizontalLayout->addWidget(radioButton_sinLine);

        radioButton_cosLine = new QRadioButton(groupBox_chooseSeries);
        radioButton_cosLine->setObjectName("radioButton_cosLine");

        horizontalLayout->addWidget(radioButton_cosLine);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_9->addWidget(groupBox_chooseSeries);

        groupBox_seriesLine = new QGroupBox(page_2);
        groupBox_seriesLine->setObjectName("groupBox_seriesLine");
        groupBox_seriesLine->setCheckable(true);
        groupBox_seriesLine->setChecked(true);
        verticalLayout_3 = new QVBoxLayout(groupBox_seriesLine);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_seriesName = new QPushButton(groupBox_seriesLine);
        pushButton_seriesName->setObjectName("pushButton_seriesName");

        horizontalLayout_2->addWidget(pushButton_seriesName);

        lineEdit_SeriesName = new QLineEdit(groupBox_seriesLine);
        lineEdit_SeriesName->setObjectName("lineEdit_SeriesName");

        horizontalLayout_2->addWidget(lineEdit_SeriesName);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_LineColor = new QPushButton(groupBox_seriesLine);
        pushButton_LineColor->setObjectName("pushButton_LineColor");

        horizontalLayout_3->addWidget(pushButton_LineColor);

        pushButton_LinePen = new QPushButton(groupBox_seriesLine);
        pushButton_LinePen->setObjectName("pushButton_LinePen");

        horizontalLayout_3->addWidget(pushButton_LinePen);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_9->addWidget(groupBox_seriesLine);

        groupBox_useOpenGL = new QGroupBox(page_2);
        groupBox_useOpenGL->setObjectName("groupBox_useOpenGL");
        groupBox_useOpenGL->setCheckable(true);
        verticalLayout_8 = new QVBoxLayout(groupBox_useOpenGL);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(groupBox_useOpenGL);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        horizontalSlider = new QSlider(groupBox_useOpenGL);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider);


        verticalLayout_8->addLayout(horizontalLayout_4);


        verticalLayout_9->addWidget(groupBox_useOpenGL);

        groupBox_dataPoint = new QGroupBox(page_2);
        groupBox_dataPoint->setObjectName("groupBox_dataPoint");
        groupBox_dataPoint->setCheckable(true);
        verticalLayout_7 = new QVBoxLayout(groupBox_dataPoint);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_2 = new QLabel(groupBox_dataPoint);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(groupBox_dataPoint);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setDecimals(1);

        horizontalLayout_5->addWidget(doubleSpinBox);

        pushButton_dataColor = new QPushButton(groupBox_dataPoint);
        pushButton_dataColor->setObjectName("pushButton_dataColor");

        horizontalLayout_5->addWidget(pushButton_dataColor);


        verticalLayout_7->addLayout(horizontalLayout_5);


        verticalLayout_9->addWidget(groupBox_dataPoint);

        groupBox_dataLabel = new QGroupBox(page_2);
        groupBox_dataLabel->setObjectName("groupBox_dataLabel");
        groupBox_dataLabel->setCheckable(true);
        verticalLayout_6 = new QVBoxLayout(groupBox_dataLabel);
        verticalLayout_6->setObjectName("verticalLayout_6");
        groupBox_6 = new QGroupBox(groupBox_dataLabel);
        groupBox_6->setObjectName("groupBox_6");
        verticalLayout_5 = new QVBoxLayout(groupBox_6);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        radioButton_labelStyley = new QRadioButton(groupBox_6);
        radioButton_labelStyley->setObjectName("radioButton_labelStyley");

        verticalLayout_4->addWidget(radioButton_labelStyley);

        radioButton_labelStylexy = new QRadioButton(groupBox_6);
        radioButton_labelStylexy->setObjectName("radioButton_labelStylexy");

        verticalLayout_4->addWidget(radioButton_labelStylexy);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_6->addWidget(groupBox_6);


        verticalLayout_9->addWidget(groupBox_dataLabel);

        toolBox->addItem(page_2, QString::fromUtf8("\346\233\262\347\272\277\350\256\276\347\275\256"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setGeometry(QRect(0, -286, 365, 842));
        verticalLayout_20 = new QVBoxLayout(page_3);
        verticalLayout_20->setObjectName("verticalLayout_20");
        groupBox_chooseRadix = new QGroupBox(page_3);
        groupBox_chooseRadix->setObjectName("groupBox_chooseRadix");
        horizontalLayout_18 = new QHBoxLayout(groupBox_chooseRadix);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        radioButton_radixX = new QRadioButton(groupBox_chooseRadix);
        radioButton_radixX->setObjectName("radioButton_radixX");

        horizontalLayout_18->addWidget(radioButton_radixX);

        radioButton_radixY = new QRadioButton(groupBox_chooseRadix);
        radioButton_radixY->setObjectName("radioButton_radixY");

        horizontalLayout_18->addWidget(radioButton_radixY);


        verticalLayout_20->addWidget(groupBox_chooseRadix);

        groupBox_radixLineSet = new QGroupBox(page_3);
        groupBox_radixLineSet->setObjectName("groupBox_radixLineSet");
        groupBox_radixLineSet->setCheckable(true);
        verticalLayout_15 = new QVBoxLayout(groupBox_radixLineSet);
        verticalLayout_15->setObjectName("verticalLayout_15");
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_9 = new QLabel(groupBox_radixLineSet);
        label_9->setObjectName("label_9");

        horizontalLayout_19->addWidget(label_9);

        doubleSpinBox_minValue = new QDoubleSpinBox(groupBox_radixLineSet);
        doubleSpinBox_minValue->setObjectName("doubleSpinBox_minValue");

        horizontalLayout_19->addWidget(doubleSpinBox_minValue);

        checkBox_inverseRadix = new QCheckBox(groupBox_radixLineSet);
        checkBox_inverseRadix->setObjectName("checkBox_inverseRadix");

        horizontalLayout_19->addWidget(checkBox_inverseRadix);


        verticalLayout_15->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_10 = new QLabel(groupBox_radixLineSet);
        label_10->setObjectName("label_10");

        horizontalLayout_20->addWidget(label_10);

        doubleSpinBox_maxValue = new QDoubleSpinBox(groupBox_radixLineSet);
        doubleSpinBox_maxValue->setObjectName("doubleSpinBox_maxValue");

        horizontalLayout_20->addWidget(doubleSpinBox_maxValue);

        pushButton_setRadixRange = new QPushButton(groupBox_radixLineSet);
        pushButton_setRadixRange->setObjectName("pushButton_setRadixRange");

        horizontalLayout_20->addWidget(pushButton_setRadixRange);


        verticalLayout_15->addLayout(horizontalLayout_20);


        verticalLayout_20->addWidget(groupBox_radixLineSet);

        groupBox_radixLineTitle = new QGroupBox(page_3);
        groupBox_radixLineTitle->setObjectName("groupBox_radixLineTitle");
        groupBox_radixLineTitle->setCheckable(true);
        verticalLayout_17 = new QVBoxLayout(groupBox_radixLineTitle);
        verticalLayout_17->setObjectName("verticalLayout_17");
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        pushButton_setLineTitle = new QPushButton(groupBox_radixLineTitle);
        pushButton_setLineTitle->setObjectName("pushButton_setLineTitle");

        horizontalLayout_23->addWidget(pushButton_setLineTitle);

        lineEdit_LineTitle = new QLineEdit(groupBox_radixLineTitle);
        lineEdit_LineTitle->setObjectName("lineEdit_LineTitle");

        horizontalLayout_23->addWidget(lineEdit_LineTitle);


        verticalLayout_17->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        pushButton_setLineTitleColor = new QPushButton(groupBox_radixLineTitle);
        pushButton_setLineTitleColor->setObjectName("pushButton_setLineTitleColor");

        horizontalLayout_24->addWidget(pushButton_setLineTitleColor);

        pushButton_setLineTitleFont = new QPushButton(groupBox_radixLineTitle);
        pushButton_setLineTitleFont->setObjectName("pushButton_setLineTitleFont");

        horizontalLayout_24->addWidget(pushButton_setLineTitleFont);


        verticalLayout_17->addLayout(horizontalLayout_24);


        verticalLayout_20->addWidget(groupBox_radixLineTitle);

        groupBox_radixTickLabel = new QGroupBox(page_3);
        groupBox_radixTickLabel->setObjectName("groupBox_radixTickLabel");
        groupBox_radixTickLabel->setCheckable(true);
        verticalLayout_16 = new QVBoxLayout(groupBox_radixTickLabel);
        verticalLayout_16->setObjectName("verticalLayout_16");
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        pushButton_setLabelFormat = new QPushButton(groupBox_radixTickLabel);
        pushButton_setLabelFormat->setObjectName("pushButton_setLabelFormat");

        horizontalLayout_21->addWidget(pushButton_setLabelFormat);

        lineEdit_radixLineTickLabelFormat = new QLineEdit(groupBox_radixTickLabel);
        lineEdit_radixLineTickLabelFormat->setObjectName("lineEdit_radixLineTickLabelFormat");

        horizontalLayout_21->addWidget(lineEdit_radixLineTickLabelFormat);


        verticalLayout_16->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        pushButton_6 = new QPushButton(groupBox_radixTickLabel);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout_22->addWidget(pushButton_6);

        pushButton_setLabelFont = new QPushButton(groupBox_radixTickLabel);
        pushButton_setLabelFont->setObjectName("pushButton_setLabelFont");

        horizontalLayout_22->addWidget(pushButton_setLabelFont);


        verticalLayout_16->addLayout(horizontalLayout_22);


        verticalLayout_20->addWidget(groupBox_radixTickLabel);

        groupBox_radixLine = new QGroupBox(page_3);
        groupBox_radixLine->setObjectName("groupBox_radixLine");
        groupBox_radixLine->setCheckable(true);
        verticalLayout_18 = new QVBoxLayout(groupBox_radixLine);
        verticalLayout_18->setObjectName("verticalLayout_18");
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        radioButton_fixTick = new QRadioButton(groupBox_radixLine);
        radioButton_fixTick->setObjectName("radioButton_fixTick");

        horizontalLayout_29->addWidget(radioButton_fixTick);

        radioButton_dynimicTick = new QRadioButton(groupBox_radixLine);
        radioButton_dynimicTick->setObjectName("radioButton_dynimicTick");

        horizontalLayout_29->addWidget(radioButton_dynimicTick);


        verticalLayout_18->addLayout(horizontalLayout_29);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        label_11 = new QLabel(groupBox_radixLine);
        label_11->setObjectName("label_11");

        horizontalLayout_28->addWidget(label_11);

        spinBox_tickCnt = new QSpinBox(groupBox_radixLine);
        spinBox_tickCnt->setObjectName("spinBox_tickCnt");

        horizontalLayout_28->addWidget(spinBox_tickCnt);


        verticalLayout_18->addLayout(horizontalLayout_28);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        label_12 = new QLabel(groupBox_radixLine);
        label_12->setObjectName("label_12");

        horizontalLayout_27->addWidget(label_12);

        doubleSpinBox_startTickValue = new QDoubleSpinBox(groupBox_radixLine);
        doubleSpinBox_startTickValue->setObjectName("doubleSpinBox_startTickValue");

        horizontalLayout_27->addWidget(doubleSpinBox_startTickValue);


        verticalLayout_18->addLayout(horizontalLayout_27);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        label_13 = new QLabel(groupBox_radixLine);
        label_13->setObjectName("label_13");

        horizontalLayout_26->addWidget(label_13);

        doubleSpinBox_tickInterValue = new QDoubleSpinBox(groupBox_radixLine);
        doubleSpinBox_tickInterValue->setObjectName("doubleSpinBox_tickInterValue");

        horizontalLayout_26->addWidget(doubleSpinBox_tickInterValue);


        verticalLayout_18->addLayout(horizontalLayout_26);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        pushButton_lineTickPen = new QPushButton(groupBox_radixLine);
        pushButton_lineTickPen->setObjectName("pushButton_lineTickPen");

        horizontalLayout_25->addWidget(pushButton_lineTickPen);

        pushButton_LineTickColor = new QPushButton(groupBox_radixLine);
        pushButton_LineTickColor->setObjectName("pushButton_LineTickColor");

        horizontalLayout_25->addWidget(pushButton_LineTickColor);


        verticalLayout_18->addLayout(horizontalLayout_25);


        verticalLayout_20->addWidget(groupBox_radixLine);

        groupBox_radixGridLine = new QGroupBox(page_3);
        groupBox_radixGridLine->setObjectName("groupBox_radixGridLine");
        groupBox_radixGridLine->setCheckable(true);
        horizontalLayout_30 = new QHBoxLayout(groupBox_radixGridLine);
        horizontalLayout_30->setObjectName("horizontalLayout_30");
        pushButton_GridPen = new QPushButton(groupBox_radixGridLine);
        pushButton_GridPen->setObjectName("pushButton_GridPen");

        horizontalLayout_30->addWidget(pushButton_GridPen);

        pushButton_GridColor = new QPushButton(groupBox_radixGridLine);
        pushButton_GridColor->setObjectName("pushButton_GridColor");

        horizontalLayout_30->addWidget(pushButton_GridColor);


        verticalLayout_20->addWidget(groupBox_radixGridLine);

        groupBox_radixMinorGridLine = new QGroupBox(page_3);
        groupBox_radixMinorGridLine->setObjectName("groupBox_radixMinorGridLine");
        groupBox_radixMinorGridLine->setFlat(false);
        groupBox_radixMinorGridLine->setCheckable(true);
        verticalLayout_19 = new QVBoxLayout(groupBox_radixMinorGridLine);
        verticalLayout_19->setObjectName("verticalLayout_19");
        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName("horizontalLayout_31");
        label_14 = new QLabel(groupBox_radixMinorGridLine);
        label_14->setObjectName("label_14");

        horizontalLayout_31->addWidget(label_14);

        spinBox_minorTickCnt = new QSpinBox(groupBox_radixMinorGridLine);
        spinBox_minorTickCnt->setObjectName("spinBox_minorTickCnt");

        horizontalLayout_31->addWidget(spinBox_minorTickCnt);


        verticalLayout_19->addLayout(horizontalLayout_31);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName("horizontalLayout_32");
        pushButton_minorGridPen = new QPushButton(groupBox_radixMinorGridLine);
        pushButton_minorGridPen->setObjectName("pushButton_minorGridPen");

        horizontalLayout_32->addWidget(pushButton_minorGridPen);

        pushButton_MinorGridColor = new QPushButton(groupBox_radixMinorGridLine);
        pushButton_MinorGridColor->setObjectName("pushButton_MinorGridColor");

        horizontalLayout_32->addWidget(pushButton_MinorGridColor);


        verticalLayout_19->addLayout(horizontalLayout_32);


        verticalLayout_20->addWidget(groupBox_radixMinorGridLine);

        toolBox->addItem(page_3, QString::fromUtf8("\345\235\220\346\240\207\350\275\264\350\256\276\347\275\256"));

        horizontalLayout_6->addWidget(toolBox);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        chartView = new QChartView(frame);
        chartView->setObjectName("chartView");

        verticalLayout->addWidget(chartView);


        horizontalLayout_6->addWidget(frame);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_RedrawChart);
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_RedrawChart->setText(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\347\273\230\345\233\276", nullptr));
#if QT_CONFIG(tooltip)
        action_RedrawChart->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\347\273\230\345\233\276", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_title->setTitle(QCoreApplication::translate("MainWindow", "\346\240\207\351\242\230", nullptr));
        pushButton_setTitle->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\207\351\242\230", nullptr));
        pushButton_titleTextColor->setText(QCoreApplication::translate("MainWindow", "\346\240\207\351\242\230\346\226\207\345\255\227\351\242\234\350\211\262", nullptr));
        pushButton_titleFont->setText(QCoreApplication::translate("MainWindow", "\346\240\207\351\242\230\345\255\227\344\275\223", nullptr));
        groupBox_graphItem->setTitle(QCoreApplication::translate("MainWindow", "\345\233\276\344\276\213", nullptr));
        radioButton_top->setText(QCoreApplication::translate("MainWindow", "\344\270\212\346\226\271", nullptr));
        radioButton_bottom->setText(QCoreApplication::translate("MainWindow", "\344\270\213\346\226\271", nullptr));
        radioButton_left->setText(QCoreApplication::translate("MainWindow", "\345\267\246\344\276\247", nullptr));
        radioButton_right->setText(QCoreApplication::translate("MainWindow", "\345\217\263\344\276\247", nullptr));
        pushButton_textColor->setText(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\351\242\234\350\211\262", nullptr));
        pushButton_itemFont->setText(QCoreApplication::translate("MainWindow", "\345\233\276\344\276\213\345\255\227\344\275\223", nullptr));
        groupBox_margin->setTitle(QCoreApplication::translate("MainWindow", "\350\276\271\350\267\235", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\267\246\350\276\271\350\267\235", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\217\263\350\276\271\350\267\235", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\344\270\212\350\276\271\350\267\235", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\276\271\350\267\235", nullptr));
        pushButton_setMargin->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\276\271\350\267\235", nullptr));
        groupBox_animatEffect->setTitle(QCoreApplication::translate("MainWindow", "\345\212\250\347\224\273\346\225\210\346\236\234\345\222\214\344\270\273\351\242\230", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\212\250\347\224\273\346\225\210\346\236\234", nullptr));
        comboBox_animationEffect->setItemText(0, QCoreApplication::translate("MainWindow", "\346\227\240\345\212\250\347\224\273\346\225\210\346\236\234 --NoAnimation", nullptr));
        comboBox_animationEffect->setItemText(1, QCoreApplication::translate("MainWindow", "\350\203\214\346\231\257\347\275\221\346\240\274\346\234\211\345\212\250\347\224\273\346\225\210\346\236\234--GridAxisAnimations", nullptr));
        comboBox_animationEffect->setItemText(2, QCoreApplication::translate("MainWindow", "\345\272\217\345\210\227\346\234\211\345\212\250\347\224\273\346\225\210\346\236\234--SeriesAnimations", nullptr));
        comboBox_animationEffect->setItemText(3, QCoreApplication::translate("MainWindow", "\350\203\214\346\231\257\347\275\221\346\240\274\345\222\214\345\272\217\345\210\227\351\203\275\346\234\211\345\212\250\347\224\273\346\225\210\346\236\234--AllAnimations", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "\344\270\273\351\242\230", nullptr));
        comboBox_theme->setItemText(0, QCoreApplication::translate("MainWindow", "Light", nullptr));
        comboBox_theme->setItemText(1, QCoreApplication::translate("MainWindow", "BlueCerulean", nullptr));
        comboBox_theme->setItemText(2, QCoreApplication::translate("MainWindow", "Dark", nullptr));
        comboBox_theme->setItemText(3, QCoreApplication::translate("MainWindow", "BrownSand", nullptr));
        comboBox_theme->setItemText(4, QCoreApplication::translate("MainWindow", "BlueNcs", nullptr));
        comboBox_theme->setItemText(5, QCoreApplication::translate("MainWindow", "HighContrast", nullptr));
        comboBox_theme->setItemText(6, QCoreApplication::translate("MainWindow", "BlueIcy", nullptr));
        comboBox_theme->setItemText(7, QCoreApplication::translate("MainWindow", "Qt", nullptr));
        comboBox_theme->setItemText(8, QCoreApplication::translate("MainWindow", "none", nullptr));

        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "\345\233\276\350\241\250\350\256\276\347\275\256", nullptr));
        groupBox_chooseSeries->setTitle(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\223\215\344\275\234\345\272\217\345\210\227", nullptr));
        radioButton_sinLine->setText(QCoreApplication::translate("MainWindow", "Sin\346\233\262\347\272\277", nullptr));
        radioButton_cosLine->setText(QCoreApplication::translate("MainWindow", "Cos\346\233\262\347\272\277", nullptr));
        groupBox_seriesLine->setTitle(QCoreApplication::translate("MainWindow", "\345\272\217\345\210\227\346\233\262\347\272\277", nullptr));
        pushButton_seriesName->setText(QCoreApplication::translate("MainWindow", "\345\272\217\345\210\227\345\220\215\347\247\260", nullptr));
        pushButton_LineColor->setText(QCoreApplication::translate("MainWindow", "\346\233\262\347\272\277\351\242\234\350\211\262", nullptr));
        pushButton_LinePen->setText(QCoreApplication::translate("MainWindow", "\346\233\262\347\272\277Pen", nullptr));
        groupBox_useOpenGL->setTitle(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250openGL", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\200\217\346\230\216\345\272\246", nullptr));
        groupBox_dataPoint->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271\345\244\247\345\260\217", nullptr));
        pushButton_dataColor->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271\351\242\234\350\211\262", nullptr));
        groupBox_dataLabel->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\347\202\271\346\240\207\347\255\276", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\346\240\207\347\255\276\346\240\267\345\274\217", nullptr));
        radioButton_labelStyley->setText(QCoreApplication::translate("MainWindow", "@yPoint", nullptr));
        radioButton_labelStylexy->setText(QCoreApplication::translate("MainWindow", "(@xPoint,@yPoint)", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "\346\233\262\347\272\277\350\256\276\347\275\256", nullptr));
        groupBox_chooseRadix->setTitle(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\223\215\344\275\234\347\232\204\345\235\220\346\240\207\350\275\264\345\257\271\350\261\241", nullptr));
        radioButton_radixX->setText(QCoreApplication::translate("MainWindow", "X\350\275\264", nullptr));
        radioButton_radixY->setText(QCoreApplication::translate("MainWindow", "Y\350\275\264", nullptr));
        groupBox_radixLineSet->setTitle(QCoreApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264(setVisible())", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\346\234\200\345\260\217\345\200\274 ", nullptr));
        checkBox_inverseRadix->setText(QCoreApplication::translate("MainWindow", "\345\235\220\346\240\207\345\217\215\345\220\221", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\346\234\200\345\244\247\345\200\274 ", nullptr));
        pushButton_setRadixRange->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\235\220\346\240\207\350\214\203\345\233\264", nullptr));
        groupBox_radixLineTitle->setTitle(QCoreApplication::translate("MainWindow", "\350\275\264\346\240\207\351\242\230\357\274\210setTitleVisible())", nullptr));
        pushButton_setLineTitle->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\275\264\346\240\207\351\242\230", nullptr));
        pushButton_setLineTitleColor->setText(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\351\242\234\350\211\262", nullptr));
        pushButton_setLineTitleFont->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223", nullptr));
        groupBox_radixTickLabel->setTitle(QCoreApplication::translate("MainWindow", "\350\275\264\345\210\273\345\272\246\346\240\207\347\255\276", nullptr));
        pushButton_setLabelFormat->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\207\347\255\276\346\240\274\345\274\217", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\351\242\234\350\211\262", nullptr));
        pushButton_setLabelFont->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223", nullptr));
        groupBox_radixLine->setTitle(QCoreApplication::translate("MainWindow", "\350\275\264\347\272\277\345\222\214\344\270\273\345\210\273\345\272\246(setLineVisible())", nullptr));
        radioButton_fixTick->setText(QCoreApplication::translate("MainWindow", "\345\233\272\345\256\232\345\210\273\345\272\246", nullptr));
        radioButton_dynimicTick->setText(QCoreApplication::translate("MainWindow", "\345\212\250\346\200\201\345\210\273\345\272\246", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Tick\344\270\252\346\225\260", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\345\210\273\345\272\246\350\265\267\347\202\271\345\200\274", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\345\210\273\345\272\246\351\227\264\351\232\224\345\200\274", nullptr));
        pushButton_lineTickPen->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\235\241Pen", nullptr));
        pushButton_LineTickColor->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\235\241\351\242\234\350\211\262", nullptr));
        groupBox_radixGridLine->setTitle(QCoreApplication::translate("MainWindow", "\344\270\273\347\275\221\346\240\274\347\272\277(setGridLineVisible())", nullptr));
        pushButton_GridPen->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\235\241Pen", nullptr));
        pushButton_GridColor->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\235\241\351\242\234\350\211\262", nullptr));
        groupBox_radixMinorGridLine->setTitle(QCoreApplication::translate("MainWindow", "\346\254\241\347\275\221\346\240\274\347\272\277(setMinorGridLineVisible())", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "MinorTick\344\270\252\346\225\260", nullptr));
        pushButton_minorGridPen->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\235\241Pen", nullptr));
        pushButton_MinorGridColor->setText(QCoreApplication::translate("MainWindow", "\347\272\277\346\235\241\351\242\234\350\211\262", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("MainWindow", "\345\235\220\346\240\207\350\275\264\350\256\276\347\275\256", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
