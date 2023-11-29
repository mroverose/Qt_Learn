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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_QStr_front_back;
    QPushButton *pushButton_QStr_left_right;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_QStr_first_last;
    QPushButton *pushButton_QStr_section;
    QGroupBox *groupBox_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_QStr_isN_isEmpty;
    QPushButton *pushButton_QStr_resize;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_size_length;
    QPushButton *pushButton_QStr_fill;
    QGroupBox *groupBox_4;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_QStr_trim_simplifiy;
    QPushButton *pushButton_QStr_insert;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_QStr_remove;
    QPushButton *pushButton_QStr_replace;
    QGroupBox *groupBox_3;
    QWidget *widget6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_QStr_indexof;
    QPushButton *pushButton_QStr_contains;
    QWidget *widget7;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_QStr_endsWith_startsWith;
    QPushButton *pushButton_QStr_count;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_5;
    QWidget *widget8;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_QStr_str1;
    QWidget *widget9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_QStr_str2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QGroupBox *groupBox_6;
    QWidget *widget10;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_QStr_clearTxt;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(566, 512);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        horizontalLayout_11 = new QHBoxLayout(Widget);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 20, 241, 26));
        horizontalLayout_9 = new QHBoxLayout(widget);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButton_QStr_front_back = new QPushButton(widget);
        pushButton_QStr_front_back->setObjectName("pushButton_QStr_front_back");

        horizontalLayout_9->addWidget(pushButton_QStr_front_back);

        pushButton_QStr_left_right = new QPushButton(widget);
        pushButton_QStr_left_right->setObjectName("pushButton_QStr_left_right");

        horizontalLayout_9->addWidget(pushButton_QStr_left_right);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 50, 241, 26));
        horizontalLayout_10 = new QHBoxLayout(widget1);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        pushButton_QStr_first_last = new QPushButton(widget1);
        pushButton_QStr_first_last->setObjectName("pushButton_QStr_first_last");

        horizontalLayout_10->addWidget(pushButton_QStr_first_last);

        pushButton_QStr_section = new QPushButton(widget1);
        pushButton_QStr_section->setObjectName("pushButton_QStr_section");

        horizontalLayout_10->addWidget(pushButton_QStr_section);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        widget2 = new QWidget(groupBox_2);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(10, 20, 241, 26));
        horizontalLayout_7 = new QHBoxLayout(widget2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_QStr_isN_isEmpty = new QPushButton(widget2);
        pushButton_QStr_isN_isEmpty->setObjectName("pushButton_QStr_isN_isEmpty");

        horizontalLayout_7->addWidget(pushButton_QStr_isN_isEmpty);

        pushButton_QStr_resize = new QPushButton(widget2);
        pushButton_QStr_resize->setObjectName("pushButton_QStr_resize");

        horizontalLayout_7->addWidget(pushButton_QStr_resize);

        widget3 = new QWidget(groupBox_2);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(10, 60, 241, 26));
        horizontalLayout_8 = new QHBoxLayout(widget3);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton_size_length = new QPushButton(widget3);
        pushButton_size_length->setObjectName("pushButton_size_length");

        horizontalLayout_8->addWidget(pushButton_size_length);

        pushButton_QStr_fill = new QPushButton(widget3);
        pushButton_QStr_fill->setObjectName("pushButton_QStr_fill");

        horizontalLayout_8->addWidget(pushButton_QStr_fill);


        verticalLayout->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName("groupBox_4");
        widget4 = new QWidget(groupBox_4);
        widget4->setObjectName("widget4");
        widget4->setGeometry(QRect(0, 20, 251, 26));
        horizontalLayout_3 = new QHBoxLayout(widget4);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_QStr_trim_simplifiy = new QPushButton(widget4);
        pushButton_QStr_trim_simplifiy->setObjectName("pushButton_QStr_trim_simplifiy");

        horizontalLayout_3->addWidget(pushButton_QStr_trim_simplifiy);

        pushButton_QStr_insert = new QPushButton(widget4);
        pushButton_QStr_insert->setObjectName("pushButton_QStr_insert");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_QStr_insert->sizePolicy().hasHeightForWidth());
        pushButton_QStr_insert->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(pushButton_QStr_insert);

        widget5 = new QWidget(groupBox_4);
        widget5->setObjectName("widget5");
        widget5->setGeometry(QRect(0, 50, 251, 26));
        horizontalLayout_4 = new QHBoxLayout(widget5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_QStr_remove = new QPushButton(widget5);
        pushButton_QStr_remove->setObjectName("pushButton_QStr_remove");

        horizontalLayout_4->addWidget(pushButton_QStr_remove);

        pushButton_QStr_replace = new QPushButton(widget5);
        pushButton_QStr_replace->setObjectName("pushButton_QStr_replace");

        horizontalLayout_4->addWidget(pushButton_QStr_replace);


        verticalLayout->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        widget6 = new QWidget(groupBox_3);
        widget6->setObjectName("widget6");
        widget6->setGeometry(QRect(10, 30, 251, 26));
        horizontalLayout_5 = new QHBoxLayout(widget6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_QStr_indexof = new QPushButton(widget6);
        pushButton_QStr_indexof->setObjectName("pushButton_QStr_indexof");

        horizontalLayout_5->addWidget(pushButton_QStr_indexof);

        pushButton_QStr_contains = new QPushButton(widget6);
        pushButton_QStr_contains->setObjectName("pushButton_QStr_contains");

        horizontalLayout_5->addWidget(pushButton_QStr_contains);

        widget7 = new QWidget(groupBox_3);
        widget7->setObjectName("widget7");
        widget7->setGeometry(QRect(10, 60, 251, 26));
        horizontalLayout_6 = new QHBoxLayout(widget7);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_QStr_endsWith_startsWith = new QPushButton(widget7);
        pushButton_QStr_endsWith_startsWith->setObjectName("pushButton_QStr_endsWith_startsWith");

        horizontalLayout_6->addWidget(pushButton_QStr_endsWith_startsWith);

        pushButton_QStr_count = new QPushButton(widget7);
        pushButton_QStr_count->setObjectName("pushButton_QStr_count");

        horizontalLayout_6->addWidget(pushButton_QStr_count);


        verticalLayout->addWidget(groupBox_3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);

        horizontalLayout_11->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox_5 = new QGroupBox(Widget);
        groupBox_5->setObjectName("groupBox_5");
        widget8 = new QWidget(groupBox_5);
        widget8->setObjectName("widget8");
        widget8->setGeometry(QRect(12, 30, 251, 26));
        horizontalLayout = new QHBoxLayout(widget8);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget8);
        label->setObjectName("label");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label);

        comboBox_QStr_str1 = new QComboBox(widget8);
        comboBox_QStr_str1->addItem(QString());
        comboBox_QStr_str1->addItem(QString());
        comboBox_QStr_str1->setObjectName("comboBox_QStr_str1");

        horizontalLayout->addWidget(comboBox_QStr_str1);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 7);
        widget9 = new QWidget(groupBox_5);
        widget9->setObjectName("widget9");
        widget9->setGeometry(QRect(12, 62, 249, 26));
        horizontalLayout_2 = new QHBoxLayout(widget9);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget9);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        comboBox_QStr_str2 = new QComboBox(widget9);
        comboBox_QStr_str2->addItem(QString());
        comboBox_QStr_str2->addItem(QString());
        comboBox_QStr_str2->setObjectName("comboBox_QStr_str2");

        horizontalLayout_2->addWidget(comboBox_QStr_str2);

        label_3 = new QLabel(widget9);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        spinBox = new QSpinBox(widget9);
        spinBox->setObjectName("spinBox");

        horizontalLayout_2->addWidget(spinBox);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 3);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 3);

        verticalLayout_3->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(Widget);
        groupBox_6->setObjectName("groupBox_6");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy3);
        widget10 = new QWidget(groupBox_6);
        widget10->setObjectName("widget10");
        widget10->setGeometry(QRect(12, 30, 258, 331));
        verticalLayout_2 = new QVBoxLayout(widget10);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_QStr_clearTxt = new QPushButton(widget10);
        pushButton_QStr_clearTxt->setObjectName("pushButton_QStr_clearTxt");

        verticalLayout_2->addWidget(pushButton_QStr_clearTxt);

        plainTextEdit = new QPlainTextEdit(widget10);
        plainTextEdit->setObjectName("plainTextEdit");
        sizePolicy.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(plainTextEdit);


        verticalLayout_3->addWidget(groupBox_6);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 3);

        horizontalLayout_11->addLayout(verticalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\210\252\345\217\226", nullptr));
        pushButton_QStr_front_back->setText(QCoreApplication::translate("Widget", "front & back", nullptr));
        pushButton_QStr_left_right->setText(QCoreApplication::translate("Widget", "left & right", nullptr));
        pushButton_QStr_first_last->setText(QCoreApplication::translate("Widget", "first & last", nullptr));
        pushButton_QStr_section->setText(QCoreApplication::translate("Widget", "section *", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\255\230\345\202\250\347\233\270\345\205\263", nullptr));
        pushButton_QStr_isN_isEmpty->setText(QCoreApplication::translate("Widget", "isNull & isEmpty", nullptr));
        pushButton_QStr_resize->setText(QCoreApplication::translate("Widget", "resize", nullptr));
        pushButton_size_length->setText(QCoreApplication::translate("Widget", "size & length", nullptr));
        pushButton_QStr_fill->setText(QCoreApplication::translate("Widget", "fill", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "\350\275\254\346\215\242\346\210\226\344\277\256\346\224\271", nullptr));
        pushButton_QStr_trim_simplifiy->setText(QCoreApplication::translate("Widget", "trimmed & simplified", nullptr));
        pushButton_QStr_insert->setText(QCoreApplication::translate("Widget", "insert", nullptr));
        pushButton_QStr_remove->setText(QCoreApplication::translate("Widget", "remove", nullptr));
        pushButton_QStr_replace->setText(QCoreApplication::translate("Widget", "replace", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\346\220\234\347\264\242\345\222\214\345\210\244\346\226\255", nullptr));
        pushButton_QStr_indexof->setText(QCoreApplication::translate("Widget", "indexof & lastIndexOf", nullptr));
        pushButton_QStr_contains->setText(QCoreApplication::translate("Widget", "contains", nullptr));
        pushButton_QStr_endsWith_startsWith->setText(QCoreApplication::translate("Widget", "endsWith & startsWith", nullptr));
        pushButton_QStr_count->setText(QCoreApplication::translate("Widget", "count", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("Widget", "str1", nullptr));
        comboBox_QStr_str1->setItemText(0, QCoreApplication::translate("Widget", "String 1,\347\224\267\357\274\2142013-03-12\357\274\214\345\214\227\344\272\254\357\274\214\345\215\216\345\214\227\345\234\260\345\214\272\357\274\214\344\270\255\345\233\275", nullptr));
        comboBox_QStr_str1->setItemText(1, QCoreApplication::translate("Widget", "C://programm/Qt/QT/test.cpp/test2.cpp", nullptr));

        label_2->setText(QCoreApplication::translate("Widget", "str2", nullptr));
        comboBox_QStr_str2->setItemText(0, QCoreApplication::translate("Widget", "C://div/one/to///thre//fout/.cpp", nullptr));
        comboBox_QStr_str2->setItemText(1, QCoreApplication::translate("Widget", "String2 aaaaaa  find something.      so   .. .. .        ", nullptr));

        label_3->setText(QCoreApplication::translate("Widget", "\345\217\202\346\225\260", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Widget", "\347\273\223\346\236\234\346\230\276\347\244\272", nullptr));
        pushButton_QStr_clearTxt->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
