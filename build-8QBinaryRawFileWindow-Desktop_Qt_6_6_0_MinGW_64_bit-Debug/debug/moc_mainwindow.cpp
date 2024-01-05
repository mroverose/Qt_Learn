/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../8QBinaryRawFileWindow/mainwindow.h"
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
    "on_pushButton_QInt32Write_clicked",
    "",
    "on_pushButton_QInt32Read_clicked",
    "on_pushButton_QFloatWrite_clicked",
    "on_pushButton_QFloatRead_clicked",
    "on_pushButton_QDoubleWrite_clicked",
    "on_pushButton_QDoubleRead_clicked",
    "on_pushButton_QCharWrite_clicked",
    "on_pushButton_QCahrRead_clicked",
    "on_pushButton_QStringWrite_clicked",
    "on_pushButton_QStringRead_clicked",
    "on_action_WriteToFile_triggered",
    "on_action_ReadFromFile_triggered",
    "on_pushButton_QInt8Write_clicked",
    "on_pushButton_QInt8Read_clicked",
    "on_pushButton_QUint8Write_clicked",
    "on_pushButton_QUint8Read_clicked",
    "on_pushButton_QInt16Write_clicked",
    "on_pushButton_QInt16Read_clicked",
    "on_pushButton_QUint16Write_clicked",
    "on_pushButton_QUint16Read_clicked",
    "on_pushButton_QInt64Write_clicked",
    "on_pushButton_QInt64Read_clicked",
    "on_pushButton_clicked",
    "on_action_EditClearAll_triggered",
    "on_pushButton_BoolWrite_clicked",
    "on_pushButton_BoolRead_clicked",
    "on_pushButton_QFloat16Write_clicked",
    "on_pushButton_QFloat16Read_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[60];
    char stringdata0[11];
    char stringdata1[34];
    char stringdata2[1];
    char stringdata3[33];
    char stringdata4[34];
    char stringdata5[33];
    char stringdata6[35];
    char stringdata7[34];
    char stringdata8[33];
    char stringdata9[32];
    char stringdata10[35];
    char stringdata11[34];
    char stringdata12[32];
    char stringdata13[33];
    char stringdata14[33];
    char stringdata15[32];
    char stringdata16[34];
    char stringdata17[33];
    char stringdata18[34];
    char stringdata19[33];
    char stringdata20[35];
    char stringdata21[34];
    char stringdata22[34];
    char stringdata23[33];
    char stringdata24[22];
    char stringdata25[33];
    char stringdata26[32];
    char stringdata27[31];
    char stringdata28[36];
    char stringdata29[35];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 33),  // "on_pushButton_QInt32Write_cli..."
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 32),  // "on_pushButton_QInt32Read_clicked"
        QT_MOC_LITERAL(79, 33),  // "on_pushButton_QFloatWrite_cli..."
        QT_MOC_LITERAL(113, 32),  // "on_pushButton_QFloatRead_clicked"
        QT_MOC_LITERAL(146, 34),  // "on_pushButton_QDoubleWrite_cl..."
        QT_MOC_LITERAL(181, 33),  // "on_pushButton_QDoubleRead_cli..."
        QT_MOC_LITERAL(215, 32),  // "on_pushButton_QCharWrite_clicked"
        QT_MOC_LITERAL(248, 31),  // "on_pushButton_QCahrRead_clicked"
        QT_MOC_LITERAL(280, 34),  // "on_pushButton_QStringWrite_cl..."
        QT_MOC_LITERAL(315, 33),  // "on_pushButton_QStringRead_cli..."
        QT_MOC_LITERAL(349, 31),  // "on_action_WriteToFile_triggered"
        QT_MOC_LITERAL(381, 32),  // "on_action_ReadFromFile_triggered"
        QT_MOC_LITERAL(414, 32),  // "on_pushButton_QInt8Write_clicked"
        QT_MOC_LITERAL(447, 31),  // "on_pushButton_QInt8Read_clicked"
        QT_MOC_LITERAL(479, 33),  // "on_pushButton_QUint8Write_cli..."
        QT_MOC_LITERAL(513, 32),  // "on_pushButton_QUint8Read_clicked"
        QT_MOC_LITERAL(546, 33),  // "on_pushButton_QInt16Write_cli..."
        QT_MOC_LITERAL(580, 32),  // "on_pushButton_QInt16Read_clicked"
        QT_MOC_LITERAL(613, 34),  // "on_pushButton_QUint16Write_cl..."
        QT_MOC_LITERAL(648, 33),  // "on_pushButton_QUint16Read_cli..."
        QT_MOC_LITERAL(682, 33),  // "on_pushButton_QInt64Write_cli..."
        QT_MOC_LITERAL(716, 32),  // "on_pushButton_QInt64Read_clicked"
        QT_MOC_LITERAL(749, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(771, 32),  // "on_action_EditClearAll_triggered"
        QT_MOC_LITERAL(804, 31),  // "on_pushButton_BoolWrite_clicked"
        QT_MOC_LITERAL(836, 30),  // "on_pushButton_BoolRead_clicked"
        QT_MOC_LITERAL(867, 35),  // "on_pushButton_QFloat16Write_c..."
        QT_MOC_LITERAL(903, 34)   // "on_pushButton_QFloat16Read_cl..."
    },
    "MainWindow",
    "on_pushButton_QInt32Write_clicked",
    "",
    "on_pushButton_QInt32Read_clicked",
    "on_pushButton_QFloatWrite_clicked",
    "on_pushButton_QFloatRead_clicked",
    "on_pushButton_QDoubleWrite_clicked",
    "on_pushButton_QDoubleRead_clicked",
    "on_pushButton_QCharWrite_clicked",
    "on_pushButton_QCahrRead_clicked",
    "on_pushButton_QStringWrite_clicked",
    "on_pushButton_QStringRead_clicked",
    "on_action_WriteToFile_triggered",
    "on_action_ReadFromFile_triggered",
    "on_pushButton_QInt8Write_clicked",
    "on_pushButton_QInt8Read_clicked",
    "on_pushButton_QUint8Write_clicked",
    "on_pushButton_QUint8Read_clicked",
    "on_pushButton_QInt16Write_clicked",
    "on_pushButton_QInt16Read_clicked",
    "on_pushButton_QUint16Write_clicked",
    "on_pushButton_QUint16Read_clicked",
    "on_pushButton_QInt64Write_clicked",
    "on_pushButton_QInt64Read_clicked",
    "on_pushButton_clicked",
    "on_action_EditClearAll_triggered",
    "on_pushButton_BoolWrite_clicked",
    "on_pushButton_BoolRead_clicked",
    "on_pushButton_QFloat16Write_clicked",
    "on_pushButton_QFloat16Read_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  182,    2, 0x08,    1 /* Private */,
       3,    0,  183,    2, 0x08,    2 /* Private */,
       4,    0,  184,    2, 0x08,    3 /* Private */,
       5,    0,  185,    2, 0x08,    4 /* Private */,
       6,    0,  186,    2, 0x08,    5 /* Private */,
       7,    0,  187,    2, 0x08,    6 /* Private */,
       8,    0,  188,    2, 0x08,    7 /* Private */,
       9,    0,  189,    2, 0x08,    8 /* Private */,
      10,    0,  190,    2, 0x08,    9 /* Private */,
      11,    0,  191,    2, 0x08,   10 /* Private */,
      12,    0,  192,    2, 0x08,   11 /* Private */,
      13,    0,  193,    2, 0x08,   12 /* Private */,
      14,    0,  194,    2, 0x08,   13 /* Private */,
      15,    0,  195,    2, 0x08,   14 /* Private */,
      16,    0,  196,    2, 0x08,   15 /* Private */,
      17,    0,  197,    2, 0x08,   16 /* Private */,
      18,    0,  198,    2, 0x08,   17 /* Private */,
      19,    0,  199,    2, 0x08,   18 /* Private */,
      20,    0,  200,    2, 0x08,   19 /* Private */,
      21,    0,  201,    2, 0x08,   20 /* Private */,
      22,    0,  202,    2, 0x08,   21 /* Private */,
      23,    0,  203,    2, 0x08,   22 /* Private */,
      24,    0,  204,    2, 0x08,   23 /* Private */,
      25,    0,  205,    2, 0x08,   24 /* Private */,
      26,    0,  206,    2, 0x08,   25 /* Private */,
      27,    0,  207,    2, 0x08,   26 /* Private */,
      28,    0,  208,    2, 0x08,   27 /* Private */,
      29,    0,  209,    2, 0x08,   28 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        // method 'on_pushButton_QInt32Write_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QInt32Read_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QFloatWrite_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QFloatRead_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QDoubleWrite_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QDoubleRead_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QCharWrite_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QCahrRead_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QStringWrite_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QStringRead_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_WriteToFile_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_ReadFromFile_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QInt8Write_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QInt8Read_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QUint8Write_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QUint8Read_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QInt16Write_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QInt16Read_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QUint16Write_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QUint16Read_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QInt64Write_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QInt64Read_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_EditClearAll_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_BoolWrite_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_BoolRead_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QFloat16Write_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_QFloat16Read_clicked'
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
        case 0: _t->on_pushButton_QInt32Write_clicked(); break;
        case 1: _t->on_pushButton_QInt32Read_clicked(); break;
        case 2: _t->on_pushButton_QFloatWrite_clicked(); break;
        case 3: _t->on_pushButton_QFloatRead_clicked(); break;
        case 4: _t->on_pushButton_QDoubleWrite_clicked(); break;
        case 5: _t->on_pushButton_QDoubleRead_clicked(); break;
        case 6: _t->on_pushButton_QCharWrite_clicked(); break;
        case 7: _t->on_pushButton_QCahrRead_clicked(); break;
        case 8: _t->on_pushButton_QStringWrite_clicked(); break;
        case 9: _t->on_pushButton_QStringRead_clicked(); break;
        case 10: _t->on_action_WriteToFile_triggered(); break;
        case 11: _t->on_action_ReadFromFile_triggered(); break;
        case 12: _t->on_pushButton_QInt8Write_clicked(); break;
        case 13: _t->on_pushButton_QInt8Read_clicked(); break;
        case 14: _t->on_pushButton_QUint8Write_clicked(); break;
        case 15: _t->on_pushButton_QUint8Read_clicked(); break;
        case 16: _t->on_pushButton_QInt16Write_clicked(); break;
        case 17: _t->on_pushButton_QInt16Read_clicked(); break;
        case 18: _t->on_pushButton_QUint16Write_clicked(); break;
        case 19: _t->on_pushButton_QUint16Read_clicked(); break;
        case 20: _t->on_pushButton_QInt64Write_clicked(); break;
        case 21: _t->on_pushButton_QInt64Read_clicked(); break;
        case 22: _t->on_pushButton_clicked(); break;
        case 23: _t->on_action_EditClearAll_triggered(); break;
        case 24: _t->on_pushButton_BoolWrite_clicked(); break;
        case 25: _t->on_pushButton_BoolRead_clicked(); break;
        case 26: _t->on_pushButton_QFloat16Write_clicked(); break;
        case 27: _t->on_pushButton_QFloat16Read_clicked(); break;
        default: ;
        }
    }
    (void)_a;
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
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }
    return _id;
}
QT_WARNING_POP
