//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qgcache.h>
#include <qstring.h>
#include <qptrcollection.h>

class x_QGCache : public QGCache {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QGCache::StringKey;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QGCache::AsciiKey;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QGCache::IntKey;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QGCache::PtrKey;
    }
    static void x_4(Smoke::Stack x) {
	// QGCache(int, uint, QGCache::KeyType, bool, bool)
	x_QGCache* xret = new x_QGCache((int)x[1].s_int,(uint)x[2].s_uint,(QGCache::KeyType)x[3].s_enum,(bool)x[4].s_bool,(bool)x[5].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QGCache(int x1, uint x2, QGCache::KeyType x3, bool x4, bool x5) : QGCache(x1, x2, x3, x4, x5) {
    }
    static void x_5(Smoke::Stack x) {
	// QGCache(const QGCache&)
	x_QGCache* xret = new x_QGCache(*(const QGCache *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QGCache(const QGCache& x1) : QGCache(x1) {
    }
    void x_6(Smoke::Stack x) {
	// operator=(const QGCache&)
	QGCache& xret = this->QGCache::operator=(*(const QGCache *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_7(Smoke::Stack x) const {
	// count()
	uint xret = this->QGCache::count();
	x[0].s_uint = xret;
    }
    void x_8(Smoke::Stack x) const {
	// size()
	uint xret = this->QGCache::size();
	x[0].s_uint = xret;
    }
    void x_9(Smoke::Stack x) const {
	// maxCost()
	int xret = this->QGCache::maxCost();
	x[0].s_int = xret;
    }
    void x_10(Smoke::Stack x) const {
	// totalCost()
	int xret = this->QGCache::totalCost();
	x[0].s_int = xret;
    }
    void x_11(Smoke::Stack x) {
	// setMaxCost(int)
	this->QGCache::setMaxCost((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_12(Smoke::Stack x) {
	// clear()
	this->QGCache::clear();
	(void)x; // noop (for compiler warning)
    }
    void x_13(Smoke::Stack x) {
	// insert_string(const QString&, QPtrCollection::Item, int, int)
	bool xret = this->QGCache::insert_string(*(const QString *)x[1].s_voidp,*(QPtrCollection::Item *)x[2].s_voidp,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_bool = xret;
    }
    void x_14(Smoke::Stack x) {
	// insert_other(const char*, QPtrCollection::Item, int, int)
	bool xret = this->QGCache::insert_other((const char*)x[1].s_voidp,*(QPtrCollection::Item *)x[2].s_voidp,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_bool = xret;
    }
    void x_15(Smoke::Stack x) {
	// remove_string(const QString&)
	bool xret = this->QGCache::remove_string(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_16(Smoke::Stack x) {
	// remove_other(const char*)
	bool xret = this->QGCache::remove_other((const char*)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_17(Smoke::Stack x) {
	// take_string(const QString&)
	QPtrCollection::Item xret = this->QGCache::take_string(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_18(Smoke::Stack x) {
	// take_other(const char*)
	QPtrCollection::Item xret = this->QGCache::take_other((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_19(Smoke::Stack x) const {
	// find_string(const QString&, bool)
	QPtrCollection::Item xret = this->QGCache::find_string(*(const QString *)x[1].s_voidp,(bool)x[2].s_bool);
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_20(Smoke::Stack x) const {
	// find_string(const QString&)
	QPtrCollection::Item xret = this->QGCache::find_string(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_21(Smoke::Stack x) const {
	// find_other(const char*, bool)
	QPtrCollection::Item xret = this->QGCache::find_other((const char*)x[1].s_voidp,(bool)x[2].s_bool);
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_22(Smoke::Stack x) const {
	// find_other(const char*)
	QPtrCollection::Item xret = this->QGCache::find_other((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QPtrCollection::Item(xret);
    }
    void x_23(Smoke::Stack x) const {
	// statistics()
	this->QGCache::statistics();
	(void)x; // noop (for compiler warning)
    }
    virtual void clear() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3590, (void*)this, x)) return;
	this->QGCache::clear();
    }
    virtual uint count() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3585, (void*)this, x)) return (uint)x[0].s_uint;
	return this->QGCache::count();
    }
    virtual void deleteItem(Item x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	qt_Smoke->binding->callMethod(7477, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual Item newItem(Item x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(7476, (void*)this, x)) {
	    Item *xptr = (Item *)x[0].s_class;
	    Item xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QPtrCollection::newItem(x1);
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 248: //QGCache::KeyType
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QGCache::KeyType;
		break;
	      case Smoke::EnumDelete:
		delete (QGCache::KeyType*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QGCache::KeyType*)xdata = (QGCache::KeyType)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QGCache::KeyType*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QGCache() { qt_Smoke->binding->deleted(127, (void*)this); }
};
void xenum_QGCache(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QGCache::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QGCache(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QGCache *xself = (x_QGCache*)obj;
    switch(xi) {
	case 0: x_QGCache::x_0(args);	break;
	case 1: x_QGCache::x_1(args);	break;
	case 2: x_QGCache::x_2(args);	break;
	case 3: x_QGCache::x_3(args);	break;
	case 4: x_QGCache::x_4(args);	break;
	case 5: x_QGCache::x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
    }
}
