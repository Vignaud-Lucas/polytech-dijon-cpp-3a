#ifndef POSTE_H
#define POSTE_H
#include <iostream>
#include <string>

class Poste {
	private:
	std::string nom_;
	std::string os_;
	public:
	Poste(std::string nom, std::string os);
	std::string getNom() const;
	std::string getOs() const;
};
#endif