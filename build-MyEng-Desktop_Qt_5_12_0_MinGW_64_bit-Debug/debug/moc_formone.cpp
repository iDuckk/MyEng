/****************************************************************************
** Meta object code from reading C++ file 'formone.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyEng/formone.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formone.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormOne_t {
    QByteArrayData data[10];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormOne_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormOne_t qt_meta_stringdata_FormOne = {
    {
QT_MOC_LITERAL(0, 0, 7), // "FormOne"
QT_MOC_LITERAL(1, 8, 11), // "CorrectWord"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "WrongWord"
QT_MOC_LITERAL(4, 31, 26), // "on_pushButton_play_clicked"
QT_MOC_LITERAL(5, 58, 12), // "getLineWords"
QT_MOC_LITERAL(6, 71, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(7, 97, 9), // "MainCount"
QT_MOC_LITERAL(8, 107, 3), // "num"
QT_MOC_LITERAL(9, 111, 12) // "CurrentCount"

    },
    "FormOne\0CorrectWord\0\0WrongWord\0"
    "on_pushButton_play_clicked\0getLineWords\0"
    "on_lineEdit_returnPressed\0MainCount\0"
    "num\0CurrentCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormOne[] = {

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
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   55,    2, 0x08 /* Private */,
       5,    2,   56,    2, 0x08 /* Private */,
       6,    0,   61,    2, 0x08 /* Private */,
       7,    1,   62,    2, 0x08 /* Private */,
       9,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void FormOne::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormOne *_t = static_cast<FormOne *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CorrectWord((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->WrongWord((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_play_clicked(); break;
        case 3: _t->getLineWords((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->on_lineEdit_returnPressed(); break;
        case 5: _t->MainCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->CurrentCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormOne::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormOne::CorrectWord)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FormOne::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormOne::WrongWord)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FormOne::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_FormOne.data,
    qt_meta_data_FormOne,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormOne::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormOne::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormOne.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormOne::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void FormOne::CorrectWord(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FormOne::WrongWord(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
