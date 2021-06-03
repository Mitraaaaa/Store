QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    customer.cpp \
    main.cpp \
    main_page.cpp \
    mainwindow.cpp \
    products.cpp \
    read_files.cpp

HEADERS += \
    customer.h \
    main_page.h \
    mainwindow.h \
    products.h \
    read_files.h

FORMS += \
    main_page.ui \
    mainwindow.ui \
    read_files.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    recources.qrc