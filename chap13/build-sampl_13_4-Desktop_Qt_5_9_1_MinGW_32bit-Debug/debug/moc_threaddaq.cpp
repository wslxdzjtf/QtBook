/****************************************************************************
** Meta object code from reading C++ file 'threaddaq.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sampl_13_4/threaddaq.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threaddaq.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThreadDAQ_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadDAQ_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadDAQ_t qt_meta_stringdata_ThreadDAQ = {
    {
QT_MOC_LITERAL(0, 0, 9) // "ThreadDAQ"

    },
    "ThreadDAQ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadDAQ[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ThreadDAQ::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ThreadDAQ::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ThreadDAQ.data,
      qt_meta_data_ThreadDAQ,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ThreadDAQ::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadDAQ::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadDAQ.stringdata0))
        return static_cast<void*>(const_cast< ThreadDAQ*>(this));
    return QThread::qt_metacast(_clname);
}

int ThreadDAQ::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ThreadShow_t {
    QByteArrayData data[7];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadShow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadShow_t qt_meta_stringdata_ThreadShow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ThreadShow"
QT_MOC_LITERAL(1, 11, 8), // "newValue"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "int*"
QT_MOC_LITERAL(4, 26, 4), // "data"
QT_MOC_LITERAL(5, 31, 5), // "count"
QT_MOC_LITERAL(6, 37, 3) // "seq"

    },
    "ThreadShow\0newValue\0\0int*\0data\0count\0"
    "seq"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadShow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,

       0        // eod
};

void ThreadShow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ThreadShow *_t = static_cast<ThreadShow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newValue((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ThreadShow::*_t)(int * , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThreadShow::newValue)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ThreadShow::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ThreadShow.data,
      qt_meta_data_ThreadShow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ThreadShow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadShow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadShow.stringdata0))
        return static_cast<void*>(const_cast< ThreadShow*>(this));
    return QThread::qt_metacast(_clname);
}

int ThreadShow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ThreadShow::newValue(int * _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
