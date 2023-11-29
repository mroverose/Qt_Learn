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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox_ButtosFunc;
    QPushButton *pushButton_ClearText;
    QPushButton *pushButton_QCharToLatin1;
    QPushButton *pushButton_QCharCompare;
    QPushButton *pushButton_QCharToUTF;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_result;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_ChkBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_isDigit;
    QCheckBox *checkBox_isLetter;
    QCheckBox *checkBox_isLetterOrNumber;
    QCheckBox *checkBox_isUpper;
    QCheckBox *checkBox_isMark;
    QCheckBox *checkBox_isLower;
    QCheckBox *checkBox_isSymbol;
    QCheckBox *checkBox_isPunct;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLineEdit *lineEdit_String;
    QPushButton *pushButton_QCharUnicode;
    QPushButton *pushButton_QCharProperty;
    QLineEdit *lineEdit_Char;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(360, 497);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        groupBox_ButtosFunc = new QGroupBox(Widget);
        groupBox_ButtosFunc->setObjectName("groupBox_ButtosFunc");
        groupBox_ButtosFunc->setGeometry(QRect(10, 80, 341, 81));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(groupBox_ButtosFunc->sizePolicy().hasHeightForWidth());
        groupBox_ButtosFunc->setSizePolicy(sizePolicy1);
        pushButton_ClearText = new QPushButton(groupBox_ButtosFunc);
        pushButton_ClearText->setObjectName("pushButton_ClearText");
        pushButton_ClearText->setGeometry(QRect(180, 50, 155, 26));
        pushButton_QCharToLatin1 = new QPushButton(groupBox_ButtosFunc);
        pushButton_QCharToLatin1->setObjectName("pushButton_QCharToLatin1");
        pushButton_QCharToLatin1->setGeometry(QRect(10, 20, 155, 26));
        pushButton_QCharCompare = new QPushButton(groupBox_ButtosFunc);
        pushButton_QCharCompare->setObjectName("pushButton_QCharCompare");
        pushButton_QCharCompare->setGeometry(QRect(180, 20, 155, 26));
        pushButton_QCharToUTF = new QPushButton(groupBox_ButtosFunc);
        pushButton_QCharToUTF->setObjectName("pushButton_QCharToUTF");
        pushButton_QCharToUTF->setGeometry(QRect(10, 50, 155, 26));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 160, 341, 331));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox_result = new QGroupBox(groupBox);
        groupBox_result->setObjectName("groupBox_result");
        plainTextEdit = new QPlainTextEdit(groupBox_result);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(0, 20, 161, 281));

        horizontalLayout->addWidget(groupBox_result);

        groupBox_ChkBox = new QGroupBox(groupBox);
        groupBox_ChkBox->setObjectName("groupBox_ChkBox");
        widget = new QWidget(groupBox_ChkBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 20, 141, 281));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_isDigit = new QCheckBox(widget);
        checkBox_isDigit->setObjectName("checkBox_isDigit");

        verticalLayout->addWidget(checkBox_isDigit);

        checkBox_isLetter = new QCheckBox(widget);
        checkBox_isLetter->setObjectName("checkBox_isLetter");

        verticalLayout->addWidget(checkBox_isLetter);

        checkBox_isLetterOrNumber = new QCheckBox(widget);
        checkBox_isLetterOrNumber->setObjectName("checkBox_isLetterOrNumber");

        verticalLayout->addWidget(checkBox_isLetterOrNumber);

        checkBox_isUpper = new QCheckBox(widget);
        checkBox_isUpper->setObjectName("checkBox_isUpper");

        verticalLayout->addWidget(checkBox_isUpper);

        checkBox_isMark = new QCheckBox(widget);
        checkBox_isMark->setObjectName("checkBox_isMark");

        verticalLayout->addWidget(checkBox_isMark);

        checkBox_isLower = new QCheckBox(widget);
        checkBox_isLower->setObjectName("checkBox_isLower");

        verticalLayout->addWidget(checkBox_isLower);

        checkBox_isSymbol = new QCheckBox(widget);
        checkBox_isSymbol->setObjectName("checkBox_isSymbol");

        verticalLayout->addWidget(checkBox_isSymbol);

        checkBox_isPunct = new QCheckBox(widget);
        checkBox_isPunct->setObjectName("checkBox_isPunct");

        verticalLayout->addWidget(checkBox_isPunct);


        horizontalLayout->addWidget(groupBox_ChkBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 0, 341, 81));
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 60, 16));
        lineEdit_String = new QLineEdit(groupBox_2);
        lineEdit_String->setObjectName("lineEdit_String");
        lineEdit_String->setGeometry(QRect(90, 20, 101, 21));
        pushButton_QCharUnicode = new QPushButton(groupBox_2);
        pushButton_QCharUnicode->setObjectName("pushButton_QCharUnicode");
        pushButton_QCharUnicode->setGeometry(QRect(200, 20, 131, 24));
        pushButton_QCharUnicode->setAutoDefault(false);
        pushButton_QCharProperty = new QPushButton(groupBox_2);
        pushButton_QCharProperty->setObjectName("pushButton_QCharProperty");
        pushButton_QCharProperty->setGeometry(QRect(200, 50, 131, 24));
        lineEdit_Char = new QLineEdit(groupBox_2);
        lineEdit_Char->setObjectName("lineEdit_Char");
        lineEdit_Char->setGeometry(QRect(90, 50, 101, 21));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 50, 72, 16));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "QChar\345\270\270\347\224\250\345\212\237\350\203\275", nullptr));
        groupBox_ButtosFunc->setTitle(QCoreApplication::translate("Widget", "\345\205\266\345\256\203\346\265\213\350\257\225\345\222\214\345\212\237\350\203\275", nullptr));
        pushButton_ClearText->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
        pushButton_QCharToLatin1->setText(QCoreApplication::translate("Widget", "\344\270\216Latin1\347\232\204\350\275\254\346\215\242", nullptr));
        pushButton_QCharCompare->setText(QCoreApplication::translate("Widget", "QChar\346\257\224\350\276\203\345\222\214\346\233\277\346\215\242", nullptr));
        pushButton_QCharToUTF->setText(QCoreApplication::translate("Widget", "\344\270\216UTF-16\347\232\204\350\275\254\346\215\242", nullptr));
        groupBox->setTitle(QString());
        groupBox_result->setTitle(QCoreApplication::translate("Widget", "\347\273\223\346\236\234\346\230\276\347\244\272", nullptr));
        groupBox_ChkBox->setTitle(QCoreApplication::translate("Widget", "QChar\347\211\271\346\200\247\345\210\244\346\226\255", nullptr));
        checkBox_isDigit->setText(QCoreApplication::translate("Widget", "isDigit", nullptr));
        checkBox_isLetter->setText(QCoreApplication::translate("Widget", "isLetter", nullptr));
        checkBox_isLetterOrNumber->setText(QCoreApplication::translate("Widget", "isLetterOrNumber", nullptr));
        checkBox_isUpper->setText(QCoreApplication::translate("Widget", "isUpper", nullptr));
        checkBox_isMark->setText(QCoreApplication::translate("Widget", "isMark", nullptr));
        checkBox_isLower->setText(QCoreApplication::translate("Widget", "isLower", nullptr));
        checkBox_isSymbol->setText(QCoreApplication::translate("Widget", "isSymbol", nullptr));
        checkBox_isPunct->setText(QCoreApplication::translate("Widget", "isPunct", nullptr));
        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\255\227\347\254\246\344\270\262", nullptr));
        pushButton_QCharUnicode->setText(QCoreApplication::translate("Widget", "\346\257\217\344\270\252\345\255\227\347\254\246\347\232\204Unicode", nullptr));
        pushButton_QCharProperty->setText(QCoreApplication::translate("Widget", "\346\257\217\344\270\252\345\255\227\347\254\246\347\211\271\346\200\247\345\210\244\346\226\255", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\215\225\344\270\252\345\255\227\347\254\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
