/********************************************************************************
** Form generated from reading UI file 'tdialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGLOGIN_H
#define UI_TDIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TDialogLogin
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_picture;
    QHBoxLayout *horizontalLayout;
    QLabel *label_username;
    QLineEdit *lineEdit_UserName;
    QLabel *label_password;
    QLineEdit *lineEdit_PassWord;
    QCheckBox *checkBox;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *TDialogLogin)
    {
        if (TDialogLogin->objectName().isEmpty())
            TDialogLogin->setObjectName("TDialogLogin");
        TDialogLogin->resize(1442, 1077);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TDialogLogin->sizePolicy().hasHeightForWidth());
        TDialogLogin->setSizePolicy(sizePolicy);
        TDialogLogin->setMaximumSize(QSize(1677, 1677));
        verticalLayout = new QVBoxLayout(TDialogLogin);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(TDialogLogin);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_picture = new QLabel(groupBox);
        label_picture->setObjectName("label_picture");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_picture->sizePolicy().hasHeightForWidth());
        label_picture->setSizePolicy(sizePolicy1);
        label_picture->setMaximumSize(QSize(1400, 1000));
        label_picture->setPixmap(QPixmap(QString::fromUtf8(":/splash.jpeg")));
        label_picture->setScaledContents(true);

        verticalLayout_2->addWidget(label_picture);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_username = new QLabel(TDialogLogin);
        label_username->setObjectName("label_username");

        horizontalLayout->addWidget(label_username);

        lineEdit_UserName = new QLineEdit(TDialogLogin);
        lineEdit_UserName->setObjectName("lineEdit_UserName");

        horizontalLayout->addWidget(lineEdit_UserName);

        label_password = new QLabel(TDialogLogin);
        label_password->setObjectName("label_password");

        horizontalLayout->addWidget(label_password);

        lineEdit_PassWord = new QLineEdit(TDialogLogin);
        lineEdit_PassWord->setObjectName("lineEdit_PassWord");
        lineEdit_PassWord->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_PassWord);

        checkBox = new QCheckBox(TDialogLogin);
        checkBox->setObjectName("checkBox");

        horizontalLayout->addWidget(checkBox);

        pushButton_OK = new QPushButton(TDialogLogin);
        pushButton_OK->setObjectName("pushButton_OK");
        pushButton_OK->setMaximumSize(QSize(1677721, 1677721));

        horizontalLayout->addWidget(pushButton_OK);

        pushButton_Cancel = new QPushButton(TDialogLogin);
        pushButton_Cancel->setObjectName("pushButton_Cancel");

        horizontalLayout->addWidget(pushButton_Cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TDialogLogin);
        QObject::connect(pushButton_Cancel, &QPushButton::clicked, TDialogLogin, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TDialogLogin);
    } // setupUi

    void retranslateUi(QDialog *TDialogLogin)
    {
        TDialogLogin->setWindowTitle(QCoreApplication::translate("TDialogLogin", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_picture->setText(QString());
        label_username->setText(QCoreApplication::translate("TDialogLogin", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_password->setText(QCoreApplication::translate("TDialogLogin", "\345\257\206\347\240\201", nullptr));
        checkBox->setText(QCoreApplication::translate("TDialogLogin", "\344\277\235\345\255\230\347\224\250\346\210\267\345\220\215", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("TDialogLogin", "\347\241\256\345\256\232", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("TDialogLogin", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogLogin: public Ui_TDialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGLOGIN_H
