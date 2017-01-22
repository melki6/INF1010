/**********************************************
* Titre: Travail pratique #1 - Infirmier.h
* Date: 20 janvier 2017
* Auteur:Andrei Catana, Livio Nassarah
* Description: Implementation de la classe Infirmier
*********************************************/

#include "Infirmier.h"
/**********************************************
* Fonction: Infirmier::Infirmier
* Description: Constructeur par defaut
* Parametre:aucun
* Retour: aucun
*********************************************/

Infirmier::Infirmier()
{
	 nom_="inconnu";
	 prenom_="inconnu";
     nbChambres_=0;
};
/**********************************************
* Fonction: Infirmier::Infirmier
* Description: Constructeur par defaut
* Parametre:string nom, string prenom, int nbChambres
* Retour: aucun
*********************************************/

Infirmier::Infirmier(string nom, string prenom, int nbChambres)
{
	nom_ = nom;
	prenom_ = prenom;
	nbChambres_ = nbChambres;
};


/**********************************************
* Fonction: Infirmier::getNom
* Description: methode d'acces
* Parametre: nom
* Retour: aucun
*********************************************/

string Infirmier::getNom()  // methode d'acces de nom
{
	return nom_;
}

string Infirmier::getPrenom() // methode d'acces de prenom
{
	return prenom_;
}

int Infirmier::getNbChambres() // methode d'acces de nbChambres
{
	return nbChambres_;
}

/**********************************************
* Fonction: Infirmier::getNom
* Description: methode de modification
* Parametre: nom
* Retour: aucun
*********************************************/

void Infirmier::setNom(string nom)  // methode de modification de nom
{
	nom_=nom;
}

void Infirmier::setPrenom(string prenom) // methode de modificationsde prenom
{
	 prenom_=prenom;
}

void Infirmier::setNbChambres(int nbChambres) // methode de modification de nbChambres
{
	 nbChambres_=nbChambres;
}