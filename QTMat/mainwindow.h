#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_load_clicked();

    void on_btn_M2RGB32_clicked();

    void on_btn_M2G_clicked();

    void on_RGB322M_clicked();

    void on_RGB242M_clicked();

    void on_I2M_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
