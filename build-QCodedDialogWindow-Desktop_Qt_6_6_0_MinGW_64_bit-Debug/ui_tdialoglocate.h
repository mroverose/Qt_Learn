/********************************************************************************
** Form generated from reading UI file 'tdialoglocate.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGLOCATE_H
#define UI_TDIALOGLOCATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TDialogLocate
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBox_Column;
    QCheckBox *checkBox_Column;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *spinBox_Row;
    QCheckBox *checkBox_Row;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_SetText;
    QPushButton *pushButton_Close;

    void setupUi(QDialog *TDialogLocate)
    {
        if (TDialogLocate->objectName().isEmpty())
            TDialogLocate->setObjectName("TDialogLocate");
        TDialogLocate->resize(386, 141);
        horizontalLayout = new QHBoxLayout(TDialogLocate);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(TDialogLocate);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        spinBox_Column = new QSpinBox(groupBox);
        spinBox_Column->setObjectName("spinBox_Column");

        horizontalLayout_2->addWidget(spinBox_Column);

        checkBox_Column = new QCheckBox(groupBox);
        checkBox_Column->setObjectName("checkBox_Column");

        horizontalLayout_2->addWidget(checkBox_Column);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        spinBox_Row = new QSpinBox(groupBox);
        spinBox_Row->setObjectName("spinBox_Row");

        horizontalLayout_3->addWidget(spinBox_Row);

        checkBox_Row = new QCheckBox(groupBox);
        checkBox_Row->setObjectName("checkBox_Row");

        horizontalLayout_3->addWidget(checkBox_Row);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, -1, 10, -1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_4->addWidget(lineEdit);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 3);

        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(30, 21, 30, 11);
        pushButton_SetText = new QPushButton(TDialogLocate);
        pushButton_SetText->setObjectName("pushButton_SetText");

        verticalLayout->addWidget(pushButton_SetText);

        pushButton_Close = new QPushButton(TDialogLocate);
        pushButton_Close->setObjectName("pushButton_Close");

        verticalLayout->addWidget(pushButton_Close);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(TDialogLocate);
        QObject::connect(pushButton_Close, &QPushButton::clicked, TDialogLocate, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(TDialogLocate);
    } // setupUi

    void retranslateUi(QDialog *TDialogLocate)
    {
        TDialogLocate->setWindowTitle(QCoreApplication::translate("TDialogLocate", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274\345\271\266\350\256\276\347\275\256\346\226\207\345\255\227", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("TDialogLocate", "\345\210\227\345\217\267", nullptr));
        checkBox_Column->setText(QCoreApplication::translate("TDialogLocate", "\345\210\227\345\242\236", nullptr));
        label_2->setText(QCoreApplication::translate("TDialogLocate", "\350\241\214\345\217\267", nullptr));
        checkBox_Row->setText(QCoreApplication::translate("TDialogLocate", "\350\241\214\345\242\236", nullptr));
        label_3->setText(QCoreApplication::translate("TDialogLocate", "\346\226\207\345\255\227", nullptr));
        pushButton_SetText->setText(QCoreApplication::translate("TDialogLocate", "\350\256\276\347\275\256\346\226\207\345\255\227", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("TDialogLocate", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogLocate: public Ui_TDialogLocate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGLOCATE_H
