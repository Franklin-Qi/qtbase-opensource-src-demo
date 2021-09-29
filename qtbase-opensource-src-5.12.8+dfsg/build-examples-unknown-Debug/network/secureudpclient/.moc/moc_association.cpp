/****************************************************************************
** Meta object code from reading C++ file 'association.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../examples/network/secureudpclient/association.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'association.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DtlsAssociation_t {
    QByteArrayData data[17];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DtlsAssociation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DtlsAssociation_t qt_meta_stringdata_DtlsAssociation = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DtlsAssociation"
QT_MOC_LITERAL(1, 16, 12), // "errorMessage"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "message"
QT_MOC_LITERAL(4, 38, 14), // "warningMessage"
QT_MOC_LITERAL(5, 53, 11), // "infoMessage"
QT_MOC_LITERAL(6, 65, 14), // "serverResponse"
QT_MOC_LITERAL(7, 80, 10), // "clientInfo"
QT_MOC_LITERAL(8, 91, 9), // "datagraam"
QT_MOC_LITERAL(9, 101, 9), // "plainText"
QT_MOC_LITERAL(10, 111, 18), // "udpSocketConnected"
QT_MOC_LITERAL(11, 130, 9), // "readyRead"
QT_MOC_LITERAL(12, 140, 16), // "handshakeTimeout"
QT_MOC_LITERAL(13, 157, 11), // "pskRequired"
QT_MOC_LITERAL(14, 169, 30), // "QSslPreSharedKeyAuthenticator*"
QT_MOC_LITERAL(15, 200, 4), // "auth"
QT_MOC_LITERAL(16, 205, 11) // "pingTimeout"

    },
    "DtlsAssociation\0errorMessage\0\0message\0"
    "warningMessage\0infoMessage\0serverResponse\0"
    "clientInfo\0datagraam\0plainText\0"
    "udpSocketConnected\0readyRead\0"
    "handshakeTimeout\0pskRequired\0"
    "QSslPreSharedKeyAuthenticator*\0auth\0"
    "pingTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DtlsAssociation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    1,   65,    2, 0x06 /* Public */,
       6,    3,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   75,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,
      13,    1,   78,    2, 0x08 /* Private */,
      16,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, QMetaType::QByteArray,    7,    8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

       0        // eod
};

void DtlsAssociation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DtlsAssociation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->warningMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->infoMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->serverResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 4: _t->udpSocketConnected(); break;
        case 5: _t->readyRead(); break;
        case 6: _t->handshakeTimeout(); break;
        case 7: _t->pskRequired((*reinterpret_cast< QSslPreSharedKeyAuthenticator*(*)>(_a[1]))); break;
        case 8: _t->pingTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
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
            using _t = void (DtlsAssociation::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DtlsAssociation::errorMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DtlsAssociation::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DtlsAssociation::warningMessage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DtlsAssociation::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DtlsAssociation::infoMessage)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DtlsAssociation::*)(const QString & , const QByteArray & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DtlsAssociation::serverResponse)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DtlsAssociation::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DtlsAssociation.data,
    qt_meta_data_DtlsAssociation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DtlsAssociation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DtlsAssociation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DtlsAssociation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DtlsAssociation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void DtlsAssociation::errorMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DtlsAssociation::warningMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DtlsAssociation::infoMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DtlsAssociation::serverResponse(const QString & _t1, const QByteArray & _t2, const QByteArray & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
