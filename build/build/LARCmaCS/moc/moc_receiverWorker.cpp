/****************************************************************************
** Meta object code from reading C++ file 'receiverWorker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../LARCmaCS/receiverWorker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receiverWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReceiverWorker_t {
    QByteArrayData data[19];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReceiverWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReceiverWorker_t qt_meta_stringdata_ReceiverWorker = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ReceiverWorker"
QT_MOC_LITERAL(1, 15, 10), // "clientOpen"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "port"
QT_MOC_LITERAL(4, 32, 11), // "clientClose"
QT_MOC_LITERAL(5, 44, 15), // "updateDetection"
QT_MOC_LITERAL(6, 60, 33), // "QSharedPointer<SSL_WrapperPac..."
QT_MOC_LITERAL(7, 94, 9), // "detection"
QT_MOC_LITERAL(8, 104, 5), // "camID"
QT_MOC_LITERAL(9, 110, 14), // "updateGeometry"
QT_MOC_LITERAL(10, 125, 8), // "geometry"
QT_MOC_LITERAL(11, 134, 12), // "updateSSLFPS"
QT_MOC_LITERAL(12, 147, 7), // "message"
QT_MOC_LITERAL(13, 155, 5), // "start"
QT_MOC_LITERAL(14, 161, 19), // "changeSimulatorMode"
QT_MOC_LITERAL(15, 181, 5), // "isSim"
QT_MOC_LITERAL(16, 187, 12), // "netInterface"
QT_MOC_LITERAL(17, 200, 14), // "formStatistics"
QT_MOC_LITERAL(18, 215, 23) // "processPendingDatagrams"

    },
    "ReceiverWorker\0clientOpen\0\0port\0"
    "clientClose\0updateDetection\0"
    "QSharedPointer<SSL_WrapperPacket>\0"
    "detection\0camID\0updateGeometry\0geometry\0"
    "updateSSLFPS\0message\0start\0"
    "changeSimulatorMode\0isSim\0netInterface\0"
    "formStatistics\0processPendingDatagrams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReceiverWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    2,   63,    2, 0x06 /* Public */,
       9,    1,   68,    2, 0x06 /* Public */,
      11,    1,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   74,    2, 0x0a /* Public */,
      14,    2,   75,    2, 0x0a /* Public */,
      17,    0,   80,    2, 0x08 /* Private */,
      18,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UShort,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,
    QMetaType::Void, 0x80000000 | 6,   10,
    QMetaType::Void, QMetaType::QString,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   15,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ReceiverWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReceiverWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clientOpen((*reinterpret_cast< unsigned short(*)>(_a[1]))); break;
        case 1: _t->clientClose(); break;
        case 2: _t->updateDetection((*reinterpret_cast< const QSharedPointer<SSL_WrapperPacket>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->updateGeometry((*reinterpret_cast< const QSharedPointer<SSL_WrapperPacket>(*)>(_a[1]))); break;
        case 4: _t->updateSSLFPS((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->start(); break;
        case 6: _t->changeSimulatorMode((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->formStatistics(); break;
        case 8: _t->processPendingDatagrams(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReceiverWorker::*)(unsigned short );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiverWorker::clientOpen)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ReceiverWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiverWorker::clientClose)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ReceiverWorker::*)(const QSharedPointer<SSL_WrapperPacket> & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiverWorker::updateDetection)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ReceiverWorker::*)(const QSharedPointer<SSL_WrapperPacket> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiverWorker::updateGeometry)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ReceiverWorker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiverWorker::updateSSLFPS)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReceiverWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ReceiverWorker.data,
    qt_meta_data_ReceiverWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReceiverWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReceiverWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiverWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ReceiverWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ReceiverWorker::clientOpen(unsigned short _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReceiverWorker::clientClose()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ReceiverWorker::updateDetection(const QSharedPointer<SSL_WrapperPacket> & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ReceiverWorker::updateGeometry(const QSharedPointer<SSL_WrapperPacket> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ReceiverWorker::updateSSLFPS(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
