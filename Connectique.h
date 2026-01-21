#ifndef CONNECTIQUE_H
#define CONNECTIQUE_H
#include <string>
#include <iostream>

class Connectique {
	private:
	std::string nom_;
	std::string typePort_;
	int longueur_;
	public:
	Connectique(std::string nom, std::string typePort, int longueur);
	std::string getNom() const;
	std::string getTypePort() const;
	int getLongueur() const;
	friend std::ostream& operator<<(std::ostream& os, Connectique& c);
};
#endif