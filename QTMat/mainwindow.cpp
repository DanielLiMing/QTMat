#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qtcvtools.h"
#include <QImage>
#include <QLabel>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QFileDialog>

using namespace cv;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
//    this->show();
    ui->setupUi(this);
//    QImage image("jinx.jpeg");
//    qDebug() << "width: " << ui->ori_img->width() << "  height:" << ui->ori_img->height();
//    QImage newImg = image.scaled(ui->ori_img->width(),ui->ori_img->height());
//    ui->ori_img->setPixmap(QPixmap::fromImage(newImg));
//    ui->ori_img->show();


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_load_clicked()
{
    qDebug() << "on_btn_load_clicked";

    this->path = QFileDialog::getOpenFileName(this,
                                                   tr("Open File"),
                                                   ".",
                                                   tr("Image Files(*.*)"));
       if(!this->path.isEmpty()) {
           QImage image(this->path);
           QImage newImg = image.scaled(ui->ori_img->width(),ui->ori_img->height());
           ui->ori_img->setPixmap(QPixmap::fromImage(newImg));
           ui->ori_img->show();
       } else {
           QMessageBox::warning(this, tr("Path"),
                                tr("You did not select any file."));
       }
}

void MainWindow::on_btn_M2RGB32_clicked()
{
    qDebug() << "on_btn_M2RGB32_clicked";
    QtCvTools tools;
    Mat mat = imread(path.toStdString(),IMREAD_UNCHANGED);
    cv::resize(mat,mat,Size(500,500));
    cvtColor(mat,mat,CV_BGR2BGRA);
    imshow("Ori",mat);
    qDebug() << (mat.type() == CV_8UC4);
    QImage image = tools.cvMat2QImage(mat);
    ui->trans_img->setPixmap(QPixmap::fromImage(image));
    ui->trans_img->show();

}

void MainWindow::on_btn_M2G_clicked()
{
    qDebug() << "on_btn_M2G_clicked";
    QtCvTools tools;
    Mat mat = imread(path.toStdString(),IMREAD_UNCHANGED);
    cv::resize(mat,mat,Size(500,500));
    cvtColor(mat,mat,CV_BGR2GRAY);
    imshow("ori",mat);
    QImage image = tools.cvMat2QImage(mat);
    ui->trans_img->setPixmap(QPixmap::fromImage(image));
    ui->trans_img->show();
}

void MainWindow::on_RGB322M_clicked()
{
    qDebug() << "on_RGB322M_clicked";
    QtCvTools tools;
    QImage image(path);
    image = image.convertToFormat(QImage::Format_RGB32);
    QImage newImg = image.scaled(500,500);
    Mat mat= tools.QImage2cvMat(newImg);
    imshow("BGR32 to Mat", mat);
}

void MainWindow::on_RGB242M_clicked()
{
    qDebug() << "on_RGB242M_clicked";
    QtCvTools tools;
    QImage image(path);
    image = image.convertToFormat(QImage::Format_RGB888);
    QImage newImg = image.scaled(500,500);
    Mat mat= tools.QImage2cvMat(newImg);
    imshow("BGR24 to Mat", mat);
}

void MainWindow::on_I2M_clicked()
{
    qDebug() << "on_I2M_clicked";
    qDebug() << "on_RGB242M_clicked";
    QtCvTools tools;
    QImage image(path);
    image = image.convertToFormat(QImage::Format_Indexed8);
    QImage newImg = image.scaled(500,500);
    Mat mat= tools.QImage2cvMat(newImg);
    imshow("Indexed8 to Mat", mat);
}
