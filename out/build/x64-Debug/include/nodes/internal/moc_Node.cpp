/****************************************************************************
** Meta object code from reading C++ file 'Node.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../include/nodes/internal/Node.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Node.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtNodes__Node_t {
    QByteArrayData data[12];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtNodes__Node_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtNodes__Node_t qt_meta_stringdata_QtNodes__Node = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QtNodes::Node"
QT_MOC_LITERAL(1, 14, 13), // "propagateData"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 25), // "std::shared_ptr<NodeData>"
QT_MOC_LITERAL(4, 55, 8), // "nodeData"
QT_MOC_LITERAL(5, 64, 9), // "PortIndex"
QT_MOC_LITERAL(6, 74, 11), // "inPortIndex"
QT_MOC_LITERAL(7, 86, 12), // "connectionId"
QT_MOC_LITERAL(8, 99, 13), // "onDataUpdated"
QT_MOC_LITERAL(9, 113, 5), // "index"
QT_MOC_LITERAL(10, 119, 17), // "onDataInvalidated"
QT_MOC_LITERAL(11, 137, 17) // "onNodeSizeUpdated"

    },
    "QtNodes::Node\0propagateData\0\0"
    "std::shared_ptr<NodeData>\0nodeData\0"
    "PortIndex\0inPortIndex\0connectionId\0"
    "onDataUpdated\0index\0onDataInvalidated\0"
    "onNodeSizeUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtNodes__Node[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x0a /* Public */,
       8,    1,   41,    2, 0x0a /* Public */,
      10,    1,   44,    2, 0x0a /* Public */,
      11,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QUuid,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    9,
    QMetaType::Void, 0x80000000 | 5,    9,
    QMetaType::Void,

       0        // eod
};

void QtNodes::Node::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Node *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propagateData((*reinterpret_cast< std::shared_ptr<NodeData>(*)>(_a[1])),(*reinterpret_cast< PortIndex(*)>(_a[2])),(*reinterpret_cast< const QUuid(*)>(_a[3]))); break;
        case 1: _t->onDataUpdated((*reinterpret_cast< PortIndex(*)>(_a[1]))); break;
        case 2: _t->onDataInvalidated((*reinterpret_cast< PortIndex(*)>(_a[1]))); break;
        case 3: _t->onNodeSizeUpdated(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtNodes::Node::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QtNodes__Node.data,
    qt_meta_data_QtNodes__Node,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtNodes::Node::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtNodes::Node::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtNodes__Node.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Serializable"))
        return static_cast< Serializable*>(this);
    return QObject::qt_metacast(_clname);
}

int QtNodes::Node::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
