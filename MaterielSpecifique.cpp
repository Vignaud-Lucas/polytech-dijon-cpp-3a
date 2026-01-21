#include "MaterielSpecifique.h"

MaterielSpecifique::MaterielSpecifique(std::string nom, std::string marque) :nom_(nom), marque_(marque) {}

std::string MaterielSpecifique::getNom() const {
	return nom_;
}