/****************************************************************************
** Meta object code from reading C++ file 'tcp_server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tcp_server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcp_server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tcp_server_t {
    QByteArrayData data[11];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tcp_server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tcp_server_t qt_meta_stringdata_Tcp_server = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Tcp_server"
QT_MOC_LITERAL(1, 11, 15), // "command_s_ether"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "parameter"
QT_MOC_LITERAL(4, 38, 5), // "adres"
QT_MOC_LITERAL(5, 44, 11), // "QTcpSocket*"
QT_MOC_LITERAL(6, 56, 8), // "proverka"
QT_MOC_LITERAL(7, 65, 17), // "slotNewConnection"
QT_MOC_LITERAL(8, 83, 14), // "slotReadClient"
QT_MOC_LITERAL(9, 98, 7), // "send_to"
QT_MOC_LITERAL(10, 106, 2) // "TO"

    },
    "Tcp_server\0command_s_ether\0\0parameter\0"
    "adres\0QTcpSocket*\0proverka\0slotNewConnection\0"
    "slotReadClient\0send_to\0TO"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tcp_server[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   53,    2, 0x0a /* Public */,
       8,    0,   54,    2, 0x0a /* Public */,
       9,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   10,

       0        // eod
};

void Tcp_server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tcp_server *_t = static_cast<Tcp_server *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->command_s_ether((*reinterpret_cast< parameter(*)>(_a[1]))); break;
        case 1: _t->adres((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 2: _t->proverka((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotNewConnection(); break;
        case 4: _t->slotReadClient(); break;
        case 5: _t->send_to((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Tcp_server::*)(parameter );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tcp_server::command_s_ether)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Tcp_server::*)(QTcpSocket * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tcp_server::adres)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Tcp_server::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tcp_server::proverka)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tcp_server::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tcp_server.data,
      qt_meta_data_Tcp_server,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Tcp_server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tcp_server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tcp_server.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tcp_server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Tcp_server::command_s_ether(parameter _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tcp_server::adres(QTcpSocket * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tcp_server::proverka(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
