/****************************************************************************
** Meta object code from reading C++ file 'dlgOptionsAreaAction.h'
**
** Created: Tue Aug 30 00:55:11 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dlgOptionsAreaAction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgOptionsAreaAction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dlgOptionsAreaAction[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_dlgOptionsAreaAction[] = {
    "dlgOptionsAreaAction\0"
};

const QMetaObject dlgOptionsAreaAction::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_dlgOptionsAreaAction,
      qt_meta_data_dlgOptionsAreaAction, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dlgOptionsAreaAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dlgOptionsAreaAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dlgOptionsAreaAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgOptionsAreaAction))
        return static_cast<void*>(const_cast< dlgOptionsAreaAction*>(this));
    if (!strcmp(_clname, "Ui::options_area_actions"))
        return static_cast< Ui::options_area_actions*>(const_cast< dlgOptionsAreaAction*>(this));
    return QWidget::qt_metacast(_clname);
}

int dlgOptionsAreaAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
