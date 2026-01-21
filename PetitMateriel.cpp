#include "PetitMateriel.h"

PetitMateriel::PetitMateriel(std::string type):type_(type){}

std::string PetitMateriel::getType() const {
	return type_;
}