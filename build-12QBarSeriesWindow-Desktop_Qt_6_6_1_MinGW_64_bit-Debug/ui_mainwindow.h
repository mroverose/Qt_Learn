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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_reBuildData;
    QPushButton *pushButton_reCount;
    QLabel *label_2;
    QComboBox *comboBox_chartTheme;
    QLabel *label_3;
    QComboBox *comboBox_chartAnimation;
    QPushButton *pushButton_quit;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBox_studCount;
    QTableView *tableView;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *treeWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_2;
    QChartView *barChartView;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_buildStackedBar;
    QPushButton *pushButton_buildHorizonStackedBar;
    QSpacerItem *horizontalSpacer;
    QChartView *stackedChartView;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_percentBar;
    QPushButton *pushButton_horizontalPercentBar;
    QSpacerItem *horizontalSpacer_3;
    QChartView *percentChartView;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QComboBox *comboBox_course;
    QPushButton *pushButton_drawPieChart;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_holeSizePieChart;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_pieSize;
    QCheckBox *checkBox_showLegend;
    QChartView *pieChartView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(972, 646);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_reBuildData = new QPushButton(groupBox_3);
        pushButton_reBuildData->setObjectName("pushButton_reBuildData");

        horizontalLayout->addWidget(pushButton_reBuildData);

        pushButton_reCount = new QPushButton(groupBox_3);
        pushButton_reCount->setObjectName("pushButton_reCount");

        horizontalLayout->addWidget(pushButton_reCount);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        comboBox_chartTheme = new QComboBox(groupBox_3);
        comboBox_chartTheme->addItem(QString());
        comboBox_chartTheme->addItem(QString());
        comboBox_chartTheme->addItem(QString());
        comboBox_chartTheme->addItem(QString());
        comboBox_chartTheme->addItem(QString());
        comboBox_chartTheme->addItem(QString());
        comboBox_chartTheme->addItem(QString());
        comboBox_chartTheme->addItem(QString());
        comboBox_chartTheme->setObjectName("comboBox_chartTheme");

        horizontalLayout->addWidget(comboBox_chartTheme);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        comboBox_chartAnimation = new QComboBox(groupBox_3);
        comboBox_chartAnimation->addItem(QString());
        comboBox_chartAnimation->addItem(QString());
        comboBox_chartAnimation->addItem(QString());
        comboBox_chartAnimation->addItem(QString());
        comboBox_chartAnimation->setObjectName("comboBox_chartAnimation");

        horizontalLayout->addWidget(comboBox_chartAnimation);

        pushButton_quit = new QPushButton(groupBox_3);
        pushButton_quit->setObjectName("pushButton_quit");

        horizontalLayout->addWidget(pushButton_quit);


        verticalLayout_4->addWidget(groupBox_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        spinBox_studCount = new QSpinBox(groupBox_2);
        spinBox_studCount->setObjectName("spinBox_studCount");

        horizontalLayout_2->addWidget(spinBox_studCount);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(groupBox_2);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        treeWidget = new QTreeWidget(groupBox);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName("treeWidget");

        verticalLayout_3->addWidget(treeWidget);


        verticalLayout_2->addWidget(groupBox);


        horizontalLayout_3->addLayout(verticalLayout_2);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName("groupBox_4");
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout_4->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(groupBox_4);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout_4->addWidget(pushButton_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_5->addWidget(groupBox_4);

        barChartView = new QChartView(tab);
        barChartView->setObjectName("barChartView");

        verticalLayout_5->addWidget(barChartView);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_6 = new QVBoxLayout(tab_2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_buildStackedBar = new QPushButton(tab_2);
        pushButton_buildStackedBar->setObjectName("pushButton_buildStackedBar");

        horizontalLayout_5->addWidget(pushButton_buildStackedBar);

        pushButton_buildHorizonStackedBar = new QPushButton(tab_2);
        pushButton_buildHorizonStackedBar->setObjectName("pushButton_buildHorizonStackedBar");

        horizontalLayout_5->addWidget(pushButton_buildHorizonStackedBar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout_5);

        stackedChartView = new QChartView(tab_2);
        stackedChartView->setObjectName("stackedChartView");

        verticalLayout_6->addWidget(stackedChartView);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_7 = new QVBoxLayout(tab_3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_percentBar = new QPushButton(tab_3);
        pushButton_percentBar->setObjectName("pushButton_percentBar");

        horizontalLayout_6->addWidget(pushButton_percentBar);

        pushButton_horizontalPercentBar = new QPushButton(tab_3);
        pushButton_horizontalPercentBar->setObjectName("pushButton_horizontalPercentBar");

        horizontalLayout_6->addWidget(pushButton_horizontalPercentBar);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_7->addLayout(horizontalLayout_6);

        percentChartView = new QChartView(tab_3);
        percentChartView->setObjectName("percentChartView");

        verticalLayout_7->addWidget(percentChartView);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_8 = new QVBoxLayout(tab_4);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_4 = new QLabel(tab_4);
        label_4->setObjectName("label_4");

        horizontalLayout_7->addWidget(label_4);

        comboBox_course = new QComboBox(tab_4);
        comboBox_course->addItem(QString());
        comboBox_course->addItem(QString());
        comboBox_course->addItem(QString());
        comboBox_course->setObjectName("comboBox_course");

        horizontalLayout_7->addWidget(comboBox_course);

        pushButton_drawPieChart = new QPushButton(tab_4);
        pushButton_drawPieChart->setObjectName("pushButton_drawPieChart");

        horizontalLayout_7->addWidget(pushButton_drawPieChart);

        label_5 = new QLabel(tab_4);
        label_5->setObjectName("label_5");

        horizontalLayout_7->addWidget(label_5);

        doubleSpinBox_holeSizePieChart = new QDoubleSpinBox(tab_4);
        doubleSpinBox_holeSizePieChart->setObjectName("doubleSpinBox_holeSizePieChart");
        doubleSpinBox_holeSizePieChart->setMaximum(100.000000000000000);
        doubleSpinBox_holeSizePieChart->setSingleStep(0.020000000000000);

        horizontalLayout_7->addWidget(doubleSpinBox_holeSizePieChart);

        label_6 = new QLabel(tab_4);
        label_6->setObjectName("label_6");

        horizontalLayout_7->addWidget(label_6);

        doubleSpinBox_pieSize = new QDoubleSpinBox(tab_4);
        doubleSpinBox_pieSize->setObjectName("doubleSpinBox_pieSize");
        doubleSpinBox_pieSize->setMaximum(1.000000000000000);
        doubleSpinBox_pieSize->setSingleStep(0.050000000000000);

        horizontalLayout_7->addWidget(doubleSpinBox_pieSize);

        checkBox_showLegend = new QCheckBox(tab_4);
        checkBox_showLegend->setObjectName("checkBox_showLegend");

        horizontalLayout_7->addWidget(checkBox_showLegend);


        verticalLayout_8->addLayout(horizontalLayout_7);

        pieChartView = new QChartView(tab_4);
        pieChartView->setObjectName("pieChartView");

        verticalLayout_8->addWidget(pieChartView);

        tabWidget->addTab(tab_4, QString());

        horizontalLayout_3->addWidget(tabWidget);


        verticalLayout_4->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 972, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_3->setTitle(QString());
        pushButton_reBuildData->setText(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\347\224\237\346\210\220\346\225\260\346\215\256", nullptr));
        pushButton_reCount->setText(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\347\273\237\350\256\241", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\233\276\350\241\250\344\270\273\351\242\230", nullptr));
        comboBox_chartTheme->setItemText(0, QCoreApplication::translate("MainWindow", "Light", nullptr));
        comboBox_chartTheme->setItemText(1, QCoreApplication::translate("MainWindow", "BlueCerulean", nullptr));
        comboBox_chartTheme->setItemText(2, QCoreApplication::translate("MainWindow", "Dark", nullptr));
        comboBox_chartTheme->setItemText(3, QCoreApplication::translate("MainWindow", "BrownSand", nullptr));
        comboBox_chartTheme->setItemText(4, QCoreApplication::translate("MainWindow", "BlueNcs", nullptr));
        comboBox_chartTheme->setItemText(5, QCoreApplication::translate("MainWindow", "HighContrast", nullptr));
        comboBox_chartTheme->setItemText(6, QCoreApplication::translate("MainWindow", "BlueIcy", nullptr));
        comboBox_chartTheme->setItemText(7, QCoreApplication::translate("MainWindow", "Qt", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "\345\233\276\350\241\250\345\212\250\347\224\273\346\225\210\346\236\234", nullptr));
        comboBox_chartAnimation->setItemText(0, QCoreApplication::translate("MainWindow", "NoAnimation", nullptr));
        comboBox_chartAnimation->setItemText(1, QCoreApplication::translate("MainWindow", "GridAxisAnimation", nullptr));
        comboBox_chartAnimation->setItemText(2, QCoreApplication::translate("MainWindow", "SeriesAnimations", nullptr));
        comboBox_chartAnimation->setItemText(3, QCoreApplication::translate("MainWindow", "AllAnimations", nullptr));

        pushButton_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\216\237\345\247\213\345\210\206\346\225\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\272\272\346\225\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\344\272\272\346\225\260\347\273\237\350\256\241", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("MainWindow", "\350\213\261\350\257\255", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("MainWindow", "\350\257\255\346\226\207", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "\346\225\260\345\255\246", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\345\210\206\346\225\260\346\256\265", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "60\345\210\206\344\273\245\344\270\213", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "60-69\345\210\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("MainWindow", "70-79\345\210\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("MainWindow", "80-89\345\210\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("MainWindow", "90\345\210\206\344\273\245\344\270\212", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        groupBox_4->setTitle(QString());
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\347\273\230\345\210\266\346\237\261\347\212\266\345\233\276", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\347\273\230\345\210\266\346\260\264\345\271\263\346\237\261\347\212\266\345\233\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "BarChart", nullptr));
        pushButton_buildStackedBar->setText(QCoreApplication::translate("MainWindow", "\347\273\230\345\210\266\345\240\206\345\217\240\346\237\261\347\212\266\345\233\276", nullptr));
        pushButton_buildHorizonStackedBar->setText(QCoreApplication::translate("MainWindow", "\347\273\230\345\210\266\346\260\264\345\271\263\345\240\206\345\217\240\346\237\261\347\212\266\345\233\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "StackedChart", nullptr));
        pushButton_percentBar->setText(QCoreApplication::translate("MainWindow", "\347\273\230\345\210\266\347\231\276\345\210\206\346\257\224\346\237\261\347\212\266\345\233\276", nullptr));
        pushButton_horizontalPercentBar->setText(QCoreApplication::translate("MainWindow", "\347\273\230\345\210\266\346\260\264\345\271\263\347\231\276\345\210\206\346\257\224\346\237\261\347\212\266\345\233\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "PercentBarChart", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\210\206\346\236\220\346\225\260\346\215\256", nullptr));
        comboBox_course->setItemText(0, QCoreApplication::translate("MainWindow", "\346\225\260\345\255\246", nullptr));
        comboBox_course->setItemText(1, QCoreApplication::translate("MainWindow", "\350\257\255\346\226\207", nullptr));
        comboBox_course->setItemText(2, QCoreApplication::translate("MainWindow", "\350\213\261\350\257\255", nullptr));

        pushButton_drawPieChart->setText(QCoreApplication::translate("MainWindow", "\347\273\230\345\210\266\351\245\274\345\233\276", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "HoleSize", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "PieSize", nullptr));
        checkBox_showLegend->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\233\276\344\276\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "PieChart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
