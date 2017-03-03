#-------------------------------------------------
#
# Project created by QtCreator 2017-02-01T15:53:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = QtModule
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        frmmain.cpp \
    Api/iconhelper.cpp \
    AppConfig/myapp.cpp \
    QsLog/QsLogDestFunctor.cpp \
    QsLog/QsLogDestFile.cpp \
    QsLog/QsLogDestConsole.cpp \
    QsLog/QsLogDest.cpp \
    QsLog/QsLog.cpp \
    qcustomplot.cpp

HEADERS  += frmmain.h \
    Api/iconhelper.h \
    Api/myhelper.h \
    AppConfig/myapp.h \
    QsLog/QsLogLevel.h \
    QsLog/QsLogDisableForThisFile.h \
    QsLog/QsLogDestFunctor.h \
    QsLog/QsLogDestFile.h \
    QsLog/QsLogDestConsole.h \
    QsLog/QsLogDest.h \
    QsLog/QsLog.h \
    qcustomplot.h \
    main.rc

FORMS    += frmmain.ui
MOC_DIR=temp/moc
RCC_DIR=temp/rcc
UI_DIR=temp/ui
OBJECTS_DIR=temp/obj
INCLUDEPATH += $$PWD/DATA
INCLUDEPATH += $$PWD
win32:RC_FILE=main.rc

RESOURCES += \
    rc.qrc

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
DEFINES += QS_LOG_LINE_NUMBERS
DEFINES += QS_LOG_SEPARATE_THREAD # messages are queued and written from a separate thread
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

DISTFILES += \
    main.ico
