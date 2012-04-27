QT += opengl


TARGET = QtGameEngine
TEMPLATE = lib
CONFIG += staticlib



HEADERS += \
    AbstractSpirit.h \
    Vector3D.h \
    GameDisplayWidget.h \
    Game.h \
    AbstractRenderer.h \
    AbstractRenderingObject.h \
    InputMapper.h \
    AbstractInputHandler.h \
    AbstractScene.h \
    QtGameEngine

SOURCES += \
    Vector3D.cpp \
    GameDisplayWidget.cpp \
    Game.cpp \
    InputMapper.cpp


























