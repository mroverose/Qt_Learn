/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../16QAudioSourceWindow/mainwindow.h"
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
    "do_IODevice_update",
    "",
    "blockSize",
    "do_sink_stateChanged",
    "QAudio::State",
    "state",
    "on_action_preferAudioFormat_triggered",
    "on_action_testAudioFormat_triggered",
    "on_comboBox_sampleFormat_currentIndexChanged",
    "index",
    "on_spinBox_channelCnt_valueChanged",
    "arg1",
    "on_action_beginRecord_triggered",
    "on_action_stopRecord_triggered",
    "on_action_playRecFile_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[11];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[21];
    char stringdata5[14];
    char stringdata6[6];
    char stringdata7[38];
    char stringdata8[36];
    char stringdata9[45];
    char stringdata10[6];
    char stringdata11[35];
    char stringdata12[5];
    char stringdata13[32];
    char stringdata14[31];
    char stringdata15[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 18),  // "do_IODevice_update"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 9),  // "blockSize"
        QT_MOC_LITERAL(41, 20),  // "do_sink_stateChanged"
        QT_MOC_LITERAL(62, 13),  // "QAudio::State"
        QT_MOC_LITERAL(76, 5),  // "state"
        QT_MOC_LITERAL(82, 37),  // "on_action_preferAudioFormat_t..."
        QT_MOC_LITERAL(120, 35),  // "on_action_testAudioFormat_tri..."
        QT_MOC_LITERAL(156, 44),  // "on_comboBox_sampleFormat_curr..."
        QT_MOC_LITERAL(201, 5),  // "index"
        QT_MOC_LITERAL(207, 34),  // "on_spinBox_channelCnt_valueCh..."
        QT_MOC_LITERAL(242, 4),  // "arg1"
        QT_MOC_LITERAL(247, 31),  // "on_action_beginRecord_triggered"
        QT_MOC_LITERAL(279, 30),  // "on_action_stopRecord_triggered"
        QT_MOC_LITERAL(310, 31)   // "on_action_playRecFile_triggered"
    },
    "MainWindow",
    "do_IODevice_update",
    "",
    "blockSize",
    "do_sink_stateChanged",
    "QAudio::State",
    "state",
    "on_action_preferAudioFormat_triggered",
    "on_action_testAudioFormat_triggered",
    "on_comboBox_sampleFormat_currentIndexChanged",
    "index",
    "on_spinBox_channelCnt_valueChanged",
    "arg1",
    "on_action_beginRecord_triggered",
    "on_action_stopRecord_triggered",
    "on_action_playRecFile_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x08,    1 /* Private */,
       4,    1,   71,    2, 0x08,    3 /* Private */,
       7,    0,   74,    2, 0x08,    5 /* Private */,
       8,    0,   75,    2, 0x08,    6 /* Private */,
       9,    1,   76,    2, 0x08,    7 /* Private */,
      11,    1,   79,    2, 0x08,    9 /* Private */,
      13,    0,   82,    2, 0x08,   11 /* Private */,
      14,    0,   83,    2, 0x08,   12 /* Private */,
      15,    0,   84,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
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
        // method 'do_IODevice_update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'do_sink_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudio::State, std::false_type>,
        // method 'on_action_preferAudioFormat_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_testAudioFormat_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_sampleFormat_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_spinBox_channelCnt_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_action_beginRecord_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_stopRecord_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_playRecFile_triggered'
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
        case 0: _t->do_IODevice_update((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 1: _t->do_sink_stateChanged((*reinterpret_cast< std::add_pointer_t<QAudio::State>>(_a[1]))); break;
        case 2: _t->on_action_preferAudioFormat_triggered(); break;
        case 3: _t->on_action_testAudioFormat_triggered(); break;
        case 4: _t->on_comboBox_sampleFormat_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_spinBox_channelCnt_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_action_beginRecord_triggered(); break;
        case 7: _t->on_action_stopRecord_triggered(); break;
        case 8: _t->on_action_playRecFile_triggered(); break;
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
