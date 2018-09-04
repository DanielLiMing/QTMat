#ifndef QTCVTOOLS_H
#define QTCVTOOLS_H
#include <opencv2/opencv.hpp>
#include <QImage>

using namespace cv;

class QtCvTools
{

public:
    QtCvTools();
    QImage cvMat2QImage(const Mat& mat);
    Mat QImage2cvMat(QImage image);
};

#endif // QTCVTOOLS_H
