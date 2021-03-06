/**********************************************
* Titre: Travail pratique #2 - Specialite.cpp
* Date: 9 F�vrier 2017
* Auteur: Andrei ,Imane Abdillahi Ahmed, George Gnaga
**********************************************/


#include "Specialite.h"
#include <iostream>
#include <iomanip>
#include "Const.h"
using namespace std;

Specialite::Specialite()
{
}

Specialite::Specialite(const std::string & domaine, unsigned int niveau): domaine_(domaine), niveau_(niveau)
{
}

std::string Specialite::obtenirDomaine() const
{
	return domaine_;
}

unsigned int Specialite::obtenirNiveau() const
{
	return niveau_;
}

void Specialite::modifierDomaine(const std::string & domaine)
{
	domaine_ = domaine;
}

void Specialite::modifierNiveau(unsigned int niveau)
{
	niveau_ = niveau;
}

ostream& operator<<(ostream& sortie, Specialite& specialite)
{
	return sortie << " | " << specialite.domaine_ << AFFICHER_ESPACE(espace_domaine - specialite.domaine_.size())
	 << " | " << AFFICHER_ESPACE(espace_niveau - std::to_string(specialite.niveau_).size()) << specialite.niveau_
	 << AFFICHER_ESPACE(espace_niveau) << " | ";
}

void Specialite::information() 
{
	cout << *this;
}