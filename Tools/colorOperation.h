#ifndef COLOROPERATION_H
#define COLOROPERATION_H

#include "constantes.h"

using namespace std;

void rgb2hsv(int R, int G, int B, int &H, int &S, int &V);
void rgb2hsv(int R, int G, int B, int &H, float &S, float &V);
void rgb2hsv8bitsNorm(int R, int G, int B, int &H, int &S, int &V);
void hsv8bitsNorm2hsv(int H8N, int S8N, int V8N, int &H, int &S, int &V);
void rgb2hsv(int RGB[], float HSV[]);

#endif // COLOROPERATION_H
