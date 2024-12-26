/****************************************************************************
** Meta object code from reading C++ file 'mainAlgWorker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../LARCmaCS/mainAlgWorker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainAlgWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainAlgWorker_t {
    QByteArrayData data[22];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainAlgWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainAlgWorker_t qt_meta_stringdata_MainAlgWorker = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MainAlgWorker"
QT_MOC_LITERAL(1, 14, 13), // "newPauseState"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "state"
QT_MOC_LITERAL(4, 35, 14), // "sendStatistics"
QT_MOC_LITERAL(5, 50, 10), // "statistics"
QT_MOC_LITERAL(6, 61, 9), // "toConsole"
QT_MOC_LITERAL(7, 71, 3), // "str"
QT_MOC_LITERAL(8, 75, 7), // "newData"
QT_MOC_LITERAL(9, 83, 13), // "QVector<Rule>"
QT_MOC_LITERAL(10, 97, 4), // "data"
QT_MOC_LITERAL(11, 102, 5), // "pause"
QT_MOC_LITERAL(12, 108, 6), // "status"
QT_MOC_LITERAL(13, 115, 5), // "start"
QT_MOC_LITERAL(14, 121, 12), // "setDirectory"
QT_MOC_LITERAL(15, 134, 4), // "path"
QT_MOC_LITERAL(16, 139, 17), // "setDebugFrequency"
QT_MOC_LITERAL(17, 157, 9), // "frequency"
QT_MOC_LITERAL(18, 167, 14), // "formStatistics"
QT_MOC_LITERAL(19, 182, 19), // "receiveMSGToConsole"
QT_MOC_LITERAL(20, 202, 4), // "stop"
QT_MOC_LITERAL(21, 207, 12) // "pauseUnpause"

    },
    "MainAlgWorker\0newPauseState\0\0state\0"
    "sendStatistics\0statistics\0toConsole\0"
    "str\0newData\0QVector<Rule>\0data\0pause\0"
    "status\0start\0setDirectory\0path\0"
    "setDebugFrequency\0frequency\0formStatistics\0"
    "receiveMSGToConsole\0stop\0pauseUnpause"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainAlgWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,
      11,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   89,    2, 0x0a /* Public */,
      14,    1,   90,    2, 0x0a /* Public */,
      16,    1,   93,    2, 0x0a /* Public */,
      18,    0,   96,    2, 0x0a /* Public */,
      19,    1,   97,    2, 0x0a /* Public */,
      20,    0,  100,    2, 0x0a /* Public */,
      21,    0,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainAlgWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainAlgWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newPauseState((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->sendStatistics((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->toConsole((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->newData((*reinterpret_cast< const QVector<Rule>(*)>(_a[1]))); break;
        case 4: _t->pause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->start(); break;
        case 6: _t->setDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setDebugFrequency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->formStatistics(); break;
        case 9: _t->receiveMSGToConsole((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->stop(); break;
        case 11: _t->pauseUnpause(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainAlgWorker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlgWorker::newPauseState)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainAlgWorker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlgWorker::sendStatistics)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainAlgWorker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlgWorker::toConsole)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainAlgWorker::*)(const QVector<Rule> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlgWorker::newData)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainAlgWorker::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlgWorker::pause)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainAlgWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MainAlgWorker.data,
    qt_meta_data_MainAlgWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainAlgWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainAlgWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainAlgWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainAlgWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MainAlgWorker::newPauseState(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainAlgWorker::sendStatistics(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainAlgWorker::toConsole(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainAlgWorker::newData(const QVector<Rule> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainAlgWorker::pause(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
