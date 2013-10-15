#include "imagehsv.h"

#include "../Tools/imageoperation.h"
#include "../Tools/colorOperation.h"
#include "../Tools/constantes.h"

imageHSV::imageHSV(cv::Mat s_image)
{
    _s_hsv = cv::Mat::zeros(s_image.rows, s_image.cols, s_image.type());
    for(int row = 0 ; row < 1/*s_image.rows*/ ; row ++){
        for(int col = 0 ; col < 1/*s_image.cols*/ ; col++){
            int R = getPixel(s_image, col, row, RED);
            int G = getPixel(s_image, col, row, GREEN);
            int B = getPixel(s_image, col, row, BLUE);

            int H,S,V;
            rgb2hsv8bitsNorm(R,G,B,H,S,V);
            setPixel(_s_hsv, col, row, HUE, H);
            setPixel(_s_hsv, col, row, SAT, S);
            setPixel(_s_hsv, col, row, VAL, V);
        }
    }
    //cout << "avant " << (int)s_image.at<cv::Vec3b>(0,0)[0] << endl;
    //cout << "apres " << (int)_s_hsv.at<cv::Vec3b>(0,0)[0] << endl;
}
