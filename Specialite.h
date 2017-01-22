/**********************************************
* Titre: Travail pratique #1 - Specialite.h
* Date: 20 janvier 2017
* Auteur:Andrei Catana, Livio Nassarah
* Description: Definition de la classe Specialite
*********************************************/
#ifndef		SPECIALITE_H
#define SPECIALITE_H

#include <string>

using namespace std;

class Specialite
{
public:
	// Constructeurs par defaut et par parametre
	Specialite();
	Specialite(string domaine, int niveau);

	//Destructeur 
	~Specialite(void);

	// Methodes d'acces
	string getDomaine();
	int getNiveau();

	// Methodes de modification
	void setDomaine(string domaine);
	void setNiveau(int niveau);

private:

	// Variables privees
	string domaine_;
	int niveau_;
};

#endif
