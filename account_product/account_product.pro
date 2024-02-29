QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    category.cpp \
    contractors.cpp \
    database.cpp \
    enter.cpp \
    goods.cpp \
    iadd.cpp \
    idelete.cpp \
    information_goods.cpp \
    iread.cpp \
    iremove.cpp \
    main.cpp \
    mainwindow.cpp \
    orders.cpp \
    rigts.cpp \
    role.cpp \
    shipment.cpp \
    status_good.cpp \
    status_order.cpp \
    units_of_measurement.cpp \
    user.cpp

HEADERS += \
    category.h \
    contractors.h \
    database.h \
    enter.h \
    goods.h \
    iadd.h \
    idelete.h \
    information_goods.h \
    iread.h \
    iremove.h \
    mainwindow.h \
    orders.h \
    rigts.h \
    role.h \
    shipment.h \
    status_good.h \
    status_order.h \
    units_of_measurement.h \
    user.h

FORMS += \
    enter.ui \
    information_goods.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc



