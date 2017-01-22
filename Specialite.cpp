/**********************************************
* Titre: Travail pratique #1 - Specialite.h
* Date: 20 janvier 2017
* Auteur:Andrei Catana, Livio Nassarah
* Description: Implementation de la classe Specialiste
*********************************************/

#include "Specialite.h"
#include <iostream>

using namespace std;

// Fonction: Infirmier::Infirmier, Constructeur par defaut


Specialite::Specialite()
{
	domaine_ = "inconnu";
	niveau_ = 0;

};

// Destructeur par defaut

Specialite::~Specialite()
{
	cout<<"Destructeur par defaut" << endl;
}

//  Fonction: Infirmier::Infirmier, Constructeur par parametre

Specialite::Specialite ( string domaine, int niveau)
{
	domaine_ = domaine;
	niveau_ = niveau;
};




string Specialite::getDomaine()  // methode d'acces de domaine
{
	return domaine_;
}

int Specialite::getNiveau() // methode d'acces de niveau
{
	return niveau_;
}


void Specialite::setDomaine( string domaine)  // methode de modification de domaine
{
	domaine_ = domaine;
}

void Specialite::setNiveau(int niveau) // methode de modification de niveau
{
	niveau_ = niveau;
}
