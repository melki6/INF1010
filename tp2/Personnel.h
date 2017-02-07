#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <string>
#include <vector>
#include "Medecin.h"
#include "Infirmier.h"


class Personnel
{
public:
	// Constructeur par defaut
	Personnel();

	// Destructeur
	~Personnel();
	
	// Methodes publiques
	bool ajouterMedecin(Medecin* medecin);
	bool retirerMedecin(const std::string& nom);
	bool ajouterInfirmier(Infirmier* infirmier);
	bool retirerInfirmier(const std::string& nom);

	Personnel& operator+=(Medecin* medecin);
	Personnel& operator-=(Medecin* medecin);
	Personnel& operator+=(Infirmier* infirmier);
	Personnel& operator-=(Infirmier* infirmier);
	
	void afficherInfirmier();
		
	void information() const; // A MODIFIER... (si necessaire)
	void operator<<(ostream& sortie);
	// _________TP2___________

private:
	void afficherInfirmiers() const; // A MODIFIER... (si necessaire)
	//void afficherMedecins() const; // A MODIFIER... (si necessaire)
	vector < Infirmier* > Infirmier_;
	vector < Medecin*> Medecin_;
	// _________TP2___________
};

#endif