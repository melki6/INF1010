/**********************************************
* Titre: Travail pratique #2 - Specialite.h
* Date: 9 F�vrier 2017
* Auteur: Andrei ,Imane Abdillahi Ahmed, George Gnaga
**********************************************/

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

	void information(); // A MODIFIER... (si necessaire) 

	// _________TP2___________
private:
	std::string domaine_;
	unsigned int niveau_;
};

#endif