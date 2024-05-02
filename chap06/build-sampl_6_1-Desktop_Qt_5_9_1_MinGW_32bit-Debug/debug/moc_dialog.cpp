/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sampl_6_1/dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[16];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 18), // "on_btnOpen_clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 23), // "on_btnOpenMulti_clicked"
QT_MOC_LITERAL(4, 51, 20), // "on_btnSelDir_clicked"
QT_MOC_LITERAL(5, 72, 18), // "on_btnSave_clicked"
QT_MOC_LITERAL(6, 91, 19), // "on_btnColor_clicked"
QT_MOC_LITERAL(7, 111, 18), // "on_btnFont_clicked"
QT_MOC_LITERAL(8, 130, 25), // "on_btnInputString_clicked"
QT_MOC_LITERAL(9, 156, 22), // "on_btnInputInt_clicked"
QT_MOC_LITERAL(10, 179, 24), // "on_btnInputFloat_clicked"
QT_MOC_LITERAL(11, 204, 23), // "on_btnInputItem_clicked"
QT_MOC_LITERAL(12, 228, 25), // "on_btnMsgQuestion_clicked"
QT_MOC_LITERAL(13, 254, 28), // "on_btnMsgInformation_clicked"
QT_MOC_LITERAL(14, 283, 24), // "on_btnMsgWarning_clicked"
QT_MOC_LITERAL(15, 308, 25) // "on_btnMsgCritical_clicked"

    },
    "Dialog\0on_btnOpen_clicked\0\0"
    "on_btnOpenMulti_clicked\0on_btnSelDir_clicked\0"
    "on_btnSave_clicked\0on_btnColor_clicked\0"
    "on_btnFont_clicked\0on_btnInputString_clicked\0"
    "on_btnInputInt_clicked\0on_btnInputFloat_clicked\0"
    "on_btnInputItem_clicked\0"
    "on_btnMsgQuestion_clicked\0"
    "on_btnMsgInformation_clicked\0"
    "on_btnMsgWarning_clicked\0"
    "on_btnMsgCritical_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnOpen_clicked(); break;
        case 1: _t->on_btnOpenMulti_clicked(); break;
        case 2: _t->on_btnSelDir_clicked(); break;
        case 3: _t->on_btnSave_clicked(); break;
        case 4: _t->on_btnColor_clicked(); break;
        case 5: _t->on_btnFont_clicked(); break;
        case 6: _t->on_btnInputString_clicked(); break;
        case 7: _t->on_btnInputInt_clicked(); break;
        case 8: _t->on_btnInputFloat_clicked(); break;
        case 9: _t->on_btnInputItem_clicked(); break;
        case 10: _t->on_btnMsgQuestion_clicked(); break;
        case 11: _t->on_btnMsgInformation_clicked(); break;
        case 12: _t->on_btnMsgWarning_clicked(); break;
        case 13: _t->on_btnMsgCritical_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog.data,
      qt_meta_data_Dialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
