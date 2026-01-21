#ifndef SALLE_H
#define SALLE_H
#include <string>
#include <vector>
#include <iostream>
#include "Ecran.h"
#include "PetitMateriel.h"
#include "MaterielReseau.h"
#include "MaterielSpecifique.h"
#include "Connectique.h"
#include "Poste.h"

class Salle {
private:
int numero_;
std::string type_;
std::vector<Poste> listePosteSalle_;
std::vector<PetitMateriel> listePetitMaterielSalle_;
std::vector<MaterielReseau> listeMaterielReseauSalle_;
std::vector<MaterielSpecifique> listeMaterielSpecifiqueSalle_;
std::vector<Connectique> listeConnectiqueSalle_;
std::vector<Ecran> listeEcranSalle_;
friend std::ostream& operator<<(std::ostream& os,const Salle& s);
public:
Salle(int numero, std::string type);
int getNumero() const;
std::string getType() const;
std::vector<Poste> getListePosteSalle();
std::vector<PetitMateriel> getListePetitMaterielSalle();
std::vector<MaterielReseau> getListeMaterielReseauSalle();
std::vector<MaterielSpecifique> getListeMaterielSpecifiqueSalle();
std::vector<Connectique> getListeConnectiqueSalle();
std::vector<Ecran> getListeEcranSalle();
void addPoste(Poste p);
void addPetitMateriel(PetitMateriel p);
void addMaterielReseau(MaterielReseau p);
void addMaterielSpecifique(MaterielSpecifique p);
void addEcran(Ecran e);
void addConnectique(Connectique c);
};
#endif