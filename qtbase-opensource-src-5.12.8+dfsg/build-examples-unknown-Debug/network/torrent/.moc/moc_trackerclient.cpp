/****************************************************************************
** Meta object code from reading C++ file 'trackerclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../examples/network/torrent/trackerclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackerclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrackerClient_t {
    QByteArrayData data[24];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackerClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackerClient_t qt_meta_stringdata_TrackerClient = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TrackerClient"
QT_MOC_LITERAL(1, 14, 15), // "connectionError"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(4, 59, 5), // "error"
QT_MOC_LITERAL(5, 65, 7), // "failure"
QT_MOC_LITERAL(6, 73, 6), // "reason"
QT_MOC_LITERAL(7, 80, 7), // "warning"
QT_MOC_LITERAL(8, 88, 7), // "message"
QT_MOC_LITERAL(9, 96, 15), // "peerListUpdated"
QT_MOC_LITERAL(10, 112, 18), // "QList<TorrentPeer>"
QT_MOC_LITERAL(11, 131, 8), // "peerList"
QT_MOC_LITERAL(12, 140, 18), // "uploadCountUpdated"
QT_MOC_LITERAL(13, 159, 14), // "newUploadCount"
QT_MOC_LITERAL(14, 174, 20), // "downloadCountUpdated"
QT_MOC_LITERAL(15, 195, 16), // "newDownloadCount"
QT_MOC_LITERAL(16, 212, 7), // "stopped"
QT_MOC_LITERAL(17, 220, 13), // "fetchPeerList"
QT_MOC_LITERAL(18, 234, 15), // "httpRequestDone"
QT_MOC_LITERAL(19, 250, 14), // "QNetworkReply*"
QT_MOC_LITERAL(20, 265, 5), // "reply"
QT_MOC_LITERAL(21, 271, 21), // "provideAuthentication"
QT_MOC_LITERAL(22, 293, 15), // "QAuthenticator*"
QT_MOC_LITERAL(23, 309, 4) // "auth"

    },
    "TrackerClient\0connectionError\0\0"
    "QNetworkReply::NetworkError\0error\0"
    "failure\0reason\0warning\0message\0"
    "peerListUpdated\0QList<TorrentPeer>\0"
    "peerList\0uploadCountUpdated\0newUploadCount\0"
    "downloadCountUpdated\0newDownloadCount\0"
    "stopped\0fetchPeerList\0httpRequestDone\0"
    "QNetworkReply*\0reply\0provideAuthentication\0"
    "QAuthenticator*\0auth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackerClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,
      12,    1,   76,    2, 0x06 /* Public */,
      14,    1,   79,    2, 0x06 /* Public */,
      16,    0,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,   83,    2, 0x08 /* Private */,
      18,    1,   84,    2, 0x08 /* Private */,
      21,    2,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::LongLong,   13,
    QMetaType::Void, QMetaType::LongLong,   15,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 22,   20,   23,

       0        // eod
};

void TrackerClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackerClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 1: _t->failure((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->warning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->peerListUpdated((*reinterpret_cast< const QList<TorrentPeer>(*)>(_a[1]))); break;
        case 4: _t->uploadCountUpdated((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->downloadCountUpdated((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->stopped(); break;
        case 7: _t->fetchPeerList(); break;
        case 8: _t->httpRequestDone((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->provideAuthentication((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TrackerClient::*)(QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackerClient::connectionError)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TrackerClient::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackerClient::failure)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TrackerClient::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackerClient::warning)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TrackerClient::*)(const QList<TorrentPeer> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackerClient::peerListUpdated)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TrackerClient::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackerClient::uploadCountUpdated)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TrackerClient::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackerClient::downloadCountUpdated)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TrackerClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackerClient::stopped)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrackerClient::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TrackerClient.data,
    qt_meta_data_TrackerClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrackerClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackerClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackerClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TrackerClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void TrackerClient::connectionError(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TrackerClient::failure(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TrackerClient::warning(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TrackerClient::peerListUpdated(const QList<TorrentPeer> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TrackerClient::uploadCountUpdated(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TrackerClient::downloadCountUpdated(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TrackerClient::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
