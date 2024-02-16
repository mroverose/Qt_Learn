/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../16QCameraDeviceWindow/mainwindow.h"
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
    "do_camera_changed",
    "",
    "index",
    "do_camera_activeChanged",
    "active",
    "do_image_readyForCapture",
    "ready",
    "do_image_captured",
    "id",
    "preview",
    "do_image_saved",
    "fileName",
    "do_recorder_duration",
    "duration",
    "do_recorder_stateChanged",
    "QMediaRecorder::RecorderState",
    "state",
    "do_recorder_error",
    "QMediaRecorder::Error",
    "error",
    "errorString",
    "on_action_openCamera_triggered",
    "on_action_closeCamera_triggered",
    "on_action_capture_triggered",
    "on_action_beginRecord_triggered",
    "on_action_stopRecord_triggered",
    "on_action_quite_triggered",
    "on_pushButton_saveFile_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[58];
    char stringdata0[11];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[24];
    char stringdata5[7];
    char stringdata6[25];
    char stringdata7[6];
    char stringdata8[18];
    char stringdata9[3];
    char stringdata10[8];
    char stringdata11[15];
    char stringdata12[9];
    char stringdata13[21];
    char stringdata14[9];
    char stringdata15[25];
    char stringdata16[30];
    char stringdata17[6];
    char stringdata18[18];
    char stringdata19[22];
    char stringdata20[6];
    char stringdata21[12];
    char stringdata22[31];
    char stringdata23[32];
    char stringdata24[28];
    char stringdata25[32];
    char stringdata26[31];
    char stringdata27[26];
    char stringdata28[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 17),  // "do_camera_changed"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 5),  // "index"
        QT_MOC_LITERAL(36, 23),  // "do_camera_activeChanged"
        QT_MOC_LITERAL(60, 6),  // "active"
        QT_MOC_LITERAL(67, 24),  // "do_image_readyForCapture"
        QT_MOC_LITERAL(92, 5),  // "ready"
        QT_MOC_LITERAL(98, 17),  // "do_image_captured"
        QT_MOC_LITERAL(116, 2),  // "id"
        QT_MOC_LITERAL(119, 7),  // "preview"
        QT_MOC_LITERAL(127, 14),  // "do_image_saved"
        QT_MOC_LITERAL(142, 8),  // "fileName"
        QT_MOC_LITERAL(151, 20),  // "do_recorder_duration"
        QT_MOC_LITERAL(172, 8),  // "duration"
        QT_MOC_LITERAL(181, 24),  // "do_recorder_stateChanged"
        QT_MOC_LITERAL(206, 29),  // "QMediaRecorder::RecorderState"
        QT_MOC_LITERAL(236, 5),  // "state"
        QT_MOC_LITERAL(242, 17),  // "do_recorder_error"
        QT_MOC_LITERAL(260, 21),  // "QMediaRecorder::Error"
        QT_MOC_LITERAL(282, 5),  // "error"
        QT_MOC_LITERAL(288, 11),  // "errorString"
        QT_MOC_LITERAL(300, 30),  // "on_action_openCamera_triggered"
        QT_MOC_LITERAL(331, 31),  // "on_action_closeCamera_triggered"
        QT_MOC_LITERAL(363, 27),  // "on_action_capture_triggered"
        QT_MOC_LITERAL(391, 31),  // "on_action_beginRecord_triggered"
        QT_MOC_LITERAL(423, 30),  // "on_action_stopRecord_triggered"
        QT_MOC_LITERAL(454, 25),  // "on_action_quite_triggered"
        QT_MOC_LITERAL(480, 30)   // "on_pushButton_saveFile_clicked"
    },
    "MainWindow",
    "do_camera_changed",
    "",
    "index",
    "do_camera_activeChanged",
    "active",
    "do_image_readyForCapture",
    "ready",
    "do_image_captured",
    "id",
    "preview",
    "do_image_saved",
    "fileName",
    "do_recorder_duration",
    "duration",
    "do_recorder_stateChanged",
    "QMediaRecorder::RecorderState",
    "state",
    "do_recorder_error",
    "QMediaRecorder::Error",
    "error",
    "errorString",
    "on_action_openCamera_triggered",
    "on_action_closeCamera_triggered",
    "on_action_capture_triggered",
    "on_action_beginRecord_triggered",
    "on_action_stopRecord_triggered",
    "on_action_quite_triggered",
    "on_pushButton_saveFile_clicked"
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
       1,    1,  104,    2, 0x08,    1 /* Private */,
       4,    1,  107,    2, 0x08,    3 /* Private */,
       6,    1,  110,    2, 0x08,    5 /* Private */,
       8,    2,  113,    2, 0x08,    7 /* Private */,
      11,    2,  118,    2, 0x08,   10 /* Private */,
      13,    1,  123,    2, 0x08,   13 /* Private */,
      15,    1,  126,    2, 0x08,   15 /* Private */,
      18,    2,  129,    2, 0x08,   17 /* Private */,
      22,    0,  134,    2, 0x08,   20 /* Private */,
      23,    0,  135,    2, 0x08,   21 /* Private */,
      24,    0,  136,    2, 0x08,   22 /* Private */,
      25,    0,  137,    2, 0x08,   23 /* Private */,
      26,    0,  138,    2, 0x08,   24 /* Private */,
      27,    0,  139,    2, 0x08,   25 /* Private */,
      28,    0,  140,    2, 0x08,   26 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    9,   12,
    QMetaType::Void, QMetaType::LongLong,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,   20,   21,
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
        // method 'do_camera_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'do_camera_activeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'do_image_readyForCapture'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'do_image_captured'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>,
        // method 'do_image_saved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'do_recorder_duration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'do_recorder_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMediaRecorder::RecorderState, std::false_type>,
        // method 'do_recorder_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMediaRecorder::Error, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_action_openCamera_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_closeCamera_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_capture_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_beginRecord_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_stopRecord_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_quite_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_saveFile_clicked'
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
        case 0: _t->do_camera_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->do_camera_activeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->do_image_readyForCapture((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->do_image_captured((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QImage>>(_a[2]))); break;
        case 4: _t->do_image_saved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->do_recorder_duration((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 6: _t->do_recorder_stateChanged((*reinterpret_cast< std::add_pointer_t<QMediaRecorder::RecorderState>>(_a[1]))); break;
        case 7: _t->do_recorder_error((*reinterpret_cast< std::add_pointer_t<QMediaRecorder::Error>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->on_action_openCamera_triggered(); break;
        case 9: _t->on_action_closeCamera_triggered(); break;
        case 10: _t->on_action_capture_triggered(); break;
        case 11: _t->on_action_beginRecord_triggered(); break;
        case 12: _t->on_action_stopRecord_triggered(); break;
        case 13: _t->on_action_quite_triggered(); break;
        case 14: _t->on_pushButton_saveFile_clicked(); break;
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
