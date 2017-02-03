#include "Infirmier.h"
#include <iostream>
#include <iomanip>
#include "Const.h"
using namespace std;

Infirmier::Infirmier()
{
}

Infirmier::Infirmier(const std::string & nom, const std::string & prenom, unsigned int nbChambre): nom_(nom), prenom_(prenom), nbChambre_(nbChambre)
{
	nom_ = nom;
	prenom_ = prenom;
	nbChambre_ = nbChambre;
}


Infirmier::~Infirmier()
{
}

std::string Infirmier::obtenirNom() const
{
	return nom_;
}

std::string Infirmier::obtenirPrenom() const
{
	return prenom_;
}

unsigned int Infirmier::obtenirNbChambre() const
{
	return nbChambre_;
}

void Infirmier::modifierNom(const std::string & nom)
{
	nom_ = nom;
}

void Infirmier::modifierPrenom(const std::string & prenom)
{
	prenom_ = prenom;
}

void Infirmier::modifierNbChambre(unsigned int nbChambre)
{
	nbChambre_ = nbChambre;
}

ostream& operator <<(std::ostream& sortie, Infirmier& infirmier)
{
	return sortie << AFFICHER_ESPACE(espace_chambre - std::to_string(infirmier.nbChambre_).size() / 2)<<infirmier.obtenirPrenom() << AFFICHER_ESPACE(espace_chambre) << " "<<infirmier.obtenirNom()
	 << " | " << AFFICHER_ESPACE(espace_chambre - std::to_string(infirmier.nbChambre_).size() / 2)
	<< infirmier.nbChambre_ << AFFICHER_ESPACE(espace_chambre)
	 << "|" << std::endl;
}


//void Infirmier::information() const // A MODIFIER... (si necessaire)
//{
//	
//	//std::cout << "| " << infirmier.obtenirNomComplet() << AFFICHER_ESPACE(espace_nom - infirmier.obtenirNom().size());
//	std::cout << " | " << AFFICHER_ESPACE(espace_chambre - std::to_string(infirmier.nbChambre_).size()/2);
//	std::cout << infirmier.nbChambre_ << AFFICHER_ESPACE(espace_chambre);
//	std::cout << "|" << std::endl;
//}
