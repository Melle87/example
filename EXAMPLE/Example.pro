
VERSION_MAJOR = 1
VERSION_MINOR = 2


DEFINES += "VERSION_MAJOR=$$VERSION_MAJOR"\
           "VERSION_MINOR=$$VERSION_MINOR"

TEMPLATE = app

QT += core gui serialport serialbus network sql qml quick widgets dbus multimedia multimediawidgets printsupport

CONFIG += c++11

SOURCES += \
    main.cpp \
    example.cpp \
    guiPropertiesInterface.cpp \
    dataManager.cpp

HEADERS  += \
    main.h \
    example.h \
    guiPropertiesInterface.h \
    dataManager.h

RESOURCES += \
    Example.qrc

TARGET = Example
target.files = Example
target.path = /home/pi/Example

INSTALLS = target
