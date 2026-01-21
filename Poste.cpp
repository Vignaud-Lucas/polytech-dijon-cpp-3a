#include "Poste.h"

Poste::Poste(std::string nom, std::string os):
nom_(nom), os_(os){}

std::string Poste::getNom() const {
	return nom_;
}

std::string Poste::getOs() const {
	return os_;
}