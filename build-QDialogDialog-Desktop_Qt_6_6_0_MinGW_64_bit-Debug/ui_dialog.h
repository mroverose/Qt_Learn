/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_OpenFile;
    QPushButton *pushButton_OpenFiles;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_SelectDirs;
    QPushButton *pushButton_SaveFile;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_SelectColor;
    QPushButton *pushButton_SelectFont;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_ProgressDialog;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_questionBox;
    QPushButton *pushButton_informationBox;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_warningBox;
    QPushButton *pushButton_criticalBox;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_aboutBox;
    QPushButton *pushButton_aboutQtBox;
    QHBoxLayout *horizontalLayout_12;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_InputString;
    QPushButton *pushButton_InputNum;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_InputFloat;
    QPushButton *pushButton_InputItems;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_ClearText;
    QPushButton *pushButton_Close;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(435, 424);
        verticalLayout_5 = new QVBoxLayout(Dialog);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_OpenFile = new QPushButton(groupBox);
        pushButton_OpenFile->setObjectName("pushButton_OpenFile");

        horizontalLayout->addWidget(pushButton_OpenFile);

        pushButton_OpenFiles = new QPushButton(groupBox);
        pushButton_OpenFiles->setObjectName("pushButton_OpenFiles");

        horizontalLayout->addWidget(pushButton_OpenFiles);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_SelectDirs = new QPushButton(groupBox);
        pushButton_SelectDirs->setObjectName("pushButton_SelectDirs");

        horizontalLayout_2->addWidget(pushButton_SelectDirs);

        pushButton_SaveFile = new QPushButton(groupBox);
        pushButton_SaveFile->setObjectName("pushButton_SaveFile");

        horizontalLayout_2->addWidget(pushButton_SaveFile);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_SelectColor = new QPushButton(groupBox);
        pushButton_SelectColor->setObjectName("pushButton_SelectColor");

        horizontalLayout_3->addWidget(pushButton_SelectColor);

        pushButton_SelectFont = new QPushButton(groupBox);
        pushButton_SelectFont->setObjectName("pushButton_SelectFont");

        horizontalLayout_3->addWidget(pushButton_SelectFont);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_ProgressDialog = new QPushButton(groupBox);
        pushButton_ProgressDialog->setObjectName("pushButton_ProgressDialog");

        horizontalLayout_4->addWidget(pushButton_ProgressDialog);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_8->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_questionBox = new QPushButton(groupBox_2);
        pushButton_questionBox->setObjectName("pushButton_questionBox");

        horizontalLayout_5->addWidget(pushButton_questionBox);

        pushButton_informationBox = new QPushButton(groupBox_2);
        pushButton_informationBox->setObjectName("pushButton_informationBox");

        horizontalLayout_5->addWidget(pushButton_informationBox);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_warningBox = new QPushButton(groupBox_2);
        pushButton_warningBox->setObjectName("pushButton_warningBox");

        horizontalLayout_6->addWidget(pushButton_warningBox);

        pushButton_criticalBox = new QPushButton(groupBox_2);
        pushButton_criticalBox->setObjectName("pushButton_criticalBox");

        horizontalLayout_6->addWidget(pushButton_criticalBox);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton_aboutBox = new QPushButton(groupBox_2);
        pushButton_aboutBox->setObjectName("pushButton_aboutBox");

        horizontalLayout_7->addWidget(pushButton_aboutBox);

        pushButton_aboutQtBox = new QPushButton(groupBox_2);
        pushButton_aboutQtBox->setObjectName("pushButton_aboutQtBox");

        horizontalLayout_7->addWidget(pushButton_aboutQtBox);


        verticalLayout_2->addLayout(horizontalLayout_7);


        horizontalLayout_8->addWidget(groupBox_2);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        pushButton_InputString = new QPushButton(groupBox_3);
        pushButton_InputString->setObjectName("pushButton_InputString");

        horizontalLayout_9->addWidget(pushButton_InputString);

        pushButton_InputNum = new QPushButton(groupBox_3);
        pushButton_InputNum->setObjectName("pushButton_InputNum");

        horizontalLayout_9->addWidget(pushButton_InputNum);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        pushButton_InputFloat = new QPushButton(groupBox_3);
        pushButton_InputFloat->setObjectName("pushButton_InputFloat");

        horizontalLayout_10->addWidget(pushButton_InputFloat);

        pushButton_InputItems = new QPushButton(groupBox_3);
        pushButton_InputItems->setObjectName("pushButton_InputItems");

        horizontalLayout_10->addWidget(pushButton_InputItems);


        verticalLayout_3->addLayout(horizontalLayout_10);


        horizontalLayout_12->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(Dialog);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        pushButton_ClearText = new QPushButton(groupBox_4);
        pushButton_ClearText->setObjectName("pushButton_ClearText");

        horizontalLayout_11->addWidget(pushButton_ClearText);

        pushButton_Close = new QPushButton(groupBox_4);
        pushButton_Close->setObjectName("pushButton_Close");

        horizontalLayout_11->addWidget(pushButton_Close);


        verticalLayout_4->addLayout(horizontalLayout_11);


        horizontalLayout_12->addWidget(groupBox_4);


        verticalLayout_5->addLayout(horizontalLayout_12);

        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout_5->addWidget(plainTextEdit);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "\346\240\207\345\207\206\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_OpenFile->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\344\270\200\344\270\252\346\226\207\344\273\266", nullptr));
        pushButton_OpenFiles->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\345\244\232\344\270\252\346\226\207\344\273\266", nullptr));
        pushButton_SelectDirs->setText(QCoreApplication::translate("Dialog", "\351\200\211\346\213\251\345\267\262\346\234\211\347\233\256\345\275\225", nullptr));
        pushButton_SaveFile->setText(QCoreApplication::translate("Dialog", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        pushButton_SelectColor->setText(QCoreApplication::translate("Dialog", "\351\200\211\346\213\251\351\242\234\350\211\262", nullptr));
        pushButton_SelectFont->setText(QCoreApplication::translate("Dialog", "\351\200\211\346\213\251\345\255\227\344\275\223", nullptr));
        pushButton_ProgressDialog->setText(QCoreApplication::translate("Dialog", "\350\277\233\345\272\246\345\257\271\350\257\235\346\241\206", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Dialog", "\346\240\207\345\207\206\346\266\210\346\201\257\346\241\206 QMessageBox", nullptr));
        pushButton_questionBox->setText(QCoreApplication::translate("Dialog", "question", nullptr));
        pushButton_informationBox->setText(QCoreApplication::translate("Dialog", "information", nullptr));
        pushButton_warningBox->setText(QCoreApplication::translate("Dialog", "warning", nullptr));
        pushButton_criticalBox->setText(QCoreApplication::translate("Dialog", "critical", nullptr));
        pushButton_aboutBox->setText(QCoreApplication::translate("Dialog", "about", nullptr));
        pushButton_aboutQtBox->setText(QCoreApplication::translate("Dialog", "aboutQt", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Dialog", "\346\240\207\345\207\206\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206 QInputDialog", nullptr));
        pushButton_InputString->setText(QCoreApplication::translate("Dialog", "\350\276\223\345\205\245\345\255\227\347\254\246\344\270\262", nullptr));
        pushButton_InputNum->setText(QCoreApplication::translate("Dialog", "\350\276\223\345\205\245\346\225\264\346\225\260", nullptr));
        pushButton_InputFloat->setText(QCoreApplication::translate("Dialog", "\350\276\223\345\205\245\346\265\256\347\202\271\346\225\260", nullptr));
        pushButton_InputItems->setText(QCoreApplication::translate("Dialog", "\346\235\241\347\233\256\351\200\211\346\213\251\350\276\223\345\205\245", nullptr));
        groupBox_4->setTitle(QString());
        pushButton_ClearText->setText(QCoreApplication::translate("Dialog", "\346\270\205\351\231\244\346\226\207\346\234\254\346\241\206\345\206\205\345\256\271", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("Dialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
