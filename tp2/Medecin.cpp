#include "Medecin.h"
#include <iostream>
#include <iomanip>
#include "Const.h"

Medecin::Medecin(const string& nom): nom_(nom), horaires_(0)
{
}

Medecin::Medecin(const string& nom, int horaires, Specialite* specialite): nom_(nom), horaires_(horaires), specialite_(specialite)
{
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
	return sortie << "| " << medecin.nom_ 
		<< AFFICHER_ESPACE(espace_nom - medecin.nom_.size()) << " | " 
		<< AFFICHER_ESPACE(espace_horaires - std::to_string(medecin.horaires_).size()) << medecin.horaires_
		<< AFFICHER_ESPACE(espace_horaires)<<medecin.specialite_<< endl;
}

void Medecin::information() const
{
	cout << this;
}

bool Medecin::operator==(Medecin &medecin)
{
	return (nom_ == medecin.obtenirNom());
}
bool Medecin::operator==(const string &Nom)
{
	return  nom_ == Nom;
}

