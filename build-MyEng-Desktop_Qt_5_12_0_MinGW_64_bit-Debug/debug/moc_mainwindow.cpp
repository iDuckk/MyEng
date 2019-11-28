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
    QByteArrayData data[22];
    char stringdata0[351];
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
QT_MOC_LITERAL(6, 55, 15), // "sendListToWords"
QT_MOC_LITERAL(7, 71, 9), // "sockReady"
QT_MOC_LITERAL(8, 81, 16), // "sockDisconnected"
QT_MOC_LITERAL(9, 98, 27), // "on_pushButton_Click_clicked"
QT_MOC_LITERAL(10, 126, 27), // "on_pushButton_Write_clicked"
QT_MOC_LITERAL(11, 154, 25), // "on_pushButton_lvl_clicked"
QT_MOC_LITERAL(12, 180, 27), // "on_pushButton_About_clicked"
QT_MOC_LITERAL(13, 208, 30), // "on_pushButton_Settings_clicked"
QT_MOC_LITERAL(14, 239, 13), // "CorrectAnswer"
QT_MOC_LITERAL(15, 253, 4), // "word"
QT_MOC_LITERAL(16, 258, 11), // "WrongAnswer"
QT_MOC_LITERAL(17, 270, 13), // "RadioCheckOne"
QT_MOC_LITERAL(18, 284, 5), // "check"
QT_MOC_LITERAL(19, 290, 13), // "RadioCheckVar"
QT_MOC_LITERAL(20, 304, 18), // "StartChallengeMain"
QT_MOC_LITERAL(21, 323, 27) // "on_pushButton_words_clicked"

    },
    "MainWindow\0sendWordline\0\0CapacityWords\0"
    "num\0CurrentWord\0sendListToWords\0"
    "sockReady\0sockDisconnected\0"
    "on_pushButton_Click_clicked\0"
    "on_pushButton_Write_clicked\0"
    "on_pushButton_lvl_clicked\0"
    "on_pushButton_About_clicked\0"
    "on_pushButton_Settings_clicked\0"
    "CorrectAnswer\0word\0WrongAnswer\0"
    "RadioCheckOne\0check\0RadioCheckVar\0"
    "StartChallengeMain\0on_pushButton_words_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   99,    2, 0x06 /* Public */,
       3,    1,  104,    2, 0x06 /* Public */,
       5,    1,  107,    2, 0x06 /* Public */,
       6,    2,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  115,    2, 0x0a /* Public */,
       8,    0,  116,    2, 0x0a /* Public */,
       9,    0,  117,    2, 0x08 /* Private */,
      10,    0,  118,    2, 0x08 /* Private */,
      11,    0,  119,    2, 0x08 /* Private */,
      12,    0,  120,    2, 0x08 /* Private */,
      13,    0,  121,    2, 0x08 /* Private */,
      14,    1,  122,    2, 0x08 /* Private */,
      16,    1,  125,    2, 0x08 /* Private */,
      17,    1,  128,    2, 0x08 /* Private */,
      19,    1,  131,    2, 0x08 /* Private */,
      20,    0,  134,    2, 0x08 /* Private */,
      21,    0,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QStringList,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
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
        case 0: _t->sendWordline((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->CapacityWords((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->CurrentWord((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sendListToWords((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 4: _t->sockReady(); break;
        case 5: _t->sockDisconnected(); break;
        case 6: _t->on_pushButton_Click_clicked(); break;
        case 7: _t->on_pushButton_Write_clicked(); break;
        case 8: _t->on_pushButton_lvl_clicked(); break;
        case 9: _t->on_pushButton_About_clicked(); break;
        case 10: _t->on_pushButton_Settings_clicked(); break;
        case 11: _t->CorrectAnswer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->WrongAnswer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->RadioCheckOne((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->RadioCheckVar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->StartChallengeMain(); break;
        case 16: _t->on_pushButton_words_clicked(); break;
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
        {
            using _t = void (MainWindow::*)(QStringList , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendListToWords)) {
                *result = 3;
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
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

// SIGNAL 3
void MainWindow::sendListToWords(QStringList _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
