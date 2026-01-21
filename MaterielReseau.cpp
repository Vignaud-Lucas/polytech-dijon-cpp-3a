#include "MaterielReseau.h"

MaterielReseau::MaterielReseau(std::string nom, std::string marque):nom_(nom), marque_(marque){}

std::string MaterielReseau::getNom() const {
	return nom_;
}


std::ostream& operator<<(std::ostream& os, MaterielReseau& m) {
	os << "Nom: " << m.nom_ << std::endl;
	os << "Marque: " << m.marque_ << std::endl;
	return os;
}