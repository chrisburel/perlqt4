# Introduction #

This document explains the various ways of acquiring and building PerlQt.

# Prerequisites #

You need the following to build PerlQt from source:
  * cmake
  * smokegen
  * smokeqt

## Smoke Libraries ##
PerlQt is built on top of a library called Smoke.  Smoke is a tool that parses C++ header files, and builds a wrapper interface to a library.  Previous releases of PerlQt required a module called Alien::SmokeQt that took care of downloading the necessary sources and compiling them.  The next release of PerlQt contains the smokeqt source, and will build it if no system-installed SmokeQt library is found.

# Binary releases #

Because PerlQt is part of KDE, most distributions package the SmokeQt libraries, and some distributions are now packaging PerlQt as well.  Check your package manager to see if they are available for your distribution.

## Fedora ##
PerlQt binary packages are not available, but smoke packages are:
```
yum install smokegen-devel smokeqt-devel
```

## OpenSUSE ##
PerlQt binary packages are not available, but smoke packages are:
```
zypper install libsmokegen-devel libsmokeqt-devel
```

# Getting the source code #
## CPAN ##
Coming soon

## Google Code Git ##
As of 2/13/2012, a version of PerlQt is available from Google Code's git repo.  This repo exists for the sole purpose of making stand-alone PerlQt releases (separate from PerlKDE or a KDE release).  It is more convenient, because it will build SmokeQt and PerlQt in one step, but is not guaranteed to be up to date with the KDE Git.  To build from Google Code's git:
```
git clone https://code.google.com/p/perlqt4/
cd perlqt4
mkdir build; cd build;
cmake ..
make
make install
```

The build process will detect if you have a system-installed version of smokegen and smokeqt, and will use those instead of building its internal copy if they are present.

## KDE Git ##
The source code for PerlQt is maintained primarily in [KDE's git repo](https://projects.kde.org/projects/kde/kdebindings/perl/perlqt/repository).  Downloading the code from there is the latest development version.  In KDE, smokegen and smokeqt into multiple submodules, so if you are building from the KDE sources, you need to download and install smokegen and smokeqt separately (assuming no binary packages are available from your distro).  To build from KDE sources, you would do this:
```
git clone git://anongit.kde.org/smokegen
git clone git://anongit.kde.org/smokeqt
git clone git://anongit.kde.org/perlqt

cd smokegen
mkdir build; cd build;
cmake ..
make
make install
cd ../..


cd smokeqt
mkdir build; cd build;
cmake ..
make
make install
cd ../..


cd perlqt
mkdir build; cd build;
cmake ..
make
make install
```