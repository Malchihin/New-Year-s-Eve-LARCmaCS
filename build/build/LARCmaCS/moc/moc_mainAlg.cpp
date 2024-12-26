/****************************************************************************
** Meta object code from reading C++ file 'mainAlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../LARCmaCS/mainAlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainAlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainAlg_t {
    QByteArrayData data[26];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainAlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainAlg_t qt_meta_stringdata_MainAlg = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MainAlg"
QT_MOC_LITERAL(1, 8, 16), // "updateBallStatus"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "status"
QT_MOC_LITERAL(4, 33, 20), // "updateDebugFrequency"
QT_MOC_LITERAL(5, 54, 9), // "frequency"
QT_MOC_LITERAL(6, 64, 12), // "pauseUnpause"
QT_MOC_LITERAL(7, 77, 12), // "setDirectory"
QT_MOC_LITERAL(8, 90, 1), // "s"
QT_MOC_LITERAL(9, 92, 15), // "sendToConnector"
QT_MOC_LITERAL(10, 108, 1), // "N"
QT_MOC_LITERAL(11, 110, 7), // "command"
QT_MOC_LITERAL(12, 118, 18), // "sendToSimConnector"
QT_MOC_LITERAL(13, 137, 19), // "updateEnableSimFlag"
QT_MOC_LITERAL(14, 157, 4), // "flag"
QT_MOC_LITERAL(15, 162, 16), // "engineStatistics"
QT_MOC_LITERAL(16, 179, 16), // "updatePauseState"
QT_MOC_LITERAL(17, 196, 5), // "state"
QT_MOC_LITERAL(18, 202, 9), // "toConsole"
QT_MOC_LITERAL(19, 212, 3), // "str"
QT_MOC_LITERAL(20, 216, 16), // "connectorChanged"
QT_MOC_LITERAL(21, 233, 7), // "newData"
QT_MOC_LITERAL(22, 241, 13), // "QVector<Rule>"
QT_MOC_LITERAL(23, 255, 4), // "data"
QT_MOC_LITERAL(24, 260, 5), // "pause"
QT_MOC_LITERAL(25, 266, 7) // "stopped"

    },
    "MainAlg\0updateBallStatus\0\0status\0"
    "updateDebugFrequency\0frequency\0"
    "pauseUnpause\0setDirectory\0s\0sendToConnector\0"
    "N\0command\0sendToSimConnector\0"
    "updateEnableSimFlag\0flag\0engineStatistics\0"
    "updatePauseState\0state\0toConsole\0str\0"
    "connectorChanged\0newData\0QVector<Rule>\0"
    "data\0pause\0stopped"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainAlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       6,    0,   90,    2, 0x06 /* Public */,
       7,    1,   91,    2, 0x06 /* Public */,
       9,    2,   94,    2, 0x06 /* Public */,
      12,    1,   99,    2, 0x06 /* Public */,
      13,    1,  102,    2, 0x06 /* Public */,
      15,    1,  105,    2, 0x06 /* Public */,
      16,    1,  108,    2, 0x06 /* Public */,
      18,    1,  111,    2, 0x06 /* Public */,
      20,    5,  114,    2, 0x06 /* Public */,
      21,    1,  125,    2, 0x06 /* Public */,
      24,    1,  128,    2, 0x06 /* Public */,
      25,    0,  131,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,   10,   11,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void MainAlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainAlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateBallStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateDebugFrequency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->pauseUnpause(); break;
        case 3: _t->setDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->sendToConnector((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 5: _t->sendToSimConnector((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 6: _t->updateEnableSimFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->engineStatistics((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->updatePauseState((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->toConsole((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->connectorChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 11: _t->newData((*reinterpret_cast< const QVector<Rule>(*)>(_a[1]))); break;
        case 12: _t->pause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->stopped(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainAlg::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlg::updateBallStatus)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainAlg::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlg::updateDebugFrequency)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainAlg::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlg::pauseUnpause)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainAlg::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlg::setDirectory)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainAlg::*)(int , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlg::sendToConnector)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainAlg::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlg::sendToSimConnector)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainAlg::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlg::updateEnableSimFlag)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainAlg::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlg::engineStatistics)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainAlg::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlg::updatePauseState)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainAlg::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlg::toConsole)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainAlg::*)(bool , const QString & , int , int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlg::connectorChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MainAlg::*)(const QVector<Rule> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlg::newData)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MainAlg::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlg::pause)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MainAlg::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainAlg::stopped)) {
                *result = 13;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainAlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MainAlg.data,
    qt_meta_data_MainAlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainAlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainAlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainAlg.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainAlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainAlg::updateBallStatus(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainAlg::updateDebugFrequency(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainAlg::pauseUnpause()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainAlg::setDirectory(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainAlg::sendToConnector(int _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainAlg::sendToSimConnector(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainAlg::updateEnableSimFlag(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainAlg::engineStatistics(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainAlg::updatePauseState(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainAlg::toConsole(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainAlg::connectorChanged(bool _t1, const QString & _t2, int _t3, int _t4, const QString & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainAlg::newData(const QVector<Rule> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainAlg::pause(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MainAlg::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
