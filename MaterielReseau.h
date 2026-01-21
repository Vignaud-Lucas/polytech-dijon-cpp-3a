#ifndef MATERIELRESEAU_H
#define MATERIELRESEAU_H
#include <string>
#include <iostream>

class MaterielReseau {
private:
std::string nom_;
std::string marque_;
public:
MaterielReseau(std::string nom, std::string marque);
std::string getNom() const;
std::string getMarque() const;
};
#endif