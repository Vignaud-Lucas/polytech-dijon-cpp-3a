#ifndef INVENTAIRE_H
#define INVENTAIRE_H
#include <string>
#include <vector>
#include <iostream>
#include "Ecran.h"
#include "PetitMateriel.h"
#include "MaterielReseau.h"
#include "MaterielSpecifique.h"
#include "Connectique.h"
#include "Poste.h"

class Inventaire {
	private:
		std::vector<Poste> listePosteInventaire_;
		std::vector<PetitMateriel> listePetitMaterielInventaire_;
		std::vector<MaterielReseau> listeMaterielReseauInventaire_;
		std::vector<MaterielSpecifique> listeMaterielSpecifiqueInventaire_;
		std::vector<Connectique> listeConnectiqueInventaire_;
		std::vector<Ecran> listeEcranInventaire_;
   public:
   Inventaire();
   std::vector<Poste> getListePosteInventaire();
   std::vector<PetitMateriel> getListePetitMaterielInventaire();
   std::vector<MaterielReseau> getListeMaterielReseauInventaire();
   std::vector<MaterielSpecifique> getListeMaterielSpecifiqueInventaire();
   std::vector<Connectique> getListeConnectiqueInventaire();
   std::vector<Ecran> getListeEcranInventaire();

};
#endif