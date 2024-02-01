/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../13Q3DBarWindow/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtDataVisualization/q3dscene.h>
#include <QtDataVisualization/qbar3dseries.h>
#include <QtDataVisualization/qscatter3dseries.h>
#include <QtDataVisualization/qsurface3dseries.h>
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
    "do_barSelected",
    "",
    "position",
    "on_action_reBuildChart_triggered",
    "on_action_changValue_triggered",
    "on_action_addRow_triggered",
    "on_action_delRow_triggered",
    "on_action_insertRow_triggered",
    "on_comboBox_preView_currentIndexChanged",
    "index",
    "on_horizontalSlider_horizontalRotate_valueChanged",
    "value",
    "on_horizontalSlider_VerticalRotate_valueChanged",
    "on_horizontalSlider_scaled_valueChanged",
    "on_toolButton_refresh_clicked",
    "on_toolButton_left_clicked",
    "on_toolButton_up_clicked",
    "on_toolButton_right_clicked",
    "on_toolButton_down_clicked",
    "on_comboBox_mapTheme_currentIndexChanged",
    "on_spinBox_fontSize_valueChanged",
    "arg1",
    "on_comboBox_selectMode_currentIndexChanged",
    "on_checkBox_showBackground_clicked",
    "checked",
    "on_checkBox_showGrid_clicked",
    "on_checkBox_showReflection_clicked",
    "on_checkBox_reverseValueAxis_clicked",
    "on_checkBox_showAxisTitle_clicked",
    "on_checkBox_showAxisLabelBackground_clicked",
    "on_comboBox_barStyle_currentIndexChanged",
    "on_checkBox_smoothEffect_clicked",
    "on_checkBox_showSelectedBarLabels_clicked",
    "on_action_seriesColor_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[70];
    char stringdata0[11];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[33];
    char stringdata5[31];
    char stringdata6[27];
    char stringdata7[27];
    char stringdata8[30];
    char stringdata9[40];
    char stringdata10[6];
    char stringdata11[50];
    char stringdata12[6];
    char stringdata13[48];
    char stringdata14[40];
    char stringdata15[30];
    char stringdata16[27];
    char stringdata17[25];
    char stringdata18[28];
    char stringdata19[27];
    char stringdata20[41];
    char stringdata21[33];
    char stringdata22[5];
    char stringdata23[43];
    char stringdata24[35];
    char stringdata25[8];
    char stringdata26[29];
    char stringdata27[35];
    char stringdata28[37];
    char stringdata29[34];
    char stringdata30[44];
    char stringdata31[41];
    char stringdata32[33];
    char stringdata33[42];
    char stringdata34[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 14),  // "do_barSelected"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 8),  // "position"
        QT_MOC_LITERAL(36, 32),  // "on_action_reBuildChart_triggered"
        QT_MOC_LITERAL(69, 30),  // "on_action_changValue_triggered"
        QT_MOC_LITERAL(100, 26),  // "on_action_addRow_triggered"
        QT_MOC_LITERAL(127, 26),  // "on_action_delRow_triggered"
        QT_MOC_LITERAL(154, 29),  // "on_action_insertRow_triggered"
        QT_MOC_LITERAL(184, 39),  // "on_comboBox_preView_currentIn..."
        QT_MOC_LITERAL(224, 5),  // "index"
        QT_MOC_LITERAL(230, 49),  // "on_horizontalSlider_horizonta..."
        QT_MOC_LITERAL(280, 5),  // "value"
        QT_MOC_LITERAL(286, 47),  // "on_horizontalSlider_VerticalR..."
        QT_MOC_LITERAL(334, 39),  // "on_horizontalSlider_scaled_va..."
        QT_MOC_LITERAL(374, 29),  // "on_toolButton_refresh_clicked"
        QT_MOC_LITERAL(404, 26),  // "on_toolButton_left_clicked"
        QT_MOC_LITERAL(431, 24),  // "on_toolButton_up_clicked"
        QT_MOC_LITERAL(456, 27),  // "on_toolButton_right_clicked"
        QT_MOC_LITERAL(484, 26),  // "on_toolButton_down_clicked"
        QT_MOC_LITERAL(511, 40),  // "on_comboBox_mapTheme_currentI..."
        QT_MOC_LITERAL(552, 32),  // "on_spinBox_fontSize_valueChanged"
        QT_MOC_LITERAL(585, 4),  // "arg1"
        QT_MOC_LITERAL(590, 42),  // "on_comboBox_selectMode_curren..."
        QT_MOC_LITERAL(633, 34),  // "on_checkBox_showBackground_cl..."
        QT_MOC_LITERAL(668, 7),  // "checked"
        QT_MOC_LITERAL(676, 28),  // "on_checkBox_showGrid_clicked"
        QT_MOC_LITERAL(705, 34),  // "on_checkBox_showReflection_cl..."
        QT_MOC_LITERAL(740, 36),  // "on_checkBox_reverseValueAxis_..."
        QT_MOC_LITERAL(777, 33),  // "on_checkBox_showAxisTitle_cli..."
        QT_MOC_LITERAL(811, 43),  // "on_checkBox_showAxisLabelBack..."
        QT_MOC_LITERAL(855, 40),  // "on_comboBox_barStyle_currentI..."
        QT_MOC_LITERAL(896, 32),  // "on_checkBox_smoothEffect_clicked"
        QT_MOC_LITERAL(929, 41),  // "on_checkBox_showSelectedBarLa..."
        QT_MOC_LITERAL(971, 31)   // "on_action_seriesColor_triggered"
    },
    "MainWindow",
    "do_barSelected",
    "",
    "position",
    "on_action_reBuildChart_triggered",
    "on_action_changValue_triggered",
    "on_action_addRow_triggered",
    "on_action_delRow_triggered",
    "on_action_insertRow_triggered",
    "on_comboBox_preView_currentIndexChanged",
    "index",
    "on_horizontalSlider_horizontalRotate_valueChanged",
    "value",
    "on_horizontalSlider_VerticalRotate_valueChanged",
    "on_horizontalSlider_scaled_valueChanged",
    "on_toolButton_refresh_clicked",
    "on_toolButton_left_clicked",
    "on_toolButton_up_clicked",
    "on_toolButton_right_clicked",
    "on_toolButton_down_clicked",
    "on_comboBox_mapTheme_currentIndexChanged",
    "on_spinBox_fontSize_valueChanged",
    "arg1",
    "on_comboBox_selectMode_currentIndexChanged",
    "on_checkBox_showBackground_clicked",
    "checked",
    "on_checkBox_showGrid_clicked",
    "on_checkBox_showReflection_clicked",
    "on_checkBox_reverseValueAxis_clicked",
    "on_checkBox_showAxisTitle_clicked",
    "on_checkBox_showAxisLabelBackground_clicked",
    "on_comboBox_barStyle_currentIndexChanged",
    "on_checkBox_smoothEffect_clicked",
    "on_checkBox_showSelectedBarLabels_clicked",
    "on_action_seriesColor_triggered"
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
       1,    1,  182,    2, 0x08,    1 /* Private */,
       4,    0,  185,    2, 0x08,    3 /* Private */,
       5,    0,  186,    2, 0x08,    4 /* Private */,
       6,    0,  187,    2, 0x08,    5 /* Private */,
       7,    0,  188,    2, 0x08,    6 /* Private */,
       8,    0,  189,    2, 0x08,    7 /* Private */,
       9,    1,  190,    2, 0x08,    8 /* Private */,
      11,    1,  193,    2, 0x08,   10 /* Private */,
      13,    1,  196,    2, 0x08,   12 /* Private */,
      14,    1,  199,    2, 0x08,   14 /* Private */,
      15,    0,  202,    2, 0x08,   16 /* Private */,
      16,    0,  203,    2, 0x08,   17 /* Private */,
      17,    0,  204,    2, 0x08,   18 /* Private */,
      18,    0,  205,    2, 0x08,   19 /* Private */,
      19,    0,  206,    2, 0x08,   20 /* Private */,
      20,    1,  207,    2, 0x08,   21 /* Private */,
      21,    1,  210,    2, 0x08,   23 /* Private */,
      23,    1,  213,    2, 0x08,   25 /* Private */,
      24,    1,  216,    2, 0x08,   27 /* Private */,
      26,    1,  219,    2, 0x08,   29 /* Private */,
      27,    1,  222,    2, 0x08,   31 /* Private */,
      28,    1,  225,    2, 0x08,   33 /* Private */,
      29,    1,  228,    2, 0x08,   35 /* Private */,
      30,    1,  231,    2, 0x08,   37 /* Private */,
      31,    1,  234,    2, 0x08,   39 /* Private */,
      32,    1,  237,    2, 0x08,   41 /* Private */,
      33,    1,  240,    2, 0x08,   43 /* Private */,
      34,    0,  243,    2, 0x08,   45 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
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
        // method 'do_barSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_action_reBuildChart_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_changValue_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_addRow_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_delRow_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_insertRow_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_preView_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalSlider_horizontalRotate_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalSlider_VerticalRotate_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_horizontalSlider_scaled_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_toolButton_refresh_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButton_left_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButton_up_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButton_right_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButton_down_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_mapTheme_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_spinBox_fontSize_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_comboBox_selectMode_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_checkBox_showBackground_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_showGrid_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_showReflection_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_reverseValueAxis_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_showAxisTitle_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_showAxisLabelBackground_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_comboBox_barStyle_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_checkBox_smoothEffect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBox_showSelectedBarLabels_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_action_seriesColor_triggered'
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
        case 0: _t->do_barSelected((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 1: _t->on_action_reBuildChart_triggered(); break;
        case 2: _t->on_action_changValue_triggered(); break;
        case 3: _t->on_action_addRow_triggered(); break;
        case 4: _t->on_action_delRow_triggered(); break;
        case 5: _t->on_action_insertRow_triggered(); break;
        case 6: _t->on_comboBox_preView_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_horizontalSlider_horizontalRotate_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_horizontalSlider_VerticalRotate_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_horizontalSlider_scaled_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_toolButton_refresh_clicked(); break;
        case 11: _t->on_toolButton_left_clicked(); break;
        case 12: _t->on_toolButton_up_clicked(); break;
        case 13: _t->on_toolButton_right_clicked(); break;
        case 14: _t->on_toolButton_down_clicked(); break;
        case 15: _t->on_comboBox_mapTheme_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_spinBox_fontSize_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_comboBox_selectMode_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_checkBox_showBackground_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->on_checkBox_showGrid_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->on_checkBox_showReflection_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->on_checkBox_reverseValueAxis_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->on_checkBox_showAxisTitle_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->on_checkBox_showAxisLabelBackground_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->on_comboBox_barStyle_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->on_checkBox_smoothEffect_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->on_checkBox_showSelectedBarLabels_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->on_action_seriesColor_triggered(); break;
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
