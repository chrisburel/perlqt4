//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qcolor.h>
#include <qcursor.h>
#include <qfont.h>
#include <qstring.h>
#include <qsize.h>
#include <qsessionmanager.h>
#include <qvariant.h>
#include <qpalette.h>
#include <qfontmetrics.h>
#include <qnamespace.h>
#include <qstringlist.h>
#include <qapplication.h>
#include <qstyle.h>

class x_QApplication : public QApplication {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QApplication::Tty;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QApplication::GuiClient;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QApplication::GuiServer;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QApplication::NormalColors;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QApplication::CustomColors;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QApplication::NormalColor;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_enum = (long)QApplication::CustomColor;
    }
    static void x_7(Smoke::Stack x) {
	x[0].s_enum = (long)QApplication::ManyColor;
    }
    static void x_8(Smoke::Stack x) {
	x[0].s_enum = (long)QApplication::DefaultCodec;
    }
    static void x_9(Smoke::Stack x) {
	x[0].s_enum = (long)QApplication::UnicodeUTF8;
    }
    void x_10(Smoke::Stack x) const {
	// metaObject()
	QMetaObject* xret = this->QApplication::metaObject();
	x[0].s_class = (void*)xret;
    }
    void x_11(Smoke::Stack x) const {
	// className()
	const char* xret = this->QApplication::className();
	x[0].s_voidp = (void*)xret;
    }
    void x_12(Smoke::Stack x) {
	// qt_cast(const char*)
	void* xret = this->QApplication::qt_cast((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_13(Smoke::Stack x) {
	// qt_invoke(int, QUObject*)
	bool xret = this->QApplication::qt_invoke((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_14(Smoke::Stack x) {
	// qt_emit(int, QUObject*)
	bool xret = this->QApplication::qt_emit((int)x[1].s_int,(QUObject*)x[2].s_voidp);
	x[0].s_bool = xret;
    }
    void x_15(Smoke::Stack x) {
	// qt_property(int, int, QVariant*)
	bool xret = this->QApplication::qt_property((int)x[1].s_int,(int)x[2].s_int,(QVariant*)x[3].s_class);
	x[0].s_bool = xret;
    }
    void x_16(Smoke::Stack x) {
	// qObject()
	QObject* xret = this->QApplication::qObject();
	x[0].s_class = (void*)xret;
    }
    static void x_17(Smoke::Stack x) {
	// QApplication(int&, char**)
	x_QApplication* xret = new x_QApplication(*(int *)x[1].s_voidp,(char**)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QApplication(int& x1, char** x2) : QApplication(x1, x2) {
    }
    static void x_18(Smoke::Stack x) {
	// QApplication(int&, char**, bool)
	x_QApplication* xret = new x_QApplication(*(int *)x[1].s_voidp,(char**)x[2].s_voidp,(bool)x[3].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QApplication(int& x1, char** x2, bool x3) : QApplication(x1, x2, x3) {
    }
    static void x_19(Smoke::Stack x) {
	// QApplication(int&, char**, QApplication::Type)
	x_QApplication* xret = new x_QApplication(*(int *)x[1].s_voidp,(char**)x[2].s_voidp,(QApplication::Type)x[3].s_enum);
	x[0].s_class = (void*)xret;
    }
    x_QApplication(int& x1, char** x2, QApplication::Type x3) : QApplication(x1, x2, x3) {
    }
    void x_20(Smoke::Stack x) const {
	// argc()
	int xret = this->QApplication::argc();
	x[0].s_int = xret;
    }
    void x_21(Smoke::Stack x) const {
	// argv()
	char** xret = this->QApplication::argv();
	x[0].s_voidp = (void*)xret;
    }
    void x_22(Smoke::Stack x) const {
	// type()
	QApplication::Type xret = this->QApplication::type();
	x[0].s_enum = xret;
    }
    void x_23(Smoke::Stack x) const {
	// mainWidget()
	QWidget* xret = this->QApplication::mainWidget();
	x[0].s_class = (void*)xret;
    }
    void x_24(Smoke::Stack x) {
	// setMainWidget(QWidget*)
	this->QApplication::setMainWidget((QWidget*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_25(Smoke::Stack x) {
	// polish(QWidget*)
	this->QApplication::polish((QWidget*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_26(Smoke::Stack x) const {
	// focusWidget()
	QWidget* xret = this->QApplication::focusWidget();
	x[0].s_class = (void*)xret;
    }
    void x_27(Smoke::Stack x) const {
	// activeWindow()
	QWidget* xret = this->QApplication::activeWindow();
	x[0].s_class = (void*)xret;
    }
    void x_28(Smoke::Stack x) {
	// exec()
	int xret = this->QApplication::exec();
	x[0].s_int = xret;
    }
    void x_29(Smoke::Stack x) {
	// processEvents()
	this->QApplication::processEvents();
	(void)x; // noop (for compiler warning)
    }
    void x_30(Smoke::Stack x) {
	// processEvents(int)
	this->QApplication::processEvents((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    void x_31(Smoke::Stack x) {
	// processOneEvent()
	this->QApplication::processOneEvent();
	(void)x; // noop (for compiler warning)
    }
    void x_32(Smoke::Stack x) {
	// hasPendingEvents()
	bool xret = this->QApplication::hasPendingEvents();
	x[0].s_bool = xret;
    }
    void x_33(Smoke::Stack x) {
	// enter_loop()
	int xret = this->QApplication::enter_loop();
	x[0].s_int = xret;
    }
    void x_34(Smoke::Stack x) {
	// exit_loop()
	this->QApplication::exit_loop();
	(void)x; // noop (for compiler warning)
    }
    void x_35(Smoke::Stack x) const {
	// loopLevel()
	int xret = this->QApplication::loopLevel();
	x[0].s_int = xret;
    }
    void x_36(Smoke::Stack x) {
	// notify(QObject*, QEvent*)
	bool xret = this->QApplication::notify((QObject*)x[1].s_class,(QEvent*)x[2].s_class);
	x[0].s_bool = xret;
    }
    void x_37(Smoke::Stack x) {
	// setDefaultCodec(QTextCodec*)
	this->QApplication::setDefaultCodec((QTextCodec*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_38(Smoke::Stack x) const {
	// defaultCodec()
	QTextCodec* xret = this->QApplication::defaultCodec();
	x[0].s_class = (void*)xret;
    }
    void x_39(Smoke::Stack x) {
	// installTranslator(QTranslator*)
	this->QApplication::installTranslator((QTranslator*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_40(Smoke::Stack x) {
	// removeTranslator(QTranslator*)
	this->QApplication::removeTranslator((QTranslator*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_41(Smoke::Stack x) const {
	// translate(const char*, const char*, const char*, QApplication::Encoding)
	QString xret = this->QApplication::translate((const char*)x[1].s_voidp,(const char*)x[2].s_voidp,(const char*)x[3].s_voidp,(QApplication::Encoding)x[4].s_enum);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_42(Smoke::Stack x) const {
	// translate(const char*, const char*, const char*)
	QString xret = this->QApplication::translate((const char*)x[1].s_voidp,(const char*)x[2].s_voidp,(const char*)x[3].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_43(Smoke::Stack x) const {
	// translate(const char*, const char*)
	QString xret = this->QApplication::translate((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_44(Smoke::Stack x) const {
	// isSessionRestored()
	bool xret = this->QApplication::isSessionRestored();
	x[0].s_bool = xret;
    }
    void x_45(Smoke::Stack x) const {
	// sessionId()
	QString xret = this->QApplication::sessionId();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_46(Smoke::Stack x) {
	// commitData(QSessionManager&)
	this->QApplication::commitData(*(QSessionManager *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_47(Smoke::Stack x) {
	// saveState(QSessionManager&)
	this->QApplication::saveState(*(QSessionManager *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_48(Smoke::Stack x) {
	// wakeUpGuiThread()
	this->QApplication::wakeUpGuiThread();
	(void)x; // noop (for compiler warning)
    }
    void x_49(Smoke::Stack x) {
	// quit()
	this->QApplication::quit();
	(void)x; // noop (for compiler warning)
    }
    void x_50(Smoke::Stack x) {
	// closeAllWindows()
	this->QApplication::closeAllWindows();
	(void)x; // noop (for compiler warning)
    }
    void x_51(Smoke::Stack x) {
	// lastWindowClosed()
	this->QApplication::lastWindowClosed();
	(void)x; // noop (for compiler warning)
    }
    void x_52(Smoke::Stack x) {
	// aboutToQuit()
	this->QApplication::aboutToQuit();
	(void)x; // noop (for compiler warning)
    }
    void x_53(Smoke::Stack x) {
	// guiThreadAwake()
	this->QApplication::guiThreadAwake();
	(void)x; // noop (for compiler warning)
    }
    static void x_54(Smoke::Stack x) {
	// staticMetaObject()
	QMetaObject* xret = QApplication::staticMetaObject();
	x[0].s_class = (void*)xret;
    }
    static void x_55(Smoke::Stack x) {
	// tr(const char*, const char*)
	QString xret = QApplication::tr((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_56(Smoke::Stack x) {
	// tr(const char*)
	QString xret = QApplication::tr((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_57(Smoke::Stack x) {
	// trUtf8(const char*, const char*)
	QString xret = QApplication::trUtf8((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_58(Smoke::Stack x) {
	// trUtf8(const char*)
	QString xret = QApplication::trUtf8((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    static void x_59(Smoke::Stack x) {
	// style()
	QStyle& xret = QApplication::style();
	x[0].s_class = (void*)&xret;
    }
    static void x_60(Smoke::Stack x) {
	// setStyle(QStyle*)
	QApplication::setStyle((QStyle*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    static void x_61(Smoke::Stack x) {
	// setStyle(const QString&)
	QStyle* xret = QApplication::setStyle(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    static void x_62(Smoke::Stack x) {
	// colorMode()
	QApplication::ColorMode xret = QApplication::colorMode();
	x[0].s_enum = xret;
    }
    static void x_63(Smoke::Stack x) {
	// setColorMode(QApplication::ColorMode)
	QApplication::setColorMode((QApplication::ColorMode)x[1].s_enum);
	(void)x; // noop (for compiler warning)
    }
    static void x_64(Smoke::Stack x) {
	// colorSpec()
	int xret = QApplication::colorSpec();
	x[0].s_int = xret;
    }
    static void x_65(Smoke::Stack x) {
	// setColorSpec(int)
	QApplication::setColorSpec((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    static void x_66(Smoke::Stack x) {
	// overrideCursor()
	QCursor* xret = QApplication::overrideCursor();
	x[0].s_class = (void*)xret;
    }
    static void x_67(Smoke::Stack x) {
	// setOverrideCursor(const QCursor&, bool)
	QApplication::setOverrideCursor(*(const QCursor *)x[1].s_class,(bool)x[2].s_bool);
	(void)x; // noop (for compiler warning)
    }
    static void x_68(Smoke::Stack x) {
	// setOverrideCursor(const QCursor&)
	QApplication::setOverrideCursor(*(const QCursor *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    static void x_69(Smoke::Stack x) {
	// restoreOverrideCursor()
	QApplication::restoreOverrideCursor();
	(void)x; // noop (for compiler warning)
    }
    static void x_70(Smoke::Stack x) {
	// hasGlobalMouseTracking()
	bool xret = QApplication::hasGlobalMouseTracking();
	x[0].s_bool = xret;
    }
    static void x_71(Smoke::Stack x) {
	// setGlobalMouseTracking(bool)
	QApplication::setGlobalMouseTracking((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    static void x_72(Smoke::Stack x) {
	// palette(const QWidget*)
	QPalette xret = QApplication::palette((const QWidget*)x[1].s_class);
	x[0].s_class = (void*)new QPalette(xret);
    }
    static void x_73(Smoke::Stack x) {
	// palette()
	QPalette xret = QApplication::palette();
	x[0].s_class = (void*)new QPalette(xret);
    }
    static void x_74(Smoke::Stack x) {
	// setPalette(const QPalette&, bool, const char*)
	QApplication::setPalette(*(const QPalette *)x[1].s_class,(bool)x[2].s_bool,(const char*)x[3].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    static void x_75(Smoke::Stack x) {
	// setPalette(const QPalette&, bool)
	QApplication::setPalette(*(const QPalette *)x[1].s_class,(bool)x[2].s_bool);
	(void)x; // noop (for compiler warning)
    }
    static void x_76(Smoke::Stack x) {
	// setPalette(const QPalette&)
	QApplication::setPalette(*(const QPalette *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    static void x_77(Smoke::Stack x) {
	// font(const QWidget*)
	QFont xret = QApplication::font((const QWidget*)x[1].s_class);
	x[0].s_class = (void*)new QFont(xret);
    }
    static void x_78(Smoke::Stack x) {
	// font()
	QFont xret = QApplication::font();
	x[0].s_class = (void*)new QFont(xret);
    }
    static void x_79(Smoke::Stack x) {
	// setFont(const QFont&, bool, const char*)
	QApplication::setFont(*(const QFont *)x[1].s_class,(bool)x[2].s_bool,(const char*)x[3].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    static void x_80(Smoke::Stack x) {
	// setFont(const QFont&, bool)
	QApplication::setFont(*(const QFont *)x[1].s_class,(bool)x[2].s_bool);
	(void)x; // noop (for compiler warning)
    }
    static void x_81(Smoke::Stack x) {
	// setFont(const QFont&)
	QApplication::setFont(*(const QFont *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    static void x_82(Smoke::Stack x) {
	// fontMetrics()
	QFontMetrics xret = QApplication::fontMetrics();
	x[0].s_class = (void*)new QFontMetrics(xret);
    }
    static void x_83(Smoke::Stack x) {
	// allWidgets()
	QWidgetList* xret = QApplication::allWidgets();
	x[0].s_class = (void*)xret;
    }
    static void x_84(Smoke::Stack x) {
	// topLevelWidgets()
	QWidgetList* xret = QApplication::topLevelWidgets();
	x[0].s_class = (void*)xret;
    }
    static void x_85(Smoke::Stack x) {
	// desktop()
	QDesktopWidget* xret = QApplication::desktop();
	x[0].s_class = (void*)xret;
    }
    static void x_86(Smoke::Stack x) {
	// activePopupWidget()
	QWidget* xret = QApplication::activePopupWidget();
	x[0].s_class = (void*)xret;
    }
    static void x_87(Smoke::Stack x) {
	// activeModalWidget()
	QWidget* xret = QApplication::activeModalWidget();
	x[0].s_class = (void*)xret;
    }
    static void x_88(Smoke::Stack x) {
	// clipboard()
	QClipboard* xret = QApplication::clipboard();
	x[0].s_class = (void*)xret;
    }
    static void x_89(Smoke::Stack x) {
	// widgetAt(int, int, bool)
	QWidget* xret = QApplication::widgetAt((int)x[1].s_int,(int)x[2].s_int,(bool)x[3].s_bool);
	x[0].s_class = (void*)xret;
    }
    static void x_90(Smoke::Stack x) {
	// widgetAt(int, int)
	QWidget* xret = QApplication::widgetAt((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    static void x_91(Smoke::Stack x) {
	// widgetAt(const QPoint&, bool)
	QWidget* xret = QApplication::widgetAt(*(const QPoint *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_class = (void*)xret;
    }
    static void x_92(Smoke::Stack x) {
	// widgetAt(const QPoint&)
	QWidget* xret = QApplication::widgetAt(*(const QPoint *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    static void x_93(Smoke::Stack x) {
	// exit(int)
	QApplication::exit((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    static void x_94(Smoke::Stack x) {
	// exit()
	QApplication::exit();
	(void)x; // noop (for compiler warning)
    }
    static void x_95(Smoke::Stack x) {
	// sendEvent(QObject*, QEvent*)
	bool xret = QApplication::sendEvent((QObject*)x[1].s_class,(QEvent*)x[2].s_class);
	x[0].s_bool = xret;
    }
    static void x_96(Smoke::Stack x) {
	// postEvent(QObject*, QEvent*)
	QApplication::postEvent((QObject*)x[1].s_class,(QEvent*)x[2].s_class);
	(void)x; // noop (for compiler warning)
    }
    static void x_97(Smoke::Stack x) {
	// sendPostedEvents(QObject*, int)
	QApplication::sendPostedEvents((QObject*)x[1].s_class,(int)x[2].s_int);
	(void)x; // noop (for compiler warning)
    }
    static void x_98(Smoke::Stack x) {
	// sendPostedEvents()
	QApplication::sendPostedEvents();
	(void)x; // noop (for compiler warning)
    }
    static void x_99(Smoke::Stack x) {
	// removePostedEvents(QObject*)
	QApplication::removePostedEvents((QObject*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    static void x_100(Smoke::Stack x) {
	// startingUp()
	bool xret = QApplication::startingUp();
	x[0].s_bool = xret;
    }
    static void x_101(Smoke::Stack x) {
	// closingDown()
	bool xret = QApplication::closingDown();
	x[0].s_bool = xret;
    }
    static void x_102(Smoke::Stack x) {
	// flushX()
	QApplication::flushX();
	(void)x; // noop (for compiler warning)
    }
    static void x_103(Smoke::Stack x) {
	// flush()
	QApplication::flush();
	(void)x; // noop (for compiler warning)
    }
    static void x_104(Smoke::Stack x) {
	// syncX()
	QApplication::syncX();
	(void)x; // noop (for compiler warning)
    }
    static void x_105(Smoke::Stack x) {
	// beep()
	QApplication::beep();
	(void)x; // noop (for compiler warning)
    }
    static void x_106(Smoke::Stack x) {
	// setWinStyleHighlightColor(const QColor&)
	QApplication::setWinStyleHighlightColor(*(const QColor *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    static void x_107(Smoke::Stack x) {
	// winStyleHighlightColor()
	const QColor& xret = QApplication::winStyleHighlightColor();
	x[0].s_class = (void*)&xret;
    }
    static void x_108(Smoke::Stack x) {
	// setDesktopSettingsAware(bool)
	QApplication::setDesktopSettingsAware((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    static void x_109(Smoke::Stack x) {
	// desktopSettingsAware()
	bool xret = QApplication::desktopSettingsAware();
	x[0].s_bool = xret;
    }
    static void x_110(Smoke::Stack x) {
	// setCursorFlashTime(int)
	QApplication::setCursorFlashTime((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    static void x_111(Smoke::Stack x) {
	// cursorFlashTime()
	int xret = QApplication::cursorFlashTime();
	x[0].s_int = xret;
    }
    static void x_112(Smoke::Stack x) {
	// setDoubleClickInterval(int)
	QApplication::setDoubleClickInterval((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    static void x_113(Smoke::Stack x) {
	// doubleClickInterval()
	int xret = QApplication::doubleClickInterval();
	x[0].s_int = xret;
    }
    static void x_114(Smoke::Stack x) {
	// setWheelScrollLines(int)
	QApplication::setWheelScrollLines((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    static void x_115(Smoke::Stack x) {
	// wheelScrollLines()
	int xret = QApplication::wheelScrollLines();
	x[0].s_int = xret;
    }
    static void x_116(Smoke::Stack x) {
	// setGlobalStrut(const QSize&)
	QApplication::setGlobalStrut(*(const QSize *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    static void x_117(Smoke::Stack x) {
	// globalStrut()
	QSize xret = QApplication::globalStrut();
	x[0].s_class = (void*)new QSize(xret);
    }
    static void x_118(Smoke::Stack x) {
	// setLibraryPaths(const QStringList&)
	QApplication::setLibraryPaths(*(const QStringList *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    static void x_119(Smoke::Stack x) {
	// libraryPaths()
	QStringList xret = QApplication::libraryPaths();
	x[0].s_voidp = (void*)new QStringList(xret);
    }
    static void x_120(Smoke::Stack x) {
	// addLibraryPath(const QString&)
	QApplication::addLibraryPath(*(const QString *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    static void x_121(Smoke::Stack x) {
	// removeLibraryPath(const QString&)
	QApplication::removeLibraryPath(*(const QString *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    static void x_122(Smoke::Stack x) {
	// setStartDragTime(int)
	QApplication::setStartDragTime((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    static void x_123(Smoke::Stack x) {
	// startDragTime()
	int xret = QApplication::startDragTime();
	x[0].s_int = xret;
    }
    static void x_124(Smoke::Stack x) {
	// setStartDragDistance(int)
	QApplication::setStartDragDistance((int)x[1].s_int);
	(void)x; // noop (for compiler warning)
    }
    static void x_125(Smoke::Stack x) {
	// startDragDistance()
	int xret = QApplication::startDragDistance();
	x[0].s_int = xret;
    }
    static void x_126(Smoke::Stack x) {
	// setReverseLayout(bool)
	QApplication::setReverseLayout((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    static void x_127(Smoke::Stack x) {
	// reverseLayout()
	bool xret = QApplication::reverseLayout();
	x[0].s_bool = xret;
    }
    static void x_128(Smoke::Stack x) {
	// horizontalAlignment(int)
	int xret = QApplication::horizontalAlignment((int)x[1].s_int);
	x[0].s_int = xret;
    }
    static void x_129(Smoke::Stack x) {
	// isEffectEnabled(Qt::UIEffect)
	bool xret = QApplication::isEffectEnabled((Qt::UIEffect)x[1].s_enum);
	x[0].s_bool = xret;
    }
    static void x_130(Smoke::Stack x) {
	// setEffectEnabled(Qt::UIEffect, bool)
	QApplication::setEffectEnabled((Qt::UIEffect)x[1].s_enum,(bool)x[2].s_bool);
	(void)x; // noop (for compiler warning)
    }
    static void x_131(Smoke::Stack x) {
	// setEffectEnabled(Qt::UIEffect)
	QApplication::setEffectEnabled((Qt::UIEffect)x[1].s_enum);
	(void)x; // noop (for compiler warning)
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
	if(qt_Smoke->binding->callMethod(137, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QApplication::className();
    }
    virtual void commitData(QSessionManager& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(173, (void*)this, x)) return;
	this->QApplication::commitData(x1);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(6517, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
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
    virtual QMetaObject* metaObject() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(136, (void*)this, x)) return (QMetaObject*)x[0].s_class;
	return this->QApplication::metaObject();
    }
    virtual bool notify(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->binding->callMethod(163, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QApplication::notify(x1, x2);
    }
    virtual void polish(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(152, (void*)this, x)) return;
	this->QApplication::polish(x1);
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
	if(qt_Smoke->binding->callMethod(138, (void*)this, x)) return (void*)x[0].s_voidp;
	return this->QApplication::qt_cast(x1);
    }
    virtual bool qt_emit(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(140, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QApplication::qt_emit(x1, x2);
    }
    virtual bool qt_invoke(int x1, QUObject* x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_voidp = (void*)x2;
	if(qt_Smoke->binding->callMethod(139, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QApplication::qt_invoke(x1, x2);
    }
    virtual bool qt_property(int x1, int x2, QVariant* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = x1;
	x[2].s_int = x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->binding->callMethod(141, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QApplication::qt_property(x1, x2, x3);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(6477, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void saveState(QSessionManager& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(174, (void*)this, x)) return;
	this->QApplication::saveState(x1);
    }
    virtual void setMainWidget(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(151, (void*)this, x)) return;
	this->QApplication::setMainWidget(x1);
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
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 7: //QApplication::ColorSpec
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QApplication::ColorSpec;
		break;
	      case Smoke::EnumDelete:
		delete (QApplication::ColorSpec*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QApplication::ColorSpec*)xdata = (QApplication::ColorSpec)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QApplication::ColorSpec*)xdata;
		break;
	    }
	    break;
	  case 6: //QApplication::ColorMode
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QApplication::ColorMode;
		break;
	      case Smoke::EnumDelete:
		delete (QApplication::ColorMode*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QApplication::ColorMode*)xdata = (QApplication::ColorMode)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QApplication::ColorMode*)xdata;
		break;
	    }
	    break;
	  case 9: //QApplication::Type
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QApplication::Type;
		break;
	      case Smoke::EnumDelete:
		delete (QApplication::Type*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QApplication::Type*)xdata = (QApplication::Type)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QApplication::Type*)xdata;
		break;
	    }
	    break;
	  case 8: //QApplication::Encoding
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QApplication::Encoding;
		break;
	      case Smoke::EnumDelete:
		delete (QApplication::Encoding*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QApplication::Encoding*)xdata = (QApplication::Encoding)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QApplication::Encoding*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QApplication() { qt_Smoke->binding->deleted(4, (void*)this); }
};
void xenum_QApplication(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QApplication::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QApplication(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QApplication *xself = (x_QApplication*)obj;
    switch(xi) {
	case 0: x_QApplication::x_0(args);	break;
	case 1: x_QApplication::x_1(args);	break;
	case 2: x_QApplication::x_2(args);	break;
	case 3: x_QApplication::x_3(args);	break;
	case 4: x_QApplication::x_4(args);	break;
	case 5: x_QApplication::x_5(args);	break;
	case 6: x_QApplication::x_6(args);	break;
	case 7: x_QApplication::x_7(args);	break;
	case 8: x_QApplication::x_8(args);	break;
	case 9: x_QApplication::x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: x_QApplication::x_17(args);	break;
	case 18: x_QApplication::x_18(args);	break;
	case 19: x_QApplication::x_19(args);	break;
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
	case 35: xself->x_35(args);	break;
	case 36: xself->x_36(args);	break;
	case 37: xself->x_37(args);	break;
	case 38: xself->x_38(args);	break;
	case 39: xself->x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: xself->x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: xself->x_44(args);	break;
	case 45: xself->x_45(args);	break;
	case 46: xself->x_46(args);	break;
	case 47: xself->x_47(args);	break;
	case 48: xself->x_48(args);	break;
	case 49: xself->x_49(args);	break;
	case 50: xself->x_50(args);	break;
	case 51: xself->x_51(args);	break;
	case 52: xself->x_52(args);	break;
	case 53: xself->x_53(args);	break;
	case 54: x_QApplication::x_54(args);	break;
	case 55: x_QApplication::x_55(args);	break;
	case 56: x_QApplication::x_56(args);	break;
	case 57: x_QApplication::x_57(args);	break;
	case 58: x_QApplication::x_58(args);	break;
	case 59: x_QApplication::x_59(args);	break;
	case 60: x_QApplication::x_60(args);	break;
	case 61: x_QApplication::x_61(args);	break;
	case 62: x_QApplication::x_62(args);	break;
	case 63: x_QApplication::x_63(args);	break;
	case 64: x_QApplication::x_64(args);	break;
	case 65: x_QApplication::x_65(args);	break;
	case 66: x_QApplication::x_66(args);	break;
	case 67: x_QApplication::x_67(args);	break;
	case 68: x_QApplication::x_68(args);	break;
	case 69: x_QApplication::x_69(args);	break;
	case 70: x_QApplication::x_70(args);	break;
	case 71: x_QApplication::x_71(args);	break;
	case 72: x_QApplication::x_72(args);	break;
	case 73: x_QApplication::x_73(args);	break;
	case 74: x_QApplication::x_74(args);	break;
	case 75: x_QApplication::x_75(args);	break;
	case 76: x_QApplication::x_76(args);	break;
	case 77: x_QApplication::x_77(args);	break;
	case 78: x_QApplication::x_78(args);	break;
	case 79: x_QApplication::x_79(args);	break;
	case 80: x_QApplication::x_80(args);	break;
	case 81: x_QApplication::x_81(args);	break;
	case 82: x_QApplication::x_82(args);	break;
	case 83: x_QApplication::x_83(args);	break;
	case 84: x_QApplication::x_84(args);	break;
	case 85: x_QApplication::x_85(args);	break;
	case 86: x_QApplication::x_86(args);	break;
	case 87: x_QApplication::x_87(args);	break;
	case 88: x_QApplication::x_88(args);	break;
	case 89: x_QApplication::x_89(args);	break;
	case 90: x_QApplication::x_90(args);	break;
	case 91: x_QApplication::x_91(args);	break;
	case 92: x_QApplication::x_92(args);	break;
	case 93: x_QApplication::x_93(args);	break;
	case 94: x_QApplication::x_94(args);	break;
	case 95: x_QApplication::x_95(args);	break;
	case 96: x_QApplication::x_96(args);	break;
	case 97: x_QApplication::x_97(args);	break;
	case 98: x_QApplication::x_98(args);	break;
	case 99: x_QApplication::x_99(args);	break;
	case 100: x_QApplication::x_100(args);	break;
	case 101: x_QApplication::x_101(args);	break;
	case 102: x_QApplication::x_102(args);	break;
	case 103: x_QApplication::x_103(args);	break;
	case 104: x_QApplication::x_104(args);	break;
	case 105: x_QApplication::x_105(args);	break;
	case 106: x_QApplication::x_106(args);	break;
	case 107: x_QApplication::x_107(args);	break;
	case 108: x_QApplication::x_108(args);	break;
	case 109: x_QApplication::x_109(args);	break;
	case 110: x_QApplication::x_110(args);	break;
	case 111: x_QApplication::x_111(args);	break;
	case 112: x_QApplication::x_112(args);	break;
	case 113: x_QApplication::x_113(args);	break;
	case 114: x_QApplication::x_114(args);	break;
	case 115: x_QApplication::x_115(args);	break;
	case 116: x_QApplication::x_116(args);	break;
	case 117: x_QApplication::x_117(args);	break;
	case 118: x_QApplication::x_118(args);	break;
	case 119: x_QApplication::x_119(args);	break;
	case 120: x_QApplication::x_120(args);	break;
	case 121: x_QApplication::x_121(args);	break;
	case 122: x_QApplication::x_122(args);	break;
	case 123: x_QApplication::x_123(args);	break;
	case 124: x_QApplication::x_124(args);	break;
	case 125: x_QApplication::x_125(args);	break;
	case 126: x_QApplication::x_126(args);	break;
	case 127: x_QApplication::x_127(args);	break;
	case 128: x_QApplication::x_128(args);	break;
	case 129: x_QApplication::x_129(args);	break;
	case 130: x_QApplication::x_130(args);	break;
	case 131: x_QApplication::x_131(args);	break;
	case 132: delete (QApplication*)xself;	break;
    }
}
