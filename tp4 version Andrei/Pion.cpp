
/********************************************
* Titre: Travail pratique #4 - Pion.cpp
* Date:
* Auteur:
*******************************************/

#include "Pion.h"


Pion::Pion():Piece("defaultId","blanc",0,0),estPositionInitiale_(true){
}


Pion::Pion(const string& id, const string& couleur, int positionX, int positionY) : Piece(id, couleur, positionX, positionY) {
	estPositionInitiale_ = true;
}

Pion::~Pion() {
}


bool Pion::obtenirEstPositionInitiale() const{
	return estPositionInitiale_;
}

void Pion::setEstPositionInitiale(bool estPositionInitiale) {
	estPositionInitiale_ = estPositionInitiale;
}


bool Pion::estMouvementValide(int toX, int toY) {
	bool resultat=false;

	if (!Piece::estMouvementValide(toX, toY))
		resultat = false;
	else {

		if (obtenirCouleur() == "blanc") {
			if (obtenirEstPositionInitiale()) {
				if (((toY - obtenirPositionY()) <= 2) && (toX == obtenirPositionX())
					&& (toY > obtenirPositionY())) {
					resultat = true;
				}
			}
			else
			{
				if ((toY - obtenirPositionY()) <= 1 && (toX == obtenirPositionX())
					&& toY > obtenirPositionY()) {
					resultat = true;
				}
			}
		}
		if (obtenirCouleur() == "noir") {
			if (obtenirEstPositionInitiale()) {
				if (((toY - obtenirPositionY()) <= 2) && (toX == obtenirPositionX())
					&& (toY < obtenirPositionY())) {
					resultat = true;
				}
			}
			else
			{
				if (((toY - obtenirPositionY()) <= 1) && (toX == obtenirPositionX())
					&& (toY < obtenirPositionY())) {
					resultat = true;
				}
			}
		}

	}
	return resultat;
}

bool Pion::deplacer(int toX, int toY) {
	if (estMouvementValide(toX, toY)) {
		
		modifierPositionX(toX);
		modifierPositionY(toY);
		estPositionInitiale_ = false;	
		cout << "Deplacement de la piece reussie" << endl;
		return true;
	}
	else {
		cout << "Mouvement non valide" << endl;
		return false;
	}

}