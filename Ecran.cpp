#include "Ecran.h"

Ecran::Ecran(std::string nom,std::string marque, std::string taille):
nom_(nom),marque_(marque), taille_(taille){}

std::string Ecran::getMarque() const {
	return marque_;
}

std::string Ecran::getTaille() const {
	return taille_;
}

std::string Ecran::getNom() const {
	return nom_;
}