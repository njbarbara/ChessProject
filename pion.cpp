#include "pion.h"



int Pion::getX() const
{
    return x;
}

int Pion::getY() const
{
    return y;
}

Pion::Pion(int x, int y, Type type, Couleur couleur)
    :
      x{x},
      y{y},
      type{type},
      couleur{couleur}
{

}


std::string Pion::getLogo()
{
    if(couleur == 1){
        switch(type){
            case 1:
                return  "♙";
            case 2:
                return  "♘";
            case 3:
                return  "♔";
            case 4:
                return  "♕";
            case 5:
                return  "♗";
            case 6:
                return "♖";
        }
    }
    else{
        switch(type){
            case 1:
                return "♙";
            case 2:
                return "♘";
            case 3:
                return "♔";
            case 4:
                return "p";
            case 5:
                return "p";
            case 6:
                return "p";
        }
    }
}
