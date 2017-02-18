
/********************************************
* Titre: Travail pratique #3 - Piece.h
* Date: 19 Février 2017
* Auteur: Andrei Catana, Imane Abdillahi Ahmed, George Gnaga
**************************************************/

#ifndef ROI_H
#define ROI_H

#include <string>
#include <iostream>
#include "Piece.h"

using namespace std;

class Roi:public Piece

{
public:
	// constructeurs
	Roi();
	Roi(string id, string couleur, int positionX, int positionY);

	// destructeur
	~Roi();

	//methodes
	bool estMovementValide(int toX, int toY);
	void deplacer(int toX,int toY);


private:


};

#endif
