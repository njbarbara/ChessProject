TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Couleur.cpp \
        Type.cpp \
        case.cpp \
        joueur.cpp \
        main.cpp \
        pion.cpp \
        plateau.cpp

HEADERS += \
    case.h \
    joueur.h \
    pion.h \
    plateau.h
