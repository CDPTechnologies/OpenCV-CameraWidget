/**
CameraWidgetLibBuilder header file.
*/

#ifndef CAMERAWIDGETLIB_CAMERAWIDGETLIBBUILDER_H
#define CAMERAWIDGETLIB_CAMERAWIDGETLIBBUILDER_H

#include <CDPSystem/Application/CDPBuilder.h>

#include <CDP2Qt/CDP2QtBuilder.h>

#include <QWidget>
#include <QString>

namespace CameraWidgetLib {

class CameraWidgetLibBuilder : public CDPBuilder, public CDP2QtBuilder
{
public:
    CameraWidgetLibBuilder(const char* libName,const char* timeStamp);
    CDPComponent* CreateNewComponent(const std::string& type) override;
    CDPBaseObject* CreateNewCDPOperator(const std::string& modelName,const std::string& type,const CDPPropertyBase* inputProperty) override;

    QWidget * CreateNewWidget(const QString &className, QWidget *parent = 0, const QString &name = QString()) override;
};

}

#endif
