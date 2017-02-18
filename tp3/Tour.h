
/********************************************
* Titre: Travail pratique #3 - Piece.h
* Date: 19 Février 2017
* Auteur: Andrei Catana, Imane Abdillahi Ahmed, George Gnaga
**************************************************/


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