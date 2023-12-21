/********************************************************************************
** Form generated from reading UI file 'tdialogheaders.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGHEADERS_H
#define UI_TDIALOGHEADERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TDialogHeaders
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *TDialogHeaders)
    {
        if (TDialogHeaders->objectName().isEmpty())
            TDialogHeaders->setObjectName("TDialogHeaders");
        TDialogHeaders->resize(400, 300);
        horizontalLayout = new QHBoxLayout(TDialogHeaders);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(TDialogHeaders);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        listView = new QListView(groupBox);
        listView->setObjectName("listView");

        verticalLayout->addWidget(listView);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(TDialogHeaders);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, 34, -1, 24);
        pushButton_OK = new QPushButton(groupBox_2);
        pushButton_OK->setObjectName("pushButton_OK");

        gridLayout->addWidget(pushButton_OK, 0, 0, 1, 1);

        pushButton_Cancel = new QPushButton(groupBox_2);
        pushButton_Cancel->setObjectName("pushButton_Cancel");

        gridLayout->addWidget(pushButton_Cancel, 1, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_2);


        retranslateUi(TDialogHeaders);

        QMetaObject::connectSlotsByName(TDialogHeaders);
    } // setupUi

    void retranslateUi(QDialog *TDialogHeaders)
    {
        TDialogHeaders->setWindowTitle(QCoreApplication::translate("TDialogHeaders", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TDialogHeaders", "\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_OK->setText(QCoreApplication::translate("TDialogHeaders", "\347\241\256\345\256\232", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("TDialogHeaders", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogHeaders: public Ui_TDialogHeaders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGHEADERS_H
