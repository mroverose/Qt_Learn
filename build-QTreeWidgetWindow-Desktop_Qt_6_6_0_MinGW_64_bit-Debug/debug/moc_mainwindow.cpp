/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QTreeWidgetWindow/mainwindow.h"
#include <QtGui/qtextcursor.h>
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
    "on_treeWidget_itemChanged",
    "",
    "QTreeWidgetItem*",
    "item",
    "column",
    "on_treeWidget_itemSelectionChanged",
    "on_actionAddFolder_triggered",
    "on_actionAddFiles_triggered",
    "on_treeWidget_currentItemChanged",
    "current",
    "previous",
    "on_actionDeleteItem_triggered",
    "on_actionScanItems_triggered",
    "on_actionZoomFitHeight_triggered",
    "on_actionZoomOut_triggered",
    "on_actionZoomIn_triggered",
    "on_actionZoomRealSize_triggered",
    "on_dockWidget_visibilityChanged",
    "visible",
    "on_dockWidget_topLevelChanged",
    "topLevel",
    "on_actionDockFloat_triggered",
    "checked",
    "on_actionDockVisible_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[50];
    char stringdata0[11];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[5];
    char stringdata5[7];
    char stringdata6[35];
    char stringdata7[29];
    char stringdata8[28];
    char stringdata9[33];
    char stringdata10[8];
    char stringdata11[9];
    char stringdata12[30];
    char stringdata13[29];
    char stringdata14[33];
    char stringdata15[27];
    char stringdata16[26];
    char stringdata17[32];
    char stringdata18[32];
    char stringdata19[8];
    char stringdata20[30];
    char stringdata21[9];
    char stringdata22[29];
    char stringdata23[8];
    char stringdata24[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 25),  // "on_treeWidget_itemChanged"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(55, 4),  // "item"
        QT_MOC_LITERAL(60, 6),  // "column"
        QT_MOC_LITERAL(67, 34),  // "on_treeWidget_itemSelectionCh..."
        QT_MOC_LITERAL(102, 28),  // "on_actionAddFolder_triggered"
        QT_MOC_LITERAL(131, 27),  // "on_actionAddFiles_triggered"
        QT_MOC_LITERAL(159, 32),  // "on_treeWidget_currentItemChanged"
        QT_MOC_LITERAL(192, 7),  // "current"
        QT_MOC_LITERAL(200, 8),  // "previous"
        QT_MOC_LITERAL(209, 29),  // "on_actionDeleteItem_triggered"
        QT_MOC_LITERAL(239, 28),  // "on_actionScanItems_triggered"
        QT_MOC_LITERAL(268, 32),  // "on_actionZoomFitHeight_triggered"
        QT_MOC_LITERAL(301, 26),  // "on_actionZoomOut_triggered"
        QT_MOC_LITERAL(328, 25),  // "on_actionZoomIn_triggered"
        QT_MOC_LITERAL(354, 31),  // "on_actionZoomRealSize_triggered"
        QT_MOC_LITERAL(386, 31),  // "on_dockWidget_visibilityChanged"
        QT_MOC_LITERAL(418, 7),  // "visible"
        QT_MOC_LITERAL(426, 29),  // "on_dockWidget_topLevelChanged"
        QT_MOC_LITERAL(456, 8),  // "topLevel"
        QT_MOC_LITERAL(465, 28),  // "on_actionDockFloat_triggered"
        QT_MOC_LITERAL(494, 7),  // "checked"
        QT_MOC_LITERAL(502, 30)   // "on_actionDockVisible_triggered"
    },
    "MainWindow",
    "on_treeWidget_itemChanged",
    "",
    "QTreeWidgetItem*",
    "item",
    "column",
    "on_treeWidget_itemSelectionChanged",
    "on_actionAddFolder_triggered",
    "on_actionAddFiles_triggered",
    "on_treeWidget_currentItemChanged",
    "current",
    "previous",
    "on_actionDeleteItem_triggered",
    "on_actionScanItems_triggered",
    "on_actionZoomFitHeight_triggered",
    "on_actionZoomOut_triggered",
    "on_actionZoomIn_triggered",
    "on_actionZoomRealSize_triggered",
    "on_dockWidget_visibilityChanged",
    "visible",
    "on_dockWidget_topLevelChanged",
    "topLevel",
    "on_actionDockFloat_triggered",
    "checked",
    "on_actionDockVisible_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  104,    2, 0x08,    1 /* Private */,
       6,    0,  109,    2, 0x08,    4 /* Private */,
       7,    0,  110,    2, 0x08,    5 /* Private */,
       8,    0,  111,    2, 0x08,    6 /* Private */,
       9,    2,  112,    2, 0x08,    7 /* Private */,
      12,    0,  117,    2, 0x08,   10 /* Private */,
      13,    0,  118,    2, 0x08,   11 /* Private */,
      14,    0,  119,    2, 0x08,   12 /* Private */,
      15,    0,  120,    2, 0x08,   13 /* Private */,
      16,    0,  121,    2, 0x08,   14 /* Private */,
      17,    0,  122,    2, 0x08,   15 /* Private */,
      18,    1,  123,    2, 0x08,   16 /* Private */,
      20,    1,  126,    2, 0x08,   18 /* Private */,
      22,    1,  129,    2, 0x08,   20 /* Private */,
      24,    1,  132,    2, 0x08,   22 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,

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
        // method 'on_treeWidget_itemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_treeWidget_itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAddFolder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAddFiles_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_treeWidget_currentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'on_actionDeleteItem_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionScanItems_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionZoomFitHeight_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionZoomOut_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionZoomIn_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionZoomRealSize_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dockWidget_visibilityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_dockWidget_topLevelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionDockFloat_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionDockVisible_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_treeWidget_itemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->on_treeWidget_itemSelectionChanged(); break;
        case 2: _t->on_actionAddFolder_triggered(); break;
        case 3: _t->on_actionAddFiles_triggered(); break;
        case 4: _t->on_treeWidget_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 5: _t->on_actionDeleteItem_triggered(); break;
        case 6: _t->on_actionScanItems_triggered(); break;
        case 7: _t->on_actionZoomFitHeight_triggered(); break;
        case 8: _t->on_actionZoomOut_triggered(); break;
        case 9: _t->on_actionZoomIn_triggered(); break;
        case 10: _t->on_actionZoomRealSize_triggered(); break;
        case 11: _t->on_dockWidget_visibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->on_dockWidget_topLevelChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->on_actionDockFloat_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->on_actionDockVisible_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
