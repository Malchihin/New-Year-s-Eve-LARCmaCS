/****************************************************************************
** Meta object code from reading C++ file 'robotReceiverWorker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../LARCmaCS/robotReceiverWorker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robotReceiverWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RobotReceiverWorker_t {
    QByteArrayData data[13];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobotReceiverWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobotReceiverWorker_t qt_meta_stringdata_RobotReceiverWorker = {
    {
QT_MOC_LITERAL(0, 0, 19), // "RobotReceiverWorker"
QT_MOC_LITERAL(1, 20, 15), // "newBarrierState"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "QVector<bool>"
QT_MOC_LITERAL(4, 51, 12), // "barrierState"
QT_MOC_LITERAL(5, 64, 21), // "newKickerChargeStatus"
QT_MOC_LITERAL(6, 86, 12), // "QVector<int>"
QT_MOC_LITERAL(7, 99, 18), // "kickerChargeStatus"
QT_MOC_LITERAL(8, 118, 18), // "newConnectionState"
QT_MOC_LITERAL(9, 137, 15), // "connectionState"
QT_MOC_LITERAL(10, 153, 14), // "newChargeLevel"
QT_MOC_LITERAL(11, 168, 5), // "start"
QT_MOC_LITERAL(12, 174, 23) // "processPendingDatagrams"

    },
    "RobotReceiverWorker\0newBarrierState\0"
    "\0QVector<bool>\0barrierState\0"
    "newKickerChargeStatus\0QVector<int>\0"
    "kickerChargeStatus\0newConnectionState\0"
    "connectionState\0newChargeLevel\0start\0"
    "processPendingDatagrams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobotReceiverWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       8,    1,   50,    2, 0x06 /* Public */,
      10,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   56,    2, 0x0a /* Public */,
      12,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    9,
    QMetaType::Void, 0x80000000 | 6,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RobotReceiverWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobotReceiverWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newBarrierState((*reinterpret_cast< const QVector<bool>(*)>(_a[1]))); break;
        case 1: _t->newKickerChargeStatus((*reinterpret_cast< const QVector<int>(*)>(_a[1]))); break;
        case 2: _t->newConnectionState((*reinterpret_cast< const QVector<int>(*)>(_a[1]))); break;
        case 3: _t->newChargeLevel((*reinterpret_cast< const QVector<int>(*)>(_a[1]))); break;
        case 4: _t->start(); break;
        case 5: _t->processPendingDatagrams(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<bool> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RobotReceiverWorker::*)(const QVector<bool> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotReceiverWorker::newBarrierState)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RobotReceiverWorker::*)(const QVector<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotReceiverWorker::newKickerChargeStatus)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RobotReceiverWorker::*)(const QVector<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotReceiverWorker::newConnectionState)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RobotReceiverWorker::*)(const QVector<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotReceiverWorker::newChargeLevel)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobotReceiverWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RobotReceiverWorker.data,
    qt_meta_data_RobotReceiverWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobotReceiverWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobotReceiverWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobotReceiverWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RobotReceiverWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RobotReceiverWorker::newBarrierState(const QVector<bool> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RobotReceiverWorker::newKickerChargeStatus(const QVector<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RobotReceiverWorker::newConnectionState(const QVector<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RobotReceiverWorker::newChargeLevel(const QVector<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
