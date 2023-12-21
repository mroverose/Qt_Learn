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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_ListSource;
    QRadioButton *radioButton_ListWidget;
    QRadioButton *radioButton_TreeWidget;
    QRadioButton *radioButton_TableWidget;
    QGroupBox *groupBox_dragDropMode;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_acceptDrop;
    QCheckBox *checkBox_dragEnable;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox_DragDrop;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_defaultDropAction;
    QComboBox *comboBox_MoveAction;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidget_ListSource;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QListWidget *listWidget_ListWidget;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_5;
    QTreeWidget *treeWidget;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(531, 456);
        verticalLayout_7 = new QVBoxLayout(Widget);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        radioButton_ListSource = new QRadioButton(groupBox_2);
        radioButton_ListSource->setObjectName("radioButton_ListSource");

        verticalLayout->addWidget(radioButton_ListSource);

        radioButton_ListWidget = new QRadioButton(groupBox_2);
        radioButton_ListWidget->setObjectName("radioButton_ListWidget");

        verticalLayout->addWidget(radioButton_ListWidget);

        radioButton_TreeWidget = new QRadioButton(groupBox_2);
        radioButton_TreeWidget->setObjectName("radioButton_TreeWidget");

        verticalLayout->addWidget(radioButton_TreeWidget);

        radioButton_TableWidget = new QRadioButton(groupBox_2);
        radioButton_TableWidget->setObjectName("radioButton_TableWidget");

        verticalLayout->addWidget(radioButton_TableWidget);


        horizontalLayout_5->addWidget(groupBox_2);

        groupBox_dragDropMode = new QGroupBox(Widget);
        groupBox_dragDropMode->setObjectName("groupBox_dragDropMode");
        verticalLayout_2 = new QVBoxLayout(groupBox_dragDropMode);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBox_acceptDrop = new QCheckBox(groupBox_dragDropMode);
        checkBox_acceptDrop->setObjectName("checkBox_acceptDrop");

        horizontalLayout->addWidget(checkBox_acceptDrop);

        checkBox_dragEnable = new QCheckBox(groupBox_dragDropMode);
        checkBox_dragEnable->setObjectName("checkBox_dragEnable");

        horizontalLayout->addWidget(checkBox_dragEnable);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(groupBox_dragDropMode);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        comboBox_DragDrop = new QComboBox(groupBox_dragDropMode);
        comboBox_DragDrop->addItem(QString());
        comboBox_DragDrop->addItem(QString());
        comboBox_DragDrop->addItem(QString());
        comboBox_DragDrop->addItem(QString());
        comboBox_DragDrop->addItem(QString());
        comboBox_DragDrop->setObjectName("comboBox_DragDrop");

        horizontalLayout_2->addWidget(comboBox_DragDrop);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_defaultDropAction = new QLabel(groupBox_dragDropMode);
        label_defaultDropAction->setObjectName("label_defaultDropAction");

        horizontalLayout_3->addWidget(label_defaultDropAction);

        comboBox_MoveAction = new QComboBox(groupBox_dragDropMode);
        comboBox_MoveAction->addItem(QString());
        comboBox_MoveAction->addItem(QString());
        comboBox_MoveAction->addItem(QString());
        comboBox_MoveAction->addItem(QString());
        comboBox_MoveAction->setObjectName("comboBox_MoveAction");

        horizontalLayout_3->addWidget(comboBox_MoveAction);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_5->addWidget(groupBox_dragDropMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        listWidget_ListSource = new QListWidget(groupBox);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("audio-x-generic")));
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_ListSource);
        __qlistwidgetitem->setIcon(icon);
        new QListWidgetItem(listWidget_ListSource);
        new QListWidgetItem(listWidget_ListSource);
        new QListWidgetItem(listWidget_ListSource);
        new QListWidgetItem(listWidget_ListSource);
        new QListWidgetItem(listWidget_ListSource);
        new QListWidgetItem(listWidget_ListSource);
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget_ListSource);
        __qlistwidgetitem1->setForeground(brush);
        QBrush brush1(QColor(0, 255, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget_ListSource);
        __qlistwidgetitem2->setForeground(brush1);
        QBrush brush2(QColor(255, 255, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        QBrush brush3(QColor(159, 159, 159, 255));
        brush3.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget_ListSource);
        __qlistwidgetitem3->setBackground(brush3);
        __qlistwidgetitem3->setForeground(brush2);
        listWidget_ListSource->setObjectName("listWidget_ListSource");

        verticalLayout_3->addWidget(listWidget_ListSource);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        listWidget_ListWidget = new QListWidget(groupBox_4);
        listWidget_ListWidget->setObjectName("listWidget_ListWidget");

        verticalLayout_4->addWidget(listWidget_ListWidget);


        horizontalLayout_4->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(Widget);
        groupBox_5->setObjectName("groupBox_5");
        verticalLayout_5 = new QVBoxLayout(groupBox_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        treeWidget = new QTreeWidget(groupBox_5);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");

        verticalLayout_5->addWidget(treeWidget);


        horizontalLayout_4->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(Widget);
        groupBox_6->setObjectName("groupBox_6");
        verticalLayout_6 = new QVBoxLayout(groupBox_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        tableWidget = new QTableWidget(groupBox_6);
        tableWidget->setObjectName("tableWidget");

        verticalLayout_6->addWidget(tableWidget);


        horizontalLayout_4->addWidget(groupBox_6);


        verticalLayout_7->addLayout(horizontalLayout_4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\345\257\271\350\261\241", nullptr));
        radioButton_ListSource->setText(QCoreApplication::translate("Widget", "listSource", nullptr));
        radioButton_ListWidget->setText(QCoreApplication::translate("Widget", "listWidget", nullptr));
        radioButton_TreeWidget->setText(QCoreApplication::translate("Widget", "treeWidget", nullptr));
        radioButton_TableWidget->setText(QCoreApplication::translate("Widget", "tableWidget", nullptr));
        groupBox_dragDropMode->setTitle(QCoreApplication::translate("Widget", "\346\213\226\346\224\276\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        checkBox_acceptDrop->setText(QCoreApplication::translate("Widget", "acceptDrops", nullptr));
        checkBox_dragEnable->setText(QCoreApplication::translate("Widget", "dragEnabled", nullptr));
        label->setText(QCoreApplication::translate("Widget", "dragDropMode", nullptr));
        comboBox_DragDrop->setItemText(0, QCoreApplication::translate("Widget", "NoDragDrop", nullptr));
        comboBox_DragDrop->setItemText(1, QCoreApplication::translate("Widget", "DragOnly", nullptr));
        comboBox_DragDrop->setItemText(2, QCoreApplication::translate("Widget", "DropOnly", nullptr));
        comboBox_DragDrop->setItemText(3, QCoreApplication::translate("Widget", "DragDrop", nullptr));
        comboBox_DragDrop->setItemText(4, QCoreApplication::translate("Widget", "InternalMove", nullptr));

        label_defaultDropAction->setText(QCoreApplication::translate("Widget", "defaultDropAction", nullptr));
        comboBox_MoveAction->setItemText(0, QCoreApplication::translate("Widget", "CopyAction", nullptr));
        comboBox_MoveAction->setItemText(1, QCoreApplication::translate("Widget", "MoveAction", nullptr));
        comboBox_MoveAction->setItemText(2, QCoreApplication::translate("Widget", "LinkAction", nullptr));
        comboBox_MoveAction->setItemText(3, QCoreApplication::translate("Widget", "IgnoreAction", nullptr));

        groupBox->setTitle(QCoreApplication::translate("Widget", "listSource", nullptr));

        const bool __sortingEnabled = listWidget_ListSource->isSortingEnabled();
        listWidget_ListSource->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_ListSource->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Widget", "\347\262\230\350\264\264", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_ListSource->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Widget", "\347\262\227\344\275\223", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_ListSource->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("Widget", "\346\226\234\344\275\223", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_ListSource->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_ListSource->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("Widget", "\345\267\246\345\257\271\351\275\220", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_ListSource->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("Widget", "\344\270\255\351\227\264\345\257\271\351\275\220", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_ListSource->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("Widget", "\345\217\263\345\257\271\351\275\220", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_ListSource->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("Widget", "\347\272\242\350\211\262", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget_ListSource->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("Widget", "\347\273\277\350\211\262", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget_ListSource->item(9);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("Widget", "\351\273\204\350\211\262", nullptr));
        listWidget_ListSource->setSortingEnabled(__sortingEnabled);

        groupBox_4->setTitle(QCoreApplication::translate("Widget", "listWidget", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Widget", "treeWidget", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Widget", "tableWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
