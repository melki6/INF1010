
/********************************************
* Titre: Travail pratique #3 - Piece.h
* Date:
* Auteur:
*******************************************/


#ifndef TOUR_H
#define TOUR_H


#include <iostream>
#include <string>
#include "Piece.h"

using namespace std;

class Tour : public Piece 
{

public:
	// constructeurs
	Tour();
	Tour(string id, string couleur, int positionX, int positionY);

	// destructeur
	~Tour();

	bool estMouvementValide(int toX, int toY);
	void deplacer(int toX, int toY);

private:

};
#endif