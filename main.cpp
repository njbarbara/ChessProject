#include <iostream>
#include "pion.h"
#include "plateau.h"

using namespace std;

void testPlateau(){
    Plateau p{8,8};
    cout << "premier plateau" <<std::endl;
    p.drawPlateau();
    Pion pion{1,2,roi,noir};
    p.placeApawn(pion);

    cout << "second plateau" <<std::endl;
    p.drawPlateau();
}

void testPion(void){
    Pion p{1,2,roi,noir};

    cout << p.getLogo();
}

int main()
{
    //testPion();
    //std::cout <<  "\x1b[1;33mHello";
    testPlateau();
    return 0;
}
