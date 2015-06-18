# Description #
Perl bindings for the Qt4 and KDE4 libraries.  This project supplies a production-ready module that is similar in syntax to the PerlQt3 binding.

# Features #
  * Based on the Smoke library, so any method that Smoke wraps is supported.
  * Create Perl packages that subclass, extend, and override their C++ parents.
  * Create signals and slots: connect Qt defined signals to Perl subroutines, Perl defined signals to Qt slots, and Perl defined signals to Perl defined slots.
  * Signals and slots defined in parent packages inherit to their derived packages.
  * Create QVariants that contain arbitrary Perl hash or array references, allowing you to store Perl objects in those QVariants.

# Modules #
The current release available here, Qt-0.96.4, contains bindings to the following Qt modules:
  * QtCore
  * QtDBus
  * QtDeclarative
  * QtGui
  * QtHelp
  * QtMultimedia
  * QtNetwork
  * QtOpenGL
  * QtScript
  * QtSql
  * QtSvg
  * QtTest
  * QtUiTools
  * QtWebKit
  * QtXml
  * QtXmlPatterns
  * Phonon
  * Qt3Support

In addition to those above, Qt-0.96.4 contains bindings to the following Qt-based libraries:
  * QImageBlitz
  * [QScintilla](http://www.riverbankcomputing.co.uk/software/qscintilla/intro)
  * [Qwt](http://qwt.sourceforge.net)

There is currently no stand-alone release of PerlKDE.  However, the latest release of the kdebindings package contains bindings to the following KDE libraries:
  * KDECore
  * KDEUi
  * Akonadi
  * Attica
  * Kate
  * KDevPlatform
  * KFile
  * KHTML
  * KIO
  * KNewStuff2
  * KNewStuff3
  * KParts
  * KTextEditor
  * KUtils
  * Nepomuk
  * NepomukQuery
  * Okular
  * Plasma
  * Solid
  * Soprano
  * SopranoClient
  * SopranoServer

# Completion #
Currently, the completeness of the project is being measured by the percent of Qt examples (as of Qt 4.5.0) that have been translated to Perl and run identically to their C++ counterparts.  These examples in the perl/qtgui/examples directory, and are direct ports to Perl of the C++ examples that ship with the Qt library.  The release minor version corresponds to this number, and currently is about 96%.  See the status of each example [on the wiki](Qt_Examples_Status.md).

# Source code #
As of August 10, 2010, this project has been merged into KDE SC, as part of the kdebindings module.  This project page will continue to be updated to include Perl-only releases of the code maintained in the kdebindings module, as kdebindings contains Qt and KDE bindings for many languages.  Also, the Alien::SmokeQt and Alien::SmokeKDE Perl modules are maintained here, as they provide the necessary dependencies for the Qt and KDE Perl modules.