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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBox_num;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_price;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_total;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_TotalAmount;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *spinBox_DecNum;
    QSpinBox *spinBox_BinNum;
    QSpinBox *spinBox_HexNum;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_Dec;
    QPushButton *pushButton_Bin;
    QPushButton *pushButton_Hex;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(334, 389);
        verticalLayout_5 = new QVBoxLayout(Widget);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(2, 2, 2, -1);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(2, -1, 4, -1);
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        spinBox_num = new QSpinBox(groupBox);
        spinBox_num->setObjectName("spinBox_num");
        spinBox_num->setMaximum(1000);
        spinBox_num->setValue(1);

        horizontalLayout_2->addWidget(spinBox_num);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBox_price = new QDoubleSpinBox(groupBox);
        doubleSpinBox_price->setObjectName("doubleSpinBox_price");
        doubleSpinBox_price->setSingleStep(1.030000000000000);
        doubleSpinBox_price->setValue(1.120000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox_price);

        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(4, -1, 4, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        doubleSpinBox_total = new QDoubleSpinBox(groupBox);
        doubleSpinBox_total->setObjectName("doubleSpinBox_total");
        doubleSpinBox_total->setMaximum(9999.989999999999782);

        horizontalLayout_3->addWidget(doubleSpinBox_total);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(38);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(12, -1, 4, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_TotalAmount = new QPushButton(groupBox);
        pushButton_TotalAmount->setObjectName("pushButton_TotalAmount");

        horizontalLayout_4->addWidget(pushButton_TotalAmount);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(2, -1, -1, -1);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        spinBox_DecNum = new QSpinBox(groupBox_2);
        spinBox_DecNum->setObjectName("spinBox_DecNum");
        spinBox_DecNum->setMaximum(65536);
        spinBox_DecNum->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);

        verticalLayout_2->addWidget(spinBox_DecNum);

        spinBox_BinNum = new QSpinBox(groupBox_2);
        spinBox_BinNum->setObjectName("spinBox_BinNum");
        spinBox_BinNum->setMaximum(65535);
        spinBox_BinNum->setDisplayIntegerBase(2);

        verticalLayout_2->addWidget(spinBox_BinNum);

        spinBox_HexNum = new QSpinBox(groupBox_2);
        spinBox_HexNum->setObjectName("spinBox_HexNum");
        spinBox_HexNum->setMaximum(65535);
        spinBox_HexNum->setDisplayIntegerBase(16);

        verticalLayout_2->addWidget(spinBox_HexNum);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, -1, 4, -1);
        pushButton_Dec = new QPushButton(groupBox_2);
        pushButton_Dec->setObjectName("pushButton_Dec");

        verticalLayout_3->addWidget(pushButton_Dec);

        pushButton_Bin = new QPushButton(groupBox_2);
        pushButton_Bin->setObjectName("pushButton_Bin");

        verticalLayout_3->addWidget(pushButton_Bin);

        pushButton_Hex = new QPushButton(groupBox_2);
        pushButton_Hex->setObjectName("pushButton_Hex");

        verticalLayout_3->addWidget(pushButton_Hex);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_5->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "QString\344\270\216\346\225\260\345\200\274\347\233\264\346\216\245\347\232\204\350\275\254\346\215\242", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\225\260\345\200\274\350\276\223\345\205\245\345\222\214\350\276\223\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217", nullptr));
        spinBox_num->setSuffix(QCoreApplication::translate("Widget", "   \345\215\203\345\205\213", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267", nullptr));
        doubleSpinBox_price->setPrefix(QString());
        doubleSpinBox_price->setSuffix(QCoreApplication::translate("Widget", "  \345\205\203/\345\215\203\345\205\213", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\200\273\344\273\267", nullptr));
        doubleSpinBox_total->setSuffix(QCoreApplication::translate("Widget", "    \345\205\203", nullptr));
        pushButton_TotalAmount->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227\346\200\273\344\273\267", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\350\277\233\345\210\266\350\275\254\346\215\242", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        spinBox_DecNum->setPrefix(QCoreApplication::translate("Widget", "Dec 12        ", nullptr));
        spinBox_BinNum->setPrefix(QCoreApplication::translate("Widget", "Bin 1100     ", nullptr));
        spinBox_HexNum->setPrefix(QCoreApplication::translate("Widget", "Hex A2B     ", nullptr));
        pushButton_Dec->setText(QCoreApplication::translate("Widget", "DEC-->\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        pushButton_Bin->setText(QCoreApplication::translate("Widget", "BIN-->\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        pushButton_Hex->setText(QCoreApplication::translate("Widget", "HEX-->\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
