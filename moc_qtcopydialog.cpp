/****************************************************************************
** Meta object code from reading C++ file 'qtcopydialog.h'
**
** Created: Sat Feb 19 22:50:07 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "/media/C811-5AB5/qtcopydialog-2.2_1-opensource/src/qtcopydialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtcopydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtCopyDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      26,   23,   13,   13, 0x08,
      62,   13,   13,   13, 0x08,
      96,   13,   13,   13, 0x08,
     107,   13,   13,   13, 0x08,
     122,  120,   13,   13, 0x08,
     155,  120,   13,   13, 0x08,
     174,   13,   13,   13, 0x08,
     185,   13,   13,   13, 0x08,
     200,   13,   13,   13, 0x08,

 // properties: name, type, flags
     217,  213, 0x02095103,
     238,  233, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QtCopyDialog[] = {
    "QtCopyDialog\0\0reject()\0,,\0"
    "error(int,QtFileCopier::Error,bool)\0"
    "stateChanged(QtFileCopier::State)\0"
    "done(bool)\0started(int)\0,\0"
    "dataTransferProgress(int,qint64)\0"
    "finished(int,bool)\0canceled()\0"
    "showProgress()\0showDialog()\0int\0"
    "minimumDuration\0bool\0autoClose\0"
};

const QMetaObject QtCopyDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QtCopyDialog,
      qt_meta_data_QtCopyDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtCopyDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtCopyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtCopyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCopyDialog))
        return static_cast<void*>(const_cast< QtCopyDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QtCopyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: reject(); break;
        case 1: d_func()->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QtFileCopier::Error(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: d_func()->stateChanged((*reinterpret_cast< QtFileCopier::State(*)>(_a[1]))); break;
        case 3: d_func()->done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: d_func()->started((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: d_func()->dataTransferProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: d_func()->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: d_func()->canceled(); break;
        case 8: d_func()->showProgress(); break;
        case 9: d_func()->showDialog(); break;
        default: ;
        }
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = minimumDuration(); break;
        case 1: *reinterpret_cast< bool*>(_v) = autoClose(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMinimumDuration(*reinterpret_cast< int*>(_v)); break;
        case 1: setAutoClose(*reinterpret_cast< bool*>(_v)); break;
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
QT_END_MOC_NAMESPACE
