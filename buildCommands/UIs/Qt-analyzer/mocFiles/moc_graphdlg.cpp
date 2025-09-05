/****************************************************************************
** Meta object code from reading C++ file 'graphdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/UIs/Qt-analyzer/graphdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_graphDialog_t {
    QByteArrayData data[12];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_graphDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_graphDialog_t qt_meta_stringdata_graphDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "graphDialog"
QT_MOC_LITERAL(1, 12, 16), // "grapherCancelled"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "grapherReady"
QT_MOC_LITERAL(4, 43, 9), // "configure"
QT_MOC_LITERAL(5, 53, 9), // "triggered"
QT_MOC_LITERAL(6, 63, 5), // "reset"
QT_MOC_LITERAL(7, 69, 8), // "finalize"
QT_MOC_LITERAL(8, 78, 4), // "help"
QT_MOC_LITERAL(9, 83, 14), // "activateCustom"
QT_MOC_LITERAL(10, 98, 5), // "check"
QT_MOC_LITERAL(11, 104, 6) // "cancel"

    },
    "graphDialog\0grapherCancelled\0\0"
    "grapherReady\0configure\0triggered\0reset\0"
    "finalize\0help\0activateCustom\0check\0"
    "cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_graphDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   61,    2, 0x0a /* Public */,
       4,    1,   62,    2, 0x0a /* Public */,
       6,    0,   65,    2, 0x0a /* Public */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    1,   68,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

       0        // eod
};

void graphDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<graphDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->grapherCancelled(); break;
        case 1: _t->grapherReady(); break;
        case 2: _t->configure(); break;
        case 3: _t->configure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->reset(); break;
        case 5: _t->finalize(); break;
        case 6: _t->help(); break;
        case 7: _t->activateCustom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (graphDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graphDialog::grapherCancelled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (graphDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&graphDialog::grapherReady)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject graphDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_graphDialog.data,
    qt_meta_data_graphDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *graphDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *graphDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_graphDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int graphDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void graphDialog::grapherCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void graphDialog::grapherReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
