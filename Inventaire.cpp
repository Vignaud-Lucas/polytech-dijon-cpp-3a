#include "Inventaire.h"

Inventaire::Inventaire():
	listePosteInventaire_({}),
	listePetitMaterielInventaire_({}),
	listeMaterielReseauInventaire_({}),
	listeMaterielSpecifiqueInventaire_({}),
	listeConnectiqueInventaire_({}),
	listeEcranInventaire_({}){}



void Inventaire::popPoste(int v) {
listePosteInventaire_.erase(listePosteInventaire_.begin() + v);
}
void Inventaire::popPM(int v) {
	listePetitMaterielInventaire_.erase(listePetitMaterielInventaire_.begin() +v );
}
void Inventaire::popMR(int v) {
	listeMaterielReseauInventaire_.erase(listeMaterielReseauInventaire_.begin() +v);
}
void Inventaire::popMS(int v) {
	listeMaterielSpecifiqueInventaire_.erase(listeMaterielSpecifiqueInventaire_.begin() +v);
}
void Inventaire::popC(int v) {
	listeConnectiqueInventaire_.erase(listeConnectiqueInventaire_.begin()+v);
}
void Inventaire::popE(int v) {
	listeEcranInventaire_.erase(listeEcranInventaire_.begin()+v);
}

Poste Inventaire::getPoste(int v){
	return listePosteInventaire_[v];
}
PetitMateriel Inventaire::getPetitMateriel(int v) {
return listePetitMaterielInventaire_[v];
}
MaterielReseau Inventaire::getMaterielReseau(int v)  {
	return listeMaterielReseauInventaire_[v];
}
MaterielSpecifique Inventaire::getMaterielSpecifique(int v) {
	return listeMaterielSpecifiqueInventaire_[v];
}
Connectique Inventaire::getConnectique(int v) {
	return listeConnectiqueInventaire_[v];
}
Ecran Inventaire::getEcran(int v) {
	return listeEcranInventaire_[v];
}

int Inventaire::getPosteSize() const {
	return listePosteInventaire_.size();
}
int Inventaire::getPetitMaterielSize() const {
	return listePetitMaterielInventaire_.size();
}
int Inventaire::getMaterielReseauSize() const {
	return listeMaterielReseauInventaire_.size();
}
int Inventaire::getMaterielSpecifiqueSize() const {
	return listeMaterielSpecifiqueInventaire_.size();
}
int Inventaire::getConnectiqueSize() const {
	return listeConnectiqueInventaire_.size();
}
int Inventaire::getEcranSize() const {
	return listeEcranInventaire_.size();
}

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
