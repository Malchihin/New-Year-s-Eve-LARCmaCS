/****************************************************************************
** Meta object code from reading C++ file 'receiver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../LARCmaCS/receiver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receiver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Receiver_t {
    QByteArrayData data[17];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Receiver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Receiver_t qt_meta_stringdata_Receiver = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Receiver"
QT_MOC_LITERAL(1, 9, 19), // "updateSimulatorMode"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "mode"
QT_MOC_LITERAL(4, 35, 12), // "netInterface"
QT_MOC_LITERAL(5, 48, 10), // "clearField"
QT_MOC_LITERAL(6, 59, 12), // "updateSSLFPS"
QT_MOC_LITERAL(7, 72, 6), // "status"
QT_MOC_LITERAL(8, 79, 15), // "updateDetection"
QT_MOC_LITERAL(9, 95, 33), // "QSharedPointer<SSL_WrapperPac..."
QT_MOC_LITERAL(10, 129, 9), // "detection"
QT_MOC_LITERAL(11, 139, 5), // "camID"
QT_MOC_LITERAL(12, 145, 14), // "updateGeometry"
QT_MOC_LITERAL(13, 160, 8), // "geometry"
QT_MOC_LITERAL(14, 169, 14), // "setDisplayFlag"
QT_MOC_LITERAL(15, 184, 19), // "changeSimulatorMode"
QT_MOC_LITERAL(16, 204, 5) // "isSim"

    },
    "Receiver\0updateSimulatorMode\0\0mode\0"
    "netInterface\0clearField\0updateSSLFPS\0"
    "status\0updateDetection\0"
    "QSharedPointer<SSL_WrapperPacket>\0"
    "detection\0camID\0updateGeometry\0geometry\0"
    "setDisplayFlag\0changeSimulatorMode\0"
    "isSim"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Receiver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    0,   54,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   58,    2, 0x0a /* Public */,
      12,    1,   63,    2, 0x0a /* Public */,
      14,    0,   66,    2, 0x0a /* Public */,
      15,    5,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   11,
    QMetaType::Void, 0x80000000 | 9,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString,   16,    2,    2,    2,    2,

       0        // eod
};

void Receiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Receiver *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateSimulatorMode((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->clearField(); break;
        case 2: _t->updateSSLFPS((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateDetection((*reinterpret_cast< const QSharedPointer<SSL_WrapperPacket>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->updateGeometry((*reinterpret_cast< const QSharedPointer<SSL_WrapperPacket>(*)>(_a[1]))); break;
        case 5: _t->setDisplayFlag(); break;
        case 6: _t->changeSimulatorMode((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Receiver::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Receiver::updateSimulatorMode)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Receiver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Receiver::clearField)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Receiver::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Receiver::updateSSLFPS)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Receiver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Receiver.data,
    qt_meta_data_Receiver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Receiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Receiver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Receiver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Receiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Receiver::updateSimulatorMode(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Receiver::clearField()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Receiver::updateSSLFPS(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
