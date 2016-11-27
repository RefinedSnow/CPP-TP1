#include <iostream>
#include <ostream>
#include <ctime>
#include "tableaux.h"

int main (){
    std::srand(std::time(0));
    int nbElem = 0;
	int tab[MAX_ELEM];
    
    int a = 9;
    int b = 12;
    
    std::cout << "a : " << a << " b : " <<b << "\n";
    echange(&a,&b);//echange par addresse
    std::cout << "a : " << a << " b : " <<b << "\n";
    echange(a,b);//echange par ref
    std::cout << "a : " << a << " b : " <<b << "\n";
    Valeur::echange(a,b);//echange par valeur
    std::cout << "a : " << a << " b : " <<b << "\n";

    std::cout << "Entrer le nombre de valeurs a entrer : ";
    while(nbElem > MAX_ELEM || nbElem < 1){
        std::cin >> nbElem;
    }
    
    saisie_tab(tab,nbElem);
    afficher_tableau(tab,nbElem);

    std::cout << "rng = " << random(tab,nbElem) << "\n";
    std::cout << "min = " << min(tab,nbElem) << "\n";
    std::cout << "max = " << max(tab,nbElem) << "\n";

    randomize(tab,nbElem);
    afficher_tableau(tab,nbElem);

    return 0;
}