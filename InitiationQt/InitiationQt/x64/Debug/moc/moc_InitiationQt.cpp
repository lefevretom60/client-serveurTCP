/****************************************************************************
** Meta object code from reading C++ file 'InitiationQt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../InitiationQt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InitiationQt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InitiationQt_t {
    QByteArrayData data[13];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InitiationQt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InitiationQt_t qt_meta_stringdata_InitiationQt = {
    {
QT_MOC_LITERAL(0, 0, 12), // "InitiationQt"
QT_MOC_LITERAL(1, 13, 22), // "onConnectButtonClicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "onSocketConnected"
QT_MOC_LITERAL(4, 55, 20), // "onSocketDisconnected"
QT_MOC_LITERAL(5, 76, 26), // "onSendMessageButtonClicked"
QT_MOC_LITERAL(6, 103, 17), // "onSocketReadyRead"
QT_MOC_LITERAL(7, 121, 21), // "onServerNewConnection"
QT_MOC_LITERAL(8, 143, 20), // "onClientDisconnected"
QT_MOC_LITERAL(9, 164, 17), // "onClientReadyRead"
QT_MOC_LITERAL(10, 182, 16), // "onSendCelClicked"
QT_MOC_LITERAL(11, 199, 16), // "onSendFarClicked"
QT_MOC_LITERAL(12, 216, 16) // "onSendHygClicked"

    },
    "InitiationQt\0onConnectButtonClicked\0"
    "\0onSocketConnected\0onSocketDisconnected\0"
    "onSendMessageButtonClicked\0onSocketReadyRead\0"
    "onServerNewConnection\0onClientDisconnected\0"
    "onClientReadyRead\0onSendCelClicked\0"
    "onSendFarClicked\0onSendHygClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InitiationQt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InitiationQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InitiationQt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onConnectButtonClicked(); break;
        case 1: _t->onSocketConnected(); break;
        case 2: _t->onSocketDisconnected(); break;
        case 3: _t->onSendMessageButtonClicked(); break;
        case 4: _t->onSocketReadyRead(); break;
        case 5: _t->onServerNewConnection(); break;
        case 6: _t->onClientDisconnected(); break;
        case 7: _t->onClientReadyRead(); break;
        case 8: _t->onSendCelClicked(); break;
        case 9: _t->onSendFarClicked(); break;
        case 10: _t->onSendHygClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject InitiationQt::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_InitiationQt.data,
    qt_meta_data_InitiationQt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InitiationQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InitiationQt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InitiationQt.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int InitiationQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
