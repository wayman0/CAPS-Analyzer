/****************************************************************************
** Meta object code from reading C++ file 'dataselectdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/UIs/Qt-analyzer/dataselectdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataselectdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dataSelectDialog_t {
    QByteArrayData data[15];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dataSelectDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dataSelectDialog_t qt_meta_stringdata_dataSelectDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "dataSelectDialog"
QT_MOC_LITERAL(1, 17, 12), // "dataSelected"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 22), // "std::vector<FILETYPE>*"
QT_MOC_LITERAL(4, 54, 9), // "configure"
QT_MOC_LITERAL(5, 64, 6), // "RWMode"
QT_MOC_LITERAL(6, 71, 6), // "uiMode"
QT_MOC_LITERAL(7, 78, 9), // "FILETYPE*"
QT_MOC_LITERAL(8, 88, 9), // "dataTypes"
QT_MOC_LITERAL(9, 98, 4), // "int*"
QT_MOC_LITERAL(10, 103, 8), // "numTypes"
QT_MOC_LITERAL(11, 112, 5), // "reset"
QT_MOC_LITERAL(12, 118, 4), // "help"
QT_MOC_LITERAL(13, 123, 8), // "finalize"
QT_MOC_LITERAL(14, 132, 6) // "cancel"

    },
    "dataSelectDialog\0dataSelected\0\0"
    "std::vector<FILETYPE>*\0configure\0"
    "RWMode\0uiMode\0FILETYPE*\0dataTypes\0"
    "int*\0numTypes\0reset\0help\0finalize\0"
    "cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dataSelectDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x0a /* Public */,
       4,    1,   58,    2, 0x0a /* Public */,
       4,    2,   61,    2, 0x0a /* Public */,
      11,    0,   66,    2, 0x0a /* Public */,
      12,    0,   67,    2, 0x08 /* Private */,
      13,    0,   68,    2, 0x08 /* Private */,
      14,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dataSelectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dataSelectDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataSelected((*reinterpret_cast< std::vector<FILETYPE>*(*)>(_a[1]))); break;
        case 1: _t->configure(); break;
        case 2: _t->configure((*reinterpret_cast< RWMode(*)>(_a[1]))); break;
        case 3: _t->configure((*reinterpret_cast< FILETYPE*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2]))); break;
        case 4: _t->reset(); break;
        case 5: _t->help(); break;
        case 6: _t->finalize(); break;
        case 7: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (dataSelectDialog::*)(std::vector<FILETYPE> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&dataSelectDialog::dataSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dataSelectDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_dataSelectDialog.data,
    qt_meta_data_dataSelectDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dataSelectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dataSelectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dataSelectDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int dataSelectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void dataSelectDialog::dataSelected(std::vector<FILETYPE> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
