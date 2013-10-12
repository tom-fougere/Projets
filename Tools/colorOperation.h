#ifndef COLOROPERATION_H
#define COLOROPERATION_H

#include "constantes.h"

void rgb2hsv(int R, int G, int B, int &H, float &S, float &V);
void rgb2hsv(int RGB[], float HSV[]);

#endif // COLOROPERATION_H
