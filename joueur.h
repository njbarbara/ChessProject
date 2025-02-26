#ifndef JOUEUR_H
#define JOUEUR_H
#include "Couleur.cpp"
#include <iostream>

class Joueur
{
    Couleur c;
    const std::string nom ;
public:
    Joueur();
    Joueur(const std::string &nom);
    ~Joueur();
};

#endif // JOUEUR_H
