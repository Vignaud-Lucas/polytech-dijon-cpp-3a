#ifndef PETITMATERIEL_H
#define PETITMATERIEL_H
#include <iostream>
#include <string>

class PetitMateriel {
	private:
	std::string type_;
	public:
	PetitMateriel(std::string type);
	std::string getType() const;
};
#endif