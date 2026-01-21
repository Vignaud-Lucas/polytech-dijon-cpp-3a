#include "Salle.h"

Salle::Salle(int numero, std::string type):
numero_(numero), type_(type),listePosteSalle_({}),listePetitMaterielSalle_({}),
listeMaterielReseauSalle_({}), listeMaterielSpecifiqueSalle_({}), listeConnectiqueSalle_({}), 
listeEcranSalle_({}){}

int Salle::getNumero() const {
	return numero_;
}

std::string Salle::getType() const {
	return type_;
}

std::vector<Poste> Salle::getListePosteSalle() {
	return listePosteSalle_;
}
std::vector<PetitMateriel> Salle::getListePetitMaterielSalle() {
	return listePetitMaterielSalle_;
}
std::vector<MaterielReseau> Salle::getListeMaterielReseauSalle() {
	return listeMaterielReseauSalle_;
}
std::vector<MaterielSpecifique> Salle::getListeMaterielSpecifiqueSalle() {
	return listeMaterielSpecifiqueSalle_;
}
std::vector<Connectique> Salle::getListeConnectiqueSalle() {
	return listeConnectiqueSalle_;
}
std::vector<Ecran> Salle::getListeEcranSalle() {
	return listeEcranSalle_;
}
