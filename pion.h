#ifndef PION_H
#define PION_H
#include <iostream>
#include "Type.cpp"
#include "Couleur.cpp"

class Pion
{
    int x;
    int y;
    Type type;
    Couleur couleur;
public:
    Pion(const int x, const int y, const Type type, const Couleur couleur);
    std::string getLogo();
    int getX() const;
    int getY() const;
};

#endif // PION_H
