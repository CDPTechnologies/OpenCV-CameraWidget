# OpenCV-CameraWidget

This project uses OpenCV computer vision library to displays image from webcam in a GUI widget. 

The GUI can be visually edited in CDP Studio design mode and used along with other graphical elements in CDP.

Users that are familiar with CDP Studio and that are curious about custom widgets should note the following in the project source code:
- The CameraWidget class is created as shown in camerawidget.h and camerawidget.cpp
- The widget is made available to the ui loader by making the CameraWidgetLibBuilder inherit CDP2QtBuilder and implement CreateNewWidget.
- The widget is added in the ui file by promoting a QWidget to CameraWidget (promoted widgets are often referred to as placeholders).
- Properties that are added to the CameraWidget must also be added to the promoted widget as dynamic properties to enable editing. 
- The GUI application contains a dummy component, CameraWidgetDependencies, to ensure that CDP Studio deploys the required dependencies.

Note that the project depends on OpenCV. Pre-compiled library is available at 
https://download.cdpstudio.com/libs/opencv/3.4.1

The demo was created using [CDP Studio](https://cdpstudio.com/home-edition).
