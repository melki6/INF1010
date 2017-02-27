#include "Echiquier.h"
#include <time.h>
#include <stdlib.h>

// Constructeur par defaut
Echiquier::Echiquier(){}

// Destructeur
Echiquier::~Echiquier() {}

// Methodes publiques

bool Echiquier::deplacerPiece(const string& id, int toX, int toY) {
	
	bool resultat = false;
	
	for (int i = 0; i < vecteurPiecesBlanches_.size(); i++) {

		if (vecteurPiecesBlanches_[i]->obtenirId == id) {

			if (vecteurPiecesBlanches_[i]->obtenirType() == "Pion") 
				resultat = vecteurPiecesBlanches_[i]->deplacer(toX, toY); 
																	
			if (vecteurPiecesBlanches_[i]->obtenirType() == "Reine")
				resultat = vecteurPiecesBlanches_[i]->deplacer(toX, toY);

			if (vecteurPiecesBlanches_[i]->obtenirType() == "Roi")
				resultat = vecteurPiecesBlanches_[i]->deplacer(toX, toY);

			if (vecteurPiecesBlanches_[i]->obtenirType() == "Fou")
				resultat = vecteurPiecesBlanches_[i]->deplacer(toX, toY);

			if (vecteurPiecesBlanches_[i]->obtenirType() == "Tour")
				resultat = vecteurPiecesBlanches_[i]->deplacer(toX, toY);		

		}
	}
	return resultat;
}
Echiquier& Echiquier::operator+=(Piece* piece) {

	if (piece->obtenirCouleur() == "blanc") {
		Pion* ptr = dynamic_cast<Pion*>(piece);
		if (ptr != nullptr)
		{
			vecteurPiecesBlanches_.push_back(ptr);
		}
		else
		{
			Reine* ptr = dynamic_cast<Reine*>(piece);
			if (ptr != nullptr)
			{
				vecteurPiecesBlanches_.push_back(ptr);
			}
			else
			{
				Fou* ptr = dynamic_cast<Fou*>(piece);
				if (ptr != nullptr)
				{
					vecteurPiecesBlanches_.push_back(ptr);
				}
				else
				{
					Tour* ptr = dynamic_cast<Tour*>(piece);
					if (ptr != nullptr)
					{
						vecteurPiecesBlanches_.push_back(ptr);
					}
					else
					{
						Roi* ptr = dynamic_cast<Roi*>(piece);
						if (ptr != nullptr)
						{
							vecteurPiecesBlanches_.push_back(ptr);
						}
					}
				}
			}
		}

		if (piece->obtenirCouleur() == "noir") {
			Pion* ptr = dynamic_cast<Pion*>(piece);
			if (ptr != nullptr)
			{
				vecteurPiecesNoires_.push_back(ptr);
			}
			else
			{
				Reine* ptr = dynamic_cast<Reine*>(piece);
				if (ptr != nullptr)
				{
					vecteurPiecesNoires_.push_back(ptr);
				}
				else
				{
					Fou* ptr = dynamic_cast<Fou*>(piece);
					if (ptr != nullptr)
					{
						vecteurPiecesBlanches_.push_back(ptr);
					}
					else
					{
						Tour* ptr = dynamic_cast<Tour*>(piece);
						if (ptr != nullptr)
						{
							vecteurPiecesNoires_.push_back(ptr);
						}
						else
						{
							Roi* ptr = dynamic_cast<Roi*>(piece);
							if (ptr != nullptr)
							{
								vecteurPiecesNoires_.push_back(ptr);
							}
						}
					}
				}
			}

		}

	}
	return *this;
}

	Echiquier& Echiquier::operator-=(const string& id){
		for (int i = 0; i < vecteurPiecesBlanches_.size(); i++) {
			if (vecteurPiecesBlanches_[i]->obtenirId == id) {
				vecteurPiecesBlanches_[i] = vecteurPiecesBlanches_[vecteurPiecesBlanches_.size() - 1];
				vecteurPiecesBlanches_.pop_back();
			}
				
		}

		for (int i = 0; i < vecteurPiecesNoires_.size(); i++) {
			if (vecteurPiecesNoires_[i]->obtenirId == id) {
				vecteurPiecesNoires_[i] = vecteurPiecesNoires_[vecteurPiecesNoires_.size() - 1];
				vecteurPiecesNoires_.pop_back();
			}

		}

		return *this;

	}

	




	bool Echiquier::promouvoir(Piece& piece) {
		int nrAleatoire;

		nrAleatoire = rand() % 2 + 0;
		if (typeid(piece).name() == "Pion") {
			if (nrAleatoire == 0)
				Reine:Reine(piece);
			if (nrAleatoire == 1)
				Tour:Tour(piece);
			if (nrAleatoire == 2)
				Fou:Fou(piece);

		}



}

std::ostream & operator<<(std::ostream & out, const Echiquier & echiquier)
{
	out << "------------INFORMATION PIECES BLANCHES------------" << endl;
	out << "Il y a " << << " Pieces blanches" << endl;



	out << endl;
	out << "------------INFORMATION PIECES NOIRES--------------" << endl;
	out << "Il y a " << << " Pieces noires" << endl;

}
