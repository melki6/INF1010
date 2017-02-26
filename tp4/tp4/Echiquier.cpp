#include "Echiquier.h"
#include "Piece.h"
#include "Fou.h"
#include <time.h>



bool Echiquier::deplacerPiece(const string& id, int toX, int toY)
{
	bool ok = false;
	for (int i = 0; i < 8; i++)
	{
		if (vecteurPiecesBlanches_[i]->obtenirId() == id)
		{
			vecteurPiecesBlanches_[i]->modifierPositionX(toX);
			 ok = true;
		}
		if (vecteurPiecesNoires_[i]->obtenirId() == id)
		{
			vecteurPiecesNoires_[i]->modifierPositionY(toY);
			ok = true;

		}
	}
	return ok;
}
Echiquier& Echiquier::operator+=(Piece* piece)
{
	if (piece->obtenirCouleur() == "blanc")  // FAUX! UTILISER UNE RELATION DE COMPOSITION, DONC FAIRE UTILISER UN DYNAMIC_CAST :( 
	{
		vecteurPiecesBlanches_.push_back(piece);
	}
	if (piece->obtenirCouleur() == "noir")
	{
		vecteurPiecesNoires_.push_back(piece);
    }
	return *this;
}
Echiquier& Echiquier::operator-=(const string& id)  // recherche la piece avec cet id et la retire
{
	for (unsigned i = 0; i < vecteurPiecesBlanches_.size(); i++) { 
		if (vecteurPiecesBlanches_[i]->obtenirId() == id)
			vecteurPiecesBlanches_.pop_back();
	}
	for (unsigned i = 0; i < vecteurPiecesNoires_.size(); i++) {
		if (vecteurPiecesNoires_[i]->obtenirId() == id)
			vecteurPiecesNoires_.pop_back();
	}
	return *this;
}


//std::ostream & operator<<(std::ostream & out, const Echiquier & echiquier)
//{
//	out << "------------INFORMATION PIECES BLANCHES------------" << endl;
//	out << "Il y a " << << " Pieces blanches" << endl;
//
//
//
//	out << endl;
//	out << "------------INFORMATION PIECES NOIRES--------------" << endl;
//	out << "Il y a " << << " Pieces noires" << endl;
//
//}
