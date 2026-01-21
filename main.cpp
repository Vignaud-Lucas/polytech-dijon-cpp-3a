#include <string>
#include <vector>
#include <iostream>
#include "Ecran.h"
#include "PetitMateriel.h"
#include "MaterielReseau.h"
#include "MaterielSpecifique.h"
#include "Connectique.h"
#include "Poste.h"
#include "Salle.h"
#include "inventaire.h"

void afficherMenuPrincipal() {
    std::cout << "\nMENU PRINCIPAL\n";
    std::cout << "1. Ajout de materiel dans l'inventaire\n";
    std::cout << "2. Ajout d'une salle\n";
    std::cout << "3. Placement de materiel dans l'inventaire dans une salle\n";
    std::cout << "4. Affichage de l'inventaire\n";
    std::cout << "5. Affichage des salles\n";
    std::cout << "0. Quitter\n";
    std::cout << "choix : ";
}

int main() {
    Inventaire inv = Inventaire();
    std::vector<Salle> listeSalles;
    int choixPrincipal, choixSousMenu, longueur;
    std::string nom,os,type,marque,taille;

    do {
        afficherMenuPrincipal();
        std::cin >> choixPrincipal;

        switch (choixPrincipal) {
        case 1: // AJOUT MATERIEL DANS INVENTAIRE
            do {
                std::cout << "\nAJOUT MATERIEL DANS INVENTAIRE\n";
                std::cout << "1. Poste de Travail\n";
                std::cout << "2. Petit Materiel\n";
                std::cout << "3. Ecran\n";
                std::cout << "4. Connectique\n";
                std::cout << "5. Materiel Reseau\n";
                std::cout << "6. Materiel Specifique\n";
                std::cout << "0. Retour\n";
                std::cout << "Choix : ";
                std::cin >> choixSousMenu;

                if (choixSousMenu == 1) {
                    std::cout << "Nom: "; std::cin >> nom;
                    std::cout << "Système d'Exploitation: "; std::cin >> os;
                    Poste p(nom,os);
                    inv.addPoste(p);
                }
                else if (choixSousMenu == 2) {
                    std::cout << "Nom: "; std::cin >> nom;
                    std::cout << "Type: "; std::cin >> type;
                    PetitMateriel pM(nom, type);
                    inv.addPetitMateriel(pM);
                }
                else if (choixSousMenu == 3) {
                    std::cout << "Nom: "; std::cin >> nom;
                    std::cout << "Marque: "; std::cin >> marque;
                    std::cout << "Taille: "; std::cin >> taille;
                    Ecran e(nom,marque,taille);
                    inv.addEcran(e);
                   }
                else if (choixSousMenu == 4) {
                    std::cout << "Nom: "; std::cin >> nom;
                    std::cout << "Type Port: "; std::cin >> type;
                    std::cout << "Longueur: "; std::cin >> longueur;
                    Connectique c(nom, type,longueur);
                    inv.addConnectique(c);
                  }
                else if (choixSousMenu == 5) {
                    std::cout << "Nom: "; std::cin >> nom;
                    std::cout << "Marque: "; std::cin >> marque;
                    MaterielReseau mR(nom,marque);
                    inv.addMaterielReseau(mR);
                }
                else if (choixSousMenu == 5) {
                    std::cout << "Nom: "; std::cin >> nom;
                    std::cout << "Marque: "; std::cin >> marque;
                    MaterielSpecifique mS(nom, marque);
                    inv.addMaterielSpecifique(mS);
                    }
            } while (choixSousMenu != 0);
            break;

        case 2: // AJOUT D'UNE SALLE
            do {
                std::cout << "\nAjout d'une salle\n";
                std::cout << "1. Ajouter\n";
                std::cout << "0. Retour\n";
                std::cout << "Choix : ";
                std::cin >> choixSousMenu;

                if (choixSousMenu == 1) {
                    int numero;
                    std::cout << "Numero: "; std::cin >> numero;
                    std::cout << "Type: "; std::cin >> type;
                    Salle s(numero,type);
                    listeSalles.push_back(s);
                }
               
            } while (choixSousMenu != 0);
            break;

        case 3: // PLACEMENT DU MATERIEL DE L'INVENTAIRE DANS UNE SALLE
            do {
                std::cout << "1. Poste de Travail\n";
                std::cout << "2. Petit Materiel\n";
                std::cout << "3. Ecran\n";
                std::cout << "4. Connectique\n";
                std::cout << "5. Materiel Reseau\n";
                std::cout << "6. Materiel Specifique\n";
                std::cout << "0. Retour\n";
                std::cout << "Choix\n";
                std::cin >> choixSousMenu;

                if (choixSousMenu == 1) {
                  
                }
                else if (choixSousMenu == 2) {
                  
                }
                if (choixSousMenu == 3) {
                    
                }
                if (choixSousMenu == 4) {
                   
                }
                else if (choixSousMenu == 5) {
                   
                }
                else if (choixSousMenu == 6) {
                    
                }
            } while (choixSousMenu != 0);
            break;

        case 4: // AFFICHAGE DE L'INVENTAIRE
            do {
                std::cout << "1. Afficher\n";
                std::cout << "0. Retour\n";
                std::cout << "Choix\n";
                std::cin >> choixSousMenu;

                if (choixSousMenu == 1) {
                    for (Poste& p : inv.getListePosteInventaire()) {
                        std::cout << p << std::endl;
                }
                    for (PetitMateriel& p : inv.getListePetitMaterielInventaire()) {
                        std::cout << p <<std::endl;
                }
                    for (MaterielReseau& p : inv.getListeMaterielReseauInventaire()) {
                        std::cout << p << std::endl;
                    }
                    for (MaterielSpecifique& p : inv.getListeMaterielSpecifiqueInventaire()) {
                        std::cout << p << std::endl;
                    }
                    for (Connectique& p : inv.getListeConnectiqueInventaire()) {
                        std::cout << p << std::endl;
                    }
                    for (Ecran& p : inv.getListeEcranInventaire()) {
                        std::cout << p << std::endl;
                    }

                }
                    
                
            } while (choixSousMenu != 0);
            break;

        case 5: // AFFICHAGE DES CLASSES
            do {
                std::cout << "1. Afficher\n";
                std::cout << "0. Retour\n";
                std::cout << "Choix\n";
                std::cin >> choixSousMenu;

                if (choixSousMenu == 1){
                    for (Salle s : listeSalles) {
                        std::cout << s << std::endl;
                }
                }
            } while (choixSousMenu != 0);
            break;       
        

        case 0:
            std::cout << "fin\n";
            break;

        default:
            std::cout << "Choix invalide.\n";
        }
    } while (choixPrincipal != 0);

	return 0;
}