/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sampl_4_9/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[18];
    char stringdata0[385];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 23), // "on_btnSetHeader_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21), // "on_btnSetRows_clicked"
QT_MOC_LITERAL(4, 54, 25), // "on_chkBoxRowColor_clicked"
QT_MOC_LITERAL(5, 80, 7), // "checked"
QT_MOC_LITERAL(6, 88, 21), // "on_btnIniData_clicked"
QT_MOC_LITERAL(7, 110, 23), // "on_btnInsertRow_clicked"
QT_MOC_LITERAL(8, 134, 23), // "on_btnAppendRow_clicked"
QT_MOC_LITERAL(9, 158, 23), // "on_btnDelCurRow_clicked"
QT_MOC_LITERAL(10, 182, 23), // "on_btnAutoHeght_clicked"
QT_MOC_LITERAL(11, 206, 23), // "on_btnAutoWidth_clicked"
QT_MOC_LITERAL(12, 230, 24), // "on_btnReadToEdit_clicked"
QT_MOC_LITERAL(13, 255, 28), // "on_chkBoxTabEditable_clicked"
QT_MOC_LITERAL(14, 284, 24), // "on_chkBoxHeaderH_clicked"
QT_MOC_LITERAL(15, 309, 24), // "on_chkBoxHeaderV_clicked"
QT_MOC_LITERAL(16, 334, 24), // "on_rBtnSelectRow_clicked"
QT_MOC_LITERAL(17, 359, 25) // "on_rBtnSelectItem_clicked"

    },
    "Widget\0on_btnSetHeader_clicked\0\0"
    "on_btnSetRows_clicked\0on_chkBoxRowColor_clicked\0"
    "checked\0on_btnIniData_clicked\0"
    "on_btnInsertRow_clicked\0on_btnAppendRow_clicked\0"
    "on_btnDelCurRow_clicked\0on_btnAutoHeght_clicked\0"
    "on_btnAutoWidth_clicked\0"
    "on_btnReadToEdit_clicked\0"
    "on_chkBoxTabEditable_clicked\0"
    "on_chkBoxHeaderH_clicked\0"
    "on_chkBoxHeaderV_clicked\0"
    "on_rBtnSelectRow_clicked\0"
    "on_rBtnSelectItem_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    1,   91,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    1,  101,    2, 0x08 /* Private */,
      14,    1,  104,    2, 0x08 /* Private */,
      15,    1,  107,    2, 0x08 /* Private */,
      16,    0,  110,    2, 0x08 /* Private */,
      17,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnSetHeader_clicked(); break;
        case 1: _t->on_btnSetRows_clicked(); break;
        case 2: _t->on_chkBoxRowColor_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_btnIniData_clicked(); break;
        case 4: _t->on_btnInsertRow_clicked(); break;
        case 5: _t->on_btnAppendRow_clicked(); break;
        case 6: _t->on_btnDelCurRow_clicked(); break;
        case 7: _t->on_btnAutoHeght_clicked(); break;
        case 8: _t->on_btnAutoWidth_clicked(); break;
        case 9: _t->on_btnReadToEdit_clicked(); break;
        case 10: _t->on_chkBoxTabEditable_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_chkBoxHeaderH_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_chkBoxHeaderV_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_rBtnSelectRow_clicked(); break;
        case 14: _t->on_rBtnSelectItem_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
