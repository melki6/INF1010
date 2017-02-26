/**********************************************
* Titre: Travail pratique #2 - Hopital.h
* Date: 9 Février 2017
* Auteur: Andrei ,Imane Abdillahi Ahmed, George Gnaga
**********************************************/

#ifndef HOPITAL_H
#define HOPITAL_H

#include <string>
#include "Personnel.h"

using namespace std;

class Hopital
{
public:
	// Constructeurs par parametre
	Hopital(const string& nom, Personnel* personnel); // AC:construceuru par parametres
	
	~Hopital(); // Destructeur

				// Methodes d'acces
	string obtenirNom() const;
	Personnel* obtenirPersonnel() const;

	// Methodes de modification
	void modifierNom(const string& nom);
	void modifierPersonnel(Personnel* personnel);

	friend std::ostream& operator<<(std::ostream& sortie, Hopital& hopital);

	void information();

private:
	// Variables privees
	string nom_;
	Personnel* personnel_;

};

#endif