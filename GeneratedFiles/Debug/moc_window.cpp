/****************************************************************************
** Meta object code from reading C++ file 'window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Window_t {
    QByteArrayData data[24];
    char stringdata0[410];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Window_t qt_meta_stringdata_Window = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Window"
QT_MOC_LITERAL(1, 7, 12), // "colorChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 3), // "arg"
QT_MOC_LITERAL(4, 25, 30), // "on_treeView_currentItemChanged"
QT_MOC_LITERAL(5, 56, 14), // "QItemSelection"
QT_MOC_LITERAL(6, 71, 8), // "selected"
QT_MOC_LITERAL(7, 80, 10), // "deselected"
QT_MOC_LITERAL(8, 91, 28), // "on_xTransSlider_valueChanged"
QT_MOC_LITERAL(9, 120, 5), // "value"
QT_MOC_LITERAL(10, 126, 28), // "on_yTransSlider_valueChanged"
QT_MOC_LITERAL(11, 155, 28), // "on_xScaleSlider_valueChanged"
QT_MOC_LITERAL(12, 184, 28), // "on_yScaleSlider_valueChanged"
QT_MOC_LITERAL(13, 213, 28), // "on_rotationDial_valueChanged"
QT_MOC_LITERAL(14, 242, 5), // "angle"
QT_MOC_LITERAL(15, 248, 22), // "on_spawnButton_clicked"
QT_MOC_LITERAL(16, 271, 23), // "on_renderButton_clicked"
QT_MOC_LITERAL(17, 295, 27), // "on_userSpinBox_valueChanged"
QT_MOC_LITERAL(18, 323, 4), // "arg1"
QT_MOC_LITERAL(19, 328, 30), // "on_timelineSlider_valueChanged"
QT_MOC_LITERAL(20, 359, 21), // "on_animButton_clicked"
QT_MOC_LITERAL(21, 381, 7), // "animate"
QT_MOC_LITERAL(22, 389, 14), // "onColorChanged"
QT_MOC_LITERAL(23, 404, 5) // "color"

    },
    "Window\0colorChanged\0\0arg\0"
    "on_treeView_currentItemChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "on_xTransSlider_valueChanged\0value\0"
    "on_yTransSlider_valueChanged\0"
    "on_xScaleSlider_valueChanged\0"
    "on_yScaleSlider_valueChanged\0"
    "on_rotationDial_valueChanged\0angle\0"
    "on_spawnButton_clicked\0on_renderButton_clicked\0"
    "on_userSpinBox_valueChanged\0arg1\0"
    "on_timelineSlider_valueChanged\0"
    "on_animButton_clicked\0animate\0"
    "onColorChanged\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Window[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       1,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   87,    2, 0x0a /* Public */,
       8,    1,   92,    2, 0x0a /* Public */,
      10,    1,   95,    2, 0x0a /* Public */,
      11,    1,   98,    2, 0x0a /* Public */,
      12,    1,  101,    2, 0x0a /* Public */,
      13,    1,  104,    2, 0x0a /* Public */,
      15,    0,  107,    2, 0x0a /* Public */,
      16,    0,  108,    2, 0x0a /* Public */,
      17,    1,  109,    2, 0x0a /* Public */,
      19,    1,  112,    2, 0x0a /* Public */,
      20,    0,  115,    2, 0x0a /* Public */,
      21,    0,  116,    2, 0x0a /* Public */,
      22,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      23, QMetaType::QColor, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Window *_t = static_cast<Window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->on_treeView_currentItemChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 2: _t->on_xTransSlider_valueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->on_yTransSlider_valueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->on_xScaleSlider_valueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->on_yScaleSlider_valueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->on_rotationDial_valueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->on_spawnButton_clicked(); break;
        case 8: _t->on_renderButton_clicked(); break;
        case 9: _t->on_userSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_timelineSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_animButton_clicked(); break;
        case 12: _t->animate(); break;
        case 13: _t->onColorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Window::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Window::colorChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Window *_t = static_cast<Window *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Window::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Window.data,
      qt_meta_data_Window,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Window::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Window.stringdata0))
        return static_cast<void*>(const_cast< Window*>(this));
    return QWidget::qt_metacast(_clname);
}

int Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
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
void Window::colorChanged(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
