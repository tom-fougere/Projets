#ifndef COLORRETOUCH_H
#define COLORRETOUCH_H

#include "../../Tools/constantes.h"
#include "../../Tools/colorOperation.h"

class colorRetouch
{
public:
    colorRetouch();
    colorRetouch(int H, int S, int V);
    colorRetouch(float HSV[]);

    /// Attributs
    float _tf_initialHSV[3];
    float _tf_changedHSV[3];
    bool _tb_retouch[3];
     // 0 : unique couleur gardée
     // 1 : unique couleur supprimée
     // 2 : changement de couleur
    int _ti_HueLimits[2];
     // 0 : limite basse
     // 1 : limite haute


    /// Functions
    void setHueLimits(int i_low, int i_high);
    void setChangedHSV(float H, float S, float V);

    void keepColor();
    void deleteColor();
    void changeColor();
    void resetRetouch();

};

#endif // COLORRETOUCH_H
