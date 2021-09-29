/****************************************************************************
** Meta object code from reading C++ file 'paintedwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../examples/opengl/paintedwindow/paintedwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paintedwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PaintedWindow_t {
    QByteArrayData data[11];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaintedWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaintedWindow_t qt_meta_stringdata_PaintedWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PaintedWindow"
QT_MOC_LITERAL(1, 14, 15), // "rotationChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "rotation"
QT_MOC_LITERAL(4, 40, 5), // "paint"
QT_MOC_LITERAL(5, 46, 11), // "setRotation"
QT_MOC_LITERAL(6, 58, 1), // "r"
QT_MOC_LITERAL(7, 60, 18), // "orientationChanged"
QT_MOC_LITERAL(8, 79, 21), // "Qt::ScreenOrientation"
QT_MOC_LITERAL(9, 101, 14), // "newOrientation"
QT_MOC_LITERAL(10, 116, 12) // "rotationDone"

    },
    "PaintedWindow\0rotationChanged\0\0rotation\0"
    "paint\0setRotation\0r\0orientationChanged\0"
    "Qt::ScreenOrientation\0newOrientation\0"
    "rotationDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaintedWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       7,    1,   46,    2, 0x08 /* Private */,
      10,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void PaintedWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaintedWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rotationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->paint(); break;
        case 2: _t->setRotation((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->orientationChanged((*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[1]))); break;
        case 4: _t->rotationDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaintedWindow::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintedWindow::rotationChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PaintedWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->rotation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PaintedWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRotation(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PaintedWindow::staticMetaObject = { {
    &QWindow::staticMetaObject,
    qt_meta_stringdata_PaintedWindow.data,
    qt_meta_data_PaintedWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PaintedWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaintedWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PaintedWindow.stringdata0))
        return static_cast<void*>(this);
    return QWindow::qt_metacast(_clname);
}

int PaintedWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PaintedWindow::rotationChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
