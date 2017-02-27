
/********************************************
* Titre: Travail pratique #4 - Tour.h
* Date:
* Auteur:
*******************************************/

#ifndef REINE_H
#define REINE_H
#include "Piece.h"
#include <string>
#include "Pion.h"

using namespace std;

class Reine : public Piece {

public:
	// Constructeurs
	Reine();
	Reine(const string& id, const string& couleur, int positionX, int positionY);
	Reine(const Pion& pion);

	// Destructeur
	~Reine();

	bool estMouvementValide(int toX, int toY) const;
	bool deplacer(int toX, int toY);
	ostream&  afficher(ostream& stream) const;
};
#endif
