/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.hpp'
**
** Created: Fri May 16 12:17:56 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/ImageNew/mainwindow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyLabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,    9,    8,    8, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_MyLabel[] = {
    "MyLabel\0\0ev\0on_mouseDoubleClickEvent(QMouseEvent*)\0"
};

void MyLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyLabel *_t = static_cast<MyLabel *>(_o);
        switch (_id) {
        case 0: _t->on_mouseDoubleClickEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_MyLabel,
      qt_meta_data_MyLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyLabel))
        return static_cast<void*>(const_cast< MyLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int MyLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MyLabel::on_mouseDoubleClickEvent(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_MyWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      32,    9,    9,    9, 0x0a,
      55,    9,    9,    9, 0x0a,
      78,    9,    9,    9, 0x0a,
      99,    9,    9,    9, 0x0a,
     123,    9,    9,    9, 0x0a,
     148,    9,    9,    9, 0x0a,
     173,    9,    9,    9, 0x0a,
     204,  198,    9,    9, 0x0a,
     239,  198,    9,    9, 0x0a,
     274,  198,    9,    9, 0x0a,
     309,  198,    9,    9, 0x0a,
     350,  198,    9,    9, 0x0a,
     391,  198,    9,    9, 0x0a,
     435,  432,    9,    9, 0x0a,
     485,  198,    9,    9, 0x0a,
     517,  198,    9,    9, 0x0a,
     550,  198,    9,    9, 0x0a,
     583,    9,    9,    9, 0x0a,
     608,    9,    9,    9, 0x0a,
     632,    9,    9,    9, 0x0a,
     658,    9,    9,    9, 0x0a,
     681,    9,    9,    9, 0x0a,
     705,  198,    9,    9, 0x0a,
     743,    9,    9,    9, 0x0a,
     770,    9,    9,    9, 0x0a,
     798,    9,    9,    9, 0x0a,
     828,    9,    9,    9, 0x0a,
     857,    9,    9,    9, 0x0a,
     881,  198,    9,    9, 0x0a,
     917,  198,    9,    9, 0x0a,
     953,    9,    9,    9, 0x0a,
     982,    9,    9,    9, 0x0a,
    1005,  198,    9,    9, 0x0a,
    1044,  198,    9,    9, 0x0a,
    1083,  198,    9,    9, 0x0a,
    1119,    9,    9,    9, 0x0a,
    1145,    9,    9,    9, 0x0a,
    1171,    9,    9,    9, 0x0a,
    1196,    9,    9,    9, 0x0a,
    1221,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyWindow[] = {
    "MyWindow\0\0on_openFile_clicked()\0"
    "on_closeFile_clicked()\0on_writeFile_clicked()\0"
    "on_newFile_clicked()\0on_openCamera_clicked()\0"
    "on_startCamera_clicked()\0"
    "on_pauseCamera_clicked()\0"
    "on_closeCamera_clicked()\0value\0"
    "on_HValue_slider_valueChanged(int)\0"
    "on_SValue_slider_valueChanged(int)\0"
    "on_VValue_slider_valueChanged(int)\0"
    "on_HThreshValue_slider_valueChanged(int)\0"
    "on_SThreshValue_slider_valueChanged(int)\0"
    "on_VThreshValue_slider_valueChanged(int)\0"
    "ev\0on_colorImage_mouseDoubleClickEvent(QMouseEvent*)\0"
    "on_blurSlider_valueChanged(int)\0"
    "on_mblurSlider_valueChanged(int)\0"
    "on_gblurSlider_valueChanged(int)\0"
    "on_dilateCheck_clicked()\0"
    "on_erodeCheck_clicked()\0"
    "on_morphellipse_clicked()\0"
    "on_morphrect_clicked()\0on_morphcross_clicked()\0"
    "on_kernelSizeSlider_valueChanged(int)\0"
    "on_contoursCheck_clicked()\0"
    "on_boundrectCheck_clicked()\0"
    "on_boundcircleCheck_clicked()\0"
    "on_approxpolyCheck_clicked()\0"
    "on_houghCheck_clicked()\0"
    "on_houghMinRadius_valueChanged(int)\0"
    "on_houghMaxRadius_valueChanged(int)\0"
    "on_houghLinesCheck_clicked()\0"
    "on_blobCheck_clicked()\0"
    "on_backgroundRSlider_valueChanged(int)\0"
    "on_foregroundRSlider_valueChanged(int)\0"
    "on_areablobSlider_valueChanged(int)\0"
    "on_areablobLess_clicked()\0"
    "on_areablobMore_clicked()\0"
    "on_blobInclude_clicked()\0"
    "on_blobExclude_clicked()\0on_updateImages()\0"
};

void MyWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyWindow *_t = static_cast<MyWindow *>(_o);
        switch (_id) {
        case 0: _t->on_openFile_clicked(); break;
        case 1: _t->on_closeFile_clicked(); break;
        case 2: _t->on_writeFile_clicked(); break;
        case 3: _t->on_newFile_clicked(); break;
        case 4: _t->on_openCamera_clicked(); break;
        case 5: _t->on_startCamera_clicked(); break;
        case 6: _t->on_pauseCamera_clicked(); break;
        case 7: _t->on_closeCamera_clicked(); break;
        case 8: _t->on_HValue_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_SValue_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_VValue_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_HThreshValue_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_SThreshValue_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_VThreshValue_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_colorImage_mouseDoubleClickEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 15: _t->on_blurSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_mblurSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_gblurSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_dilateCheck_clicked(); break;
        case 19: _t->on_erodeCheck_clicked(); break;
        case 20: _t->on_morphellipse_clicked(); break;
        case 21: _t->on_morphrect_clicked(); break;
        case 22: _t->on_morphcross_clicked(); break;
        case 23: _t->on_kernelSizeSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_contoursCheck_clicked(); break;
        case 25: _t->on_boundrectCheck_clicked(); break;
        case 26: _t->on_boundcircleCheck_clicked(); break;
        case 27: _t->on_approxpolyCheck_clicked(); break;
        case 28: _t->on_houghCheck_clicked(); break;
        case 29: _t->on_houghMinRadius_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->on_houghMaxRadius_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->on_houghLinesCheck_clicked(); break;
        case 32: _t->on_blobCheck_clicked(); break;
        case 33: _t->on_backgroundRSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->on_foregroundRSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->on_areablobSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->on_areablobLess_clicked(); break;
        case 37: _t->on_areablobMore_clicked(); break;
        case 38: _t->on_blobInclude_clicked(); break;
        case 39: _t->on_blobExclude_clicked(); break;
        case 40: _t->on_updateImages(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MyWindow,
      qt_meta_data_MyWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyWindow))
        return static_cast<void*>(const_cast< MyWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MyWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
