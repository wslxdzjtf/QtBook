/****************************************************************************
** Meta object code from reading C++ file 'axbchartview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sampl_9_4/axbchartview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'axbchartview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AXBChartView_t {
    QByteArrayData data[4];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AXBChartView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AXBChartView_t qt_meta_stringdata_AXBChartView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AXBChartView"
QT_MOC_LITERAL(1, 13, 14), // "mouseMovePoint"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5) // "point"

    },
    "AXBChartView\0mouseMovePoint\0\0point"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AXBChartView[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,

       0        // eod
};

void AXBChartView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AXBChartView *_t = static_cast<AXBChartView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseMovePoint((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AXBChartView::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AXBChartView::mouseMovePoint)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AXBChartView::staticMetaObject = {
    { &QChartView::staticMetaObject, qt_meta_stringdata_AXBChartView.data,
      qt_meta_data_AXBChartView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AXBChartView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AXBChartView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AXBChartView.stringdata0))
        return static_cast<void*>(const_cast< AXBChartView*>(this));
    return QChartView::qt_metacast(_clname);
}

int AXBChartView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QChartView::qt_metacall(_c, _id, _a);
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
void AXBChartView::mouseMovePoint(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
