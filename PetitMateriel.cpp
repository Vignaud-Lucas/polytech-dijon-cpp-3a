#include "PetitMateriel.h"

PetitMateriel::PetitMateriel(std::string nom,std::string type):nom_(nom), type_(type){}

std::string PetitMateriel::getType() const {
	return type_;
}

std::string PetitMateriel::getNom() const {
	return nom_;
}

std::ostream& operator<<(std::ostream& os, PetitMateriel& m) {
	os << "Nom: " << m.nom_ << std::endl;
	os << "Type: " << m.type_ << std::endl;
	return os;
}