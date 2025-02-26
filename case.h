#ifndef CASE_H
#define CASE_H
#include "pion.h"
#include <iostream>

class Case
{
    Pion * p;
    friend std::ostream & operator<<(std::ostream & os, Case c);
public:
    void placePawn(Pion &p);
    bool DoIhavePawns();
    void removePawns();
    //Case(const Pion &p);
    Case();
};

#endif // CASE_H
