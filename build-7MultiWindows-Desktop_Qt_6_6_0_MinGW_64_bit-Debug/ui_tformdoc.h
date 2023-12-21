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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TFormDoc
{
public:
    QAction *action_Open;
    QAction *action_Cut;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *action_Font;
    QAction *action_Close;
    QAction *action_Undo;
    QAction *action_Redo;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *TFormDoc)
    {
        if (TFormDoc->objectName().isEmpty())
            TFormDoc->setObjectName("TFormDoc");
        TFormDoc->resize(400, 300);
        action_Open = new QAction(TFormDoc);
        action_Open->setObjectName("action_Open");
        action_Cut = new QAction(TFormDoc);
        action_Cut->setObjectName("action_Cut");
        action_Copy = new QAction(TFormDoc);
        action_Copy->setObjectName("action_Copy");
        action_Paste = new QAction(TFormDoc);
        action_Paste->setObjectName("action_Paste");
        action_Font = new QAction(TFormDoc);
        action_Font->setObjectName("action_Font");
        action_Close = new QAction(TFormDoc);
        action_Close->setObjectName("action_Close");
        action_Undo = new QAction(TFormDoc);
        action_Undo->setObjectName("action_Undo");
        action_Redo = new QAction(TFormDoc);
        action_Redo->setObjectName("action_Redo");
        plainTextEdit = new QPlainTextEdit(TFormDoc);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(30, 110, 221, 151));

        retranslateUi(TFormDoc);
        QObject::connect(action_Close, &QAction::triggered, TFormDoc, qOverload<>(&QWidget::close));
        QObject::connect(action_Copy, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::copy));
        QObject::connect(action_Cut, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::cut));
        QObject::connect(action_Paste, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::paste));
        QObject::connect(action_Redo, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::redo));
        QObject::connect(action_Undo, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::undo));

        QMetaObject::connectSlotsByName(TFormDoc);
    } // setupUi

    void retranslateUi(QWidget *TFormDoc)
    {
        TFormDoc->setWindowTitle(QCoreApplication::translate("TFormDoc", "Form", nullptr));
        action_Open->setText(QCoreApplication::translate("TFormDoc", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_Open->setToolTip(QCoreApplication::translate("TFormDoc", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        action_Open->setStatusTip(QCoreApplication::translate("TFormDoc", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(statustip)
        action_Cut->setText(QCoreApplication::translate("TFormDoc", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        action_Cut->setToolTip(QCoreApplication::translate("TFormDoc", "\345\211\252\345\210\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        action_Cut->setStatusTip(QCoreApplication::translate("TFormDoc", "\345\211\252\345\210\207", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_Cut->setShortcut(QCoreApplication::translate("TFormDoc", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Copy->setText(QCoreApplication::translate("TFormDoc", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        action_Copy->setToolTip(QCoreApplication::translate("TFormDoc", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        action_Copy->setStatusTip(QCoreApplication::translate("TFormDoc", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_Copy->setShortcut(QCoreApplication::translate("TFormDoc", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Paste->setText(QCoreApplication::translate("TFormDoc", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        action_Paste->setToolTip(QCoreApplication::translate("TFormDoc", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        action_Paste->setStatusTip(QCoreApplication::translate("TFormDoc", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_Paste->setShortcut(QCoreApplication::translate("TFormDoc", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Font->setText(QCoreApplication::translate("TFormDoc", "\345\255\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        action_Font->setToolTip(QCoreApplication::translate("TFormDoc", "\350\256\276\347\275\256\345\255\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        action_Font->setStatusTip(QCoreApplication::translate("TFormDoc", "\345\255\227\344\275\223", nullptr));
#endif // QT_CONFIG(statustip)
        action_Close->setText(QCoreApplication::translate("TFormDoc", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        action_Close->setToolTip(QCoreApplication::translate("TFormDoc", "\345\205\263\351\227\255\346\234\254\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        action_Close->setStatusTip(QCoreApplication::translate("TFormDoc", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(statustip)
        action_Undo->setText(QCoreApplication::translate("TFormDoc", "\346\222\244\351\224\200", nullptr));
#if QT_CONFIG(tooltip)
        action_Undo->setToolTip(QCoreApplication::translate("TFormDoc", "\346\222\244\351\224\200\347\274\226\347\274\211\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        action_Undo->setStatusTip(QCoreApplication::translate("TFormDoc", "\346\222\244\351\224\200", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_Undo->setShortcut(QCoreApplication::translate("TFormDoc", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Redo->setText(QCoreApplication::translate("TFormDoc", "\351\207\215\345\244\215", nullptr));
#if QT_CONFIG(tooltip)
        action_Redo->setToolTip(QCoreApplication::translate("TFormDoc", "\351\207\215\345\244\215\347\274\226\347\274\211\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        action_Redo->setStatusTip(QCoreApplication::translate("TFormDoc", "\351\207\215\345\201\232", "\351\207\215\345\201\232"));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_Redo->setShortcut(QCoreApplication::translate("TFormDoc", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class TFormDoc: public Ui_TFormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TFORMDOC_H
