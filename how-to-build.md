# How to compile #

Only support in windows.

## Method 1 ##

refer to https://wiki.qt.io/Building_Qt_5_from_Git

## Method 2 ##

1. install vcpkg
2. use vcpkg to install qt modules

## Method 3 ##

1. download & install python2.7.
2. download & install visual studio 2019.
3. download & install StrawberryPerl 5.12 or later
4. clone code from this repository.
5. open "x64 Native Tools Command Prompt for VS 2019" in startup menu.
6. change directory to repository.
7. input
```
configure -opensource -confirm-license -platform win32-msvc -release -mp -qt-pcre -qt-freetype -qt-harfbuzz -qt-libpng -qt-libjpeg -no-sql-mysql -qt-sqlite -no-icu -nomake tests -nomake examples -prefix "%CD%\5.15.2\msvc2019_64" -skip qtdoc -skip qtquickcontrols -skip qtscript -skip qtxmlpatterns -skip qtwebengine
```
then press Enter.

8. input
```
nmake install
```
then press Enter. 