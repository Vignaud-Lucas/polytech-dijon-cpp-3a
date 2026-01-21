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

std::ostream& operator<<(std::ostream& os, Ecran& e) {
	os << "Nom: " << e.nom_ << std::endl;
	os << "Marque: " << e.marque_ << std::endl;
	os << "Taille: " << e.taille_ << std::endl;
	return os;
}