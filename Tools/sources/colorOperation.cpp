#include "../colorOperation.h"

void rgb2hsv(int R, int G, int B, int &H, float &S, float &V){
    int RGB[3];
    RGB[RED] = R;
    RGB[GREEN] = G;
    RGB[BLUE] = B;

    float HSV[3];
    rgb2hsv(RGB, HSV);

    H = HSV[HUE];
    S = HSV[SAT];
    V = HSV[VAL];
}

void rgb2hsv(int RGB[], float HSV[]){
    float tf_RGBnorm[3];
    tf_RGBnorm[0] = RGB[0]/(float)255;
    tf_RGBnorm[1] = RGB[1]/(float)255;
    tf_RGBnorm[2] = RGB[2]/(float)255;

    int imax = 4;
    int imin = 4;
    for(int i=0 ; i < 3 ; i++){
        // Find max
        if(tf_RGBnorm[i] >= tf_RGBnorm[(i+1)%3] && tf_RGBnorm[i] >= tf_RGBnorm[(i+2)%3]){
            imax = i;
        }
        // Find min
        if(tf_RGBnorm[i] <= tf_RGBnorm[(i+1)%3] && tf_RGBnorm[i] <= tf_RGBnorm[(i+2)%3]){
            imin = i;
        }
    }
    float Cmin = tf_RGBnorm[imin];
    float Cmax = tf_RGBnorm[imax];
    float fdelta = tf_RGBnorm[imax] - tf_RGBnorm[imin];

    // HUE
    if(imax == imin){
        HSV[HUE] = 0;
    }
    else{ if(imax == RED){
            HSV[HUE] = 60 * ((int)((tf_RGBnorm[GREEN]-tf_RGBnorm[BLUE])/fdelta)%6);
        }
        else{ if(imax == GREEN){
                HSV[HUE] = 60 * ((tf_RGBnorm[BLUE]-tf_RGBnorm[RED])/fdelta + 2);
            }
            else{ if(imax == BLUE){
                    HSV[HUE] = 60 * ((tf_RGBnorm[RED]-tf_RGBnorm[GREEN])/fdelta + 4);
                }
            }
        }
    }

    // SATURATION
    if(Cmax == 0){
        HSV[SAT] = 0;
    }
    else HSV[SAT] = fdelta/Cmax;

    // VALUE
    HSV[VAL] = Cmax;
}

