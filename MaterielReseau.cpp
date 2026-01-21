#include "MaterielReseau.h"

MaterielReseau::MaterielReseau(std::string nom, std::string marque):nom_(nom), marque_(marque){}

std::string MaterielReseau::getNom() const {
	return nom_;
}