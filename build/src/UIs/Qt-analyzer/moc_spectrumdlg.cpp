/****************************************************************************
** Meta object code from reading C++ file 'spectrumdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/UIs/Qt-analyzer/spectrumdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spectrumdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_spectrumDialog_t {
    QByteArrayData data[9];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_spectrumDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_spectrumDialog_t qt_meta_stringdata_spectrumDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "spectrumDialog"
QT_MOC_LITERAL(1, 15, 22), // "powerSpectrumCancelled"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "spectrumReady"
QT_MOC_LITERAL(4, 53, 9), // "configure"
QT_MOC_LITERAL(5, 63, 5), // "reset"
QT_MOC_LITERAL(6, 69, 8), // "finalize"
QT_MOC_LITERAL(7, 78, 4), // "help"
QT_MOC_LITERAL(8, 83, 6) // "cancel"

    },
    "spectrumDialog\0powerSpectrumCancelled\0"
    "\0spectrumReady\0configure\0reset\0finalize\0"
    "help\0cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_spectrumDialog[] = {

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
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void spectrumDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<spectrumDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->powerSpectrumCancelled(); break;
        case 1: _t->spectrumReady(); break;
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
            using _t = void (spectrumDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&spectrumDialog::powerSpectrumCancelled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (spectrumDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&spectrumDialog::spectrumReady)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject spectrumDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_spectrumDialog.data,
    qt_meta_data_spectrumDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *spectrumDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *spectrumDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_spectrumDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int spectrumDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void spectrumDialog::powerSpectrumCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void spectrumDialog::spectrumReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
