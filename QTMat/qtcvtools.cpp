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
        for(int row =0;row < mat.rows;row++)
        {
            uchar *pDest = image.scanLine(row);
            memcpy(pDest,pSrc,mat.cols);
            pSrc += mat.step;
        }
        return image;
    }
    else if(mat.type() == CV_8UC3)
    {
        const uchar *pSrc = (const uchar*)mat.data;
        QImage image(pSrc,mat.cols,mat.rows,mat.step,QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    else if(mat.type() == CV_8UC4)
    {
        qDebug() << "CV_8UC4  1";
        const uchar *pSrc = (const uchar *)mat.data;
        QImage image(pSrc,mat.cols,mat.rows,mat.step,QImage::Format_ARGB32);
        return image.copy();
    }
    else
    {
        qDebug() << "Error: Mat could not be converted to QImage.";
        return QImage();
    }
}

Mat QtCvTools::QImage2cvMat(QImage image)
{
    Mat mat;
    qDebug() << image.format();
    switch (image.format()) {
    case QImage::Format_ARGB32:
    case QImage::Format_RGB32:
    case QImage::Format_ARGB32_Premultiplied:
        mat = Mat(image.height(),image.width(),CV_8UC4,(void*)image.constBits(),image.bytesPerLine());
        break;
    case QImage::Format_RGB888:
        mat = Mat(image.height(),image.width(),CV_8UC3,(void*)image.constBits(),image.bytesPerLine());
        cvtColor(mat,mat,CV_BGR2RGB);
        break;
    case QImage::Format_Indexed8:
        mat = Mat(image.height(),image.width(),CV_8UC1,(void*)image.constBits(),image.bytesPerLine());
        break;
    default:
        break;
    }
    return mat;
}
