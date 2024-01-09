/********************************************************************************
** Form generated from reading UI file 'tdialogdata.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGDATA_H
#define UI_TDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TDialogData
{
public:
    QHBoxLayout *horizontalLayout_11;
    QGroupBox *groupBox_curRecord;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_numberID;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_gender;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_birth;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_province;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_department;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpinBox *spinBox_salary;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_photo;
    QGroupBox *groupBox_notation;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_SetPhoto;
    QPushButton *pushButton_ClearPhoto;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TDialogData)
    {
        if (TDialogData->objectName().isEmpty())
            TDialogData->setObjectName("TDialogData");
        TDialogData->resize(472, 422);
        horizontalLayout_11 = new QHBoxLayout(TDialogData);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        groupBox_curRecord = new QGroupBox(TDialogData);
        groupBox_curRecord->setObjectName("groupBox_curRecord");
        horizontalLayout_10 = new QHBoxLayout(groupBox_curRecord);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        groupBox_5 = new QGroupBox(groupBox_curRecord);
        groupBox_5->setObjectName("groupBox_5");
        verticalLayout = new QVBoxLayout(groupBox_5);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        spinBox_numberID = new QSpinBox(groupBox_5);
        spinBox_numberID->setObjectName("spinBox_numberID");
        spinBox_numberID->setMinimum(1);
        spinBox_numberID->setMaximum(9999);

        horizontalLayout_2->addWidget(spinBox_numberID);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_name = new QLineEdit(groupBox_5);
        lineEdit_name->setObjectName("lineEdit_name");

        horizontalLayout_3->addWidget(lineEdit_name);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit_gender = new QLineEdit(groupBox_5);
        lineEdit_gender->setObjectName("lineEdit_gender");

        horizontalLayout_4->addWidget(lineEdit_gender);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        lineEdit_birth = new QLineEdit(groupBox_5);
        lineEdit_birth->setObjectName("lineEdit_birth");

        horizontalLayout_5->addWidget(lineEdit_birth);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        lineEdit_province = new QLineEdit(groupBox_5);
        lineEdit_province->setObjectName("lineEdit_province");

        horizontalLayout_6->addWidget(lineEdit_province);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        lineEdit_department = new QLineEdit(groupBox_5);
        lineEdit_department->setObjectName("lineEdit_department");

        horizontalLayout_7->addWidget(lineEdit_department);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName("label_8");

        horizontalLayout_8->addWidget(label_8);

        spinBox_salary = new QSpinBox(groupBox_5);
        spinBox_salary->setObjectName("spinBox_salary");
        spinBox_salary->setMinimum(1000);
        spinBox_salary->setMaximum(999999);

        horizontalLayout_8->addWidget(spinBox_salary);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_9->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(groupBox_curRecord);
        groupBox_6->setObjectName("groupBox_6");
        verticalLayout_2 = new QVBoxLayout(groupBox_6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_photo = new QLabel(groupBox_6);
        label_photo->setObjectName("label_photo");

        verticalLayout_2->addWidget(label_photo);


        horizontalLayout_9->addWidget(groupBox_6);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_9);

        groupBox_notation = new QGroupBox(groupBox_curRecord);
        groupBox_notation->setObjectName("groupBox_notation");
        horizontalLayout = new QHBoxLayout(groupBox_notation);
        horizontalLayout->setObjectName("horizontalLayout");
        plainTextEdit = new QPlainTextEdit(groupBox_notation);
        plainTextEdit->setObjectName("plainTextEdit");

        horizontalLayout->addWidget(plainTextEdit);


        verticalLayout_3->addWidget(groupBox_notation);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);

        horizontalLayout_10->addLayout(verticalLayout_3);


        horizontalLayout_11->addWidget(groupBox_curRecord);

        groupBox = new QGroupBox(TDialogData);
        groupBox->setObjectName("groupBox");
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        pushButton_SetPhoto = new QPushButton(groupBox);
        pushButton_SetPhoto->setObjectName("pushButton_SetPhoto");

        verticalLayout_4->addWidget(pushButton_SetPhoto);

        pushButton_ClearPhoto = new QPushButton(groupBox);
        pushButton_ClearPhoto->setObjectName("pushButton_ClearPhoto");

        verticalLayout_4->addWidget(pushButton_ClearPhoto);

        buttonBox = new QDialogButtonBox(groupBox);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(3, 2);

        horizontalLayout_11->addWidget(groupBox);


        retranslateUi(TDialogData);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TDialogData, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TDialogData, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TDialogData);
    } // setupUi

    void retranslateUi(QDialog *TDialogData)
    {
        TDialogData->setWindowTitle(QCoreApplication::translate("TDialogData", "Dialog", nullptr));
        groupBox_curRecord->setTitle(QString());
        groupBox_5->setTitle(QString());
        label_2->setText(QCoreApplication::translate("TDialogData", "\345\267\245\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("TDialogData", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("TDialogData", "\346\200\247\345\210\253", nullptr));
        label_5->setText(QCoreApplication::translate("TDialogData", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_6->setText(QCoreApplication::translate("TDialogData", "\347\234\201\344\273\275", nullptr));
        label_7->setText(QCoreApplication::translate("TDialogData", "\351\203\250\351\227\250", nullptr));
        label_8->setText(QCoreApplication::translate("TDialogData", "\345\267\245\350\265\204", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("TDialogData", "\347\205\247\347\211\207", nullptr));
        label_photo->setText(QCoreApplication::translate("TDialogData", "TextLabel", nullptr));
        groupBox_notation->setTitle(QCoreApplication::translate("TDialogData", "\345\244\207\346\263\250", nullptr));
        groupBox->setTitle(QString());
        pushButton_SetPhoto->setText(QCoreApplication::translate("TDialogData", "\345\257\274\345\205\245\347\205\247\347\211\207", nullptr));
        pushButton_ClearPhoto->setText(QCoreApplication::translate("TDialogData", "\346\270\205\351\231\244\347\205\247\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogData: public Ui_TDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGDATA_H
