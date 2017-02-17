
/********************************************
* Titre: Travail pratique #3 - Tour.cpp
* Date:0
* Auteur:
*******************************************/

#include "Tour.h"

Tour::Tour() : Piece() {}   //AC:constructeur par defaut

Tour::Tour(string id, string couleur, int positionX, int positionY) 
	:Piece(id, couleur, positionX, positionY){}

Tour::~Tour() {}

bool Tour::estMouvementValide(int toX, int toY)
{
	bool resultat = false;
	if (Piece::estMouvementValide(toX, toY))
	{
		if (obtenirPositionX() != toX && obtenirPositionY() == toY)
			resultat = true;
		if (obtenirPositionX() == toX && obtenirPositionY() != toY)
			resultat = true;
	}
	return resultat;
}

void Tour::deplacer(int toX, int toY)
{
	if (estMouvementValide(toX, toY))
	{
		cout << "Deplacement de la Tour "<<obtenirId()<<" de la position :(" << obtenirPositionX() << ","
			 << obtenirPositionY() << ") " << " a la position :(" << toX << "," << toY << ")" << endl << endl;
		Piece::modifierPositionX(toX);
		Piece::modifierPositionY(toY);
	}
	else
		cout << "Deplacement de la Tour non autorise" << endl<<endl;
}


