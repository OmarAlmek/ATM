/****************************************************************************
** Meta object code from reading C++ file 'atm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../atm/atm.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'atm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_atm_t {
    uint offsetsAndSizes[22];
    char stringdata0[4];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[32];
    char stringdata5[26];
    char stringdata6[35];
    char stringdata7[5];
    char stringdata8[5];
    char stringdata9[24];
    char stringdata10[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_atm_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_atm_t qt_meta_stringdata_atm = {
    {
        QT_MOC_LITERAL(0, 3),  // "atm"
        QT_MOC_LITERAL(4, 27),  // "on_pushButton_Clear_clicked"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 28),  // "on_pushButtonDeposit_clicked"
        QT_MOC_LITERAL(62, 31),  // "on_pushButton_Withrdraw_clicked"
        QT_MOC_LITERAL(94, 25),  // "on_pushButtonView_clicked"
        QT_MOC_LITERAL(120, 34),  // "on_lineEditX_cursorPositionCh..."
        QT_MOC_LITERAL(155, 4),  // "arg1"
        QT_MOC_LITERAL(160, 4),  // "arg2"
        QT_MOC_LITERAL(165, 23),  // "on_label1_linkActivated"
        QT_MOC_LITERAL(189, 4)   // "link"
    },
    "atm",
    "on_pushButton_Clear_clicked",
    "",
    "on_pushButtonDeposit_clicked",
    "on_pushButton_Withrdraw_clicked",
    "on_pushButtonView_clicked",
    "on_lineEditX_cursorPositionChanged",
    "arg1",
    "arg2",
    "on_label1_linkActivated",
    "link"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_atm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    2,   54,    2, 0x08,    5 /* Private */,
       9,    1,   59,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject atm::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_atm.offsetsAndSizes,
    qt_meta_data_atm,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_atm_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<atm, std::true_type>,
        // method 'on_pushButton_Clear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDeposit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Withrdraw_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEditX_cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_label1_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void atm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<atm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_Clear_clicked(); break;
        case 1: _t->on_pushButtonDeposit_clicked(); break;
        case 2: _t->on_pushButton_Withrdraw_clicked(); break;
        case 3: _t->on_pushButtonView_clicked(); break;
        case 4: _t->on_lineEditX_cursorPositionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->on_label1_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *atm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *atm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_atm.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int atm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
