/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyEng/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "sendWordline"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "CapacityWords"
QT_MOC_LITERAL(4, 39, 3), // "num"
QT_MOC_LITERAL(5, 43, 11), // "CurrentWord"
QT_MOC_LITERAL(6, 55, 9), // "sockReady"
QT_MOC_LITERAL(7, 65, 16), // "sockDisconnected"
QT_MOC_LITERAL(8, 82, 27), // "on_pushButton_Click_clicked"
QT_MOC_LITERAL(9, 110, 27), // "on_pushButton_Write_clicked"
QT_MOC_LITERAL(10, 138, 25), // "on_pushButton_lvl_clicked"
QT_MOC_LITERAL(11, 164, 27), // "on_pushButton_About_clicked"
QT_MOC_LITERAL(12, 192, 30), // "on_pushButton_Settings_clicked"
QT_MOC_LITERAL(13, 223, 13), // "CorrectAnswer"
QT_MOC_LITERAL(14, 237, 4), // "word"
QT_MOC_LITERAL(15, 242, 11), // "WrongAnswer"
QT_MOC_LITERAL(16, 254, 13), // "RadioCheckOne"
QT_MOC_LITERAL(17, 268, 5), // "check"
QT_MOC_LITERAL(18, 274, 13), // "RadioCheckVar"
QT_MOC_LITERAL(19, 288, 18) // "StartChallengeMain"

    },
    "MainWindow\0sendWordline\0\0CapacityWords\0"
    "num\0CurrentWord\0sockReady\0sockDisconnected\0"
    "on_pushButton_Click_clicked\0"
    "on_pushButton_Write_clicked\0"
    "on_pushButton_lvl_clicked\0"
    "on_pushButton_About_clicked\0"
    "on_pushButton_Settings_clicked\0"
    "CorrectAnswer\0word\0WrongAnswer\0"
    "RadioCheckOne\0check\0RadioCheckVar\0"
    "StartChallengeMain"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       3,    1,   94,    2, 0x06 /* Public */,
       5,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  100,    2, 0x0a /* Public */,
       7,    0,  101,    2, 0x0a /* Public */,
       8,    0,  102,    2, 0x08 /* Private */,
       9,    0,  103,    2, 0x08 /* Private */,
      10,    0,  104,    2, 0x08 /* Private */,
      11,    0,  105,    2, 0x08 /* Private */,
      12,    0,  106,    2, 0x08 /* Private */,
      13,    1,  107,    2, 0x08 /* Private */,
      15,    1,  110,    2, 0x08 /* Private */,
      16,    1,  113,    2, 0x08 /* Private */,
      18,    1,  116,    2, 0x08 /* Private */,
      19,    0,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendWordline((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->CapacityWords((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->CurrentWord((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sockReady(); break;
        case 4: _t->sockDisconnected(); break;
        case 5: _t->on_pushButton_Click_clicked(); break;
        case 6: _t->on_pushButton_Write_clicked(); break;
        case 7: _t->on_pushButton_lvl_clicked(); break;
        case 8: _t->on_pushButton_About_clicked(); break;
        case 9: _t->on_pushButton_Settings_clicked(); break;
        case 10: _t->CorrectAnswer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->WrongAnswer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->RadioCheckOne((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->RadioCheckVar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->StartChallengeMain(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendWordline)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::CapacityWords)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::CurrentWord)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MainWindow::sendWordline(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::CapacityWords(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::CurrentWord(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
