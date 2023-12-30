/********************************************************************************
** Form generated from reading UI file 'tformdoc.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TFORMDOC_H
#define UI_TFORMDOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TFormDoc
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *TFormDoc)
    {
        if (TFormDoc->objectName().isEmpty())
            TFormDoc->setObjectName("TFormDoc");
        TFormDoc->resize(400, 300);
        verticalLayout = new QVBoxLayout(TFormDoc);
        verticalLayout->setObjectName("verticalLayout");
        plainTextEdit = new QPlainTextEdit(TFormDoc);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(TFormDoc);

        QMetaObject::connectSlotsByName(TFormDoc);
    } // setupUi

    void retranslateUi(QWidget *TFormDoc)
    {
        TFormDoc->setWindowTitle(QCoreApplication::translate("TFormDoc", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TFormDoc: public Ui_TFormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TFORMDOC_H
