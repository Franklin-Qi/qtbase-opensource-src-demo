/****************************************************************************
** Meta object code from reading C++ file 'filemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../examples/network/torrent/filemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileManager_t {
    QByteArrayData data[16];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileManager_t qt_meta_stringdata_FileManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FileManager"
QT_MOC_LITERAL(1, 12, 8), // "dataRead"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 2), // "id"
QT_MOC_LITERAL(4, 25, 10), // "pieceIndex"
QT_MOC_LITERAL(5, 36, 6), // "offset"
QT_MOC_LITERAL(6, 43, 4), // "data"
QT_MOC_LITERAL(7, 48, 5), // "error"
QT_MOC_LITERAL(8, 54, 20), // "verificationProgress"
QT_MOC_LITERAL(9, 75, 7), // "percent"
QT_MOC_LITERAL(10, 83, 16), // "verificationDone"
QT_MOC_LITERAL(11, 100, 13), // "pieceVerified"
QT_MOC_LITERAL(12, 114, 8), // "verified"
QT_MOC_LITERAL(13, 123, 21), // "startDataVerification"
QT_MOC_LITERAL(14, 145, 17), // "verifySinglePiece"
QT_MOC_LITERAL(15, 163, 6) // "wakeUp"

    },
    "FileManager\0dataRead\0\0id\0pieceIndex\0"
    "offset\0data\0error\0verificationProgress\0"
    "percent\0verificationDone\0pieceVerified\0"
    "verified\0startDataVerification\0"
    "verifySinglePiece\0wakeUp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   54,    2, 0x06 /* Public */,
       7,    0,   63,    2, 0x06 /* Public */,
       8,    1,   64,    2, 0x06 /* Public */,
      10,    0,   67,    2, 0x06 /* Public */,
      11,    2,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   73,    2, 0x0a /* Public */,
      14,    1,   74,    2, 0x08 /* Private */,
      15,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QByteArray,    3,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    4,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int,    4,
    QMetaType::Void,

       0        // eod
};

void FileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataRead((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QByteArray(*)>(_a[4]))); break;
        case 1: _t->error(); break;
        case 2: _t->verificationProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->verificationDone(); break;
        case 4: _t->pieceVerified((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->startDataVerification(); break;
        case 6: { bool _r = _t->verifySinglePiece((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->wakeUp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileManager::*)(int , int , int , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileManager::dataRead)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileManager::error)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileManager::verificationProgress)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileManager::verificationDone)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileManager::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileManager::pieceVerified)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileManager::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_FileManager.data,
    qt_meta_data_FileManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileManager.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int FileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FileManager::dataRead(int _t1, int _t2, int _t3, const QByteArray & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileManager::error()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FileManager::verificationProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileManager::verificationDone()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FileManager::pieceVerified(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
