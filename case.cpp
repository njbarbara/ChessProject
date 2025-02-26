#include "case.h"


void Case::placePawn(Pion &p)
{
    this->p = &p;
}


bool Case::DoIhavePawns()
{
    if(p == NULL) return false;
    else return true;
}

void Case::removePawns()
{
    p = NULL;
}

Case::Case()
{

}

std::ostream & operator<<(std::ostream & os, Case c){
    if(!c.DoIhavePawns()) os << "|   |";
    else os << "| " << c.p->getLogo() << " |";
    return os;
}
