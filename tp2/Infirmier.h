#ifndef INFIRMIER_H
#define INFIRMIER_H

#include <string>
#include <iostream>

class Infirmier
{
public:
	Infirmier(); // A MODIFIER... (si necessaire)
	Infirmier(const std::string& nom, const std::string& prenom, unsigned int nbChambre); // A MODIFIER... (si necessaire)
	~Infirmier(); // A MODIFIER... (si necessaire)

	std::string obtenirNom() const; 
	std::string obtenirPrenom() const;
	unsigned int obtenirNbChambre() const;

	void modifierNom(const std::string& nom);
	void modifierPrenom(const std::string& prenom);
	void modifierNbChambre(unsigned int nbChambre);

	//void information() const; // A MODIFIER... (si necessaire)
	friend std::ostream& operator<<(std::ostream& sortie, Infirmier& infirmier);


private:
	std::string nom_;
	std::string prenom_;
	unsigned int nbChambre_;
};

#endif
