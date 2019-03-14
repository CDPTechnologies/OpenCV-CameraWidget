#ifndef CAMERAWIDGETLIB_CAMERAWIDGET_H
#define CAMERAWIDGETLIB_CAMERAWIDGET_H

#include <QWidget>
class QTimer;

#include <opencv2/opencv.hpp>

namespace CameraWidgetLib {

class CameraWidget: public QWidget
{
public:
    CameraWidget(QWidget* parent = nullptr);

    void paintEvent(QPaintEvent* event);

protected:
    cv::VideoCapture m_capture;
    cv::Mat m_currentFrame;
};

} // namespace CameraWidgetLib

#endif // COMPUTERVISIONLIB_CAMERAWIDGET_H
