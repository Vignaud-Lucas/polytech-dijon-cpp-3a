#include "Inventaire.h"

Inventaire::Inventaire():
	listePosteInventaire_({}),
	listePetitMaterielInventaire_({}),
	listeMaterielReseauInventaire_({}),
	listeMaterielSpecifiqueInventaire_({}),
	listeConnectiqueInventaire_({}),
	listeEcranInventaire_({}){}


void Inventaire::addPoste(Poste& p) {
	listePosteInventaire_.push_back(p);
}
void Inventaire::addPetitMateriel(PetitMateriel& p) {
	listePetitMaterielInventaire_.push_back(p);
}
void Inventaire::addMaterielReseau(MaterielReseau& p) {
	listeMaterielReseauInventaire_.push_back(p);
}
void Inventaire::addMaterielSpecifique(MaterielSpecifique& p) {
	listeMaterielSpecifiqueInventaire_.push_back(p);
}
void Inventaire::addEcran(Ecran& e) {
	listeEcranInventaire_.push_back(e);
}
void Inventaire::addConnectique(Connectique& c) {
	listeConnectiqueInventaire_.push_back(c);
}
std::vector<Poste> Inventaire::getListePosteInventaire() {
	return listePosteInventaire_;
}
std::vector<PetitMateriel> Inventaire::getListePetitMaterielInventaire() {
	return listePetitMaterielInventaire_;
}
std::vector<MaterielReseau> Inventaire::getListeMaterielReseauInventaire() {
	return listeMaterielReseauInventaire_;
}
std::vector<MaterielSpecifique> Inventaire::getListeMaterielSpecifiqueInventaire() {
	return listeMaterielSpecifiqueInventaire_;
}
std::vector<Connectique> Inventaire::getListeConnectiqueInventaire() {
	return listeConnectiqueInventaire_;
}
std::vector<Ecran> Inventaire::getListeEcranInventaire() {
	return listeEcranInventaire_;
}

std::ostream& operator<<(std::ostream& os, const Inventaire& i) {
	os << "Postes: " << std::endl;
	for (Poste p : i.listePosteInventaire_) {
		os << p << std::endl;
	}
	os << "Petit Matériel: " << std::endl;
	for (PetitMateriel p : i.listePetitMaterielInventaire_) {
		os << p << std::endl;
	}
	os << "Materiel Reseau: " << std::endl;
	for (MaterielReseau p : i.listeMaterielReseauInventaire_) {
		os << p << std::endl;
	}
	os << "Materiel Specifique: " << std::endl;
	for (MaterielSpecifique p : i.listeMaterielSpecifiqueInventaire_) {
		os << p << std::endl;
	}
	os << "Connectique: " << std::endl;
	for (Connectique p : i.listeConnectiqueInventaire_) {
		os << p << std::endl;
	}
	os << "Ecran: " << std::endl;
	for (Ecran p : i.listeEcranInventaire_) {
		os << p << std::endl;
	}
	return os;
	} 
