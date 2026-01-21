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

std::ostream& operator<<(std::ostream& os, const Salle& s) {
    os << "Numéro : " << s.getNumero() << " Type: " << s.getType() << std::endl;
	os << "Postes: " << std::endl;
	for (Poste p: s.listePosteSalle_) {
		os << p << std::endl;
	}
	os << "Petit Matériel: " << std::endl;
	for (PetitMateriel p : s.listePetitMaterielSalle_) {
		os << p << std::endl;
	}
	os << "Materiel Reseau: " << std::endl;
	for (MaterielReseau p : s.listeMaterielReseauSalle_) {
		os << p << std::endl;
	}
	os << "Materiel Specifique: " << std::endl;
	for (MaterielSpecifique p : s.listeMaterielSpecifiqueSalle_) {
		os << p << std::endl;
	}
	os << "Connectique: " << std::endl;
	for (Connectique p : s.listeConnectiqueSalle_) {
		os << p << std::endl;
	}
	os << "Ecran: " << std::endl;
	for (Ecran p : s.listeEcranSalle_) {
		os << p << std::endl;
	}
	return os;
}


void Salle::addPoste(Poste p) {
	listePosteSalle_.push_back(p);
}
void Salle::addPetitMateriel(PetitMateriel p) {
	listePetitMaterielSalle_.push_back(p);
}
void Salle::addMaterielReseau(MaterielReseau p) {
	listeMaterielReseauSalle_.push_back(p);
}
void Salle::addMaterielSpecifique(MaterielSpecifique p) {
	listeMaterielSpecifiqueSalle_.push_back(p);
}
void Salle::addEcran(Ecran e) {
	listeEcranSalle_.push_back(e);
}
void Salle::addConnectique(Connectique c){
	listeConnectiqueSalle_.push_back(c);
	}
