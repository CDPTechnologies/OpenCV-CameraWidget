#ifndef CAMERAWIDGETLIB_CAMERAWIDGETDEPENDENCIES_H
#define CAMERAWIDGETLIB_CAMERAWIDGETDEPENDENCIES_H

#include <CDPSystem/Base/CDPComponent.h>
#include <Signal/CDPSignal.h>
#include <CDPParameter/CDPParameter.h>
#include <CDPAlarm/CDPAlarm.h>

namespace CameraWidgetLib {

class CameraWidgetDependencies : public CDPComponent
{
public:
    CameraWidgetDependencies();
    ~CameraWidgetDependencies() override;

    void Create(const char* fullName) override;
    void CreateModel() override;
    void Configure(const char* componentXML) override;
    void ProcessNull() override;

protected:
    using CDPComponent::requestedState;
    using CDPComponent::ts;
    using CDPComponent::fs;
};

} // namespace CameraWidgetLib

#endif
