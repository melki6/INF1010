
/********************************************
* Titre: Travail pratique #3 - Tour.cpp
* Date:0
* Auteur:
*******************************************/

#include "Roi.h"

Roi::Roi() : Piece() {}

Roi::Roi(string id, string couleur, int positionX, int positionY) 
	: Piece(id, couleur, positionX, positionY) {}

Roi::~Roi() {}

bool Roi::estMovementValide(int toX, int toY)
{
	bool resultat = false;
	if (Piece::estMouvementValide(toX, toY))
	{
		int x, y;
		x = obtenirPositionX() - toX;        // verifier si le mouvement est d'une case ((-1,-1)< (x,y) <(1,1))
		y = obtenirPositionY() - toY;
		if (x >=-1 && x <= 1 && y>=-1 && y <= 1)
			resultat = true;
	}
	return resultat;
}

void Roi::deplacer(int toX, int toY)
{
	if (estMouvementValide(toX, toY))
	{
		cout << "Deplacement du Pion de la position (X,Y):(" << obtenirPositionX() << ","
			 << obtenirPositionY() << ") " << " a la position (X,Y):(" << toX << "," << toY << ")" << endl<<endl;
		Piece::modifierPositionX(toX);
		Piece::modifierPositionY(toY);
	}
	else
		cout << "Deplacement de la Tour non autorise" <<endl<< endl;
}




