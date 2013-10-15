#ifndef IMAGEHSV_H
#define IMAGEHSV_H

#include "opencv2/opencv.hpp"

using namespace std;

class imageHSV
{
public:
    imageHSV(cv::Mat s_image);

    cv::Mat _s_hsv;
};

#endif // IMAGEHSV_H
