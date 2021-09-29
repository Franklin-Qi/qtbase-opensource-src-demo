/****************************************************************************
** Meta object code from reading C++ file 'torrentclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../examples/network/torrent/torrentclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'torrentclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TorrentClient_t {
    QByteArrayData data[70];
    char stringdata0[942];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TorrentClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TorrentClient_t qt_meta_stringdata_TorrentClient = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TorrentClient"
QT_MOC_LITERAL(1, 14, 12), // "stateChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 20), // "TorrentClient::State"
QT_MOC_LITERAL(4, 49, 5), // "state"
QT_MOC_LITERAL(5, 55, 5), // "error"
QT_MOC_LITERAL(6, 61, 20), // "TorrentClient::Error"
QT_MOC_LITERAL(7, 82, 17), // "downloadCompleted"
QT_MOC_LITERAL(8, 100, 15), // "peerInfoUpdated"
QT_MOC_LITERAL(9, 116, 8), // "dataSent"
QT_MOC_LITERAL(10, 125, 13), // "uploadedBytes"
QT_MOC_LITERAL(11, 139, 12), // "dataReceived"
QT_MOC_LITERAL(12, 152, 15), // "downloadedBytes"
QT_MOC_LITERAL(13, 168, 15), // "progressUpdated"
QT_MOC_LITERAL(14, 184, 15), // "percentProgress"
QT_MOC_LITERAL(15, 200, 19), // "downloadRateUpdated"
QT_MOC_LITERAL(16, 220, 14), // "bytesPerSecond"
QT_MOC_LITERAL(17, 235, 17), // "uploadRateUpdated"
QT_MOC_LITERAL(18, 253, 7), // "stopped"
QT_MOC_LITERAL(19, 261, 5), // "start"
QT_MOC_LITERAL(20, 267, 4), // "stop"
QT_MOC_LITERAL(21, 272, 9), // "setPaused"
QT_MOC_LITERAL(22, 282, 6), // "paused"
QT_MOC_LITERAL(23, 289, 23), // "setupIncomingConnection"
QT_MOC_LITERAL(24, 313, 15), // "PeerWireClient*"
QT_MOC_LITERAL(25, 329, 6), // "client"
QT_MOC_LITERAL(26, 336, 10), // "timerEvent"
QT_MOC_LITERAL(27, 347, 12), // "QTimerEvent*"
QT_MOC_LITERAL(28, 360, 5), // "event"
QT_MOC_LITERAL(29, 366, 10), // "sendToPeer"
QT_MOC_LITERAL(30, 377, 6), // "readId"
QT_MOC_LITERAL(31, 384, 10), // "pieceIndex"
QT_MOC_LITERAL(32, 395, 5), // "begin"
QT_MOC_LITERAL(33, 401, 4), // "data"
QT_MOC_LITERAL(34, 406, 20), // "fullVerificationDone"
QT_MOC_LITERAL(35, 427, 13), // "pieceVerified"
QT_MOC_LITERAL(36, 441, 2), // "ok"
QT_MOC_LITERAL(37, 444, 15), // "handleFileError"
QT_MOC_LITERAL(38, 460, 14), // "connectToPeers"
QT_MOC_LITERAL(39, 475, 16), // "weighedFreePeers"
QT_MOC_LITERAL(40, 492, 19), // "QList<TorrentPeer*>"
QT_MOC_LITERAL(41, 512, 23), // "setupOutgoingConnection"
QT_MOC_LITERAL(42, 536, 20), // "initializeConnection"
QT_MOC_LITERAL(43, 557, 12), // "removeClient"
QT_MOC_LITERAL(44, 570, 19), // "peerPiecesAvailable"
QT_MOC_LITERAL(45, 590, 6), // "pieces"
QT_MOC_LITERAL(46, 597, 17), // "peerRequestsBlock"
QT_MOC_LITERAL(47, 615, 6), // "length"
QT_MOC_LITERAL(48, 622, 13), // "blockReceived"
QT_MOC_LITERAL(49, 636, 20), // "peerWireBytesWritten"
QT_MOC_LITERAL(50, 657, 5), // "bytes"
QT_MOC_LITERAL(51, 663, 21), // "peerWireBytesReceived"
QT_MOC_LITERAL(52, 685, 18), // "blocksLeftForPiece"
QT_MOC_LITERAL(53, 704, 19), // "const TorrentPiece*"
QT_MOC_LITERAL(54, 724, 5), // "piece"
QT_MOC_LITERAL(55, 730, 15), // "scheduleUploads"
QT_MOC_LITERAL(56, 746, 17), // "scheduleDownloads"
QT_MOC_LITERAL(57, 764, 22), // "schedulePieceForClient"
QT_MOC_LITERAL(58, 787, 11), // "requestMore"
QT_MOC_LITERAL(59, 799, 13), // "requestBlocks"
QT_MOC_LITERAL(60, 813, 13), // "TorrentPiece*"
QT_MOC_LITERAL(61, 827, 9), // "maxBlocks"
QT_MOC_LITERAL(62, 837, 10), // "peerChoked"
QT_MOC_LITERAL(63, 848, 12), // "peerUnchoked"
QT_MOC_LITERAL(64, 861, 13), // "addToPeerList"
QT_MOC_LITERAL(65, 875, 18), // "QList<TorrentPeer>"
QT_MOC_LITERAL(66, 894, 8), // "peerList"
QT_MOC_LITERAL(67, 903, 14), // "trackerStopped"
QT_MOC_LITERAL(68, 918, 14), // "updateProgress"
QT_MOC_LITERAL(69, 933, 8) // "progress"

    },
    "TorrentClient\0stateChanged\0\0"
    "TorrentClient::State\0state\0error\0"
    "TorrentClient::Error\0downloadCompleted\0"
    "peerInfoUpdated\0dataSent\0uploadedBytes\0"
    "dataReceived\0downloadedBytes\0"
    "progressUpdated\0percentProgress\0"
    "downloadRateUpdated\0bytesPerSecond\0"
    "uploadRateUpdated\0stopped\0start\0stop\0"
    "setPaused\0paused\0setupIncomingConnection\0"
    "PeerWireClient*\0client\0timerEvent\0"
    "QTimerEvent*\0event\0sendToPeer\0readId\0"
    "pieceIndex\0begin\0data\0fullVerificationDone\0"
    "pieceVerified\0ok\0handleFileError\0"
    "connectToPeers\0weighedFreePeers\0"
    "QList<TorrentPeer*>\0setupOutgoingConnection\0"
    "initializeConnection\0removeClient\0"
    "peerPiecesAvailable\0pieces\0peerRequestsBlock\0"
    "length\0blockReceived\0peerWireBytesWritten\0"
    "bytes\0peerWireBytesReceived\0"
    "blocksLeftForPiece\0const TorrentPiece*\0"
    "piece\0scheduleUploads\0scheduleDownloads\0"
    "schedulePieceForClient\0requestMore\0"
    "requestBlocks\0TorrentPiece*\0maxBlocks\0"
    "peerChoked\0peerUnchoked\0addToPeerList\0"
    "QList<TorrentPeer>\0peerList\0trackerStopped\0"
    "updateProgress\0progress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TorrentClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  219,    2, 0x06 /* Public */,
       5,    1,  222,    2, 0x06 /* Public */,
       7,    0,  225,    2, 0x06 /* Public */,
       8,    0,  226,    2, 0x06 /* Public */,
       9,    1,  227,    2, 0x06 /* Public */,
      11,    1,  230,    2, 0x06 /* Public */,
      13,    1,  233,    2, 0x06 /* Public */,
      15,    1,  236,    2, 0x06 /* Public */,
      17,    1,  239,    2, 0x06 /* Public */,
      18,    0,  242,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  243,    2, 0x0a /* Public */,
      20,    0,  244,    2, 0x0a /* Public */,
      21,    1,  245,    2, 0x0a /* Public */,
      23,    1,  248,    2, 0x0a /* Public */,
      26,    1,  251,    2, 0x09 /* Protected */,
      29,    4,  254,    2, 0x08 /* Private */,
      34,    0,  263,    2, 0x08 /* Private */,
      35,    2,  264,    2, 0x08 /* Private */,
      37,    0,  269,    2, 0x08 /* Private */,
      38,    0,  270,    2, 0x08 /* Private */,
      39,    0,  271,    2, 0x08 /* Private */,
      41,    0,  272,    2, 0x08 /* Private */,
      42,    1,  273,    2, 0x08 /* Private */,
      43,    0,  276,    2, 0x08 /* Private */,
      44,    1,  277,    2, 0x08 /* Private */,
      46,    3,  280,    2, 0x08 /* Private */,
      48,    3,  287,    2, 0x08 /* Private */,
      49,    1,  294,    2, 0x08 /* Private */,
      51,    1,  297,    2, 0x08 /* Private */,
      52,    1,  300,    2, 0x08 /* Private */,
      55,    0,  303,    2, 0x08 /* Private */,
      56,    0,  304,    2, 0x08 /* Private */,
      57,    1,  305,    2, 0x08 /* Private */,
      58,    1,  308,    2, 0x08 /* Private */,
      59,    3,  311,    2, 0x08 /* Private */,
      62,    0,  318,    2, 0x08 /* Private */,
      63,    0,  319,    2, 0x08 /* Private */,
      64,    1,  320,    2, 0x08 /* Private */,
      67,    0,  323,    2, 0x08 /* Private */,
      68,    1,  324,    2, 0x08 /* Private */,
      68,    0,  327,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QByteArray,   30,   31,   32,   33,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   31,   36,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 40,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QBitArray,   45,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   31,   32,   47,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QByteArray,   31,   32,   33,
    QMetaType::Void, QMetaType::LongLong,   50,
    QMetaType::Void, QMetaType::LongLong,   50,
    QMetaType::Int, 0x80000000 | 53,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Int, 0x80000000 | 24, 0x80000000 | 60, QMetaType::Int,   25,   54,   61,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void,

       0        // eod
};

void TorrentClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TorrentClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< TorrentClient::State(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< TorrentClient::Error(*)>(_a[1]))); break;
        case 2: _t->downloadCompleted(); break;
        case 3: _t->peerInfoUpdated(); break;
        case 4: _t->dataSent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->dataReceived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->progressUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->downloadRateUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->uploadRateUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->stopped(); break;
        case 10: _t->start(); break;
        case 11: _t->stop(); break;
        case 12: _t->setPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setupIncomingConnection((*reinterpret_cast< PeerWireClient*(*)>(_a[1]))); break;
        case 14: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 15: _t->sendToPeer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QByteArray(*)>(_a[4]))); break;
        case 16: _t->fullVerificationDone(); break;
        case 17: _t->pieceVerified((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->handleFileError(); break;
        case 19: _t->connectToPeers(); break;
        case 20: { QList<TorrentPeer*> _r = _t->weighedFreePeers();
            if (_a[0]) *reinterpret_cast< QList<TorrentPeer*>*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->setupOutgoingConnection(); break;
        case 22: _t->initializeConnection((*reinterpret_cast< PeerWireClient*(*)>(_a[1]))); break;
        case 23: _t->removeClient(); break;
        case 24: _t->peerPiecesAvailable((*reinterpret_cast< const QBitArray(*)>(_a[1]))); break;
        case 25: _t->peerRequestsBlock((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 26: _t->blockReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 27: _t->peerWireBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 28: _t->peerWireBytesReceived((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 29: { int _r = _t->blocksLeftForPiece((*reinterpret_cast< const TorrentPiece*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->scheduleUploads(); break;
        case 31: _t->scheduleDownloads(); break;
        case 32: _t->schedulePieceForClient((*reinterpret_cast< PeerWireClient*(*)>(_a[1]))); break;
        case 33: _t->requestMore((*reinterpret_cast< PeerWireClient*(*)>(_a[1]))); break;
        case 34: { int _r = _t->requestBlocks((*reinterpret_cast< PeerWireClient*(*)>(_a[1])),(*reinterpret_cast< TorrentPiece*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->peerChoked(); break;
        case 36: _t->peerUnchoked(); break;
        case 37: _t->addToPeerList((*reinterpret_cast< const QList<TorrentPeer>(*)>(_a[1]))); break;
        case 38: _t->trackerStopped(); break;
        case 39: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->updateProgress(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TorrentClient::*)(TorrentClient::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentClient::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TorrentClient::*)(TorrentClient::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentClient::error)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TorrentClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentClient::downloadCompleted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TorrentClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentClient::peerInfoUpdated)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TorrentClient::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentClient::dataSent)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TorrentClient::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentClient::dataReceived)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TorrentClient::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentClient::progressUpdated)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TorrentClient::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentClient::downloadRateUpdated)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TorrentClient::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentClient::uploadRateUpdated)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TorrentClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TorrentClient::stopped)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TorrentClient::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TorrentClient.data,
    qt_meta_data_TorrentClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TorrentClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TorrentClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TorrentClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TorrentClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void TorrentClient::stateChanged(TorrentClient::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TorrentClient::error(TorrentClient::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TorrentClient::downloadCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TorrentClient::peerInfoUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TorrentClient::dataSent(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TorrentClient::dataReceived(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TorrentClient::progressUpdated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TorrentClient::downloadRateUpdated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TorrentClient::uploadRateUpdated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TorrentClient::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
