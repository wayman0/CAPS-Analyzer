/****************************************************************************
** Meta object code from reading C++ file 'controldatadlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/UIs/Qt-analyzer/controldatadlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controldatadlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_controlDataDialog_t {
    QByteArrayData data[17];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_controlDataDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_controlDataDialog_t qt_meta_stringdata_controlDataDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "controlDataDialog"
QT_MOC_LITERAL(1, 18, 21), // "dataCreationCancelled"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 16), // "buildControlData"
QT_MOC_LITERAL(4, 58, 8), // "FILETYPE"
QT_MOC_LITERAL(5, 67, 9), // "configure"
QT_MOC_LITERAL(6, 77, 4), // "open"
QT_MOC_LITERAL(7, 82, 5), // "reset"
QT_MOC_LITERAL(8, 88, 8), // "validate"
QT_MOC_LITERAL(9, 97, 8), // "finalize"
QT_MOC_LITERAL(10, 106, 7), // "addData"
QT_MOC_LITERAL(11, 114, 16), // "QAbstractButton*"
QT_MOC_LITERAL(12, 131, 6), // "button"
QT_MOC_LITERAL(13, 138, 6), // "cancel"
QT_MOC_LITERAL(14, 145, 4), // "help"
QT_MOC_LITERAL(15, 150, 11), // "changeStack"
QT_MOC_LITERAL(16, 162, 5) // "frame"

    },
    "controlDataDialog\0dataCreationCancelled\0"
    "\0buildControlData\0FILETYPE\0configure\0"
    "open\0reset\0validate\0finalize\0addData\0"
    "QAbstractButton*\0button\0cancel\0help\0"
    "changeStack\0frame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_controlDataDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    2,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   70,    2, 0x0a /* Public */,
       7,    0,   73,    2, 0x0a /* Public */,
       8,    0,   74,    2, 0x08 /* Private */,
       9,    0,   75,    2, 0x08 /* Private */,
      10,    1,   76,    2, 0x08 /* Private */,
      13,    0,   79,    2, 0x08 /* Private */,
      14,    0,   80,    2, 0x08 /* Private */,
      15,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,

       0        // eod
};

void controlDataDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<controlDataDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataCreationCancelled(); break;
        case 1: _t->buildControlData((*reinterpret_cast< FILETYPE(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->configure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->reset(); break;
        case 4: { bool _r = _t->validate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->finalize(); break;
        case 6: _t->addData((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 7: _t->cancel(); break;
        case 8: _t->help(); break;
        case 9: _t->changeStack((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (controlDataDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&controlDataDialog::dataCreationCancelled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (controlDataDialog::*)(FILETYPE , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&controlDataDialog::buildControlData)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject controlDataDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_controlDataDialog.data,
    qt_meta_data_controlDataDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *controlDataDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *controlDataDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_controlDataDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int controlDataDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void controlDataDialog::dataCreationCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void controlDataDialog::buildControlData(FILETYPE _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
