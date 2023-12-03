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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_OnLeft;
    QPushButton *pushButton_OnMiddle;
    QPushButton *pushButton_OnRight;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Bold;
    QPushButton *pushButton_Italic;
    QPushButton *pushButton_UnderLine;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_ReadOnly;
    QCheckBox *checkBox_Enable;
    QCheckBox *checkBox_CheckBtnEnable;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_Black;
    QRadioButton *radioButton_Red;
    QRadioButton *radioButton_Blue;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(315, 249);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_OnLeft = new QPushButton(Widget);
        pushButton_OnLeft->setObjectName("pushButton_OnLeft");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("format-justify-left")));
        pushButton_OnLeft->setIcon(icon);
        pushButton_OnLeft->setCheckable(true);
        pushButton_OnLeft->setAutoExclusive(true);
        pushButton_OnLeft->setFlat(true);

        horizontalLayout->addWidget(pushButton_OnLeft);

        pushButton_OnMiddle = new QPushButton(Widget);
        pushButton_OnMiddle->setObjectName("pushButton_OnMiddle");
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("format-justify-center")));
        pushButton_OnMiddle->setIcon(icon1);
        pushButton_OnMiddle->setCheckable(true);
        pushButton_OnMiddle->setAutoExclusive(true);
        pushButton_OnMiddle->setFlat(true);

        horizontalLayout->addWidget(pushButton_OnMiddle);

        pushButton_OnRight = new QPushButton(Widget);
        pushButton_OnRight->setObjectName("pushButton_OnRight");
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("format-justify-right")));
        pushButton_OnRight->setIcon(icon2);
        pushButton_OnRight->setCheckable(true);
        pushButton_OnRight->setAutoExclusive(true);
        pushButton_OnRight->setFlat(true);

        horizontalLayout->addWidget(pushButton_OnRight);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_Bold = new QPushButton(Widget);
        pushButton_Bold->setObjectName("pushButton_Bold");
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("format-text-bold")));
        pushButton_Bold->setIcon(icon3);
        pushButton_Bold->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_Bold);

        pushButton_Italic = new QPushButton(Widget);
        pushButton_Italic->setObjectName("pushButton_Italic");
        QIcon icon4(QIcon::fromTheme(QString::fromUtf8("format-text-italic")));
        pushButton_Italic->setIcon(icon4);
        pushButton_Italic->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_Italic);

        pushButton_UnderLine = new QPushButton(Widget);
        pushButton_UnderLine->setObjectName("pushButton_UnderLine");
        QIcon icon5(QIcon::fromTheme(QString::fromUtf8("format-text-underline")));
        pushButton_UnderLine->setIcon(icon5);
        pushButton_UnderLine->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_UnderLine);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        checkBox_ReadOnly = new QCheckBox(Widget);
        checkBox_ReadOnly->setObjectName("checkBox_ReadOnly");

        horizontalLayout_3->addWidget(checkBox_ReadOnly);

        checkBox_Enable = new QCheckBox(Widget);
        checkBox_Enable->setObjectName("checkBox_Enable");

        horizontalLayout_3->addWidget(checkBox_Enable);

        checkBox_CheckBtnEnable = new QCheckBox(Widget);
        checkBox_CheckBtnEnable->setObjectName("checkBox_CheckBtnEnable");

        horizontalLayout_3->addWidget(checkBox_CheckBtnEnable);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        radioButton_Black = new QRadioButton(groupBox);
        radioButton_Black->setObjectName("radioButton_Black");

        horizontalLayout_4->addWidget(radioButton_Black);

        radioButton_Red = new QRadioButton(groupBox);
        radioButton_Red->setObjectName("radioButton_Red");

        horizontalLayout_4->addWidget(radioButton_Red);

        radioButton_Blue = new QRadioButton(groupBox);
        radioButton_Blue->setObjectName("radioButton_Blue");

        horizontalLayout_4->addWidget(radioButton_Blue);


        verticalLayout_2->addLayout(horizontalLayout_4);

        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName("textEdit");

        verticalLayout_2->addWidget(textEdit);


        verticalLayout->addWidget(groupBox);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\346\214\211\351\222\256\347\232\204\344\275\277\347\224\250", nullptr));
        pushButton_OnLeft->setText(QCoreApplication::translate("Widget", "\345\261\205\345\267\246", nullptr));
        pushButton_OnMiddle->setText(QCoreApplication::translate("Widget", "\345\261\205\344\270\255", nullptr));
        pushButton_OnRight->setText(QCoreApplication::translate("Widget", "\345\261\205\345\217\263", nullptr));
        pushButton_Bold->setText(QCoreApplication::translate("Widget", "\347\262\227\344\275\223", nullptr));
        pushButton_Italic->setText(QCoreApplication::translate("Widget", "\346\226\234\344\275\223", nullptr));
        pushButton_UnderLine->setText(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
        checkBox_ReadOnly->setText(QCoreApplication::translate("Widget", "readOnly", nullptr));
        checkBox_Enable->setText(QCoreApplication::translate("Widget", "Enable", nullptr));
        checkBox_CheckBtnEnable->setText(QCoreApplication::translate("Widget", "CheckButtonEnable", nullptr));
        groupBox->setTitle(QString());
        radioButton_Black->setText(QCoreApplication::translate("Widget", "Black", nullptr));
        radioButton_Red->setText(QCoreApplication::translate("Widget", "Red", nullptr));
        radioButton_Blue->setText(QCoreApplication::translate("Widget", "Blue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
