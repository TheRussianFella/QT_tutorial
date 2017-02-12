/****************************************************************************
** Meta object code from reading C++ file 'myframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Lesson10/myframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyFrame_t {
    QByteArrayData data[7];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyFrame_t qt_meta_stringdata_MyFrame = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MyFrame"
QT_MOC_LITERAL(1, 8, 6), // "getPen"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 3), // "pen"
QT_MOC_LITERAL(4, 20, 8), // "getWidth"
QT_MOC_LITERAL(5, 29, 1), // "n"
QT_MOC_LITERAL(6, 31, 8) // "getReset"

    },
    "MyFrame\0getPen\0\0pen\0getWidth\0n\0getReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPen,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void MyFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyFrame *_t = static_cast<MyFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getPen((*reinterpret_cast< QPen(*)>(_a[1]))); break;
        case 1: _t->getWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->getReset(); break;
        default: ;
        }
    }
}

const QMetaObject MyFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_MyFrame.data,
      qt_meta_data_MyFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyFrame.stringdata0))
        return static_cast<void*>(const_cast< MyFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int MyFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
