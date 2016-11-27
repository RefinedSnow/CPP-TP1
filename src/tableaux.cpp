#include <iostream>
#include <ostream>
#include "tableaux.h"

void saisie_tab(int tab[], int nbElem){
    for(int i = 0; i < nbElem;i++){
        std::cout << "Element no "<< i << " : ";
        std::cin >> tab[i];
    }
}

void afficher_tableau(int tab[], int nbElem){
    for(int i = 0; i < nbElem;i++){
        std::cout << tab[i] << ";";
    }
    std::cout << std::endl;
}

void echange(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void echange(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
namespace Valeur{
    void echange(int a, int b){
        int tmp = a;
        a = b;
        b = tmp;
    }
}
int& min(int tab[], int nbElem){
    int *min = tab;
    for(int i = 0; i <nbElem ; i++){
        if(tab[i] < *min){
            min = &tab[i];
        }
    }
    return *min;
}
int& max(int tab[], int nbElem){
    int *max = tab;
    for(int i = 0; i <nbElem ; i++){
        if(tab[i] > *max){
            max = &tab[i];
        }
    }
    return *max;
}

int& random(int tab[], int nbElem){
    int rng = std::rand() % nbElem;
    return tab[rng];
}

void randomize(int tab[], int nbElem){
    int rng = std::rand() % (nbElem-1);
    for(int i = 0; i <rng; i++){
        echange(random(tab,nbElem),random(tab,nbElem));
    }
}

bool& porte(bool a, bool b){
	static bool val1=false,val2=false,val3=false,val4=false;
	if(a&&b){
		return val1;
	}
	if(a&&!b)
	{
		return val2;
	}
	if(!a&&b){
		return val3;
	}
	return val4;
}