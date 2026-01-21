#include "MaterielSpecifique.h"

MaterielSpecifique::MaterielSpecifique(std::string nom, std::string marque) :nom_(nom), marque_(marque) {}

std::string MaterielSpecifique::getNom() const {
	return nom_;
}

std::ostream& operator<<(std::ostream& os, MaterielSpecifique& m) {
	os << "Nom: " << m.nom_ << std::endl;
	os << "Marque: " << m.marque_ << std::endl;
	return os;
}