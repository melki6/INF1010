#ifndef MEDECIN_H
#define MEDECIN_H

#include <string>
#include "Specialite.h"

using namespace std;

class Medecin 
{
public:
	// Constructeurs par parametre
	Medecin(const string& nom); // A MODIFIER... (si necessaire)
	Medecin(const string& nom, int horaires, Specialite* specialite); // A MODIFIER... (si necessaire)
	// Destructeur
	~Medecin(); // A MODIFIER... (si necessaire)
	
	// Methodes d'acces
	string obtenirNom() const;
	int obtenirHoraires() const;
	Specialite obtenirSpecialite() const;
	
	// Methodes de modification
	void modifierNom(const string& nom);
	void modifierHoraires(int horaires);
	void modifierSpecialite(Specialite* specialite);
	bool Medecin::operator==(Medecin &medecin);
	bool Medecin::operator==(const std::string &Nom);
	friend std::ostream& operator<<(std::ostream& sortie, Medecin& medecin);

private:
	// Variables privees
	string nom_;
	int horaires_;
	Specialite* specialite_;
	
};

#endif