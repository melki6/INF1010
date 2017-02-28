#include "Echiquier.h"
#include <time.h>
#include <stdlib.h>

// Constructeur par defaut
Echiquier::Echiquier(){}

// Destructeur
Echiquier::~Echiquier() {
	for (int i = 0; i < vecteurPiecesBlanches_.size(); i++){
		delete vecteurPiecesBlanches_[i]; 
}
	
	for (int i = 0; i < vecteurPiecesNoires_.size(); i++) {
		delete vecteurPiecesNoires_[i]; 
	}
	cout << endl<<"************ Echiquer detruit avec succes. ***************"<<endl;
	
}

// Methodes publiques

bool Echiquier::deplacerPiece(const string& id, int toX, int toY) {
	
	
	for (int i = 0; i < vecteurPiecesBlanches_.size(); i++) {

		if (vecteurPiecesBlanches_[i]->obtenirId() == id) {

			vecteurPiecesBlanches_[i]->deplacer(toX, toY);

		}
	}

	for (int i = 0; i < vecteurPiecesNoires_.size(); i++) {

		if (vecteurPiecesNoires_[i]->obtenirId() == id) {
			vecteurPiecesNoires_[i]->deplacer(toX, toY);
			
		}
	}
	return true;
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
						vecteurPiecesNoires_.push_back(ptr);
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


	return *this;
}

	Echiquier& Echiquier::operator-=(const string& id){
		for (int i = 0; i < vecteurPiecesBlanches_.size(); i++) {
			if (vecteurPiecesBlanches_[i]->obtenirId() == id) {
				vecteurPiecesBlanches_[i] = vecteurPiecesBlanches_[vecteurPiecesBlanches_.size() - 1];
				vecteurPiecesBlanches_.pop_back();
			}
				
		}

		for (int i = 0; i < vecteurPiecesNoires_.size(); i++) {
			if (vecteurPiecesNoires_[i]->obtenirId() == id) {
				vecteurPiecesNoires_[i] = vecteurPiecesNoires_[vecteurPiecesNoires_.size() - 1];
				vecteurPiecesNoires_.pop_back();
			}

		}

		return *this;

	}

	




	bool Echiquier::promouvoir(const string& id) {
		int nrAleatoire;
		bool resultat = false;
		nrAleatoire = rand() % 2 + 0;


		for (int i = 0; i < vecteurPiecesBlanches_.size(); i++) { // verifier pour les pieces blanches
			if (vecteurPiecesBlanches_[i]->obtenirId() == id) {
				if (typeid(*vecteurPiecesBlanches_[i]) == typeid(Pion)) {
					
					Pion* pion = dynamic_cast<Pion*>(vecteurPiecesBlanches_[i]);    // verifier si le pointeur de type Pion est creer l'objet
					if (pion != nullptr)
					{
						if (nrAleatoire == 1) {
							Reine* reine = new Reine(*pion);
							vecteurPiecesBlanches_[i] = reine;
							resultat = true;
						}

						if (nrAleatoire == 1) {
							Tour* tour = new Tour(*pion);
							vecteurPiecesBlanches_[i] = tour;
							resultat = true;
						}
						if (nrAleatoire == 2) {
							Fou* fou = new Fou(*pion);
							vecteurPiecesBlanches_[i] = fou;
							resultat = true;
						}
						cout << "Promotion reussie" << endl;
					}
				}
			}
		}

		for (int i = 0; i < vecteurPiecesNoires_.size(); i++) { // verifier pour les pieces noires
			if (vecteurPiecesNoires_[i]->obtenirId() == id) {
				if (typeid(*vecteurPiecesNoires_[i]) == typeid(Pion)) {

					Pion* pion = dynamic_cast<Pion*>(vecteurPiecesNoires_[i]);   // verifier si le pointeur de type Pion est creer l'objet
					if(pion!=nullptr){

						if (nrAleatoire == 1) {
							Reine* reine = new Reine(*pion);
							vecteurPiecesNoires_[i] = reine;
							resultat = true;
						}

						if (nrAleatoire == 1) {
							Tour* tour = new Tour(*pion);
							vecteurPiecesNoires_[i] = tour;
							resultat = true;
						}
						if (nrAleatoire == 2) {
							Fou* fou = new Fou(*pion);
							vecteurPiecesNoires_[i] = fou;
							resultat = true;
						}
						cout << "Promotion reussie" << endl;
					}
				}
			}
		}

		if (resultat == false)
			cout << "Promotion impossible" << endl;
		return resultat;
}

	std::ostream & operator<<(std::ostream & out, const Echiquier & echiquier)
	{
		out << "------------INFORMATION PIECES BLANCHES------------" << endl;
		out << "Il y a " << echiquier.vecteurPiecesBlanches_.size() << " Pieces blanches" << endl;

		for (int i = 0; i < echiquier.vecteurPiecesBlanches_.size(); i++) {
			echiquier.vecteurPiecesBlanches_[i]->afficher(out);
			if (typeid(*echiquier.vecteurPiecesBlanches_[i]) == typeid(Roi))
				cout << "Roi, ";
			if (typeid(*echiquier.vecteurPiecesBlanches_[i]) == typeid(Reine))
				cout << "Reine, ";
			if (typeid(*echiquier.vecteurPiecesBlanches_[i]) == typeid(Fou))
				cout << "Fou, ";
			if (typeid(*echiquier.vecteurPiecesBlanches_[i]) == typeid(Tour))
				cout << "Tour, ";

				
		}


	out << endl;
	out << "------------INFORMATION PIECES NOIRES--------------" << endl;
	out << "Il y a " << echiquier.vecteurPiecesNoires_.size() << " Pieces noires" << endl;

	for (int i = 0; i < echiquier.vecteurPiecesBlanches_.size(); i++) {
		if(echiquier.vecteurPiecesNoires_[i])
		echiquier.vecteurPiecesNoires_[i]->afficher(out);
		if (typeid(*echiquier.vecteurPiecesNoires_[i]) == typeid(Roi))
			cout << "Roi, ";
		if (typeid(*echiquier.vecteurPiecesNoires_[i]) == typeid(Reine))
			cout << "Reine, ";
		if (typeid(*echiquier.vecteurPiecesNoires_[i]) == typeid(Fou))
			cout << "Fou, ";
		if (typeid(*echiquier.vecteurPiecesNoires_[i]) == typeid(Tour))
			cout << "Tour, ";
	}

	return out;

}
