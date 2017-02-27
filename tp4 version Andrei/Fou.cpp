#include "Fou.h"

// Constructeur par defaut
Fou::Fou() :Piece() {}
// Constructeur par parametre
Fou::Fou(const string& id, const string& couleur, int positionX, int positionY) :
	Piece( id,  couleur, positionX, positionY) {}
// Constructeur par copie
Fou::Fou(const Pion& pion) :Piece(pion.obtenirId(), pion.obtenirCouleur(),pion.obtenirPositionX(), pion.obtenirPositionY()){
}
	
// Destructeur
Fou::~Fou(){}

bool Fou::estMouvementValide(int toX, int toY) const {
	bool resultat=false;
	int x, y;
	x = obtenirPositionX();
	y = obtenirPositionY();
	for (int i=obtenirPositionY();i<=toY;i++){     //  verifier sur la diagonale superiore a droite 
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
	for (int i = obtenirPositionY(); i<=toY; i--) {     // verifier sur la diagonale inferieure a gauche 
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

	return resultat;
}

bool Fou::deplacer(int toX, int toY) {   
	
	bool resultat = false;
	if (estMouvementValide(toX,toY))
		resultat = true;
}

ostream&  Fou::afficher(ostream& stream) const {

	Piece:afficher(stream);
	return stream;
}

