/****************************************************************************
** Meta object code from reading C++ file 'multipleselectiondlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/UIs/Qt-analyzer/multipleselectiondlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multipleselectiondlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_multipleSelectionDialog_t {
    QByteArrayData data[9];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_multipleSelectionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_multipleSelectionDialog_t qt_meta_stringdata_multipleSelectionDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "multipleSelectionDialog"
QT_MOC_LITERAL(1, 24, 24), // "energySelectionCancelled"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 14), // "slicesSelected"
QT_MOC_LITERAL(4, 65, 9), // "configure"
QT_MOC_LITERAL(5, 75, 5), // "reset"
QT_MOC_LITERAL(6, 81, 8), // "finalize"
QT_MOC_LITERAL(7, 90, 4), // "help"
QT_MOC_LITERAL(8, 95, 6) // "cancel"

    },
    "multipleSelectionDialog\0"
    "energySelectionCancelled\0\0slicesSelected\0"
    "configure\0reset\0finalize\0help\0cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_multipleSelectionDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    2,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   55,    2, 0x0a /* Public */,
       5,    0,   56,    2, 0x0a /* Public */,
       6,    0,   57,    2, 0x08 /* Private */,
       7,    0,   58,    2, 0x08 /* Private */,
       8,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void multipleSelectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<multipleSelectionDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->energySelectionCancelled(); break;
        case 1: _t->slicesSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->configure(); break;
        case 3: _t->reset(); break;
        case 4: _t->finalize(); break;
        case 5: _t->help(); break;
        case 6: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (multipleSelectionDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&multipleSelectionDialog::energySelectionCancelled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (multipleSelectionDialog::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&multipleSelectionDialog::slicesSelected)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject multipleSelectionDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_multipleSelectionDialog.data,
    qt_meta_data_multipleSelectionDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *multipleSelectionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *multipleSelectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_multipleSelectionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int multipleSelectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void multipleSelectionDialog::energySelectionCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void multipleSelectionDialog::slicesSelected(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
