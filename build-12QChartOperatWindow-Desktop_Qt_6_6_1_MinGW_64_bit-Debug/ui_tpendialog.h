/********************************************************************************
** Form generated from reading UI file 'tpendialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPENDIALOG_H
#define UI_TPENDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TPenDialog
{
public:
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_lineStyle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_lineWidth;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *pushButton_Color;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TPenDialog)
    {
        if (TPenDialog->objectName().isEmpty())
            TPenDialog->setObjectName("TPenDialog");
        TPenDialog->resize(400, 300);
        horizontalLayout_4 = new QHBoxLayout(TPenDialog);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBox = new QGroupBox(TPenDialog);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox_lineStyle = new QComboBox(groupBox);
        comboBox_lineStyle->setObjectName("comboBox_lineStyle");

        horizontalLayout->addWidget(comboBox_lineStyle);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        spinBox_lineWidth = new QSpinBox(groupBox);
        spinBox_lineWidth->setObjectName("spinBox_lineWidth");

        horizontalLayout_2->addWidget(spinBox_lineWidth);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        pushButton_Color = new QPushButton(groupBox);
        pushButton_Color->setObjectName("pushButton_Color");

        horizontalLayout_3->addWidget(pushButton_Color);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(TPenDialog);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(13, 1, 48, 7);
        verticalSpacer = new QSpacerItem(20, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(groupBox_2);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_4->addWidget(groupBox_2);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 1);

        retranslateUi(TPenDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TPenDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TPenDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TPenDialog);
    } // setupUi

    void retranslateUi(QDialog *TPenDialog)
    {
        TPenDialog->setWindowTitle(QCoreApplication::translate("TPenDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TPenDialog", "QPen\345\261\236\346\200\247\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("TPenDialog", "\347\272\277\345\236\213", nullptr));
        label_2->setText(QCoreApplication::translate("TPenDialog", "\347\272\277\345\256\275", nullptr));
        label_3->setText(QCoreApplication::translate("TPenDialog", "\351\242\234\350\211\262", nullptr));
        pushButton_Color->setText(QString());
        groupBox_2->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class TPenDialog: public Ui_TPenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPENDIALOG_H
