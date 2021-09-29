/****************************************************************************
** Meta object code from reading C++ file 'sslclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../examples/network/securesocketclient/sslclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sslclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SslClient_t {
    QByteArrayData data[17];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SslClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SslClient_t qt_meta_stringdata_SslClient = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SslClient"
QT_MOC_LITERAL(1, 10, 18), // "updateEnabledState"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "secureConnect"
QT_MOC_LITERAL(4, 44, 18), // "socketStateChanged"
QT_MOC_LITERAL(5, 63, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(6, 92, 5), // "state"
QT_MOC_LITERAL(7, 98, 15), // "socketEncrypted"
QT_MOC_LITERAL(8, 114, 15), // "socketReadyRead"
QT_MOC_LITERAL(9, 130, 8), // "sendData"
QT_MOC_LITERAL(10, 139, 11), // "socketError"
QT_MOC_LITERAL(11, 151, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(12, 180, 5), // "error"
QT_MOC_LITERAL(13, 186, 9), // "sslErrors"
QT_MOC_LITERAL(14, 196, 16), // "QList<QSslError>"
QT_MOC_LITERAL(15, 213, 6), // "errors"
QT_MOC_LITERAL(16, 220, 22) // "displayCertificateInfo"

    },
    "SslClient\0updateEnabledState\0\0"
    "secureConnect\0socketStateChanged\0"
    "QAbstractSocket::SocketState\0state\0"
    "socketEncrypted\0socketReadyRead\0"
    "sendData\0socketError\0QAbstractSocket::SocketError\0"
    "error\0sslErrors\0QList<QSslError>\0"
    "errors\0displayCertificateInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SslClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,
      13,    1,   70,    2, 0x08 /* Private */,
      16,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

       0        // eod
};

void SslClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SslClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateEnabledState(); break;
        case 1: _t->secureConnect(); break;
        case 2: _t->socketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 3: _t->socketEncrypted(); break;
        case 4: _t->socketReadyRead(); break;
        case 5: _t->sendData(); break;
        case 6: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: _t->sslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 8: _t->displayCertificateInfo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SslClient::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SslClient.data,
    qt_meta_data_SslClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SslClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SslClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SslClient.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SslClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
