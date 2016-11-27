#include <iostream>
#include <ostream>
#include <ctime>
#include "tableaux.h"

int main (){
	porte(true,false) = false;
	porte(false,true) = false;
	porte(true,true) = true;
	porte(false,false) = false;
	if(porte(true,true)){
		std::cout << "OK" << std::endl;
	}
    return 0;
}