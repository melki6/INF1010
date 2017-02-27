#include "Reine.h"

// constructeur par defaut
Reine::Reine() :Piece() {}
// constructeur par parametre
Reine::Reine(const string& id, const string& couleur, int positionX, int positionY): Piece(id, couleur, positionX, positionY) {}
// constructeur par copie
Reine::Reine(const Pion& pion) : Piece(pion.obtenirId(), pion.obtenirCouleur(), pion.obtenirPositionX(), pion.obtenirPositionY()) {}

// Destructeur
Reine::~Reine() {}

bool Reine::estMouvementValide(int toX, int toY) const {
	
	bool resultat = false;
	if (Piece::estMouvementValide(toX, toY)) {

		if ((obtenirPositionX() == toX) || (obtenirPositionY() == toY))
			resultat = true;

		int x, y;
		x = obtenirPositionX();
		y = obtenirPositionY();
		for (int i = obtenirPositionY(); i <= toY; i++) {     //  verifier sur la diagonale superiore a droite 
			x++;
			y++;
			if (toX == x && toY == y)
				resultat = true;
		}

		x = obtenirPositionX();
		y = obtenirPositionY();
		for (int i = obtenirPositionY(); i<toY; i++) {     // verifier sur la diagonale superiore a gauche 
			x--;
			y++;
			if (toX == x && toY == y)
				resultat = true;
		}

		x = obtenirPositionX();
		y = obtenirPositionY();
		for (int i = obtenirPositionY(); i <= toY; i--) {     // verifier sur la diagonale inferieure a gauche 
			x--;
			y--;
			if (toX == x && toY == y)
				resultat = true;
		}

		x = obtenirPositionX();
		y = obtenirPositionY();
		for (int i = obtenirPositionY(); i <= toY; i--) {     // verifier sur la diagonale inferieure a droite 
			x++;
			y--;
			if (toX == x && toY == y)
				resultat = true;
		}
	}
	return resultat;

}

bool Reine::deplacer(int toX, int toY) {

	if (estMouvementValide(toX, toY)) {

		modifierPositionX(toX);
		modifierPositionY(toY);
		return true;
	}
		
	else
		return false;

}

ostream&  Reine::afficher(ostream& stream) const {

	Piece:afficher(stream);
	return stream;
}
