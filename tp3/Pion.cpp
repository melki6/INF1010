/**********************************************
* Titre: Travail pratique #3 - Pion.cpp
* Date: 9 Fevrier 2017
* Auteur: Andrei Catana, Imane Abdillahi Ahmed, George Gnaga
*Description: Implementation de la classe Pion.cpp
**********************************************/


#include "Pion.h"

Pion::Pion() : Piece(),estPositionInitiale_(true) {}

Pion::Pion(string id, string couleur, int positionX, int positionY) 
	: Piece(id, couleur, positionX, positionY), estPositionInitiale_(true) {}

Pion::~Pion() {}
void Pion::modifierPositionInitiale()
{
	estPositionInitiale_ = false;
}
/****************************************************************************************************************
* Fonction: Pion::estMouvementValide
* Description: verifie si le mouvement du Pion est valide et retourne un booléen
* Paramètres: int toX, int toY
*****************************************************************************************************************/

bool Pion::estMouvementValide(int toX, int toY)
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

		if(obtenirCouleur()=="noir") // si la couleur est noire, les regles de deplacement sont les suivantes
		{
			if (estPositionInitiale_ == true)
			{
				if (y==-2 && x == 0) // deplacement 2 cases seulement sur l'axe des Y
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
/****************************************************************************************************************
* Fonction: Pion::deplacer
* Description: affiche la nouvelle position du Pion si il a été déplacé
* Paramètres: int toX, int toY
*****************************************************************************************************************/

void Pion::deplacer(int toX, int toY)
{
	if (estMouvementValide(toX, toY)) // si le mouvement est valide, affiche le déplacement du Pion
	{
		cout << "Deplacement du Pion "<<obtenirId()<<" de la position :(" << obtenirPositionX() << ","
			<< obtenirPositionY() << ") " << " a la position :(" << toX << "," << toY << ")" << endl << endl;
		Piece::modifierPositionX(toX);
		Piece::modifierPositionY(toY);
		modifierPositionInitiale();
	}
	else
		cout << "Deplacement du Pion non autorise" <<endl<<endl;
}




