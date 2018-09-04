#include "qtcvtools.h"
#include <QDebug>
using namespace cv;

QtCvTools::QtCvTools()
{

}

QImage QtCvTools::cvMat2QImage(const Mat &mat)
{
    if(mat.type() == CV_8UC1)
    {
        QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
        image.setColorCount(256);
        for(int i = 0; i < 256;i++)
        {
            image.setColor(i,qRgb(i,i,i));
        }
        uchar *pSrc = mat.data;

    }
}

Mat QtCvTools::QImage2cvMat(QImage image)
{

}
