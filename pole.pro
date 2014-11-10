TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    question.cpp \
    base.cpp \
    game.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    question.h \
    base.h \
    game.h

OTHER_FILES += \
    main.qml

