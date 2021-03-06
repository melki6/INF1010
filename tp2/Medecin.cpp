/**********************************************
* Titre: Travail pratique #2 - Medecin.cpp
* Date: 9 F�vrier 2017
* Auteur: Andrei ,Imane Abdillahi Ahmed, George Gnaga
**********************************************/

#include "Medecin.h"
#include <iostream>
#include <iomanip>
#include "Const.h"

Medecin::Medecin()
{
	nom_ = "";
	horaires_ = 0;
	specialite_ = nullptr;
}


Medecin::Medecin(const string& nom, int horaires, Specialite* specialite): nom_(nom), horaires_(horaires), specialite_(specialite)
{
}

Medecin::Medecin(const Medecin& medecin)  //constructeur par copie
{
	Medecin copieMedecin;
	copieMedecin = medecin;
}
Medecin::~Medecin() // A MODIFIER... (si necessaire)
{
	
}

string Medecin::obtenirNom() const
{
	return nom_;
}

int Medecin::obtenirHoraires() const
{
	return horaires_;
}

Specialite Medecin::obtenirSpecialite() const
{
	return *specialite_;
}

void Medecin::modifierNom(const string& nom)
{
	nom_ = nom;
}

void Medecin::modifierHoraires(int horaires)
{
	horaires_ = horaires;
}

void Medecin::modifierSpecialite(Specialite* specialite)
{
	specialite_ = specialite;
}

ostream& operator<<(ostream& sortie, Medecin& medecin)
{
	return sortie << "| " << medecin.nom_ << AFFICHER_ESPACE(espace_nom - medecin.nom_.size())
		<< " | " << AFFICHER_ESPACE(espace_horaires - std::to_string(medecin.horaires_).size()) << medecin.horaires_
		<< AFFICHER_ESPACE(espace_horaires)
		<< medecin.obtenirSpecialite()<< endl;
}

void Medecin::information()
{
	cout << *this;
}

bool Medecin::operator==(Medecin &medecin)
{
	return (nom_ == medecin.obtenirNom());
}
bool Medecin::operator==(const string &Nom)
{
	return  nom_ == Nom;
}

void Medecin::operator=(const Medecin&  medecin)
{
	nom_=medecin.nom_;
	horaires_ = medecin.horaires_;
	specialite_ = medecin.specialite_;

}

