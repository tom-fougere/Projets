#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "opencv2/opencv.hpp"
#include "colorretouch.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    float HSV[3];
    HSV[0] = 100;
    HSV[1] = 0.4;
    HSV[2] = 0.1;
    colorRetouch cr(HSV);
}

MainWindow::~MainWindow()
{
    delete ui;
}
