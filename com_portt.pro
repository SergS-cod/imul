QT       += core gui
QT += serialport
QT += core gui network serialport
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += serialport
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    display_m.cpp \
    main.cpp \
    mainwindow.cpp \
    port.cpp  \
    parameter.cpp  \
packet.cpp \
    tcp_server.cpp \
    conect.cpp

HEADERS += \
    display_m.h \
    mainwindow.h \
    port.h   \
   parameter.h  \
   packet.h \
    tcp_server.h \
    conect.h

FORMS += \
    display_m.ui \
    mainwindow.ui \
    conect.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
