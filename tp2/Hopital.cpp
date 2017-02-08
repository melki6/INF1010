#include "Hopital.h"
#include <iostream>
#include <iomanip>
#include "Const.h"

Hopital::Hopital(const string& nom, Personnel* personnel):nom_(nom), personnel_(personnel)
{}

Hopital::~Hopital()
{}

string Hopital::obtenirNom() const
{
	return nom_;
}
Personnel Hopital::obtenirPersonnel()const 
{
	return *personnel_;
}

// Methodes de modification
void Hopital::modifierNom(const string& nom) 
{
	nom_ = nom;
}
void Hopital::modifierPersonnel(Personnel* personnel)
{
	personnel_ = personnel;
}

void Hopital::information()
{
	cout<<*this;
}

ostream& operator<<(ostream& sortie, Hopital& hopital)
{
	hopital.information();
	return sortie;
}



