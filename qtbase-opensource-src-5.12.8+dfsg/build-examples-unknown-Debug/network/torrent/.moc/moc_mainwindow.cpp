/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../examples/network/torrent/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[29];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "loadSettings"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "saveSettings"
QT_MOC_LITERAL(4, 38, 10), // "addTorrent"
QT_MOC_LITERAL(5, 49, 13), // "removeTorrent"
QT_MOC_LITERAL(6, 63, 12), // "pauseTorrent"
QT_MOC_LITERAL(7, 76, 13), // "moveTorrentUp"
QT_MOC_LITERAL(8, 90, 15), // "moveTorrentDown"
QT_MOC_LITERAL(9, 106, 14), // "torrentStopped"
QT_MOC_LITERAL(10, 121, 12), // "torrentError"
QT_MOC_LITERAL(11, 134, 20), // "TorrentClient::Error"
QT_MOC_LITERAL(12, 155, 5), // "error"
QT_MOC_LITERAL(13, 161, 11), // "updateState"
QT_MOC_LITERAL(14, 173, 20), // "TorrentClient::State"
QT_MOC_LITERAL(15, 194, 5), // "state"
QT_MOC_LITERAL(16, 200, 14), // "updatePeerInfo"
QT_MOC_LITERAL(17, 215, 14), // "updateProgress"
QT_MOC_LITERAL(18, 230, 7), // "percent"
QT_MOC_LITERAL(19, 238, 18), // "updateDownloadRate"
QT_MOC_LITERAL(20, 257, 14), // "bytesPerSecond"
QT_MOC_LITERAL(21, 272, 16), // "updateUploadRate"
QT_MOC_LITERAL(22, 289, 14), // "setUploadLimit"
QT_MOC_LITERAL(23, 304, 5), // "bytes"
QT_MOC_LITERAL(24, 310, 16), // "setDownloadLimit"
QT_MOC_LITERAL(25, 327, 5), // "about"
QT_MOC_LITERAL(26, 333, 17), // "setActionsEnabled"
QT_MOC_LITERAL(27, 351, 14), // "acceptFileDrop"
QT_MOC_LITERAL(28, 366, 8) // "fileName"

    },
    "MainWindow\0loadSettings\0\0saveSettings\0"
    "addTorrent\0removeTorrent\0pauseTorrent\0"
    "moveTorrentUp\0moveTorrentDown\0"
    "torrentStopped\0torrentError\0"
    "TorrentClient::Error\0error\0updateState\0"
    "TorrentClient::State\0state\0updatePeerInfo\0"
    "updateProgress\0percent\0updateDownloadRate\0"
    "bytesPerSecond\0updateUploadRate\0"
    "setUploadLimit\0bytes\0setDownloadLimit\0"
    "about\0setActionsEnabled\0acceptFileDrop\0"
    "fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x08 /* Private */,
       3,    0,  110,    2, 0x08 /* Private */,
       4,    0,  111,    2, 0x08 /* Private */,
       5,    0,  112,    2, 0x08 /* Private */,
       6,    0,  113,    2, 0x08 /* Private */,
       7,    0,  114,    2, 0x08 /* Private */,
       8,    0,  115,    2, 0x08 /* Private */,
       9,    0,  116,    2, 0x08 /* Private */,
      10,    1,  117,    2, 0x08 /* Private */,
      13,    1,  120,    2, 0x08 /* Private */,
      16,    0,  123,    2, 0x08 /* Private */,
      17,    1,  124,    2, 0x08 /* Private */,
      19,    1,  127,    2, 0x08 /* Private */,
      21,    1,  130,    2, 0x08 /* Private */,
      22,    1,  133,    2, 0x08 /* Private */,
      24,    1,  136,    2, 0x08 /* Private */,
      25,    0,  139,    2, 0x08 /* Private */,
      26,    0,  140,    2, 0x08 /* Private */,
      27,    1,  141,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadSettings(); break;
        case 1: _t->saveSettings(); break;
        case 2: { bool _r = _t->addTorrent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->removeTorrent(); break;
        case 4: _t->pauseTorrent(); break;
        case 5: _t->moveTorrentUp(); break;
        case 6: _t->moveTorrentDown(); break;
        case 7: _t->torrentStopped(); break;
        case 8: _t->torrentError((*reinterpret_cast< TorrentClient::Error(*)>(_a[1]))); break;
        case 9: _t->updateState((*reinterpret_cast< TorrentClient::State(*)>(_a[1]))); break;
        case 10: _t->updatePeerInfo(); break;
        case 11: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->updateDownloadRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->updateUploadRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setUploadLimit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setDownloadLimit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->about(); break;
        case 17: _t->setActionsEnabled(); break;
        case 18: _t->acceptFileDrop((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
