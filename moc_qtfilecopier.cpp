/****************************************************************************
** Meta object code from reading C++ file 'qtfilecopier.h'
**
** Created: Sat Feb 19 22:59:20 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "/media/C811-5AB5/qtcopydialog-2.2_1-opensource/src/qtfilecopier.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtfilecopier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtFileCopier[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       2,  124, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   14,   13,   13, 0x05,
      73,   67,   13,   13, 0x05,
     113,  107,   13,   13, 0x05,
     127,  124,   13,   13, 0x05,
     152,  140,   13,   13, 0x05,
     194,  185,   13,   13, 0x05,
     213,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     224,   13,   13,   13, 0x0a,
     236,  124,   13,   13, 0x0a,
     248,   13,   13,   13, 0x0a,
     255,   13,   13,   13, 0x0a,
     265,   13,   13,   13, 0x0a,
     273,   13,   13,   13, 0x0a,
     285,   13,   13,   13, 0x0a,
     300,   13,   13,   13, 0x0a,
     308,   13,   13,   13, 0x0a,
     320,   13,   13,   13, 0x0a,
     337,   13,   13,   13, 0x08,
     356,  354,   13,   13, 0x08,
     379,   13,   13,   13, 0x08,
     397,  394,   13,   13, 0x08,
     437,   13,   13,   13, 0x08,

 // properties: name, type, flags
     459,  455, 0x02095103,
     481,  476, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QtFileCopier[] = {
    "QtFileCopier\0\0id,error,stopped\0"
    "error(int,QtFileCopier::Error,bool)\0"
    "state\0stateChanged(QtFileCopier::State)\0"
    "error\0done(bool)\0id\0started(int)\0"
    "id,progress\0dataTransferProgress(int,qint64)\0"
    "id,error\0finished(int,bool)\0canceled()\0"
    "cancelAll()\0cancel(int)\0skip()\0skipAll()\0"
    "retry()\0overwrite()\0overwriteAll()\0"
    "reset()\0resetSkip()\0resetOverwrite()\0"
    "copyStarted(int)\0,\0copyFinished(int,bool)\0"
    "copyCanceled()\0,,\0"
    "copyError(int,QtFileCopier::Error,bool)\0"
    "progressRequest()\0int\0progressInterval\0"
    "bool\0autoReset\0"
};

const QMetaObject QtFileCopier::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtFileCopier,
      qt_meta_data_QtFileCopier, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtFileCopier::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtFileCopier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtFileCopier::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtFileCopier))
        return static_cast<void*>(const_cast< QtFileCopier*>(this));
    return QObject::qt_metacast(_clname);
}

int QtFileCopier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QtFileCopier::Error(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: stateChanged((*reinterpret_cast< QtFileCopier::State(*)>(_a[1]))); break;
        case 2: done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: started((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: dataTransferProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: canceled(); break;
        case 7: cancelAll(); break;
        case 8: cancel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: skip(); break;
        case 10: skipAll(); break;
        case 11: retry(); break;
        case 12: overwrite(); break;
        case 13: overwriteAll(); break;
        case 14: reset(); break;
        case 15: resetSkip(); break;
        case 16: resetOverwrite(); break;
        case 17: d_func()->copyStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: d_func()->copyFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: d_func()->copyCanceled(); break;
        case 20: d_func()->copyError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QtFileCopier::Error(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 21: d_func()->progressRequest(); break;
        default: ;
        }
        _id -= 22;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = progressInterval(); break;
        case 1: *reinterpret_cast< bool*>(_v) = autoReset(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setProgressInterval(*reinterpret_cast< int*>(_v)); break;
        case 1: setAutoReset(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtFileCopier::error(int _t1, QtFileCopier::Error _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtFileCopier::stateChanged(QtFileCopier::State _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtFileCopier::done(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtFileCopier::started(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtFileCopier::dataTransferProgress(int _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtFileCopier::finished(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtFileCopier::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
