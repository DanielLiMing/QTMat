/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ori_img;
    QLabel *trans_img;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btn_load;
    QPushButton *btn_M2RGB32;
    QPushButton *btn_M2G;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *RGB322M;
    QPushButton *RGB242M;
    QPushButton *I2M;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 800);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1000, 800));
        MainWindow->setMaximumSize(QSize(1000, 800));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        ori_img = new QLabel(centralWidget);
        ori_img->setObjectName(QStringLiteral("ori_img"));
        sizePolicy.setHeightForWidth(ori_img->sizePolicy().hasHeightForWidth());
        ori_img->setSizePolicy(sizePolicy);
        ori_img->setMinimumSize(QSize(400, 350));
        ori_img->setMaximumSize(QSize(400, 350));
        ori_img->setFrameShape(QFrame::StyledPanel);
        ori_img->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(ori_img);

        trans_img = new QLabel(centralWidget);
        trans_img->setObjectName(QStringLiteral("trans_img"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(trans_img->sizePolicy().hasHeightForWidth());
        trans_img->setSizePolicy(sizePolicy2);
        trans_img->setMinimumSize(QSize(400, 350));
        trans_img->setMaximumSize(QSize(400, 350));
        trans_img->setFrameShape(QFrame::StyledPanel);
        trans_img->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(trans_img);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(10, -1, 10, -1);
        btn_load = new QPushButton(centralWidget);
        btn_load->setObjectName(QStringLiteral("btn_load"));

        horizontalLayout_7->addWidget(btn_load);

        btn_M2RGB32 = new QPushButton(centralWidget);
        btn_M2RGB32->setObjectName(QStringLiteral("btn_M2RGB32"));

        horizontalLayout_7->addWidget(btn_M2RGB32);

        btn_M2G = new QPushButton(centralWidget);
        btn_M2G->setObjectName(QStringLiteral("btn_M2G"));

        horizontalLayout_7->addWidget(btn_M2G);

        horizontalLayout_7->setStretch(0, 2);
        horizontalLayout_7->setStretch(1, 2);
        horizontalLayout_7->setStretch(2, 2);

        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(10, -1, 10, -1);
        RGB322M = new QPushButton(centralWidget);
        RGB322M->setObjectName(QStringLiteral("RGB322M"));

        horizontalLayout_6->addWidget(RGB322M);

        RGB242M = new QPushButton(centralWidget);
        RGB242M->setObjectName(QStringLiteral("RGB242M"));

        horizontalLayout_6->addWidget(RGB242M);

        I2M = new QPushButton(centralWidget);
        I2M->setObjectName(QStringLiteral("I2M"));

        horizontalLayout_6->addWidget(I2M);

        horizontalLayout_6->setStretch(0, 2);
        horizontalLayout_6->setStretch(1, 2);
        horizontalLayout_6->setStretch(2, 2);

        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalLayout_2->setStretch(0, 8);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 1);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CVMatTransTest", nullptr));
        ori_img->setText(QApplication::translate("MainWindow", "\345\216\237\345\233\276", nullptr));
        trans_img->setText(QApplication::translate("MainWindow", "\350\275\254\345\214\226\345\220\216", nullptr));
        btn_load->setText(QApplication::translate("MainWindow", "load image", nullptr));
        btn_M2RGB32->setText(QApplication::translate("MainWindow", "MatToRGB32", nullptr));
        btn_M2G->setText(QApplication::translate("MainWindow", "MatToGray", nullptr));
        RGB322M->setText(QApplication::translate("MainWindow", "RGB32ToMat", nullptr));
        RGB242M->setText(QApplication::translate("MainWindow", "RGB24ToMat", nullptr));
        I2M->setText(QApplication::translate("MainWindow", "Indexed8ToMat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
