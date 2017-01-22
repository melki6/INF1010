/**********************************************
* Titre: Travail pratique #1 - Infirmier.h
* Date: 20 janvier 2017
* Auteur:Andrei Catana, Livio Nassarah
* Description: Definition de la classe Infirmier
*********************************************/
#ifndef INFIRMIER_H
#define INFIRMIER_H

#include <string>

using namespace std;

class Infirmier
{
public:
	// Constructeurs par defaut 
	Infirmier();
	// Constructeurs par parametre
	Infirmier(string nom, string prenom, int nbChambres);

	// Methodes d'acces
	string getNom();
	string getPrenom();
	int getNbChambres();

	// Methodes de modification
	void setNom(string nom);
	void setPrenom(string prenom);
	void setNbChambres(int nbChambres);

private:

	// Variables privees
	string nom_;
	string prenom_;
	int nbChambres_;
};

#endif


