/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_SetCurDataAndTime;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QTimeEdit *timeEdit;
    QLineEdit *lineEdit_time;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_qDebugTime;
    QPushButton *pushButton_SetTimeFromString;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit__date;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_SetDateFromString;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *lineEdit_dataAndtime;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_qDebugDateTime;
    QPushButton *pushButton_SetDateAndTimeFromString;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_calendar;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(691, 470);
        horizontalLayout_9 = new QHBoxLayout(Widget);
        horizontalLayout_9->setSpacing(1);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(2, 2, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_SetCurDataAndTime = new QPushButton(groupBox);
        pushButton_SetCurDataAndTime->setObjectName("pushButton_SetCurDataAndTime");

        horizontalLayout_2->addWidget(pushButton_SetCurDataAndTime);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setFlat(true);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, -1, 2, -1);
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName("timeEdit");

        horizontalLayout_3->addWidget(timeEdit);

        lineEdit_time = new QLineEdit(groupBox);
        lineEdit_time->setObjectName("lineEdit_time");

        horizontalLayout_3->addWidget(lineEdit_time);

        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 2);

        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(30);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, -1, 2, -1);
        pushButton_qDebugTime = new QPushButton(groupBox);
        pushButton_qDebugTime->setObjectName("pushButton_qDebugTime");

        horizontalLayout_4->addWidget(pushButton_qDebugTime);

        pushButton_SetTimeFromString = new QPushButton(groupBox);
        pushButton_SetTimeFromString->setObjectName("pushButton_SetTimeFromString");

        horizontalLayout_4->addWidget(pushButton_SetTimeFromString);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, -1, 2, -1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout_5->addWidget(dateEdit);

        lineEdit__date = new QLineEdit(groupBox);
        lineEdit__date->setObjectName("lineEdit__date");

        horizontalLayout_5->addWidget(lineEdit__date);

        horizontalLayout_5->setStretch(1, 2);
        horizontalLayout_5->setStretch(2, 2);

        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(30);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(-1, -1, 2, -1);
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout_6->addWidget(pushButton_5);

        pushButton_SetDateFromString = new QPushButton(groupBox);
        pushButton_SetDateFromString->setObjectName("pushButton_SetDateFromString");

        horizontalLayout_6->addWidget(pushButton_SetDateFromString);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(1);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(-1, -1, 2, -1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_7->addWidget(label_3);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName("dateTimeEdit");

        horizontalLayout_7->addWidget(dateTimeEdit);

        lineEdit_dataAndtime = new QLineEdit(groupBox);
        lineEdit_dataAndtime->setObjectName("lineEdit_dataAndtime");

        horizontalLayout_7->addWidget(lineEdit_dataAndtime);

        horizontalLayout_7->setStretch(1, 2);
        horizontalLayout_7->setStretch(2, 2);

        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(13);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(-1, -1, 2, -1);
        pushButton_qDebugDateTime = new QPushButton(groupBox);
        pushButton_qDebugDateTime->setObjectName("pushButton_qDebugDateTime");

        horizontalLayout_8->addWidget(pushButton_qDebugDateTime);

        pushButton_SetDateAndTimeFromString = new QPushButton(groupBox);
        pushButton_SetDateAndTimeFromString->setObjectName("pushButton_SetDateAndTimeFromString");

        horizontalLayout_8->addWidget(pushButton_SetDateAndTimeFromString);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_8);

        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 2);
        verticalLayout_2->setStretch(3, 2);
        verticalLayout_2->setStretch(4, 2);
        verticalLayout_2->setStretch(5, 2);
        verticalLayout_2->setStretch(6, 2);

        horizontalLayout_9->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, -1, 2, -1);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEdit_calendar = new QLineEdit(groupBox_2);
        lineEdit_calendar->setObjectName("lineEdit_calendar");

        horizontalLayout->addWidget(lineEdit_calendar);


        verticalLayout->addLayout(horizontalLayout);

        calendarWidget = new QCalendarWidget(groupBox_2);
        calendarWidget->setObjectName("calendarWidget");

        verticalLayout->addWidget(calendarWidget);


        horizontalLayout_9->addWidget(groupBox_2);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\345\222\214\346\227\266\351\227\264\346\225\260\346\215\256", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\345\222\214\346\227\266\351\227\264\346\225\260\346\215\256", nullptr));
        pushButton_SetCurDataAndTime->setText(QCoreApplication::translate("Widget", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\345\222\214\346\227\266\351\227\264", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\227\266\351\227\264", nullptr));
        pushButton_qDebugTime->setText(QCoreApplication::translate("Widget", "qDebug--Time", nullptr));
        pushButton_SetTimeFromString->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264fromString", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "qDebug--date", nullptr));
        pushButton_SetDateFromString->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237fromString", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        pushButton_qDebugDateTime->setText(QCoreApplication::translate("Widget", "qDebug--DateTime", nullptr));
        pushButton_SetDateAndTimeFromString->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264fromString", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\227\245\345\216\206\351\200\211\346\213\251", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
