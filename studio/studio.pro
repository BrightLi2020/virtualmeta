QT += core gui widgets

TARGET = MetaStudio

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

DESTDIR = $$PWD/../build
MOC_DIR = $$PWD/../build/moc/$${TARGET}
OBJECTS_DIR = $$PWD/../build/obj/$${TARGET}
LIBS += -L$$PWD/../build

RC_ICONS = res/logo.ico

INCLUDEPATH += \
    ../libmeta/include

SOURCES += \
    src/main.cpp

LIBS += \
    -llibmeta


