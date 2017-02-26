/**********************************************
* Titre: Travail pratique #2 - Infirmier.cpp
* Date: 9 Février 2017
* Auteur: Andrei ,Imane Abdillahi Ahmed, George Gnaga
**********************************************/

#include "Infirmier.h"
#include <iostream>
#include <iomanip>
#include "Const.h"
#include <vector>
using namespace std;
Infirmier::Infirmier()
{
}

Infirmier::Infirmier(const std::string & nom, const std::string & prenom, unsigned int nbChambre)
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

string Infirmier::obtenirPrenom() const
{
	return prenom_;
}
unsigned int Infirmier::obtenirNbChambre() const
{
	return nbChambre_;
}

string Infirmier::operator+(Infirmier &infirmier)
{
	return (infirmier.obtenirNom() + infirmier.obtenirPrenom());
}
string Infirmier::obtenirNomComplet() const // AC: implementation obtenirNomComplet
{
	return prenom_ + " " + nom_;
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
std::ostream& operator<<(std::ostream& sortie, Infirmier& infirmier)
{
	return sortie << AFFICHER_ESPACE(espace_chambre - std::to_string(infirmier.nbChambre_).size() / 2) << infirmier.obtenirPrenom() 
		<< AFFICHER_ESPACE(espace_chambre) << " "<< infirmier.obtenirNom()<< " | " 
		<< AFFICHER_ESPACE(espace_chambre - std::to_string(infirmier.nbChambre_).size() / 2)<< infirmier.nbChambre_ 
		<< AFFICHER_ESPACE(espace_chambre)<< "|" << std::endl;
}

void Infirmier::information() 
{
	cout << *this ;
}

bool Infirmier::operator==(Infirmier &infirmier)
{
	 return (nom_ == infirmier.obtenirNom() && prenom_ == infirmier.obtenirPrenom());
}
bool Infirmier::operator==(const string &nomComplet)
{
	return prenom_ + nom_ == nomComplet;
}

