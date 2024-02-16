/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../18MultiLanguageWindow/mainwindow.h"
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
#error "This file was generated using the moc from 6.6.1. It"
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
    "do_fontSize_changed",
    "",
    "fontsize",
    "do_fontSelected",
    "font",
    "on_actionFont_Bold_triggered",
    "checked",
    "on_actionFont_Italic_triggered",
    "on_actionFont_Underline_triggered",
    "on_actionFile_Save_triggered",
    "on_actionSys_ToggleText_triggered",
    "on_plainTextEdit_copyAvailable",
    "b",
    "on_plainTextEdit_selectionChanged",
    "on_actionLang_CN_triggered",
    "on_actionLang_EN_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[11];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[16];
    char stringdata5[5];
    char stringdata6[29];
    char stringdata7[8];
    char stringdata8[31];
    char stringdata9[34];
    char stringdata10[29];
    char stringdata11[34];
    char stringdata12[31];
    char stringdata13[2];
    char stringdata14[34];
    char stringdata15[27];
    char stringdata16[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 19),  // "do_fontSize_changed"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 8),  // "fontsize"
        QT_MOC_LITERAL(41, 15),  // "do_fontSelected"
        QT_MOC_LITERAL(57, 4),  // "font"
        QT_MOC_LITERAL(62, 28),  // "on_actionFont_Bold_triggered"
        QT_MOC_LITERAL(91, 7),  // "checked"
        QT_MOC_LITERAL(99, 30),  // "on_actionFont_Italic_triggered"
        QT_MOC_LITERAL(130, 33),  // "on_actionFont_Underline_trigg..."
        QT_MOC_LITERAL(164, 28),  // "on_actionFile_Save_triggered"
        QT_MOC_LITERAL(193, 33),  // "on_actionSys_ToggleText_trigg..."
        QT_MOC_LITERAL(227, 30),  // "on_plainTextEdit_copyAvailable"
        QT_MOC_LITERAL(258, 1),  // "b"
        QT_MOC_LITERAL(260, 33),  // "on_plainTextEdit_selectionCha..."
        QT_MOC_LITERAL(294, 26),  // "on_actionLang_CN_triggered"
        QT_MOC_LITERAL(321, 26)   // "on_actionLang_EN_triggered"
    },
    "MainWindow",
    "do_fontSize_changed",
    "",
    "fontsize",
    "do_fontSelected",
    "font",
    "on_actionFont_Bold_triggered",
    "checked",
    "on_actionFont_Italic_triggered",
    "on_actionFont_Underline_triggered",
    "on_actionFile_Save_triggered",
    "on_actionSys_ToggleText_triggered",
    "on_plainTextEdit_copyAvailable",
    "b",
    "on_plainTextEdit_selectionChanged",
    "on_actionLang_CN_triggered",
    "on_actionLang_EN_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x08,    1 /* Private */,
       4,    1,   83,    2, 0x08,    3 /* Private */,
       6,    1,   86,    2, 0x08,    5 /* Private */,
       8,    1,   89,    2, 0x08,    7 /* Private */,
       9,    1,   92,    2, 0x08,    9 /* Private */,
      10,    0,   95,    2, 0x08,   11 /* Private */,
      11,    1,   96,    2, 0x08,   12 /* Private */,
      12,    1,   99,    2, 0x08,   14 /* Private */,
      14,    0,  102,    2, 0x08,   16 /* Private */,
      15,    0,  103,    2, 0x08,   17 /* Private */,
      16,    0,  104,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QFont,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,   13,
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
        // method 'do_fontSize_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'do_fontSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>,
        // method 'on_actionFont_Bold_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionFont_Italic_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionFont_Underline_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionFile_Save_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSys_ToggleText_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_plainTextEdit_copyAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_plainTextEdit_selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLang_CN_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLang_EN_triggered'
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
        case 0: _t->do_fontSize_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->do_fontSelected((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 2: _t->on_actionFont_Bold_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_actionFont_Italic_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_actionFont_Underline_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_actionFile_Save_triggered(); break;
        case 6: _t->on_actionSys_ToggleText_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->on_plainTextEdit_copyAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_plainTextEdit_selectionChanged(); break;
        case 9: _t->on_actionLang_CN_triggered(); break;
        case 10: _t->on_actionLang_EN_triggered(); break;
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
