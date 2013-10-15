#ifndef IMAGEOPERATION_H
#define IMAGEOPERATION_H

#include "opencv2/opencv.hpp"

#include "constantes.h"

int getPixel(cv::Mat s_image, int x, int y, int composante);
void setPixel(cv::Mat s_image, int x, int y, int composante, int i_newValue);

#endif // IMAGEOPERATION_H
