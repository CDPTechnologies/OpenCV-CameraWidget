CDPVERSION = 4.6
TYPE = library
PROJECTNAME = CameraWidgetLib

DEPS += \

HEADERS += \
    camerawidgetlib.h \
    CameraWidgetLibBuilder.h \
    camerawidget.h \
    CameraWidgetDependencies.h

SOURCES += \
    CameraWidgetLibBuilder.cpp \
    camerawidget.cpp \
    CameraWidgetDependencies.cpp

DISTFILES += $$files(*.xml, true) \
    Templates/Models/CameraWidgetLib.CameraWidgetDependencies.xml

load(cdp)
