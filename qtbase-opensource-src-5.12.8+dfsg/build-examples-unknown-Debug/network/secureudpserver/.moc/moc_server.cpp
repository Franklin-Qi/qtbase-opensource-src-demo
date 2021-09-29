/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../examples/network/secureudpserver/server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DtlsServer_t {
    QByteArrayData data[14];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DtlsServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DtlsServer_t qt_meta_stringdata_DtlsServer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DtlsServer"
QT_MOC_LITERAL(1, 11, 12), // "errorMessage"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "message"
QT_MOC_LITERAL(4, 33, 14), // "warningMessage"
QT_MOC_LITERAL(5, 48, 11), // "infoMessage"
QT_MOC_LITERAL(6, 60, 16), // "datagramReceived"
QT_MOC_LITERAL(7, 77, 8), // "peerInfo"
QT_MOC_LITERAL(8, 86, 10), // "cipherText"
QT_MOC_LITERAL(9, 97, 9), // "plainText"
QT_MOC_LITERAL(10, 107, 9), // "readyRead"
QT_MOC_LITERAL(11, 117, 11), // "pskRequired"
QT_MOC_LITERAL(12, 129, 30), // "QSslPreSharedKeyAuthenticator*"
QT_MOC_LITERAL(13, 160, 4) // "auth"

    },
    "DtlsServer\0errorMessage\0\0message\0"
    "warningMessage\0infoMessage\0datagramReceived\0"
    "peerInfo\0cipherText\0plainText\0readyRead\0"
    "pskRequired\0QSslPreSharedKeyAuthenticator*\0"
    "auth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DtlsServer[] = {

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
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       6,    3,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   60,    2, 0x08 /* Private */,
      11,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, QMetaType::QByteArray,    7,    8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void DtlsServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DtlsServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->warningMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->infoMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->datagramReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 4: _t->readyRead(); break;
        case 5: _t->pskRequired((*reinterpret_cast< QSslPreSharedKeyAuthenticator*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslPreSharedKeyAuthenticator* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DtlsServer::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DtlsServer::errorMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DtlsServer::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DtlsServer::warningMessage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DtlsServer::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DtlsServer::infoMessage)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DtlsServer::*)(const QString & , const QByteArray & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DtlsServer::datagramReceived)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DtlsServer::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DtlsServer.data,
    qt_meta_data_DtlsServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DtlsServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DtlsServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DtlsServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DtlsServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DtlsServer::errorMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DtlsServer::warningMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DtlsServer::infoMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DtlsServer::datagramReceived(const QString & _t1, const QByteArray & _t2, const QByteArray & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
