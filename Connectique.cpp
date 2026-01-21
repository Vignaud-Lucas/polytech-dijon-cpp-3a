#include "Connectique.h"

Connectique::Connectique(std::string nom, std::string typePort, int longueur):
nom_(nom), typePort_(typePort), longueur_(longueur){}

std::string Connectique::getNom() const {
	return nom_;
}

std::string Connectique::getTypePort() const {
	return typePort_;
}

int Connectique::getLongueur() const {
	return longueur_;
}