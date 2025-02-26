#include "plateau.h"

Plateau::Plateau(int tailleX, int tailleY)
    :
      tailleX{tailleX},
      tailleY{tailleY},
      p{new Case*[tailleY]}
{
    for(int i =0; i < tailleY; i++) p[i] = new Case[tailleX];
    generePlateauDeBase();
}

void Plateau::drawPlateau(void){
    for(int i = 0; i < tailleY; i++){
        for(int j = 0; j < tailleX; j++)std::cout << p[i][j];
        std::cout << "\n";
    }
}

void Plateau::generePlateauDeBase()
{
    for (int j = 0; j < tailleX; j++) {
        p[1][j].placePawn(* new Pion(j,1,pion, noir));
        p[tailleY-2][j].placePawn(* new Pion(j,6,pion, blanc));
    }
}

void Plateau::placeApawn(Pion & pion)
{
    p[pion.getY()][pion.getX()].placePawn(pion);
}


