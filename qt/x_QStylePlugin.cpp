//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qstyleplugin.h>
#include <qstring.h>
#include <qstringlist.h>

class x_QStylePlugin : public QStylePlugin {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QStylePlugin::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QStylePlugin::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QStylePlugin::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QStylePlugin::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QStylePlugin::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QStylePlugin::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QStylePlugin::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QStylePlugin()
	x_QStylePlugin* xret = new x_QStylePlugin();
	x[0].s_class = (void*)xret;
    }
    x_QStylePlugin() : QStylePlugin() {
    }
    static void x_8(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QStylePlugin::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_9(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QStylePlugin::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_10(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QStylePlugin::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_11(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QStylePlugin::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_12(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QStylePlugin::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6519, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6515, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(9498, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QStylePlugin::className();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6517, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual QStyle* create(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	qt_Smoke->binding->callMethod(9507, (void*)this, x, true /*pure virtual*/);
	return (QStyle*)x[0].s_class;
	// ABSTRACT
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6516, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6518, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6453, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6454, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6476, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QStringList keys() const {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(9506, (void*)this, x, true /*pure virtual*/);
	QStringList *xptr = (QStringList *)x[0].s_class;
	QStringList xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(9497, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QStylePlugin::metaObject();
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6490, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void* qt_cast(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(9499, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QStylePlugin::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(9501, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QStylePlugin::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(9500, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QStylePlugin::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(9502, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QStylePlugin::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6477, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6459, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6489, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6514, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QStylePlugin() { qt_Smoke->binding->deleted(303, (void*)this); }
};
void xcall_QStylePlugin(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QStylePlugin *xself = (x_QStylePlugin*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QStylePlugin::x_7(args);	break;
	case 8: x_QStylePlugin::x_8(args);	break;
	case 9: x_QStylePlugin::x_9(args);	break;
	case 10: x_QStylePlugin::x_10(args);	break;
	case 11: x_QStylePlugin::x_11(args);	break;
	case 12: x_QStylePlugin::x_12(args);	break;
	case 13: delete (QStylePlugin*)xself;	break;
    }
}
