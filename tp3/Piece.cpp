
/********************************************
* Titre: Travail pratique #3 - Piece.cpp
* Date:0
* Auteur:
*******************************************/

#include "Piece.h"

Piece::Piece()   //AC:constructeur par defaut
{
	 id_="";
	 couleur_="";
	 positionX_=0;
	 positionY_=0;
}; 

Piece::Piece(string id, string couleur, int positionX, int positionY)  //AC: constructeur par paramentre
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

bool Piece::estMouvementValide(int toX, int toY)
{
	//AC:si toX et toY change la position et si toX/toY sont comprise entre 0-7
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
