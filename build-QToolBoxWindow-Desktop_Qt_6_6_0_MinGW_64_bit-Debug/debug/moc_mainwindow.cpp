/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QToolBoxWindow/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_actionList_Ini_triggered",
    "",
    "on_actionList_Clear_triggered",
    "on_actionList_Insert_triggered",
    "on_actionList_Append_triggered",
    "on_actionList_Delete_triggered",
    "on_actionList_SelectReverse_triggered",
    "on_actionList_SelectNone_triggered",
    "on_actionList_SletectAll_triggered",
    "on_toolButton_ListSortUporder_clicked",
    "on_toolButton_ListSortDownorder_clicked",
    "on_checkBox_ListSort_clicked",
    "checked",
    "on_listWidget_currentItemChanged",
    "QListWidgetItem*",
    "current",
    "previous",
    "on_listWidget_currentRowChanged",
    "currentRow",
    "on_listWidget_currentTextChanged",
    "currentText",
    "on_listWidget_itemChanged",
    "item",
    "on_listWidget_itemSelectionChanged",
    "on_listWidget_itemPressed",
    "on_listWidget_itemClicked",
    "on_listWidget_itemDoubleClicked",
    "on_listWidget_itemActivated",
    "on_listWidget_itemEntered",
    "on_listWidget_customContextMenuRequested",
    "pos",
    "on_pushButton_TextClear_clicked",
    "on_pushButton_TextAddLine_clicked",
    "on_actionSelectPopMenu_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[70];
    char stringdata0[11];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[30];
    char stringdata4[31];
    char stringdata5[31];
    char stringdata6[31];
    char stringdata7[38];
    char stringdata8[35];
    char stringdata9[35];
    char stringdata10[38];
    char stringdata11[40];
    char stringdata12[29];
    char stringdata13[8];
    char stringdata14[33];
    char stringdata15[17];
    char stringdata16[8];
    char stringdata17[9];
    char stringdata18[32];
    char stringdata19[11];
    char stringdata20[33];
    char stringdata21[12];
    char stringdata22[26];
    char stringdata23[5];
    char stringdata24[35];
    char stringdata25[26];
    char stringdata26[26];
    char stringdata27[32];
    char stringdata28[28];
    char stringdata29[26];
    char stringdata30[41];
    char stringdata31[4];
    char stringdata32[32];
    char stringdata33[34];
    char stringdata34[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 27),  // "on_actionList_Ini_triggered"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 29),  // "on_actionList_Clear_triggered"
        QT_MOC_LITERAL(70, 30),  // "on_actionList_Insert_triggered"
        QT_MOC_LITERAL(101, 30),  // "on_actionList_Append_triggered"
        QT_MOC_LITERAL(132, 30),  // "on_actionList_Delete_triggered"
        QT_MOC_LITERAL(163, 37),  // "on_actionList_SelectReverse_t..."
        QT_MOC_LITERAL(201, 34),  // "on_actionList_SelectNone_trig..."
        QT_MOC_LITERAL(236, 34),  // "on_actionList_SletectAll_trig..."
        QT_MOC_LITERAL(271, 37),  // "on_toolButton_ListSortUporder..."
        QT_MOC_LITERAL(309, 39),  // "on_toolButton_ListSortDownord..."
        QT_MOC_LITERAL(349, 28),  // "on_checkBox_ListSort_clicked"
        QT_MOC_LITERAL(378, 7),  // "checked"
        QT_MOC_LITERAL(386, 32),  // "on_listWidget_currentItemChanged"
        QT_MOC_LITERAL(419, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(436, 7),  // "current"
        QT_MOC_LITERAL(444, 8),  // "previous"
        QT_MOC_LITERAL(453, 31),  // "on_listWidget_currentRowChanged"
        QT_MOC_LITERAL(485, 10),  // "currentRow"
        QT_MOC_LITERAL(496, 32),  // "on_listWidget_currentTextChanged"
        QT_MOC_LITERAL(529, 11),  // "currentText"
        QT_MOC_LITERAL(541, 25),  // "on_listWidget_itemChanged"
        QT_MOC_LITERAL(567, 4),  // "item"
        QT_MOC_LITERAL(572, 34),  // "on_listWidget_itemSelectionCh..."
        QT_MOC_LITERAL(607, 25),  // "on_listWidget_itemPressed"
        QT_MOC_LITERAL(633, 25),  // "on_listWidget_itemClicked"
        QT_MOC_LITERAL(659, 31),  // "on_listWidget_itemDoubleClicked"
        QT_MOC_LITERAL(691, 27),  // "on_listWidget_itemActivated"
        QT_MOC_LITERAL(719, 25),  // "on_listWidget_itemEntered"
        QT_MOC_LITERAL(745, 40),  // "on_listWidget_customContextMe..."
        QT_MOC_LITERAL(786, 3),  // "pos"
        QT_MOC_LITERAL(790, 31),  // "on_pushButton_TextClear_clicked"
        QT_MOC_LITERAL(822, 33),  // "on_pushButton_TextAddLine_cli..."
        QT_MOC_LITERAL(856, 32)   // "on_actionSelectPopMenu_triggered"
    },
    "MainWindow",
    "on_actionList_Ini_triggered",
    "",
    "on_actionList_Clear_triggered",
    "on_actionList_Insert_triggered",
    "on_actionList_Append_triggered",
    "on_actionList_Delete_triggered",
    "on_actionList_SelectReverse_triggered",
    "on_actionList_SelectNone_triggered",
    "on_actionList_SletectAll_triggered",
    "on_toolButton_ListSortUporder_clicked",
    "on_toolButton_ListSortDownorder_clicked",
    "on_checkBox_ListSort_clicked",
    "checked",
    "on_listWidget_currentItemChanged",
    "QListWidgetItem*",
    "current",
    "previous",
    "on_listWidget_currentRowChanged",
    "currentRow",
    "on_listWidget_currentTextChanged",
    "currentText",
    "on_listWidget_itemChanged",
    "item",
    "on_listWidget_itemSelectionChanged",
    "on_listWidget_itemPressed",
    "on_listWidget_itemClicked",
    "on_listWidget_itemDoubleClicked",
    "on_listWidget_itemActivated",
    "on_listWidget_itemEntered",
    "on_listWidget_customContextMenuRequested",
    "pos",
    "on_pushButton_TextClear_clicked",
    "on_pushButton_TextAddLine_clicked",
    "on_actionSelectPopMenu_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  164,    2, 0x08,    1 /* Private */,
       3,    0,  165,    2, 0x08,    2 /* Private */,
       4,    0,  166,    2, 0x08,    3 /* Private */,
       5,    0,  167,    2, 0x08,    4 /* Private */,
       6,    0,  168,    2, 0x08,    5 /* Private */,
       7,    0,  169,    2, 0x08,    6 /* Private */,
       8,    0,  170,    2, 0x08,    7 /* Private */,
       9,    0,  171,    2, 0x08,    8 /* Private */,
      10,    0,  172,    2, 0x08,    9 /* Private */,
      11,    0,  173,    2, 0x08,   10 /* Private */,
      12,    1,  174,    2, 0x08,   11 /* Private */,
      14,    2,  177,    2, 0x08,   13 /* Private */,
      18,    1,  182,    2, 0x08,   16 /* Private */,
      20,    1,  185,    2, 0x08,   18 /* Private */,
      22,    1,  188,    2, 0x08,   20 /* Private */,
      24,    0,  191,    2, 0x08,   22 /* Private */,
      25,    1,  192,    2, 0x08,   23 /* Private */,
      26,    1,  195,    2, 0x08,   25 /* Private */,
      27,    1,  198,    2, 0x08,   27 /* Private */,
      28,    1,  201,    2, 0x08,   29 /* Private */,
      29,    1,  204,    2, 0x08,   31 /* Private */,
      30,    1,  207,    2, 0x08,   33 /* Private */,
      32,    0,  210,    2, 0x08,   35 /* Private */,
      33,    0,  211,    2, 0x08,   36 /* Private */,
      34,    0,  212,    2, 0x08,   37 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   16,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, 0x80000000 | 15,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   23,
    QMetaType::Void, 0x80000000 | 15,   23,
    QMetaType::Void, 0x80000000 | 15,   23,
    QMetaType::Void, 0x80000000 | 15,   23,
    QMetaType::Void, 0x80000000 | 15,   23,
    QMetaType::Void, QMetaType::QPoint,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_actionList_Ini_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionList_Clear_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionList_Insert_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionList_Append_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionList_Delete_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionList_SelectReverse_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionList_SelectNone_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionList_SletectAll_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButton_ListSortUporder_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButton_ListSortDownorder_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_ListSort_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_listWidget_currentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_listWidget_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_listWidget_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_listWidget_itemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_listWidget_itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_listWidget_itemPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_listWidget_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_listWidget_itemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_listWidget_itemActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_listWidget_itemEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_listWidget_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_pushButton_TextClear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_TextAddLine_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSelectPopMenu_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionList_Ini_triggered(); break;
        case 1: _t->on_actionList_Clear_triggered(); break;
        case 2: _t->on_actionList_Insert_triggered(); break;
        case 3: _t->on_actionList_Append_triggered(); break;
        case 4: _t->on_actionList_Delete_triggered(); break;
        case 5: _t->on_actionList_SelectReverse_triggered(); break;
        case 6: _t->on_actionList_SelectNone_triggered(); break;
        case 7: _t->on_actionList_SletectAll_triggered(); break;
        case 8: _t->on_toolButton_ListSortUporder_clicked(); break;
        case 9: _t->on_toolButton_ListSortDownorder_clicked(); break;
        case 10: _t->on_checkBox_ListSort_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->on_listWidget_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[2]))); break;
        case 12: _t->on_listWidget_currentRowChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_listWidget_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->on_listWidget_itemChanged((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 15: _t->on_listWidget_itemSelectionChanged(); break;
        case 16: _t->on_listWidget_itemPressed((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 17: _t->on_listWidget_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 18: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 19: _t->on_listWidget_itemActivated((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 20: _t->on_listWidget_itemEntered((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 21: _t->on_listWidget_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 22: _t->on_pushButton_TextClear_clicked(); break;
        case 23: _t->on_pushButton_TextAddLine_clicked(); break;
        case 24: _t->on_actionSelectPopMenu_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }
    return _id;
}
QT_WARNING_POP
