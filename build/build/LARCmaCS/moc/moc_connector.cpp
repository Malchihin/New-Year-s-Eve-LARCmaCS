/****************************************************************************
** Meta object code from reading C++ file 'connector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../LARCmaCS/connector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Connector_t {
    QByteArrayData data[19];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Connector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Connector_t qt_meta_stringdata_Connector = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Connector"
QT_MOC_LITERAL(1, 10, 17), // "onConnectorChange"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "isSim"
QT_MOC_LITERAL(4, 35, 2), // "ip"
QT_MOC_LITERAL(5, 38, 4), // "port"
QT_MOC_LITERAL(6, 43, 10), // "portYellow"
QT_MOC_LITERAL(7, 54, 12), // "netInterface"
QT_MOC_LITERAL(8, 67, 14), // "sendNewCommand"
QT_MOC_LITERAL(9, 82, 13), // "QVector<Rule>"
QT_MOC_LITERAL(10, 96, 4), // "rule"
QT_MOC_LITERAL(11, 101, 14), // "onPauseChanged"
QT_MOC_LITERAL(12, 116, 6), // "status"
QT_MOC_LITERAL(13, 123, 3), // "run"
QT_MOC_LITERAL(14, 127, 1), // "N"
QT_MOC_LITERAL(15, 129, 7), // "command"
QT_MOC_LITERAL(16, 137, 6), // "runSim"
QT_MOC_LITERAL(17, 144, 8), // "isYellow"
QT_MOC_LITERAL(18, 153, 24) // "newRobotFeedbackDatagram"

    },
    "Connector\0onConnectorChange\0\0isSim\0"
    "ip\0port\0portYellow\0netInterface\0"
    "sendNewCommand\0QVector<Rule>\0rule\0"
    "onPauseChanged\0status\0run\0N\0command\0"
    "runSim\0isYellow\0newRobotFeedbackDatagram"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Connector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    5,   44,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,
      11,    1,   58,    2, 0x0a /* Public */,
      13,    2,   61,    2, 0x0a /* Public */,
      16,    2,   66,    2, 0x0a /* Public */,
      18,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString,    3,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,   14,   15,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Bool,   15,   17,
    QMetaType::Void,

       0        // eod
};

void Connector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Connector *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onConnectorChange((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 1: _t->sendNewCommand((*reinterpret_cast< const QVector<Rule>(*)>(_a[1]))); break;
        case 2: _t->onPauseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->run((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 4: _t->runSim((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->newRobotFeedbackDatagram(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Connector::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Connector.data,
    qt_meta_data_Connector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Connector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Connector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Connector.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Connector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
