/****************************************************************************
** Meta object code from reading C++ file 'refereeClientWorker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../LARCmaCS/referee/refereeClientWorker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'refereeClientWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RefereeClientWorker_t {
    QByteArrayData data[9];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RefereeClientWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RefereeClientWorker_t qt_meta_stringdata_RefereeClientWorker = {
    {
QT_MOC_LITERAL(0, 0, 19), // "RefereeClientWorker"
QT_MOC_LITERAL(1, 20, 17), // "refereeInfoUpdate"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 27), // "QSharedPointer<RefereeInfo>"
QT_MOC_LITERAL(4, 67, 7), // "refInfo"
QT_MOC_LITERAL(5, 75, 5), // "start"
QT_MOC_LITERAL(6, 81, 18), // "changeNetInterface"
QT_MOC_LITERAL(7, 100, 12), // "netInterface"
QT_MOC_LITERAL(8, 113, 23) // "processPendingDatagrams"

    },
    "RefereeClientWorker\0refereeInfoUpdate\0"
    "\0QSharedPointer<RefereeInfo>\0refInfo\0"
    "start\0changeNetInterface\0netInterface\0"
    "processPendingDatagrams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RefereeClientWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x0a /* Public */,
       6,    1,   38,    2, 0x0a /* Public */,
       8,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void RefereeClientWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RefereeClientWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refereeInfoUpdate((*reinterpret_cast< const QSharedPointer<RefereeInfo>(*)>(_a[1]))); break;
        case 1: _t->start(); break;
        case 2: _t->changeNetInterface((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->processPendingDatagrams(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RefereeClientWorker::*)(const QSharedPointer<RefereeInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RefereeClientWorker::refereeInfoUpdate)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RefereeClientWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RefereeClientWorker.data,
    qt_meta_data_RefereeClientWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RefereeClientWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RefereeClientWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RefereeClientWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RefereeClientWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void RefereeClientWorker::refereeInfoUpdate(const QSharedPointer<RefereeInfo> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
