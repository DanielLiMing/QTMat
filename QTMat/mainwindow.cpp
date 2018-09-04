#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QImage>
#include <QLabel>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->show();
    ui->setupUi(this);
    QImage image("jinx.jpeg");
    qDebug() << "width: " << ui->ori_img->width() << "  height:" << ui->ori_img->height();
    QImage newImg = image.scaled(ui->ori_img->width(),ui->ori_img->height());
    ui->ori_img->setPixmap(QPixmap::fromImage(newImg));
    ui->ori_img->show();


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_load_clicked()
{
    qDebug() << "on_btn_load_clicked";

    QString path = QFileDialog::getOpenFileName(this,
                                                   tr("Open File"),
                                                   ".",
                                                   tr("Image Files(*.*)"));
       if(!path.isEmpty()) {
           QImage image(path);
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
}

void MainWindow::on_btn_M2G_clicked()
{
    qDebug() << "on_btn_M2G_clicked";
}

void MainWindow::on_RGB322M_clicked()
{
    qDebug() << "on_RGB322M_clicked";
}

void MainWindow::on_RGB242M_clicked()
{
    qDebug() << "on_RGB242M_clicked";
}

void MainWindow::on_I2M_clicked()
{
    qDebug() << "on_I2M_clicked";
}
