QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cryptohelper.cpp \
    fileinformation.cpp \
    main.cpp \
    mainwindow.cpp \
    new_file_on_action_dialog.cpp \
    newdirectorycreation.cpp \
    settingsdialog.cpp \
    texteditorsettings.cpp \
    texteditorwindow.cpp

HEADERS += \
    cryptohelper.h \
    fileinformation.h \
    mainwindow.h \
    new_file_on_action_dialog.h \
    newdirectorycreation.h \
    other.h \
    settingsdialog.h \
    texteditorsettings.h \
    texteditorwindow.h

FORMS += \
    fileinformation.ui \
    mainwindow.ui \
    new_file_on_action_dialog.ui \
    newdirectorycreation.ui \
    settingsdialog.ui \
    texteditorsettings.ui \
    texteditorwindow.ui
INCLUDEPATH += "C:/msys64/mingw64/include"
LIBS += -LC:/msys64/mingw64/lib -lssl -lcrypto
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    original.txt
