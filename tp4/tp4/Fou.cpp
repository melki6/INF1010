/********************************************
* Titre: Travail pratique #4 - Fou.cpp
* Date:
* Auteur:
*******************************************/

#include "Fou.h"
#include "Pion.h"

Fou::Fou() :Piece("defaultId", "blanc", 0, 0) {
}


Fou::Fou(const string& id, const string& couleur, int positionX, int positionY) : Piece(id, couleur, positionX, positionY) {
	
}

Fou::Fou(const Pion& pion)
{
	pion.obtenirEstPositionInitiale(); //initialise la position initiale, A CONFIRMER
}

Fou::~Fou() {
}
bool Fou::estMouvementValide(int toX, int toY) const
{
	bool ok = false;
	if (Piece::estMouvementValide(toX, toY)) {
		ok = true;
		if (toX != 1 && toY != 1)  // FAUX, JUSTE POUR QU'IL N'Y AI PAS D'ERREUR. A REMPLACER
		{
			ok = true;
			cout << "mouvement valide" << endl;
    	}
		else 
			cout << "mouvement INVALIDE" << endl;
	}
	else
		cout << "mouvement INVALIDE" << endl;
	return ok;
}
bool Fou::deplacer(int toX, int toY)
{
	bool ok = false;
	if (estMouvementValide(toX, toY)==true)
	{
		modifierPositionX(toX);
		modifierPositionY(toY);
		ok = true;
	}
	return ok;
}

ostream&  Fou::afficher(ostream& stream) const
{
	return stream << Piece::obtenirPositionX(); // retourne le id de fou??? A verifier
}