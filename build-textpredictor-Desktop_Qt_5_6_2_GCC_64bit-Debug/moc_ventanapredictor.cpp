/****************************************************************************
** Meta object code from reading C++ file 'ventanapredictor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../textpredictor/ventanapredictor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ventanapredictor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ventanapredictor_t {
    QByteArrayData data[14];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ventanapredictor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ventanapredictor_t qt_meta_stringdata_ventanapredictor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ventanapredictor"
QT_MOC_LITERAL(1, 17, 16), // "predictor_signal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "value"
QT_MOC_LITERAL(4, 41, 24), // "on_actionNuevo_triggered"
QT_MOC_LITERAL(5, 66, 24), // "on_actionAbrir_triggered"
QT_MOC_LITERAL(6, 91, 26), // "on_actionGuardar_triggered"
QT_MOC_LITERAL(7, 118, 31), // "on_actionGuardar_Como_triggered"
QT_MOC_LITERAL(8, 150, 25), // "on_actionCopiar_triggered"
QT_MOC_LITERAL(9, 176, 25), // "on_actionCortar_triggered"
QT_MOC_LITERAL(10, 202, 24), // "on_actionPegar_triggered"
QT_MOC_LITERAL(11, 227, 27), // "on_actionDeshacer_triggered"
QT_MOC_LITERAL(12, 255, 26), // "on_actionRehacer_triggered"
QT_MOC_LITERAL(13, 282, 25) // "on_textEditor_textChanged"

    },
    "ventanapredictor\0predictor_signal\0\0"
    "value\0on_actionNuevo_triggered\0"
    "on_actionAbrir_triggered\0"
    "on_actionGuardar_triggered\0"
    "on_actionGuardar_Como_triggered\0"
    "on_actionCopiar_triggered\0"
    "on_actionCortar_triggered\0"
    "on_actionPegar_triggered\0"
    "on_actionDeshacer_triggered\0"
    "on_actionRehacer_triggered\0"
    "on_textEditor_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ventanapredictor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   72,    2, 0x08 /* Private */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

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

       0        // eod
};

void ventanapredictor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ventanapredictor *_t = static_cast<ventanapredictor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->predictor_signal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_actionNuevo_triggered(); break;
        case 2: _t->on_actionAbrir_triggered(); break;
        case 3: _t->on_actionGuardar_triggered(); break;
        case 4: _t->on_actionGuardar_Como_triggered(); break;
        case 5: _t->on_actionCopiar_triggered(); break;
        case 6: _t->on_actionCortar_triggered(); break;
        case 7: _t->on_actionPegar_triggered(); break;
        case 8: _t->on_actionDeshacer_triggered(); break;
        case 9: _t->on_actionRehacer_triggered(); break;
        case 10: _t->on_textEditor_textChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ventanapredictor::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ventanapredictor::predictor_signal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ventanapredictor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ventanapredictor.data,
      qt_meta_data_ventanapredictor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ventanapredictor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ventanapredictor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ventanapredictor.stringdata0))
        return static_cast<void*>(const_cast< ventanapredictor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ventanapredictor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ventanapredictor::predictor_signal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
