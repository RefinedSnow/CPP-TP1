#ifndef H_HEADER
#define H_HEADER

const int MAX_ELEM = 10;

void saisie_tab(int tab[], int nbElem);
void afficher_tableau(int tab[], int nbElem);
void echange(int* a, int* b);
void echange(int &a, int &b);

int& min(int tab[], int nbElem);

int& max(int tab[], int nbElem);

int& random(int tab[], int nbElem);

void randomize(int tab[], int nbElem);
namespace Valeur{
	void echange(int a, int b);
}
bool& porte(bool a, bool b);
#endif