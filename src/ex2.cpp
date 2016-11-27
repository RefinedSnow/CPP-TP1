#include <iostream>
#include <ostream>
#include <ctime>
#include "tableaux.h"

int main (){
    int nbElem = 0;
    std::cout << "Entrer le nombre de valeurs a entrer entre 1 et 10 : ";
    while(nbElem > MAX_ELEM || nbElem < 1){
        std::cin >> nbElem;
    }
    std::cout << "Il y a " << nbElem << " elements \n";
    int tab[MAX_ELEM];
    saisie_tab(tab,nbElem);
    afficher_tableau(tab,nbElem);
    std::cout << "min = " << min(tab,nbElem) << "\n";
    std::cout << "max = " << max(tab,nbElem) << "\n";
    echange(min(tab,nbElem),max(tab,nbElem));
    afficher_tableau(tab,nbElem);
    return 0;
}