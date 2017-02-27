
/********************************************
* Titre: Travail pratique #4 - Piece.h
* Date:
* Auteur:
*******************************************/

#ifndef PIECE_H
#define PIECE_H


#include <iostream>
#include <string>

using namespace std;

 class Piece {


public :
	// constructeurs
	Piece() {}
	Piece(const string& id, const string& couleur, int positionX, int positionY):id_(id), couleur_(couleur), positionX_(positionX), positionY_(positionY){}

	// destructeur
	~Piece() {}

	// acesseur et modificateur
	string obtenirId() const {
		return id_; 
	}

	void modifierId(const string& id) {
		id_ = id;
	}

	string obtenirCouleur() const { 
		return couleur_;
	}

	void modifierCouleur(const string& couleur) {
		couleur_ = couleur; 
	}

	int obtenirPositionX() const {
		return positionX_; 
	}
	void modifierPositionX(int x) {
		positionX_ = x; 
	}

	int obtenirPositionY() const {
		return positionY_; 
	}

	void modifierPositionY(int y) {
		positionY_ = y;
	}

	
	bool estMouvementValide(int toX, int toY) const{
		// A IMPLEMENTER
		//AC:verifier si toX et toY change la position et si toX/toY sont comprise entre 0-7
		bool resultat = false;
		if ((positionX_ == toX && positionY_ != toY) || (positionX_ != toX && positionY_ == toY) || (positionX_ != toX && positionY_ != toY))
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

     
	virtual bool deplacer(int toX, int toY)=0; // A MODIFIER

	
	 string obtenirType() const 	{ 

		return typeid(*this).name();// A IMPLEMENTER	
	}

	friend std::ostream& operator<<(std::ostream& out, const Piece& piece)
	{
		//A IMPLEMENTER
		afficher(out, piece);
		return out;
	}

	                                            
	ostream&  afficher(ostream& stream, const Piece& piece){  // A MODIFIER SI NECESSAIRE
		stream << "Piece " << piece.couleur_ << " d'id " << piece.id_ << " : " << endl;
		stream << "Position (" << piece.positionX_ << ", " << piece.positionY_ << ")" << endl;
		return stream;
	}

private:

	string id_;
	string couleur_;
	int positionX_;
	int positionY_;

};
#endif