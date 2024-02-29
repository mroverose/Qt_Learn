/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_start;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_SingleTimer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBox;
    QRadioButton *radioButton_CycleTimer;
    QRadioButton *radioButton_SingleTimer;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_PreciseTimer;
    QRadioButton *radioButton_CoarseTimer;
    QRadioButton *radioButton_VCoarseTimer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLCDNumber *lcdNumber_hour;
    QLCDNumber *lcdNumber_minute;
    QLCDNumber *lcdNumber_second;
    QLabel *label_TimerOutput;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(374, 432);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_start = new QPushButton(groupBox);
        pushButton_start->setObjectName("pushButton_start");

        horizontalLayout->addWidget(pushButton_start);

        pushButton_stop = new QPushButton(groupBox);
        pushButton_stop->setObjectName("pushButton_stop");

        horizontalLayout->addWidget(pushButton_stop);

        pushButton_SingleTimer = new QPushButton(groupBox);
        pushButton_SingleTimer->setObjectName("pushButton_SingleTimer");

        horizontalLayout->addWidget(pushButton_SingleTimer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName("spinBox");

        horizontalLayout_2->addWidget(spinBox);

        radioButton_CycleTimer = new QRadioButton(groupBox);
        radioButton_CycleTimer->setObjectName("radioButton_CycleTimer");

        horizontalLayout_2->addWidget(radioButton_CycleTimer);

        radioButton_SingleTimer = new QRadioButton(groupBox);
        radioButton_SingleTimer->setObjectName("radioButton_SingleTimer");

        horizontalLayout_2->addWidget(radioButton_SingleTimer);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(groupBox);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        radioButton_PreciseTimer = new QRadioButton(groupBox_3);
        radioButton_PreciseTimer->setObjectName("radioButton_PreciseTimer");

        horizontalLayout_3->addWidget(radioButton_PreciseTimer);

        radioButton_CoarseTimer = new QRadioButton(groupBox_3);
        radioButton_CoarseTimer->setObjectName("radioButton_CoarseTimer");

        horizontalLayout_3->addWidget(radioButton_CoarseTimer);

        radioButton_VCoarseTimer = new QRadioButton(groupBox_3);
        radioButton_VCoarseTimer->setObjectName("radioButton_VCoarseTimer");

        horizontalLayout_3->addWidget(radioButton_VCoarseTimer);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_4->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, -1, -1, 1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lcdNumber_hour = new QLCDNumber(groupBox_2);
        lcdNumber_hour->setObjectName("lcdNumber_hour");
        lcdNumber_hour->setSmallDecimalPoint(false);
        lcdNumber_hour->setDigitCount(2);

        horizontalLayout_4->addWidget(lcdNumber_hour);

        lcdNumber_minute = new QLCDNumber(groupBox_2);
        lcdNumber_minute->setObjectName("lcdNumber_minute");
        lcdNumber_minute->setDigitCount(2);

        horizontalLayout_4->addWidget(lcdNumber_minute);

        lcdNumber_second = new QLCDNumber(groupBox_2);
        lcdNumber_second->setObjectName("lcdNumber_second");
        lcdNumber_second->setDigitCount(2);

        horizontalLayout_4->addWidget(lcdNumber_second);


        verticalLayout_3->addLayout(horizontalLayout_4);

        label_TimerOutput = new QLabel(groupBox_2);
        label_TimerOutput->setObjectName("label_TimerOutput");

        verticalLayout_3->addWidget(label_TimerOutput);

        verticalLayout_3->setStretch(0, 12);
        verticalLayout_3->setStretch(1, 1);

        verticalLayout_4->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "QTimer\345\256\232\346\227\266\345\231\250", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250", nullptr));
        pushButton_start->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        pushButton_SingleTimer->setText(QCoreApplication::translate("Widget", "\345\212\250\346\200\201\345\210\233\345\273\272\345\215\225\346\254\241\345\256\232\346\227\266\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\221\250\346\234\237", nullptr));
        radioButton_CycleTimer->setText(QCoreApplication::translate("Widget", "\350\277\236\347\273\255\345\256\232\346\227\266", nullptr));
        radioButton_SingleTimer->setText(QCoreApplication::translate("Widget", "\345\215\225\346\254\241\345\256\232\346\227\266", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250\347\262\276\345\272\246", nullptr));
        radioButton_PreciseTimer->setText(QCoreApplication::translate("Widget", "PreciseTimer", nullptr));
        radioButton_CoarseTimer->setText(QCoreApplication::translate("Widget", "CoarseTimer", nullptr));
        radioButton_VCoarseTimer->setText(QCoreApplication::translate("Widget", "VeryCoarseTimer", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\275\223\345\211\215\346\227\266\351\227\264\357\274\210\345\260\217\346\227\266\357\274\232\345\210\206\357\274\232\347\247\222)", nullptr));
        label_TimerOutput->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
