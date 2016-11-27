#include <iostream>
#include <iomanip>
using namespace std;

void affiche(double montant){
	cout << montant << endl;
}

void appliqueTVA(double * montant){
	(*montant) *= 1.196;
}
namespace MaLib{
	using ::appliqueTVA;
	void appliqueTVA(double & montant){
		montant *= 1.196;
	}
	void foo(double * montant);
}

int main()
{
	double prix = 2.5;
	appliqueTVA(&prix);
	MaLib::appliqueTVA(prix);
	affiche(prix);
	MaLib::foo(&prix);
}

namespace MaLib{
	void foo(double * montant){
		affiche(*montant);
		appliqueTVA(montant);
	}
}