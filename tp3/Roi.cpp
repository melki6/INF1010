
/**********************************************
* Titre: Travail pratique #3 - Roi.cpp
* Date: 9 Fevrier 2017
* Auteur: Andrei Catana, Imane Abdillahi Ahmed, George Gnaga
*Description: Implementation de la classe Roi.cpp
**********************************************/


#include "Roi.h"

Roi::Roi() : Piece() {}

Roi::Roi(string id, string couleur, int positionX, int positionY) 
	: Piece(id, couleur, positionX, positionY) {}

Roi::~Roi() {}
/****************************************************************************************************************
* Fonction: Roi::estMouvementValide
* Description: verifie si le mouvement du Roi est valide et retourne un booléen
* Paramètres: int toX, int toY
*****************************************************************************************************************/

bool Roi::estMovementValide(int toX, int toY)
{
	bool resultat = false;
	if (Piece::estMouvementValide(toX, toY)) // verifie si le mouvement de la piece est valide
	{
		int x, y;
		x = obtenirPositionX() - toX;        // verifier si le mouvement du Roi est d'une case ((-1,-1)< (x,y) <(1,1))
		y = obtenirPositionY() - toY;
		if (x >=-1 && x <= 1 && y>=-1 && y <= 1)
			resultat = true;
	}
	return resultat;
}
/****************************************************************************************************************
* Fonction: Roi::deplacer
* Description: affiche la nouvelle position du Roi si il a été déplacé
* Paramètres: int toX, int toY
*****************************************************************************************************************/

void Roi::deplacer(int toX, int toY)
{
	if (estMouvementValide(toX, toY)) // si le mouvement est valide, affiche le déplacement du Roi
	{
		cout << "Deplacement du Roi de la position (X,Y):(" << obtenirPositionX() << ","
			 << obtenirPositionY() << ") " << " a la position (X,Y):(" << toX << "," << toY << ")" << endl<<endl;
		Piece::modifierPositionX(toX);
		Piece::modifierPositionY(toY);
	}
	else
		cout << "Deplacement de la Tour non autorise" <<endl<< endl;
}




