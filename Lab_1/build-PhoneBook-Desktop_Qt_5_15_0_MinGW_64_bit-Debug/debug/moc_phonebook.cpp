/****************************************************************************
** Meta object code from reading C++ file 'phonebook.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PhoneBook/phonebook.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'phonebook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PhoneBook_t {
    QByteArrayData data[10];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhoneBook_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhoneBook_t qt_meta_stringdata_PhoneBook = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PhoneBook"
QT_MOC_LITERAL(1, 10, 8), // "addPhone"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "submitPhone"
QT_MOC_LITERAL(4, 32, 6), // "cancel"
QT_MOC_LITERAL(5, 39, 4), // "next"
QT_MOC_LITERAL(6, 44, 8), // "previous"
QT_MOC_LITERAL(7, 53, 13), // "removeContact"
QT_MOC_LITERAL(8, 67, 10), // "findByName"
QT_MOC_LITERAL(9, 78, 11) // "findByPhone"

    },
    "PhoneBook\0addPhone\0\0submitPhone\0cancel\0"
    "next\0previous\0removeContact\0findByName\0"
    "findByPhone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhoneBook[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
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

void PhoneBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PhoneBook *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addPhone(); break;
        case 1: _t->submitPhone(); break;
        case 2: _t->cancel(); break;
        case 3: _t->next(); break;
        case 4: _t->previous(); break;
        case 5: _t->removeContact(); break;
        case 6: _t->findByName(); break;
        case 7: _t->findByPhone(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PhoneBook::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PhoneBook.data,
    qt_meta_data_PhoneBook,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhoneBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhoneBook::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhoneBook.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PhoneBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
