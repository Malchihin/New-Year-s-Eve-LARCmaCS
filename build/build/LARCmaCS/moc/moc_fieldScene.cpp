/****************************************************************************
** Meta object code from reading C++ file 'fieldScene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../LARCmaCS/fieldScene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fieldScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FieldScene_t {
    QByteArrayData data[10];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FieldScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FieldScene_t qt_meta_stringdata_FieldScene = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FieldScene"
QT_MOC_LITERAL(1, 11, 11), // "redrawScene"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "updateField"
QT_MOC_LITERAL(4, 36, 60), // "QSharedPointer<QVector<QShare..."
QT_MOC_LITERAL(5, 97, 9), // "detection"
QT_MOC_LITERAL(6, 107, 33), // "QSharedPointer<SSL_WrapperPac..."
QT_MOC_LITERAL(7, 141, 8), // "geometry"
QT_MOC_LITERAL(8, 150, 10), // "ClearField"
QT_MOC_LITERAL(9, 161, 11) // "updateFrame"

    },
    "FieldScene\0redrawScene\0\0updateField\0"
    "QSharedPointer<QVector<QSharedPointer<SSL_WrapperPacket> > >\0"
    "detection\0QSharedPointer<SSL_WrapperPacket>\0"
    "geometry\0ClearField\0updateFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FieldScene[] = {

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
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   35,    2, 0x0a /* Public */,
       8,    0,   40,    2, 0x0a /* Public */,
       9,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FieldScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FieldScene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->redrawScene(); break;
        case 1: _t->updateField((*reinterpret_cast< const QSharedPointer<QVector<QSharedPointer<SSL_WrapperPacket> > >(*)>(_a[1])),(*reinterpret_cast< const QSharedPointer<SSL_WrapperPacket>(*)>(_a[2]))); break;
        case 2: _t->ClearField(); break;
        case 3: _t->updateFrame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FieldScene::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FieldScene::redrawScene)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FieldScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_FieldScene.data,
    qt_meta_data_FieldScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FieldScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FieldScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FieldScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int FieldScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
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
void FieldScene::redrawScene()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
