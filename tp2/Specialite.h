#ifndef SPECIALITE_H
#define SPECIALITE_H

#include <string>
#include <iostream>

class Specialite
{
public:
	Specialite();

	Specialite(const std::string& domaine, unsigned int niveau);

	std::string obtenirDomaine() const;
	unsigned int obtenirNiveau() const;

	void modifierDomaine(const std::string& domaine);
	void modifierNiveau(unsigned int niveau);

	friend std::ostream& operator<<(std::ostream& sortie, Specialite& Specialite);

	//void information() const; // A MODIFIER... (si necessaire) 

	// _________TP2___________
private:
	std::string domaine_;
	unsigned int niveau_;
};

#endif