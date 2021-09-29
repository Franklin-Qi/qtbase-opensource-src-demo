/****************************************************************************
** Meta object code from reading C++ file 'peerwireclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../examples/network/torrent/peerwireclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'peerwireclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PeerWireClient_t {
    QByteArrayData data[24];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PeerWireClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PeerWireClient_t qt_meta_stringdata_PeerWireClient = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PeerWireClient"
QT_MOC_LITERAL(1, 15, 16), // "infoHashReceived"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "infoHash"
QT_MOC_LITERAL(4, 42, 15), // "readyToTransfer"
QT_MOC_LITERAL(5, 58, 6), // "choked"
QT_MOC_LITERAL(6, 65, 8), // "unchoked"
QT_MOC_LITERAL(7, 74, 10), // "interested"
QT_MOC_LITERAL(8, 85, 13), // "notInterested"
QT_MOC_LITERAL(9, 99, 15), // "piecesAvailable"
QT_MOC_LITERAL(10, 115, 6), // "pieces"
QT_MOC_LITERAL(11, 122, 14), // "blockRequested"
QT_MOC_LITERAL(12, 137, 10), // "pieceIndex"
QT_MOC_LITERAL(13, 148, 5), // "begin"
QT_MOC_LITERAL(14, 154, 6), // "length"
QT_MOC_LITERAL(15, 161, 13), // "blockReceived"
QT_MOC_LITERAL(16, 175, 4), // "data"
QT_MOC_LITERAL(17, 180, 13), // "bytesReceived"
QT_MOC_LITERAL(18, 194, 4), // "size"
QT_MOC_LITERAL(19, 199, 13), // "sendHandShake"
QT_MOC_LITERAL(20, 213, 19), // "processIncomingData"
QT_MOC_LITERAL(21, 233, 18), // "socketStateChanged"
QT_MOC_LITERAL(22, 252, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(23, 281, 5) // "state"

    },
    "PeerWireClient\0infoHashReceived\0\0"
    "infoHash\0readyToTransfer\0choked\0"
    "unchoked\0interested\0notInterested\0"
    "piecesAvailable\0pieces\0blockRequested\0"
    "pieceIndex\0begin\0length\0blockReceived\0"
    "data\0bytesReceived\0size\0sendHandShake\0"
    "processIncomingData\0socketStateChanged\0"
    "QAbstractSocket::SocketState\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PeerWireClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    0,   82,    2, 0x06 /* Public */,
       5,    0,   83,    2, 0x06 /* Public */,
       6,    0,   84,    2, 0x06 /* Public */,
       7,    0,   85,    2, 0x06 /* Public */,
       8,    0,   86,    2, 0x06 /* Public */,
       9,    1,   87,    2, 0x06 /* Public */,
      11,    3,   90,    2, 0x06 /* Public */,
      15,    3,   97,    2, 0x06 /* Public */,
      17,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  107,    2, 0x08 /* Private */,
      20,    0,  108,    2, 0x08 /* Private */,
      21,    1,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QBitArray,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   13,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QByteArray,   12,   13,   16,
    QMetaType::Void, QMetaType::LongLong,   18,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

void PeerWireClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PeerWireClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoHashReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->readyToTransfer(); break;
        case 2: _t->choked(); break;
        case 3: _t->unchoked(); break;
        case 4: _t->interested(); break;
        case 5: _t->notInterested(); break;
        case 6: _t->piecesAvailable((*reinterpret_cast< const QBitArray(*)>(_a[1]))); break;
        case 7: _t->blockRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->blockReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 9: _t->bytesReceived((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: _t->sendHandShake(); break;
        case 11: _t->processIncomingData(); break;
        case 12: _t->socketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PeerWireClient::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PeerWireClient::infoHashReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PeerWireClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PeerWireClient::readyToTransfer)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PeerWireClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PeerWireClient::choked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PeerWireClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PeerWireClient::unchoked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PeerWireClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PeerWireClient::interested)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PeerWireClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PeerWireClient::notInterested)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PeerWireClient::*)(const QBitArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PeerWireClient::piecesAvailable)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PeerWireClient::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PeerWireClient::blockRequested)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PeerWireClient::*)(int , int , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PeerWireClient::blockReceived)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PeerWireClient::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PeerWireClient::bytesReceived)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PeerWireClient::staticMetaObject = { {
    &QTcpSocket::staticMetaObject,
    qt_meta_stringdata_PeerWireClient.data,
    qt_meta_data_PeerWireClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PeerWireClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PeerWireClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PeerWireClient.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int PeerWireClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PeerWireClient::infoHashReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PeerWireClient::readyToTransfer()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PeerWireClient::choked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PeerWireClient::unchoked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PeerWireClient::interested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PeerWireClient::notInterested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PeerWireClient::piecesAvailable(const QBitArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PeerWireClient::blockRequested(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PeerWireClient::blockReceived(int _t1, int _t2, const QByteArray & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PeerWireClient::bytesReceived(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
