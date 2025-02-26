#ifndef PLATEAU_H
#define PLATEAU_H
#include "case.h"
#include <iostream>

class Plateau
{
    int tailleX;
    int tailleY;
    Case ** p;
public:
    Plateau(int tailleX, int tailleY);
    void drawPlateau(void);
    void generePlateauDeBase();
    void placeApawn(Pion &pion);
};

#endif // PLATEAU_H
