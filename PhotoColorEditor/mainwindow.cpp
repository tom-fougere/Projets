#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "opencv2/opencv.hpp"
#include "colorretouch.h"
#include "imagehsv.h"
#include "../Tools/imageoperation.h"
#include "../Tools/colorOperation.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*float HSV[3];
    HSV[0] = 100;
    HSV[1] = 0.4;
    HSV[2] = 0.1;
    colorRetouch cr(HSV);*/


    cv::Mat s_image = cv::imread("C:/Users/Tom/Downloads/fondecran.jpg");
    int B = getPixel(s_image, 0,0, 0);
    int G = getPixel(s_image, 0,0, 1);
    int R = getPixel(s_image, 0,0, 2);
    cout << endl << "B: " << B << " G: " << G << " R: " << R << endl;

    int H;
    int S,V;
    rgb2hsv(R,G,B,H,S,V);
    cout << "H: " << H << " S: " << S << " V: " << V << endl <<endl;

    int H2,S2,V2;
    imageHSV a(s_image);
    H2 = getPixel(a._s_hsv, 0, 0, HUE);
    S2 = getPixel(a._s_hsv, 0, 0, SAT);
    V2 = getPixel(a._s_hsv, 0, 0, VAL);
    cout << "cvcvtcolor" << endl;
    cout << "H: " << H2 << " S: " << S2 << " V: " << V2 << endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}
