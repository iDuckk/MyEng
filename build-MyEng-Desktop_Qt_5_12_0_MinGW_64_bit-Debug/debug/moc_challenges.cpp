/****************************************************************************
** Meta object code from reading C++ file 'challenges.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyEng/challenges.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'challenges.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Challenges_t {
    QByteArrayData data[16];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Challenges_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Challenges_t qt_meta_stringdata_Challenges = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Challenges"
QT_MOC_LITERAL(1, 11, 9), // "RadioOneW"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "trueOne"
QT_MOC_LITERAL(4, 30, 8), // "RadioVar"
QT_MOC_LITERAL(5, 39, 7), // "trueVar"
QT_MOC_LITERAL(6, 47, 14), // "StartChallenge"
QT_MOC_LITERAL(7, 62, 9), // "numberLVL"
QT_MOC_LITERAL(8, 72, 5), // "index"
QT_MOC_LITERAL(9, 78, 27), // "on_radioButton_OneW_clicked"
QT_MOC_LITERAL(10, 106, 7), // "checked"
QT_MOC_LITERAL(11, 114, 32), // "on_radioButton_Variation_clicked"
QT_MOC_LITERAL(12, 147, 10), // "choosePart"
QT_MOC_LITERAL(13, 158, 24), // "on_pushButton_Ok_clicked"
QT_MOC_LITERAL(14, 183, 28), // "on_pushButton_Cancel_clicked"
QT_MOC_LITERAL(15, 212, 35) // "on_comboBox_lvl_currentIndexC..."

    },
    "Challenges\0RadioOneW\0\0trueOne\0RadioVar\0"
    "trueVar\0StartChallenge\0numberLVL\0index\0"
    "on_radioButton_OneW_clicked\0checked\0"
    "on_radioButton_Variation_clicked\0"
    "choosePart\0on_pushButton_Ok_clicked\0"
    "on_pushButton_Cancel_clicked\0"
    "on_comboBox_lvl_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Challenges[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    0,   70,    2, 0x06 /* Public */,
       7,    1,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   74,    2, 0x08 /* Private */,
      11,    1,   77,    2, 0x08 /* Private */,
      12,    1,   80,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,
      14,    0,   84,    2, 0x08 /* Private */,
      15,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void Challenges::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Challenges *_t = static_cast<Challenges *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RadioOneW((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->RadioVar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->StartChallenge(); break;
        case 3: _t->numberLVL((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_radioButton_OneW_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_radioButton_Variation_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->choosePart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_Ok_clicked(); break;
        case 8: _t->on_pushButton_Cancel_clicked(); break;
        case 9: _t->on_comboBox_lvl_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Challenges::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Challenges::RadioOneW)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Challenges::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Challenges::RadioVar)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Challenges::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Challenges::StartChallenge)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Challenges::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Challenges::numberLVL)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Challenges::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Challenges.data,
    qt_meta_data_Challenges,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Challenges::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Challenges::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Challenges.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Challenges::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Challenges::RadioOneW(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Challenges::RadioVar(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Challenges::StartChallenge()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Challenges::numberLVL(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
