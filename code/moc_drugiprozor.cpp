/****************************************************************************
** Meta object code from reading C++ file 'drugiprozor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "drugiprozor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drugiprozor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_drugiprozor_t {
    QByteArrayData data[7];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_drugiprozor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_drugiprozor_t qt_meta_stringdata_drugiprozor = {
    {
QT_MOC_LITERAL(0, 0, 11), // "drugiprozor"
QT_MOC_LITERAL(1, 12, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 22), // "on_slobodandan_clicked"
QT_MOC_LITERAL(4, 58, 14), // "startStopTimer"
QT_MOC_LITERAL(5, 73, 10), // "resetTimer"
QT_MOC_LITERAL(6, 84, 6) // "update"

    },
    "drugiprozor\0on_pushButton_clicked\0\0"
    "on_slobodandan_clicked\0startStopTimer\0"
    "resetTimer\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_drugiprozor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void drugiprozor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        drugiprozor *_t = static_cast<drugiprozor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_slobodandan_clicked(); break;
        case 2: _t->startStopTimer(); break;
        case 3: _t->resetTimer(); break;
        case 4: _t->update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject drugiprozor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_drugiprozor.data,
      qt_meta_data_drugiprozor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *drugiprozor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *drugiprozor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_drugiprozor.stringdata0))
        return static_cast<void*>(const_cast< drugiprozor*>(this));
    return QDialog::qt_metacast(_clname);
}

int drugiprozor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
