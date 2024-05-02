/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sampl_4_8/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[443];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "on_actDockVisible_toggled"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "arg1"
QT_MOC_LITERAL(4, 43, 23), // "on_actDockFloat_toggled"
QT_MOC_LITERAL(5, 67, 29), // "on_dockWidget_topLevelChanged"
QT_MOC_LITERAL(6, 97, 8), // "topLevel"
QT_MOC_LITERAL(7, 106, 31), // "on_dockWidget_visibilityChanged"
QT_MOC_LITERAL(8, 138, 7), // "visible"
QT_MOC_LITERAL(9, 146, 25), // "on_actAddFolder_triggered"
QT_MOC_LITERAL(10, 172, 24), // "on_actAddFiles_triggered"
QT_MOC_LITERAL(11, 197, 32), // "on_treeWidget_currentItemChanged"
QT_MOC_LITERAL(12, 230, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(13, 247, 7), // "current"
QT_MOC_LITERAL(14, 255, 8), // "previous"
QT_MOC_LITERAL(15, 264, 24), // "on_actZoomFitW_triggered"
QT_MOC_LITERAL(16, 289, 25), // "on_actScanItems_triggered"
QT_MOC_LITERAL(17, 315, 26), // "on_actDeleteItem_triggered"
QT_MOC_LITERAL(18, 342, 24), // "on_actZoomFitH_triggered"
QT_MOC_LITERAL(19, 367, 22), // "on_actZoomIn_triggered"
QT_MOC_LITERAL(20, 390, 23), // "on_actZoomOut_triggered"
QT_MOC_LITERAL(21, 414, 28) // "on_actZoomRealSize_triggered"

    },
    "MainWindow\0on_actDockVisible_toggled\0"
    "\0arg1\0on_actDockFloat_toggled\0"
    "on_dockWidget_topLevelChanged\0topLevel\0"
    "on_dockWidget_visibilityChanged\0visible\0"
    "on_actAddFolder_triggered\0"
    "on_actAddFiles_triggered\0"
    "on_treeWidget_currentItemChanged\0"
    "QTreeWidgetItem*\0current\0previous\0"
    "on_actZoomFitW_triggered\0"
    "on_actScanItems_triggered\0"
    "on_actDeleteItem_triggered\0"
    "on_actZoomFitH_triggered\0"
    "on_actZoomIn_triggered\0on_actZoomOut_triggered\0"
    "on_actZoomRealSize_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       1,    1,   84,    2, 0x08 /* Private */,
       4,    1,   87,    2, 0x08 /* Private */,
       5,    1,   90,    2, 0x08 /* Private */,
       7,    1,   93,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    2,   98,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,
      18,    0,  106,    2, 0x08 /* Private */,
      19,    0,  107,    2, 0x08 /* Private */,
      20,    0,  108,    2, 0x08 /* Private */,
      21,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actDockVisible_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_actDockFloat_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_dockWidget_topLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_dockWidget_visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_actAddFolder_triggered(); break;
        case 5: _t->on_actAddFiles_triggered(); break;
        case 6: _t->on_treeWidget_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 7: _t->on_actZoomFitW_triggered(); break;
        case 8: _t->on_actScanItems_triggered(); break;
        case 9: _t->on_actDeleteItem_triggered(); break;
        case 10: _t->on_actZoomFitH_triggered(); break;
        case 11: _t->on_actZoomIn_triggered(); break;
        case 12: _t->on_actZoomOut_triggered(); break;
        case 13: _t->on_actZoomRealSize_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
