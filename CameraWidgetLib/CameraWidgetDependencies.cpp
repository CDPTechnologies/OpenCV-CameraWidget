#include "CameraWidgetDependencies.h"

using namespace CameraWidgetLib;

/*!
  brief Component constructor. The first function to be called. Can be used to initialize member variables, etc.
*/
CameraWidgetDependencies::CameraWidgetDependencies()
{
}


/*!
  brief Component destructor. The last function to be called. Typically used to clean up when stopping, like freeing
  allocated memory, etc.
*/
CameraWidgetDependencies::~CameraWidgetDependencies()
{
}

/*!
  brief Creates the component instance and other related CDP objects. Called after constructor

  Note, that this function is normally filled automatically by the code generator.
*/
void CameraWidgetDependencies::Create(const char* fullName)
{
    CDPComponent::Create(fullName);
}

/*!
  brief Creates a model instance for this class and fills model data. Registers messages, states and state transitions.

  Note, that this function is normally filled automatically by the code generator.
*/
void CameraWidgetDependencies::CreateModel()
{
    CDPComponent::CreateModel();

    RegisterStateProcess("Null", (CDPCOMPONENT_STATEPROCESS)&CameraWidgetDependencies::ProcessNull, "Initial Null state");
}

/*!
  brief Configures the component by reading the configuration. Called after Create()/CreateModel().

  Note, that this function is normally filled automatically by the code generator.
*/
void CameraWidgetDependencies::Configure(const char* componentXML)
{
    CDPComponent::Configure(componentXML);
}

/*!
 brief Component Null state processing function

 Write your component's processing code here. When the component is simple all the processing code may reside here.
 This function gets called periodically. The period is changed by setting the "fs" (frequency) Property when you use
 the component in a project.
 Functions called ProcessSTATENAME(), like ProcessNull(), are state processing functions and are only called when
 components are in given state. The default component state is "Null".
 Note, that state processing functions are not allowed to block (i.e. read files, sleep, communicate with network in
 blocking mode etc.) For blocking code use Threaded Component Model wizard instead.

 Please consult CDP Studio "Code Mode Manual" for more information and examples.
*/
void CameraWidgetDependencies::ProcessNull()
{
    /* Write your code here */
}
