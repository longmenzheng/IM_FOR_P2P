/****************************************************************************
** Meta object code from reading C++ file 'chatmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IM_FOR_P2P/chatmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatManager_t {
    QByteArrayData data[5];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatManager_t qt_meta_stringdata_ChatManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ChatManager"
QT_MOC_LITERAL(1, 12, 7), // "delitem"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "msgSignal"
QT_MOC_LITERAL(4, 31, 12) // "IM::ChatMsg*"

    },
    "ChatManager\0delitem\0\0msgSignal\0"
    "IM::ChatMsg*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       3,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void ChatManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChatManager *_t = static_cast<ChatManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->delitem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->msgSignal((*reinterpret_cast< IM::ChatMsg*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ChatManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatManager::delitem)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ChatManager::*_t)(IM::ChatMsg * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatManager::msgSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ChatManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChatManager.data,
      qt_meta_data_ChatManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ChatManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "NetObserver"))
        return static_cast< NetObserver*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChatManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ChatManager::delitem(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatManager::msgSignal(IM::ChatMsg * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
