#ifndef MATERIELSPECIFIQUE_H
#define MATERIELSPECIFIQUE_H
#include <string>
#include <iostream>

class MaterielSpecifique {
private:
	std::string nom_;
	std::string marque_;
public:
	MaterielSpecifique(std::string nom, std::string marque);
	std::string getNom() const;
	std::string getMarque() const;
	friend std::ostream& operator<<(std::ostream& os, MaterielSpecifique& m);
};
#endif