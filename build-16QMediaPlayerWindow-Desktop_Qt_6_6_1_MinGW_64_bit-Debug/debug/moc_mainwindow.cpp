/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../16QMediaPlayerWindow/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
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
    "do_stateChanged",
    "",
    "QMediaPlayer::PlaybackState",
    "state",
    "do_sourceChanged",
    "media",
    "do_durationChanged",
    "duration",
    "do_positionChanged",
    "position",
    "do_metaDataChanged",
    "on_pushButton_addItem_clicked",
    "on_pushButton_removeItem_clicked",
    "on_pushButton_clearList_clicked",
    "on_listWidget_doubleClicked",
    "QModelIndex",
    "index",
    "on_pushButton_preItem_clicked",
    "on_pushButton_nextItem_clicked",
    "on_pushButton_play_clicked",
    "on_pushButton_pause_clicked",
    "on_pushButton_stop_clicked",
    "on_doubleSpinBox_valueChanged",
    "arg1",
    "on_pushButton_recyclePlay_clicked",
    "checked",
    "on_horizontalSlider_playTimeLine_valueChanged",
    "value",
    "on_pushButton_mutex_clicked",
    "on_horizontalSlider_volumn_valueChanged",
    "on_pushButton_quit_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[64];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[6];
    char stringdata5[17];
    char stringdata6[6];
    char stringdata7[19];
    char stringdata8[9];
    char stringdata9[19];
    char stringdata10[9];
    char stringdata11[19];
    char stringdata12[30];
    char stringdata13[33];
    char stringdata14[32];
    char stringdata15[28];
    char stringdata16[12];
    char stringdata17[6];
    char stringdata18[30];
    char stringdata19[31];
    char stringdata20[27];
    char stringdata21[28];
    char stringdata22[27];
    char stringdata23[30];
    char stringdata24[5];
    char stringdata25[34];
    char stringdata26[8];
    char stringdata27[46];
    char stringdata28[6];
    char stringdata29[28];
    char stringdata30[40];
    char stringdata31[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 15),  // "do_stateChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 27),  // "QMediaPlayer::PlaybackState"
        QT_MOC_LITERAL(56, 5),  // "state"
        QT_MOC_LITERAL(62, 16),  // "do_sourceChanged"
        QT_MOC_LITERAL(79, 5),  // "media"
        QT_MOC_LITERAL(85, 18),  // "do_durationChanged"
        QT_MOC_LITERAL(104, 8),  // "duration"
        QT_MOC_LITERAL(113, 18),  // "do_positionChanged"
        QT_MOC_LITERAL(132, 8),  // "position"
        QT_MOC_LITERAL(141, 18),  // "do_metaDataChanged"
        QT_MOC_LITERAL(160, 29),  // "on_pushButton_addItem_clicked"
        QT_MOC_LITERAL(190, 32),  // "on_pushButton_removeItem_clicked"
        QT_MOC_LITERAL(223, 31),  // "on_pushButton_clearList_clicked"
        QT_MOC_LITERAL(255, 27),  // "on_listWidget_doubleClicked"
        QT_MOC_LITERAL(283, 11),  // "QModelIndex"
        QT_MOC_LITERAL(295, 5),  // "index"
        QT_MOC_LITERAL(301, 29),  // "on_pushButton_preItem_clicked"
        QT_MOC_LITERAL(331, 30),  // "on_pushButton_nextItem_clicked"
        QT_MOC_LITERAL(362, 26),  // "on_pushButton_play_clicked"
        QT_MOC_LITERAL(389, 27),  // "on_pushButton_pause_clicked"
        QT_MOC_LITERAL(417, 26),  // "on_pushButton_stop_clicked"
        QT_MOC_LITERAL(444, 29),  // "on_doubleSpinBox_valueChanged"
        QT_MOC_LITERAL(474, 4),  // "arg1"
        QT_MOC_LITERAL(479, 33),  // "on_pushButton_recyclePlay_cli..."
        QT_MOC_LITERAL(513, 7),  // "checked"
        QT_MOC_LITERAL(521, 45),  // "on_horizontalSlider_playTimeL..."
        QT_MOC_LITERAL(567, 5),  // "value"
        QT_MOC_LITERAL(573, 27),  // "on_pushButton_mutex_clicked"
        QT_MOC_LITERAL(601, 39),  // "on_horizontalSlider_volumn_va..."
        QT_MOC_LITERAL(641, 26)   // "on_pushButton_quit_clicked"
    },
    "MainWindow",
    "do_stateChanged",
    "",
    "QMediaPlayer::PlaybackState",
    "state",
    "do_sourceChanged",
    "media",
    "do_durationChanged",
    "duration",
    "do_positionChanged",
    "position",
    "do_metaDataChanged",
    "on_pushButton_addItem_clicked",
    "on_pushButton_removeItem_clicked",
    "on_pushButton_clearList_clicked",
    "on_listWidget_doubleClicked",
    "QModelIndex",
    "index",
    "on_pushButton_preItem_clicked",
    "on_pushButton_nextItem_clicked",
    "on_pushButton_play_clicked",
    "on_pushButton_pause_clicked",
    "on_pushButton_stop_clicked",
    "on_doubleSpinBox_valueChanged",
    "arg1",
    "on_pushButton_recyclePlay_clicked",
    "checked",
    "on_horizontalSlider_playTimeLine_valueChanged",
    "value",
    "on_pushButton_mutex_clicked",
    "on_horizontalSlider_volumn_valueChanged",
    "on_pushButton_quit_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  134,    2, 0x08,    1 /* Private */,
       5,    1,  137,    2, 0x08,    3 /* Private */,
       7,    1,  140,    2, 0x08,    5 /* Private */,
       9,    1,  143,    2, 0x08,    7 /* Private */,
      11,    0,  146,    2, 0x08,    9 /* Private */,
      12,    0,  147,    2, 0x08,   10 /* Private */,
      13,    0,  148,    2, 0x08,   11 /* Private */,
      14,    0,  149,    2, 0x08,   12 /* Private */,
      15,    1,  150,    2, 0x08,   13 /* Private */,
      18,    0,  153,    2, 0x08,   15 /* Private */,
      19,    0,  154,    2, 0x08,   16 /* Private */,
      20,    0,  155,    2, 0x08,   17 /* Private */,
      21,    0,  156,    2, 0x08,   18 /* Private */,
      22,    0,  157,    2, 0x08,   19 /* Private */,
      23,    1,  158,    2, 0x08,   20 /* Private */,
      25,    1,  161,    2, 0x08,   22 /* Private */,
      27,    1,  164,    2, 0x08,   24 /* Private */,
      29,    0,  167,    2, 0x08,   26 /* Private */,
      30,    1,  168,    2, 0x08,   27 /* Private */,
      31,    0,  171,    2, 0x08,   29 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QUrl,    6,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::LongLong,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   28,
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
        // method 'do_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMediaPlayer::PlaybackState, std::false_type>,
        // method 'do_sourceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'do_durationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'do_positionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'do_metaDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_addItem_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_removeItem_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clearList_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_listWidget_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_pushButton_preItem_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_nextItem_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_play_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_pause_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_stop_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_doubleSpinBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_pushButton_recyclePlay_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_horizontalSlider_playTimeLine_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_mutex_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_horizontalSlider_volumn_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_quit_clicked'
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
        case 0: _t->do_stateChanged((*reinterpret_cast< std::add_pointer_t<QMediaPlayer::PlaybackState>>(_a[1]))); break;
        case 1: _t->do_sourceChanged((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 2: _t->do_durationChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 3: _t->do_positionChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 4: _t->do_metaDataChanged(); break;
        case 5: _t->on_pushButton_addItem_clicked(); break;
        case 6: _t->on_pushButton_removeItem_clicked(); break;
        case 7: _t->on_pushButton_clearList_clicked(); break;
        case 8: _t->on_listWidget_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->on_pushButton_preItem_clicked(); break;
        case 10: _t->on_pushButton_nextItem_clicked(); break;
        case 11: _t->on_pushButton_play_clicked(); break;
        case 12: _t->on_pushButton_pause_clicked(); break;
        case 13: _t->on_pushButton_stop_clicked(); break;
        case 14: _t->on_doubleSpinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 15: _t->on_pushButton_recyclePlay_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->on_horizontalSlider_playTimeLine_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_pushButton_mutex_clicked(); break;
        case 18: _t->on_horizontalSlider_volumn_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->on_pushButton_quit_clicked(); break;
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
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
