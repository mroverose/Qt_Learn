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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_initializeList;
    QPushButton *pushButton_clearList;
    QCheckBox *checkBox;
    QComboBox *comboBox_userInput;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_info;
    QComboBox *comboBox_cityInfo;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_clearText;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(452, 392);
        verticalLayout_5 = new QVBoxLayout(Widget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_initializeList = new QPushButton(groupBox);
        pushButton_initializeList->setObjectName("pushButton_initializeList");

        horizontalLayout->addWidget(pushButton_initializeList);

        pushButton_clearList = new QPushButton(groupBox);
        pushButton_clearList->setObjectName("pushButton_clearList");

        horizontalLayout->addWidget(pushButton_clearList);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName("checkBox");

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);

        comboBox_userInput = new QComboBox(groupBox);
        comboBox_userInput->setObjectName("comboBox_userInput");

        verticalLayout->addWidget(comboBox_userInput);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_info = new QPushButton(groupBox_2);
        pushButton_info->setObjectName("pushButton_info");

        verticalLayout_2->addWidget(pushButton_info);

        comboBox_cityInfo = new QComboBox(groupBox_2);
        comboBox_cityInfo->setObjectName("comboBox_cityInfo");

        verticalLayout_2->addWidget(comboBox_cityInfo);


        horizontalLayout_2->addWidget(groupBox_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton_clearText = new QPushButton(groupBox_3);
        pushButton_clearText->setObjectName("pushButton_clearText");

        verticalLayout_3->addWidget(pushButton_clearText);

        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout_3->addWidget(plainTextEdit);


        verticalLayout_4->addWidget(groupBox_3);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 2);

        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "QComboBox", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\270\205\345\215\225ComboBox", nullptr));
        pushButton_initializeList->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        pushButton_clearList->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\345\210\227\350\241\250", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "\345\217\257\347\274\226\350\276\221", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\234\211\347\224\250\346\210\267\346\225\260\346\215\256\347\232\204ComboBox", nullptr));
        pushButton_info->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\237\216\345\270\202+\345\214\272\345\217\267", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\344\277\241\346\201\257\346\230\276\347\244\272", nullptr));
        pushButton_clearText->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
