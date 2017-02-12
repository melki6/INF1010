
/********************************************
* Titre: Travail pratique #3 - Tour.cpp
* Date:0
* Auteur:
*******************************************/

#include "Pion.h"

Pion::Pion() : Piece(),estPositionInitiale_(true) {}

Pion::Pion(string id, string couleur, int positionX, int positionY) 
	: Piece(id, couleur, positionX, positionY), estPositionInitiale_(true) {}

Pion::~Pion() {}

bool Pion::estMovementValide(int toX, int toY)
{
	bool resultat = false;
	if (Piece::estMouvementValide(toX, toY))
	{
		int x, y;
		x = toX - obtenirPositionX();
		y = toY - obtenirPositionY();
		if (obtenirCouleur() == "blanc")  // les regles de deplacement des pions blanches
		{
			if (estPositionInitiale_ == true)
			{
				if (y == 2 && x == 0) // deplacement 2 cases seulement sur l'axe des Y
					resultat = true;
				if (y == 1 && x <= 1 && x >= -1) // deplacement 1 case sur Y et trois direction sur X
					resultat = true;
			}
			else
				if (y == 1 && x <= 1 && x >= -1)
					resultat = true;
		}

		if(obtenirCouleur()=="noir") // si la couleur est noire, les regles de deplacement sont suivantes
		{
			if (estPositionInitiale_ == true)
			{
				if (y==2 && x == 0) // deplacement 2 cases seulement sur l'axe des Y
					resultat = true;
				if (y == -1 && x <= 1 && x >= -1) // deplacement 1 case sur Y et trois direction sur X
					resultat = true;
			}
			else
				if (y ==-1 && x <= 1 && x >= -1)
					resultat = true;
		}
	}
	return resultat;
}

void Pion::deplacer(int toX, int toY)
{
	if (estMouvementValide(toX, toY))
	{
		cout << "Deplacement du Pion de la position (X,Y):(" << obtenirPositionX() << ","
			<< obtenirPositionY() << ") " << " a la position (X,Y):(" << toX << "," << toY << ")" << endl << endl;
		Piece::modifierPositionX(toX);
		Piece::modifierPositionY(toY);
	}
	else
		cout << "Deplacement du Pion non autorise" <<endl<<endl;
}




