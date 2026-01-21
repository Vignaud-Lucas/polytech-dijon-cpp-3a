#include "Inventaire.h"

Inventaire::Inventaire():
	listePosteInventaire_({}),
	listePetitMaterielInventaire_({}),
	listeMaterielReseauInventaire_({}),
	listeMaterielSpecifiqueInventaire_({}),
	listeConnectiqueInventaire_({}),
	listeEcranInventaire_({}){}



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

