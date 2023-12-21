/********************************************************************************
** Form generated from reading UI file 'TDialogSize.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGSIZE_H
#define UI_TDIALOGSIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TDialogSize
{
public:
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_Column;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_Row;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *TDialogSize)
    {
        if (TDialogSize->objectName().isEmpty())
            TDialogSize->setObjectName("TDialogSize");
        TDialogSize->resize(359, 158);
        horizontalLayout_3 = new QHBoxLayout(TDialogSize);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        groupBox = new QGroupBox(TDialogSize);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, -1, 10, -1);
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        spinBox_Column = new QSpinBox(groupBox);
        spinBox_Column->setObjectName("spinBox_Column");

        horizontalLayout->addWidget(spinBox_Column);

        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, -1, 10, -1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        spinBox_Row = new QSpinBox(groupBox);
        spinBox_Row->setObjectName("spinBox_Row");

        horizontalLayout_2->addWidget(spinBox_Row);

        horizontalLayout_2->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addWidget(groupBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(32, 20, 32, 0);
        pushButton_OK = new QPushButton(TDialogSize);
        pushButton_OK->setObjectName("pushButton_OK");

        verticalLayout_2->addWidget(pushButton_OK);

        pushButton_Cancel = new QPushButton(TDialogSize);
        pushButton_Cancel->setObjectName("pushButton_Cancel");

        verticalLayout_2->addWidget(pushButton_Cancel);


        horizontalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(TDialogSize);
        QObject::connect(pushButton_OK, &QPushButton::clicked, TDialogSize, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_Cancel, &QPushButton::clicked, TDialogSize, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TDialogSize);
    } // setupUi

    void retranslateUi(QDialog *TDialogSize)
    {
        TDialogSize->setWindowTitle(QCoreApplication::translate("TDialogSize", "\350\256\276\347\275\256\350\241\250\346\240\274\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TDialogSize", "\350\241\250\346\240\274\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", nullptr));
        label->setText(QCoreApplication::translate("TDialogSize", "\345\210\227\346\225\260", nullptr));
        label_2->setText(QCoreApplication::translate("TDialogSize", "\350\241\214\346\225\260", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("TDialogSize", "\347\241\256\345\256\232", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("TDialogSize", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogSize: public Ui_TDialogSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGSIZE_H
