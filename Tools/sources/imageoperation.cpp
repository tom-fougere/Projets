#include "../imageoperation.h"

#include <iostream>

using namespace std;

int getPixel(cv::Mat s_image, int x, int y, int composante){
    if(s_image.depth() == 2 || s_image.depth() == 3){
        return (int)s_image.at<cv::Vec3f>(y,x)[composante];
    }else if(s_image.depth() == 0 || s_image.depth() == 1){
        return (int)s_image.at<cv::Vec3b>(y,x)[composante];
    }
}

void setPixel(cv::Mat s_image, int x, int y, int composante, int i_newValue){



    if(s_image.depth() == 2 || s_image.depth() == 3){
        s_image.at<cv::Vec3f>(y,x)[composante] = i_newValue;
    }else if(s_image.depth() == 0 || s_image.depth() == 1){
        s_image.at<cv::Vec3b>(y,x)[composante] = (unsigned int) i_newValue;
    }


    /*char c_newValue[8];
    sprintf(c_newValue,"%u",i_newValue);
    cout << "BUF : " << c_newValue << endl;

    cout << s_image.channels() << " " << s_image.type() << " " << s_image.depth() << endl;

    unsigned char *input = (unsigned char*)(s_image.data);
    cout << "avant " << (double)input[s_image.channels()*(s_image.cols * y + x) + composante] << endl;
    input[s_image.channels()*(s_image.cols * y + x) + composante] = (unsigned int)300;
    cout << "apres " << (double)input[s_image.channels()*(s_image.cols * y + x) + composante] << endl;
    */
}
