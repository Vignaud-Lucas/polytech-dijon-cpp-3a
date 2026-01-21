#ifndef PETITMATERIEL_H
#define PETITMATERIEL_H
#include <iostream>
#include <string>

class PetitMateriel {
	private:
	std::string nom_;
	std::string type_;
	public:
	PetitMateriel(std::string nom, std::string type);
	std::string getType() const;
	std::string getNom() const;
	friend std::ostream& operator<<(std::ostream& os, PetitMateriel& m);
};
#endif