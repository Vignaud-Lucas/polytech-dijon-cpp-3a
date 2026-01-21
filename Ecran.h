#ifndef ECRAN_H
#define ECRAN_H
#include <iostream>
#include <string>

class Ecran {
private:
std::string nom_;
std::string marque_;
std::string taille_;
public:
Ecran(std::string nom, std::string marque, std::string taille);
std::string getMarque() const;
std::string getTaille() const;
std::string getNom() const;
};
#endif