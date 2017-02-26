/**********************************************
* Titre: Travail pratique #2 - Infirmier.h
* Date: 9 Février 2017
* Auteur: Andrei ,Imane Abdillahi Ahmed, George Gnaga
**********************************************/

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
	std::string obtenirNomComplet() const;
	unsigned int obtenirNbChambre() const;

	void modifierNom(const std::string& nom);
	void modifierPrenom(const std::string& prenom);
	void modifierNbChambre(unsigned int nbChambre);

	friend std::ostream& operator<<(std::ostream& sortie, Infirmier& infirmier);

	void information() ;

	std::string Infirmier::operator+(Infirmier &infirmier1);
	bool Infirmier::operator==(Infirmier &infirmier);
	bool operator==(const std::string &NomComplet);
private:
	std::string nom_;
	std::string prenom_;
	unsigned int nbChambre_;
};

#endif
