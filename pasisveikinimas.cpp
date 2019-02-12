#include <iostream>
#include <string>

int main() {
	int ilgis;
	std::string vardas, pirmaeil, antraeil, treciaeil, ketvirtaeil, penktaeil;
	std::cout << "iveskite varda: ";
	std::cin >> vardas;
	if (vardas[vardas.size()-1] == 's') {
		ilgis = 14 + vardas.size();
		treciaeil = "* Sveikas, " + vardas + "! *";
	}
	else {
		ilgis = 13 + vardas.size();
		treciaeil = "* Sveika, " + vardas + "! *";
	}
	for (int i = 0; i < ilgis; i++) {
		pirmaeil = pirmaeil + '*';
	}
	penktaeil = pirmaeil;
	antraeil = '*';
	for (int i = 1; i < ilgis - 1; i++) {
		antraeil = antraeil + ' ';
	}
	antraeil = antraeil + '*';
	ketvirtaeil = antraeil;
	
	std::cout << pirmaeil << std::endl;
	std::cout << antraeil << std::endl;
	std::cout << treciaeil << std::endl;
	std::cout << ketvirtaeil << std::endl;
	std::cout << penktaeil << std::endl;
	
	return 0;
}