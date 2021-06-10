/****************************************************************************
** Meta object code from reading C++ file 'main_page.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Store/main_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_main_page_t {
    const uint offsetsAndSize[32];
    char stringdata0[358];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_main_page_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_main_page_t qt_meta_stringdata_main_page = {
    {
QT_MOC_LITERAL(0, 9), // "main_page"
QT_MOC_LITERAL(10, 20), // "on_addtolist_clicked"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 22), // "on_showchanges_clicked"
QT_MOC_LITERAL(55, 26), // "on_actionLog_out_triggered"
QT_MOC_LITERAL(82, 23), // "on_searchbutton_clicked"
QT_MOC_LITERAL(106, 19), // "on_delete_2_clicked"
QT_MOC_LITERAL(126, 15), // "on_edit_clicked"
QT_MOC_LITERAL(142, 21), // "on_addtogroup_clicked"
QT_MOC_LITERAL(164, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(188, 26), // "on_deleteforgroups_clicked"
QT_MOC_LITERAL(215, 28), // "on_change_group_name_clicked"
QT_MOC_LITERAL(244, 35), // "on_actionchange_user_pass_tri..."
QT_MOC_LITERAL(280, 23), // "on_add_mybasket_clicked"
QT_MOC_LITERAL(304, 27), // "on_delete_from_list_clicked"
QT_MOC_LITERAL(332, 25) // "on_update_spinbox_clicked"

    },
    "main_page\0on_addtolist_clicked\0\0"
    "on_showchanges_clicked\0"
    "on_actionLog_out_triggered\0"
    "on_searchbutton_clicked\0on_delete_2_clicked\0"
    "on_edit_clicked\0on_addtogroup_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_deleteforgroups_clicked\0"
    "on_change_group_name_clicked\0"
    "on_actionchange_user_pass_triggered\0"
    "on_add_mybasket_clicked\0"
    "on_delete_from_list_clicked\0"
    "on_update_spinbox_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_main_page[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    0 /* Private */,
       3,    0,   99,    2, 0x08,    1 /* Private */,
       4,    0,  100,    2, 0x08,    2 /* Private */,
       5,    0,  101,    2, 0x08,    3 /* Private */,
       6,    0,  102,    2, 0x08,    4 /* Private */,
       7,    0,  103,    2, 0x08,    5 /* Private */,
       8,    0,  104,    2, 0x08,    6 /* Private */,
       9,    0,  105,    2, 0x08,    7 /* Private */,
      10,    0,  106,    2, 0x08,    8 /* Private */,
      11,    0,  107,    2, 0x08,    9 /* Private */,
      12,    0,  108,    2, 0x08,   10 /* Private */,
      13,    0,  109,    2, 0x08,   11 /* Private */,
      14,    0,  110,    2, 0x08,   12 /* Private */,
      15,    0,  111,    2, 0x08,   13 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void main_page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<main_page *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_addtolist_clicked(); break;
        case 1: _t->on_showchanges_clicked(); break;
        case 2: _t->on_actionLog_out_triggered(); break;
        case 3: _t->on_searchbutton_clicked(); break;
        case 4: _t->on_delete_2_clicked(); break;
        case 5: _t->on_edit_clicked(); break;
        case 6: _t->on_addtogroup_clicked(); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        case 8: _t->on_deleteforgroups_clicked(); break;
        case 9: _t->on_change_group_name_clicked(); break;
        case 10: _t->on_actionchange_user_pass_triggered(); break;
        case 11: _t->on_add_mybasket_clicked(); break;
        case 12: _t->on_delete_from_list_clicked(); break;
        case 13: _t->on_update_spinbox_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject main_page::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_main_page.offsetsAndSize,
    qt_meta_data_main_page,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_main_page_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *main_page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *main_page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_main_page.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int main_page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
