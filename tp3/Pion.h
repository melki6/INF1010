
/********************************************
* Titre: Travail pratique #3 - Piece.h
* Date:
* Auteur:
*******************************************/

#ifndef PION_H
#define PION_H

#include <string>
#include <iostream>
#include "Piece.h"

using namespace std;

class Pion :public Piece

{
public:
	// constructeurs
	Pion();
	Pion(string id, string couleur, int positionX, int positionY);

	// destructeur
	~Pion();

	//methodes
	bool estMouvementValide(int toX, int toY);
	void deplacer(int toX, int toY);
	void modifierPositionInitiale();  //change position initiale a false


private:
	
	bool estPositionInitiale_;

};

#endif
