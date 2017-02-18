
/**********************************************
* Titre: Travail pratique #3 - Piece.cpp
* Date: 19 Fevrier 2017
* Auteur: Andrei Catana, Imane Abdillahi Ahmed, George Gnaga
*Description: Implementation de la classe Piece.cpp
**********************************************/


#include "Piece.h"

Piece::Piece()   //constructeur par defaut
{
	 id_="";
	 couleur_="";
	 positionX_=0;
	 positionY_=0;
}; 

Piece::Piece(string id, string couleur, int positionX, int positionY)  // constructeur par paramentre
{
	id_ = id;
	couleur_ = couleur;
	positionX_ = positionX;
	positionY_ = positionY;
}

Piece::~Piece() {} //destructeur

//Methodes d'acces et de modification
string Piece::obtenirId() const
{
	return id_;
}

void Piece::modifierId(string id)
{
	id_ = id;
}

string Piece::obtenirCouleur() const
{
	return couleur_;
}

void Piece::modifierCouleur(string couleur)
{
	couleur_ = couleur;
}

int Piece::obtenirPositionX() const
{
	return positionX_;
}

void Piece::modifierPositionX(int x)
{
	positionX_=x;
}

int Piece::obtenirPositionY() const
{
	return positionY_;
}

void Piece::modifierPositionY(int y)
{
	positionY_ = y;
}
/****************************************************************************************************************
* Fonction: Piece::estMouvementValide
* Description: verifie si le mouvement de la Piece est valide et retourne un booléen
* Paramètres: int toX, int toY
*****************************************************************************************************************/

bool Piece::estMouvementValide(int toX, int toY)
{
	//verifie si toX et toY ont changer de position et si le déplacement de toX/toY est compris entre 0-7
	bool resultat = false;
	if ((positionX_ == toX && positionY_ != toY)||(positionX_ != toX && positionY_ == toY)|| (positionX_ != toX && positionY_ != toY))
	{
		if (toX >= 0 && toX <= 7 && toY >= 0 && toY <= 7)
			resultat = true;
	}
	else
	{
		cout << "Deplacement de la piece non autorise " << endl;
	}
	return resultat;
}
