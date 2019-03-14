#include "camerawidget.h"

#include <QPainter>
#include <QTimer>

namespace CameraWidgetLib {

CameraWidget::CameraWidget(QWidget* parent)
    : QWidget(parent)
{
    m_capture.open(0);
    m_capture.set(::cv::CAP_PROP_FRAME_WIDTH, 480);
    m_capture.set(::cv::CAP_PROP_FRAME_HEIGHT, 640);

    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(20);
}

void CameraWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);

    m_capture.read(m_currentFrame);
    cv::cvtColor(m_currentFrame ,m_currentFrame, CV_BGR2RGB);
    painter.drawImage(rect(), QImage(m_currentFrame.data, m_currentFrame.cols, m_currentFrame.rows, QImage::Format_RGB888));
}

}

