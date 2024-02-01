/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../12QBarSeriesWindow/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
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
    "do_calcuAverage",
    "",
    "QStandardItem*",
    "item",
    "do_barHovered",
    "status",
    "index",
    "QBarSet*",
    "barset",
    "do_barClicked",
    "do_pieHovered",
    "QPieSlice*",
    "slice",
    "state",
    "on_pushButton_4_clicked",
    "on_pushButton_5_clicked",
    "on_pushButton_buildStackedBar_clicked",
    "on_pushButton_buildHorizonStackedBar_clicked",
    "on_pushButton_percentBar_clicked",
    "on_pushButton_horizontalPercentBar_clicked",
    "on_comboBox_course_currentIndexChanged",
    "on_pushButton_drawPieChart_clicked",
    "on_doubleSpinBox_holeSizePieChart_valueChanged",
    "arg1",
    "on_doubleSpinBox_pieSize_valueChanged",
    "on_checkBox_showLegend_clicked",
    "checked",
    "on_pushButton_reBuildData_clicked",
    "on_pushButton_reCount_clicked",
    "on_comboBox_chartTheme_currentIndexChanged",
    "on_comboBox_chartAnimation_currentIndexChanged",
    "on_pushButton_quit_clicked",
    "on_tabWidget_currentChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[68];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[5];
    char stringdata5[14];
    char stringdata6[7];
    char stringdata7[6];
    char stringdata8[9];
    char stringdata9[7];
    char stringdata10[14];
    char stringdata11[14];
    char stringdata12[11];
    char stringdata13[6];
    char stringdata14[6];
    char stringdata15[24];
    char stringdata16[24];
    char stringdata17[38];
    char stringdata18[45];
    char stringdata19[33];
    char stringdata20[43];
    char stringdata21[39];
    char stringdata22[35];
    char stringdata23[47];
    char stringdata24[5];
    char stringdata25[38];
    char stringdata26[31];
    char stringdata27[8];
    char stringdata28[34];
    char stringdata29[30];
    char stringdata30[43];
    char stringdata31[47];
    char stringdata32[27];
    char stringdata33[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 15),  // "do_calcuAverage"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 14),  // "QStandardItem*"
        QT_MOC_LITERAL(43, 4),  // "item"
        QT_MOC_LITERAL(48, 13),  // "do_barHovered"
        QT_MOC_LITERAL(62, 6),  // "status"
        QT_MOC_LITERAL(69, 5),  // "index"
        QT_MOC_LITERAL(75, 8),  // "QBarSet*"
        QT_MOC_LITERAL(84, 6),  // "barset"
        QT_MOC_LITERAL(91, 13),  // "do_barClicked"
        QT_MOC_LITERAL(105, 13),  // "do_pieHovered"
        QT_MOC_LITERAL(119, 10),  // "QPieSlice*"
        QT_MOC_LITERAL(130, 5),  // "slice"
        QT_MOC_LITERAL(136, 5),  // "state"
        QT_MOC_LITERAL(142, 23),  // "on_pushButton_4_clicked"
        QT_MOC_LITERAL(166, 23),  // "on_pushButton_5_clicked"
        QT_MOC_LITERAL(190, 37),  // "on_pushButton_buildStackedBar..."
        QT_MOC_LITERAL(228, 44),  // "on_pushButton_buildHorizonSta..."
        QT_MOC_LITERAL(273, 32),  // "on_pushButton_percentBar_clicked"
        QT_MOC_LITERAL(306, 42),  // "on_pushButton_horizontalPerce..."
        QT_MOC_LITERAL(349, 38),  // "on_comboBox_course_currentInd..."
        QT_MOC_LITERAL(388, 34),  // "on_pushButton_drawPieChart_cl..."
        QT_MOC_LITERAL(423, 46),  // "on_doubleSpinBox_holeSizePieC..."
        QT_MOC_LITERAL(470, 4),  // "arg1"
        QT_MOC_LITERAL(475, 37),  // "on_doubleSpinBox_pieSize_valu..."
        QT_MOC_LITERAL(513, 30),  // "on_checkBox_showLegend_clicked"
        QT_MOC_LITERAL(544, 7),  // "checked"
        QT_MOC_LITERAL(552, 33),  // "on_pushButton_reBuildData_cli..."
        QT_MOC_LITERAL(586, 29),  // "on_pushButton_reCount_clicked"
        QT_MOC_LITERAL(616, 42),  // "on_comboBox_chartTheme_curren..."
        QT_MOC_LITERAL(659, 46),  // "on_comboBox_chartAnimation_cu..."
        QT_MOC_LITERAL(706, 26),  // "on_pushButton_quit_clicked"
        QT_MOC_LITERAL(733, 27)   // "on_tabWidget_currentChanged"
    },
    "MainWindow",
    "do_calcuAverage",
    "",
    "QStandardItem*",
    "item",
    "do_barHovered",
    "status",
    "index",
    "QBarSet*",
    "barset",
    "do_barClicked",
    "do_pieHovered",
    "QPieSlice*",
    "slice",
    "state",
    "on_pushButton_4_clicked",
    "on_pushButton_5_clicked",
    "on_pushButton_buildStackedBar_clicked",
    "on_pushButton_buildHorizonStackedBar_clicked",
    "on_pushButton_percentBar_clicked",
    "on_pushButton_horizontalPercentBar_clicked",
    "on_comboBox_course_currentIndexChanged",
    "on_pushButton_drawPieChart_clicked",
    "on_doubleSpinBox_holeSizePieChart_valueChanged",
    "arg1",
    "on_doubleSpinBox_pieSize_valueChanged",
    "on_checkBox_showLegend_clicked",
    "checked",
    "on_pushButton_reBuildData_clicked",
    "on_pushButton_reCount_clicked",
    "on_comboBox_chartTheme_currentIndexChanged",
    "on_comboBox_chartAnimation_currentIndexChanged",
    "on_pushButton_quit_clicked",
    "on_tabWidget_currentChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  140,    2, 0x08,    1 /* Private */,
       5,    3,  143,    2, 0x08,    3 /* Private */,
      10,    2,  150,    2, 0x08,    7 /* Private */,
      11,    2,  155,    2, 0x08,   10 /* Private */,
      15,    0,  160,    2, 0x08,   13 /* Private */,
      16,    0,  161,    2, 0x08,   14 /* Private */,
      17,    0,  162,    2, 0x08,   15 /* Private */,
      18,    0,  163,    2, 0x08,   16 /* Private */,
      19,    0,  164,    2, 0x08,   17 /* Private */,
      20,    0,  165,    2, 0x08,   18 /* Private */,
      21,    1,  166,    2, 0x08,   19 /* Private */,
      22,    0,  169,    2, 0x08,   21 /* Private */,
      23,    1,  170,    2, 0x08,   22 /* Private */,
      25,    1,  173,    2, 0x08,   24 /* Private */,
      26,    1,  176,    2, 0x08,   26 /* Private */,
      28,    0,  179,    2, 0x08,   28 /* Private */,
      29,    0,  180,    2, 0x08,   29 /* Private */,
      30,    1,  181,    2, 0x08,   30 /* Private */,
      31,    1,  184,    2, 0x08,   32 /* Private */,
      32,    0,  187,    2, 0x08,   34 /* Private */,
      33,    1,  188,    2, 0x08,   35 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, 0x80000000 | 8,    6,    7,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    9,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Bool,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   24,
    QMetaType::Void, QMetaType::Double,   24,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

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
        // method 'do_calcuAverage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStandardItem *, std::false_type>,
        // method 'do_barHovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QBarSet *, std::false_type>,
        // method 'do_barClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QBarSet *, std::false_type>,
        // method 'do_pieHovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPieSlice *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_pushButton_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_buildStackedBar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_buildHorizonStackedBar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_percentBar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_horizontalPercentBar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_course_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_drawPieChart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_doubleSpinBox_holeSizePieChart_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_doubleSpinBox_pieSize_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_checkBox_showLegend_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_pushButton_reBuildData_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_reCount_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_chartTheme_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_comboBox_chartAnimation_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_quit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tabWidget_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->do_calcuAverage((*reinterpret_cast< std::add_pointer_t<QStandardItem*>>(_a[1]))); break;
        case 1: _t->do_barHovered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QBarSet*>>(_a[3]))); break;
        case 2: _t->do_barClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QBarSet*>>(_a[2]))); break;
        case 3: _t->do_pieHovered((*reinterpret_cast< std::add_pointer_t<QPieSlice*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->on_pushButton_5_clicked(); break;
        case 6: _t->on_pushButton_buildStackedBar_clicked(); break;
        case 7: _t->on_pushButton_buildHorizonStackedBar_clicked(); break;
        case 8: _t->on_pushButton_percentBar_clicked(); break;
        case 9: _t->on_pushButton_horizontalPercentBar_clicked(); break;
        case 10: _t->on_comboBox_course_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_pushButton_drawPieChart_clicked(); break;
        case 12: _t->on_doubleSpinBox_holeSizePieChart_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->on_doubleSpinBox_pieSize_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 14: _t->on_checkBox_showLegend_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->on_pushButton_reBuildData_clicked(); break;
        case 16: _t->on_pushButton_reCount_clicked(); break;
        case 17: _t->on_comboBox_chartTheme_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_comboBox_chartAnimation_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->on_pushButton_quit_clicked(); break;
        case 20: _t->on_tabWidget_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QBarSet* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QBarSet* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPieSlice* >(); break;
            }
            break;
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
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
