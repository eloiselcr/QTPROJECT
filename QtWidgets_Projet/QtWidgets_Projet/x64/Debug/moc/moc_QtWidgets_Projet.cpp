/****************************************************************************
** Meta object code from reading C++ file 'QtWidgets_Projet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../QtWidgets_Projet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtWidgets_Projet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtWidgets_Projet_t {
    QByteArrayData data[11];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtWidgets_Projet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtWidgets_Projet_t qt_meta_stringdata_QtWidgets_Projet = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QtWidgets_Projet"
QT_MOC_LITERAL(1, 17, 29), // "OnDisplayMessageButtonClicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 22), // "OnConnectButtonClicked"
QT_MOC_LITERAL(4, 71, 17), // "OnSocketConnected"
QT_MOC_LITERAL(5, 89, 20), // "OnSocketDisconnected"
QT_MOC_LITERAL(6, 110, 26), // "OnSendMessageButtonClicked"
QT_MOC_LITERAL(7, 137, 17), // "OnSocketReadyRead"
QT_MOC_LITERAL(8, 155, 21), // "OnServerNewConnection"
QT_MOC_LITERAL(9, 177, 20), // "OnClientDisconnected"
QT_MOC_LITERAL(10, 198, 17) // "OnClientReadyRead"

    },
    "QtWidgets_Projet\0OnDisplayMessageButtonClicked\0"
    "\0OnConnectButtonClicked\0OnSocketConnected\0"
    "OnSocketDisconnected\0OnSendMessageButtonClicked\0"
    "OnSocketReadyRead\0OnServerNewConnection\0"
    "OnClientDisconnected\0OnClientReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtWidgets_Projet[] = {

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
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

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

       0        // eod
};

void QtWidgets_Projet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtWidgets_Projet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnDisplayMessageButtonClicked(); break;
        case 1: _t->OnConnectButtonClicked(); break;
        case 2: _t->OnSocketConnected(); break;
        case 3: _t->OnSocketDisconnected(); break;
        case 4: _t->OnSendMessageButtonClicked(); break;
        case 5: _t->OnSocketReadyRead(); break;
        case 6: _t->OnServerNewConnection(); break;
        case 7: _t->OnClientDisconnected(); break;
        case 8: _t->OnClientReadyRead(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QtWidgets_Projet::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_QtWidgets_Projet.data,
    qt_meta_data_QtWidgets_Projet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtWidgets_Projet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtWidgets_Projet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtWidgets_Projet.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QtWidgets_Projet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
