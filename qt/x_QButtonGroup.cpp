//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcursor.h>
#include <qcolor.h>
#include <qstring.h>
#include <qsize.h>
#include <qvariant.h>
#include <qregion.h>
#include <qpoint.h>
#include <qfont.h>
#include <qbitmap.h>
#include <qsizepolicy.h>
#include <qpalette.h>
#include <qwidget.h>
#include <qnamespace.h>
#include <qrect.h>
#include <qpixmap.h>
#include <qbuttongroup.h>
#include <qstyle.h>

class x_QButtonGroup : public QButtonGroup {
public:
    void x_0(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QButtonGroup::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// className()
	const char* xret = this->QButtonGroup::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_2(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QButtonGroup::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QButtonGroup::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_4(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QButtonGroup::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_5(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QButtonGroup::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_6(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QButtonGroup::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_7(Smoke::Stack x) {
	// QButtonGroup(QWidget*, const char*)
	x_QButtonGroup* xret = new x_QButtonGroup((QWidget*)x[1].s_class,(const char*)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QButtonGroup(QWidget* x1, const char* x2) : QButtonGroup(x1, x2) {
    }
    static void x_8(Smoke::Stack x) {
	// QButtonGroup(QWidget*)
	x_QButtonGroup* xret = new x_QButtonGroup((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QButtonGroup(QWidget* x1) : QButtonGroup(x1) {
    }
    static void x_9(Smoke::Stack x) {
	// QButtonGroup()
	x_QButtonGroup* xret = new x_QButtonGroup();
	x[0].s_class = (void*)xret;
    }
    x_QButtonGroup() : QButtonGroup() {
    }
    static void x_10(Smoke::Stack x) {
	// QButtonGroup(const QString&, QWidget*, const char*)
	x_QButtonGroup* xret = new x_QButtonGroup(*(const QString *)x[1].s_voidp,(QWidget*)x[2].s_class,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QButtonGroup(const QString& x1, QWidget* x2, const char* x3) : QButtonGroup(x1, x2, x3) {
    }
    static void x_11(Smoke::Stack x) {
	// QButtonGroup(const QString&, QWidget*)
	x_QButtonGroup* xret = new x_QButtonGroup(*(const QString *)x[1].s_voidp,(QWidget*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QButtonGroup(const QString& x1, QWidget* x2) : QButtonGroup(x1, x2) {
    }
    static void x_12(Smoke::Stack x) {
	// QButtonGroup(const QString&)
	x_QButtonGroup* xret = new x_QButtonGroup(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QButtonGroup(const QString& x1) : QButtonGroup(x1) {
    }
    static void x_13(Smoke::Stack x) {
	// QButtonGroup(int, Qt::Orientation, QWidget*, const char*)
	x_QButtonGroup* xret = new x_QButtonGroup((int)x[1].s_int,(Qt::Orientation)x[2].s_enum,(QWidget*)x[3].s_class,(const char*)x[4].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QButtonGroup(int x1, Qt::Orientation x2, QWidget* x3, const char* x4) : QButtonGroup(x1, x2, x3, x4) {
    }
    static void x_14(Smoke::Stack x) {
	// QButtonGroup(int, Qt::Orientation, QWidget*)
	x_QButtonGroup* xret = new x_QButtonGroup((int)x[1].s_int,(Qt::Orientation)x[2].s_enum,(QWidget*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QButtonGroup(int x1, Qt::Orientation x2, QWidget* x3) : QButtonGroup(x1, x2, x3) {
    }
    static void x_15(Smoke::Stack x) {
	// QButtonGroup(int, Qt::Orientation)
	x_QButtonGroup* xret = new x_QButtonGroup((int)x[1].s_int,(Qt::Orientation)x[2].s_enum);
	x[0].s_class = (void*)xret;
    }
    x_QButtonGroup(int x1, Qt::Orientation x2) : QButtonGroup(x1, x2) {
    }
    static void x_16(Smoke::Stack x) {
	// QButtonGroup(int, Qt::Orientation, const QString&, QWidget*, const char*)
	x_QButtonGroup* xret = new x_QButtonGroup((int)x[1].s_int,(Qt::Orientation)x[2].s_enum,*(const QString *)x[3].s_voidp,(QWidget*)x[4].s_class,(const char*)x[5].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QButtonGroup(int x1, Qt::Orientation x2, const QString& x3, QWidget* x4, const char* x5) : QButtonGroup(x1, x2, x3, x4, x5) {
    }
    static void x_17(Smoke::Stack x) {
	// QButtonGroup(int, Qt::Orientation, const QString&, QWidget*)
	x_QButtonGroup* xret = new x_QButtonGroup((int)x[1].s_int,(Qt::Orientation)x[2].s_enum,*(const QString *)x[3].s_voidp,(QWidget*)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QButtonGroup(int x1, Qt::Orientation x2, const QString& x3, QWidget* x4) : QButtonGroup(x1, x2, x3, x4) {
    }
    static void x_18(Smoke::Stack x) {
	// QButtonGroup(int, Qt::Orientation, const QString&)
	x_QButtonGroup* xret = new x_QButtonGroup((int)x[1].s_int,(Qt::Orientation)x[2].s_enum,*(const QString *)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QButtonGroup(int x1, Qt::Orientation x2, const QString& x3) : QButtonGroup(x1, x2, x3) {
    }
    void x_19(Smoke::Stack x) const {
	// isExclusive()
	bool xret = this->QButtonGroup::isExclusive();
	x[0].s_bool = xret;
    }
    void x_20(Smoke::Stack x) const {
	// isRadioButtonExclusive()
	bool xret = this->QButtonGroup::isRadioButtonExclusive();
	x[0].s_bool = xret;
    }
    void x_21(Smoke::Stack x) {
	// setExclusive(bool)
	this->QButtonGroup::setExclusive((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_22(Smoke::Stack x) {
	// setRadioButtonExclusive(bool)
	this->QButtonGroup::setRadioButtonExclusive((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_23(Smoke::Stack x) {
	// insert(QButton*, int)
	int xret = this->QButtonGroup::insert((QButton*)x[1].s_class,(int)x[2].s_int);
	x[0].s_int = xret;
    }
    void x_24(Smoke::Stack x) {
	// insert(QButton*)
	int xret = this->QButtonGroup::insert((QButton*)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_25(Smoke::Stack x) {
	// remove(QButton*)
	this->QButtonGroup::remove((QButton*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) const {
	// find(int)
	QButton* xret = this->QButtonGroup::find((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    void x_27(Smoke::Stack x) const {
	// id(QButton*)
	int xret = this->QButtonGroup::id((QButton*)x[1].s_class);
	x[0].s_int = xret;
    }
    void x_28(Smoke::Stack x) const {
	// count()
	int xret = this->QButtonGroup::count();
	x[0].s_int = xret;
    }
    void x_29(Smoke::Stack x) {
	// setButton(int)
	this->QButtonGroup::setButton((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_30(Smoke::Stack x) {
	// moveFocus(int)
	this->QButtonGroup::moveFocus((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_31(Smoke::Stack x) const {
	// selected()
	QButton* xret = this->QButtonGroup::selected();
	x[0].s_class = (void*)xret;
    }
    void x_32(Smoke::Stack x) {
	// pressed(int)
	this->QButtonGroup::pressed((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_33(Smoke::Stack x) {
	// released(int)
	this->QButtonGroup::released((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_34(Smoke::Stack x) {
	// clicked(int)
	this->QButtonGroup::clicked((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    static void x_35(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QButtonGroup::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_36(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QButtonGroup::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_37(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QButtonGroup::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_38(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QButtonGroup::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_39(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QButtonGroup::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_40(Smoke::Stack x) {
	// buttonPressed()
	this->QButtonGroup::buttonPressed();
	(void)x; // noop (for compiler warning)
    }
    void x_41(Smoke::Stack x) {
	// buttonReleased()
	this->QButtonGroup::buttonReleased();
	(void)x; // noop (for compiler warning)
    }
    void x_42(Smoke::Stack x) {
	// buttonClicked()
	this->QButtonGroup::buttonClicked();
	(void)x; // noop (for compiler warning)
    }
    void x_43(Smoke::Stack x) {
	// buttonToggled(bool)
	this->QButtonGroup::buttonToggled((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    virtual void adjustSize() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11523, (void*)this, x)) return;
	this->QWidget::adjustSize();
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
	if(qt_Smoke->binding->callMethod(3852, (void*)this, x)) return;
	this->QGroupBox::childEvent(x1);
    }
    virtual const char* className() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(495, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QButtonGroup::className();
    }
    virtual bool close(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11510, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::close(x1);
    }
    virtual void closeEvent(QCloseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11623, (void*)this, x)) return;
	this->QWidget::closeEvent(x1);
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_class = (void*)x2;
	x[3].s_voidp = (void*)x3;
	if(qt_Smoke->binding->callMethod(6631, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPaintDevice::cmd(x1, x2, x3);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6517, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void contextMenuEvent(QContextMenuEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11624, (void*)this, x)) return;
	this->QWidget::contextMenuEvent(x1);
    }
    virtual void create(WId x1, bool x2, bool x3) {
	Smoke::StackItem x[4];
	x[1].s_ulong = x1;
	x[2].s_bool = x2;
	x[3].s_bool = x3;
	if(qt_Smoke->binding->callMethod(11643, (void*)this, x)) return;
	this->QWidget::create(x1, x2, x3);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6516, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual bool customWhatsThis() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11548, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::customWhatsThis();
    }
    virtual void destroy(bool x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = x1;
	x[2].s_bool = x2;
	if(qt_Smoke->binding->callMethod(11647, (void*)this, x)) return;
	this->QWidget::destroy(x1, x2);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6518, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual void dragEnterEvent(QDragEnterEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11629, (void*)this, x)) return;
	this->QWidget::dragEnterEvent(x1);
    }
    virtual void dragLeaveEvent(QDragLeaveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11631, (void*)this, x)) return;
	this->QWidget::dragLeaveEvent(x1);
    }
    virtual void dragMoveEvent(QDragMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11630, (void*)this, x)) return;
	this->QWidget::dragMoveEvent(x1);
    }
    virtual void drawContents(QPainter* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(3512, (void*)this, x)) return;
	this->QFrame::drawContents(x1);
    }
    virtual void drawFrame(QPainter* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(3511, (void*)this, x)) return;
	this->QFrame::drawFrame(x1);
    }
    virtual void dropEvent(QDropEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11632, (void*)this, x)) return;
	this->QWidget::dropEvent(x1);
    }
    virtual void enabledChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11637, (void*)this, x)) return;
	this->QWidget::enabledChange(x1);
    }
    virtual void enterEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11618, (void*)this, x)) return;
	this->QWidget::enterEvent(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(3851, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QGroupBox::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(6454, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void focusInEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(3855, (void*)this, x)) return;
	this->QGroupBox::focusInEvent(x1);
    }
    virtual bool focusNextPrevChild(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11656, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QWidget::focusNextPrevChild(x1);
    }
    virtual void focusOutEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11617, (void*)this, x)) return;
	this->QWidget::focusOutEvent(x1);
    }
    virtual void fontChange(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(3856, (void*)this, x)) return;
	this->QGroupBox::fontChange(x1);
    }
    virtual int fontInf(QFont* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(6636, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontInf(x1, x2);
    }
    virtual int fontMet(QFont* x1, int x2, const char* x3, int x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	x[3].s_voidp = (void*)x3;
	x[4].s_int = x4;
	if(qt_Smoke->binding->callMethod(6633, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontMet(x1, x2, x3, x4);
    }
    virtual void frameChanged() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3513, (void*)this, x)) return;
	this->QFrame::frameChanged();
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(11522, (void*)this, x)) return (int)x[0].s_int;
	return this->QWidget::heightForWidth(x1);
    }
    virtual void hide() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11580, (void*)this, x)) return;
	this->QWidget::hide();
    }
    virtual void hideEvent(QHideEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11634, (void*)this, x)) return;
	this->QWidget::hideEvent(x1);
    }
    virtual void imComposeEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11626, (void*)this, x)) return;
	this->QWidget::imComposeEvent(x1);
    }
    virtual void imEndEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11627, (void*)this, x)) return;
	this->QWidget::imEndEvent(x1);
    }
    virtual void imStartEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11625, (void*)this, x)) return;
	this->QWidget::imStartEvent(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6476, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void keyPressEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11614, (void*)this, x)) return;
	this->QWidget::keyPressEvent(x1);
    }
    virtual void keyReleaseEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11615, (void*)this, x)) return;
	this->QWidget::keyReleaseEvent(x1);
    }
    virtual void leaveEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11619, (void*)this, x)) return;
	this->QWidget::leaveEvent(x1);
    }
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(494, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QButtonGroup::metaObject();
    }
    virtual int metric(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(11641, (void*)this, x)) return (int)x[0].s_int;
	return this->QWidget::metric(x1);
    }
    virtual QSize minimumSizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11519, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::minimumSizeHint();
    }
    virtual void mouseDoubleClickEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11611, (void*)this, x)) return;
	this->QWidget::mouseDoubleClickEvent(x1);
    }
    virtual void mouseMoveEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11612, (void*)this, x)) return;
	this->QWidget::mouseMoveEvent(x1);
    }
    virtual void mousePressEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11609, (void*)this, x)) return;
	this->QWidget::mousePressEvent(x1);
    }
    virtual void mouseReleaseEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11610, (void*)this, x)) return;
	this->QWidget::mouseReleaseEvent(x1);
    }
    virtual void move(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11592, (void*)this, x)) return;
	this->QWidget::move(x1, x2);
    }
    virtual void moveEvent(QMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11621, (void*)this, x)) return;
	this->QWidget::moveEvent(x1);
    }
    virtual void moveFocus(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(525, (void*)this, x)) return;
	this->QButtonGroup::moveFocus(x1);
    }
    virtual void paintEvent(QPaintEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(3854, (void*)this, x)) return;
	this->QGroupBox::paintEvent(x1);
    }
    virtual void paletteChange(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11638, (void*)this, x)) return;
	this->QWidget::paletteChange(x1);
    }
    virtual void polish() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11586, (void*)this, x)) return;
	this->QWidget::polish();
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
	if(qt_Smoke->binding->callMethod(496, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QButtonGroup::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(498, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QButtonGroup::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(497, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QButtonGroup::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(499, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QButtonGroup::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6477, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void reparent(QWidget* x1, Qt::WFlags x2, const QPoint& x3, bool x4) {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)&x3;
	x[4].s_bool = x4;
	if(qt_Smoke->binding->callMethod(11526, (void*)this, x)) return;
	this->QWidget::reparent(x1, x2, x3, x4);
    }
    virtual void resize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11594, (void*)this, x)) return;
	this->QWidget::resize(x1, x2);
    }
    virtual void resizeEvent(QResizeEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(3853, (void*)this, x)) return;
	this->QGroupBox::resizeEvent(x1);
    }
    virtual int resolution() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(6629, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::resolution();
    }
    virtual void setAcceptDrops(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11543, (void*)this, x)) return;
	this->QWidget::setAcceptDrops(x1);
    }
    virtual void setActiveWindow() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11497, (void*)this, x)) return;
	this->QWidget::setActiveWindow();
    }
    virtual void setAlignment(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(3834, (void*)this, x)) return;
	this->QGroupBox::setAlignment(x1);
    }
    virtual void setAutoMask(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11544, (void*)this, x)) return;
	this->QWidget::setAutoMask(x1);
    }
    virtual void setBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11493, (void*)this, x)) return;
	this->QWidget::setBackgroundColor(x1);
    }
    virtual void setBackgroundMode(Qt::BackgroundMode x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(11455, (void*)this, x)) return;
	this->QWidget::setBackgroundMode(x1);
    }
    virtual void setBackgroundOrigin(QWidget::BackgroundOrigin x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(11546, (void*)this, x)) return;
	this->QWidget::setBackgroundOrigin(x1);
    }
    virtual void setBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11495, (void*)this, x)) return;
	this->QWidget::setBackgroundPixmap(x1);
    }
    virtual void setButton(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(524, (void*)this, x)) return;
	this->QButtonGroup::setButton(x1);
    }
    virtual void setCaption(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11561, (void*)this, x)) return;
	this->QWidget::setCaption(x1);
    }
    virtual void setColumnLayout(int x1, Qt::Orientation x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_enum = x2;
	if(qt_Smoke->binding->callMethod(3830, (void*)this, x)) return;
	this->QGroupBox::setColumnLayout(x1, x2);
    }
    virtual void setCursor(const QCursor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11482, (void*)this, x)) return;
	this->QWidget::setCursor(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11559, (void*)this, x)) return;
	this->QWidget::setEnabled(x1);
    }
    virtual void setEraseColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11459, (void*)this, x)) return;
	this->QWidget::setEraseColor(x1);
    }
    virtual void setErasePixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11461, (void*)this, x)) return;
	this->QWidget::setErasePixmap(x1);
    }
    virtual void setExclusive(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(516, (void*)this, x)) return;
	this->QButtonGroup::setExclusive(x1);
    }
    virtual void setFocus() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11565, (void*)this, x)) return;
	this->QWidget::setFocus();
    }
    virtual void setFocusPolicy(QWidget::FocusPolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_enum = x1;
	if(qt_Smoke->binding->callMethod(11500, (void*)this, x)) return;
	this->QWidget::setFocusPolicy(x1);
    }
    virtual void setFocusProxy(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11502, (void*)this, x)) return;
	this->QWidget::setFocusProxy(x1);
    }
    virtual void setFont(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11476, (void*)this, x)) return;
	this->QWidget::setFont(x1);
    }
    virtual void setFrameRect(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(3502, (void*)this, x)) return;
	this->QFrame::setFrameRect(x1);
    }
    virtual void setFrameStyle(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(3486, (void*)this, x)) return;
	this->QFrame::setFrameStyle(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11597, (void*)this, x)) return;
	this->QWidget::setGeometry(x1);
    }
    virtual void setGeometry(int x1, int x2, int x3, int x4) {
	Smoke::StackItem x[5];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	x[4].s_int = x4;
	if(qt_Smoke->binding->callMethod(11596, (void*)this, x)) return;
	this->QWidget::setGeometry(x1, x2, x3, x4);
    }
    virtual void setIcon(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11562, (void*)this, x)) return;
	this->QWidget::setIcon(x1);
    }
    virtual void setIconText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11563, (void*)this, x)) return;
	this->QWidget::setIconText(x1);
    }
    virtual void setKeyCompression(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11660, (void*)this, x)) return;
	this->QWidget::setKeyCompression(x1);
    }
    virtual void setLineWidth(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(3496, (void*)this, x)) return;
	this->QFrame::setLineWidth(x1);
    }
    virtual void setMargin(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(3498, (void*)this, x)) return;
	this->QFrame::setMargin(x1);
    }
    virtual void setMask(const QBitmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11489, (void*)this, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMask(const QRegion& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11490, (void*)this, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMaximumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11432, (void*)this, x)) return;
	this->QWidget::setMaximumSize(x1, x2);
    }
    virtual void setMicroFocusHint(int x1, int x2, int x3, int x4, bool x5, QFont* x6) {
	Smoke::StackItem x[7];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	x[4].s_int = x4;
	x[5].s_bool = x5;
	x[6].s_class = (void*)x6;
	if(qt_Smoke->binding->callMethod(11661, (void*)this, x)) return;
	this->QWidget::setMicroFocusHint(x1, x2, x3, x4, x5, x6);
    }
    virtual void setMidLineWidth(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(3500, (void*)this, x)) return;
	this->QFrame::setMidLineWidth(x1);
    }
    virtual void setMinimumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11430, (void*)this, x)) return;
	this->QWidget::setMinimumSize(x1, x2);
    }
    virtual void setMouseTracking(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11564, (void*)this, x)) return;
	this->QWidget::setMouseTracking(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(11399, (void*)this, x)) return;
	this->QWidget::setName(x1);
    }
    virtual void setPalette(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11465, (void*)this, x)) return;
	this->QWidget::setPalette(x1);
    }
    virtual void setPaletteBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11470, (void*)this, x)) return;
	this->QWidget::setPaletteBackgroundColor(x1);
    }
    virtual void setPaletteBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11472, (void*)this, x)) return;
	this->QWidget::setPaletteBackgroundPixmap(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->binding->callMethod(6489, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setRadioButtonExclusive(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(517, (void*)this, x)) return;
	this->QButtonGroup::setRadioButtonExclusive(x1);
    }
    virtual void setResolution(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(6628, (void*)this, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    virtual void setSizeIncrement(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(11439, (void*)this, x)) return;
	this->QWidget::setSizeIncrement(x1, x2);
    }
    virtual void setSizePolicy(QSizePolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11521, (void*)this, x)) return;
	this->QWidget::setSizePolicy(x1);
    }
    virtual void setTitle(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(3832, (void*)this, x)) return;
	this->QGroupBox::setTitle(x1);
    }
    virtual void setUpdatesEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11567, (void*)this, x)) return;
	this->QWidget::setUpdatesEnabled(x1);
    }
    virtual void setWFlags(Qt::WFlags x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(11654, (void*)this, x)) return;
	this->QWidget::setWFlags(x1);
    }
    virtual void setWState(uint x1) {
	Smoke::StackItem x[2];
	x[1].s_uint = x1;
	if(qt_Smoke->binding->callMethod(11651, (void*)this, x)) return;
	this->QWidget::setWState(x1);
    }
    virtual void show() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11579, (void*)this, x)) return;
	this->QWidget::show();
    }
    virtual void showEvent(QShowEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11633, (void*)this, x)) return;
	this->QWidget::showEvent(x1);
    }
    virtual void showMaximized() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11583, (void*)this, x)) return;
	this->QWidget::showMaximized();
    }
    virtual void showMinimized() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11582, (void*)this, x)) return;
	this->QWidget::showMinimized();
    }
    virtual void showNormal() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11585, (void*)this, x)) return;
	this->QWidget::showNormal();
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(3844, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QGroupBox::sizeHint();
    }
    virtual QSizePolicy sizePolicy() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11520, (void*)this, x)) {
	    QSizePolicy *xptr = (QSizePolicy *)x[0].s_class;
	    QSizePolicy xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::sizePolicy();
    }
    virtual void styleChange(QStyle& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(11636, (void*)this, x)) return;
	this->QWidget::styleChange(x1);
    }
    virtual void tabletEvent(QTabletEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11628, (void*)this, x)) return;
	this->QWidget::tabletEvent(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6514, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void unsetCursor() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11483, (void*)this, x)) return;
	this->QWidget::unsetCursor();
    }
    virtual void updateMask() {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(11635, (void*)this, x)) return;
	this->QWidget::updateMask();
    }
    virtual void wheelEvent(QWheelEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(11613, (void*)this, x)) return;
	this->QWidget::wheelEvent(x1);
    }
    virtual void windowActivationChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(11640, (void*)this, x)) return;
	this->QWidget::windowActivationChange(x1);
    }
    ~x_QButtonGroup() { qt_Smoke->binding->deleted(17, (void*)this); }
};
void xcall_QButtonGroup(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QButtonGroup *xself = (x_QButtonGroup*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: x_QButtonGroup::x_7(args);	break;
	case 8: x_QButtonGroup::x_8(args);	break;
	case 9: x_QButtonGroup::x_9(args);	break;
	case 10: x_QButtonGroup::x_10(args);	break;
	case 11: x_QButtonGroup::x_11(args);	break;
	case 12: x_QButtonGroup::x_12(args);	break;
	case 13: x_QButtonGroup::x_13(args);	break;
	case 14: x_QButtonGroup::x_14(args);	break;
	case 15: x_QButtonGroup::x_15(args);	break;
	case 16: x_QButtonGroup::x_16(args);	break;
	case 17: x_QButtonGroup::x_17(args);	break;
	case 18: x_QButtonGroup::x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: xself->x_27(args);	break;
	case 28: xself->x_28(args);	break;
	case 29: xself->x_29(args);	break;
	case 30: xself->x_30(args);	break;
	case 31: xself->x_31(args);	break;
	case 32: xself->x_32(args);	break;
	case 33: xself->x_33(args);	break;
	case 34: xself->x_34(args);	break;
	case 35: x_QButtonGroup::x_35(args);	break;
	case 36: x_QButtonGroup::x_36(args);	break;
	case 37: x_QButtonGroup::x_37(args);	break;
	case 38: x_QButtonGroup::x_38(args);	break;
	case 39: x_QButtonGroup::x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: xself->x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: delete (QButtonGroup*)xself;	break;
    }
}
