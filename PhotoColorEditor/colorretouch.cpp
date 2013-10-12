#include "colorretouch.h"

#include "opencv2/opencv.hpp"

using namespace std;

colorRetouch::colorRetouch()
{
}
colorRetouch::colorRetouch(int H, int S, int V){
    _tf_initialHSV[HUE] = H;
    _tf_initialHSV[SAT] = S;
    _tf_initialHSV[VAL] = V;
}
colorRetouch::colorRetouch(int HSV[]){
    for(int i = 0 ; i<3 ; i++){
        _tf_initialHSV[i] = (float)HSV[i];
    }
}

void colorRetouch::RGB_2_HSV(int R, int G, int B){
    rgb2hsv(R, G, B, (int&)_tf_initialHSV[HUE], _tf_initialHSV[SAT], _tf_initialHSV[VAL]);
}

void colorRetouch::RGB_2_HSV(int RGB[]){
    rgb2hsv(RGB, _tf_initialHSV);
}

void colorRetouch::setHueLimits(int i_low, int i_high){
    _ti_HueLimits[0] = i_low;
    _ti_HueLimits[1] = i_high;
}

void colorRetouch::setChangedHSV(float H, float S, float V){
    _tf_changedHSV[HUE] = H;
    _tf_changedHSV[SAT] = S;
    _tf_changedHSV[VAL] = V;
}
void colorRetouch::keepColor(){
    _tb_retouch[0] = true;
    _tb_retouch[1] = false;
}

void colorRetouch::deleteColor(){
    _tb_retouch[0] = false;
    _tb_retouch[1] = true;
}

void colorRetouch::changeColor(){
    _tb_retouch[2] = true;
}

void colorRetouch::resetRetouch(){
    _tb_retouch[0] = false;
    _tb_retouch[1] = false;
    _tb_retouch[2] = false;
}
