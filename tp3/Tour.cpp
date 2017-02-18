
/**********************************************
* Titre: Travail pratique #3 - Tour.cpp
* Date: 9 Fevrier 2017
* Auteur: Andrei Catana, Imane Abdillahi Ahmed, George Gnaga
*Description: Implementation de la classe Tour.cpp
**********************************************/


#include "Tour.h"

Tour::Tour() : Piece() {}   //constructeur par defaut

Tour::Tour(string id, string couleur, int positionX, int positionY)  // constructeur par paramètre
	:Piece(id, couleur, positionX, positionY){}

Tour::~Tour() {} // destructeur
/****************************************************************************************************************
* Fonction: Tour::estMouvementValide
* Description: verifie si le mouvement de la Tour est valide et retourne un booléen
* Paramètres: int toX, int toY
*****************************************************************************************************************/
bool Tour::estMouvementValide(int toX, int toY)
{
	bool resultat = false;
	if (Piece::estMouvementValide(toX, toY)) // le mouvement de la piece est valide si une des deux conditions suivantes est respecté
	{
		if (obtenirPositionX() != toX && obtenirPositionY() == toY) // mouvement valide si la position de x n'a pas changé et que la position y a changé
			resultat = true;
		if (obtenirPositionX() == toX && obtenirPositionY() != toY)  // mouvement valide si la position de x a changé et que la position de y n'a pas changé
			resultat = true;
	}
	return resultat;
}
/****************************************************************************************************************
* Fonction: Tour::deplacer
* Description: affiche la nouvelle position de la Tour si elle a été déplacé
* Paramètres: int toX, int toY
*****************************************************************************************************************/

void Tour::deplacer(int toX, int toY)
{
	if (estMouvementValide(toX, toY)) // si le mouvement est valide, affiche le deplacement de la Tour
	{
		cout << "Deplacement de la Tour "<<obtenirId()<<" de la position :(" << obtenirPositionX() << ","
			 << obtenirPositionY() << ") " << " a la position :(" << toX << "," << toY << ")" << endl << endl;
		Piece::modifierPositionX(toX);
		Piece::modifierPositionY(toY);
	}
	else
		cout << "Deplacement de la Tour non autorise" << endl<<endl;
}


