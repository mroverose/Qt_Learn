/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QAbstrctItemModel/mainwindow.h"
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
    "do_currentChanged",
    "",
    "QModelIndex",
    "current",
    "previous",
    "on_actionOpen_triggered",
    "on_actionAppend_triggered",
    "on_actionInsert_triggered",
    "on_actionDelete_triggered",
    "on_actionAlignLeft_triggered",
    "on_actionAlignRight_triggered",
    "on_actionAlighCenter_triggered",
    "on_actionFontBold_triggered",
    "checked",
    "on_actionModelData_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[11];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[8];
    char stringdata5[9];
    char stringdata6[24];
    char stringdata7[26];
    char stringdata8[26];
    char stringdata9[26];
    char stringdata10[29];
    char stringdata11[30];
    char stringdata12[31];
    char stringdata13[28];
    char stringdata14[8];
    char stringdata15[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 17),  // "do_currentChanged"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 11),  // "QModelIndex"
        QT_MOC_LITERAL(42, 7),  // "current"
        QT_MOC_LITERAL(50, 8),  // "previous"
        QT_MOC_LITERAL(59, 23),  // "on_actionOpen_triggered"
        QT_MOC_LITERAL(83, 25),  // "on_actionAppend_triggered"
        QT_MOC_LITERAL(109, 25),  // "on_actionInsert_triggered"
        QT_MOC_LITERAL(135, 25),  // "on_actionDelete_triggered"
        QT_MOC_LITERAL(161, 28),  // "on_actionAlignLeft_triggered"
        QT_MOC_LITERAL(190, 29),  // "on_actionAlignRight_triggered"
        QT_MOC_LITERAL(220, 30),  // "on_actionAlighCenter_triggered"
        QT_MOC_LITERAL(251, 27),  // "on_actionFontBold_triggered"
        QT_MOC_LITERAL(279, 7),  // "checked"
        QT_MOC_LITERAL(287, 28)   // "on_actionModelData_triggered"
    },
    "MainWindow",
    "do_currentChanged",
    "",
    "QModelIndex",
    "current",
    "previous",
    "on_actionOpen_triggered",
    "on_actionAppend_triggered",
    "on_actionInsert_triggered",
    "on_actionDelete_triggered",
    "on_actionAlignLeft_triggered",
    "on_actionAlignRight_triggered",
    "on_actionAlighCenter_triggered",
    "on_actionFontBold_triggered",
    "checked",
    "on_actionModelData_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   74,    2, 0x08,    1 /* Private */,
       6,    0,   79,    2, 0x08,    4 /* Private */,
       7,    0,   80,    2, 0x08,    5 /* Private */,
       8,    0,   81,    2, 0x08,    6 /* Private */,
       9,    0,   82,    2, 0x08,    7 /* Private */,
      10,    0,   83,    2, 0x08,    8 /* Private */,
      11,    0,   84,    2, 0x08,    9 /* Private */,
      12,    0,   85,    2, 0x08,   10 /* Private */,
      13,    1,   86,    2, 0x08,   11 /* Private */,
      15,    0,   89,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
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
        // method 'do_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_actionOpen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAppend_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionInsert_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDelete_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAlignLeft_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAlignRight_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAlighCenter_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFontBold_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionModelData_triggered'
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
        case 0: _t->do_currentChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 1: _t->on_actionOpen_triggered(); break;
        case 2: _t->on_actionAppend_triggered(); break;
        case 3: _t->on_actionInsert_triggered(); break;
        case 4: _t->on_actionDelete_triggered(); break;
        case 5: _t->on_actionAlignLeft_triggered(); break;
        case 6: _t->on_actionAlignRight_triggered(); break;
        case 7: _t->on_actionAlighCenter_triggered(); break;
        case 8: _t->on_actionFontBold_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->on_actionModelData_triggered(); break;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
