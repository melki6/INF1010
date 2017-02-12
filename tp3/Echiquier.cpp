
/********************************************
* Titre: Travail pratique #3 - Echiquier.cpp
* Date:0
* Auteur:
*******************************************/

#include "Echiquier.h"

// Constructeur par defaut
Echiquier::Echiquier()
{
	tableauPions_=new Pion;
	tableauTours_=new Tour;

	compteurPion_=0;
	compteurTour_=0;

	capaciteTableauPion_=1;
	capaciteTableauTour_=1;
}

// Destructeur
Echiquier::~Echiquier() 
{
	delete[] tableauPions_;
	delete[] tableauTours_;
}

// Methodes publiques
void Echiquier::ajouterRoi(const Roi& unRoi, int position)
{
		rois_[position] = unRoi;
}

void Echiquier::ajouterTour(const Tour& uneTour)
{

	if (compteurTour_ == capaciteTableauTour_)    // Realocation dynamique du tableau
	{
		capaciteTableauTour_ = 2 * capaciteTableauTour_;
		Tour* realocatonTableau = new Tour[capaciteTableauTour_];
		for (int i = 0; i < compteurTour_; i++)
		{
			realocatonTableau[i] = tableauTours_[i];
		}
		tableauTours_ = realocatonTableau;	
	
	}
	tableauTours_[compteurTour_++] = uneTour;

	
	
}
void Echiquier::ajouterPion(const Pion& unPion)
{
		if(compteurPion_ == capaciteTableauPion_)    // Realocation dynamique du tableau 
		{
		capaciteTableauPion_ = 2 * capaciteTableauPion_;
		Pion* realocatonTableau = new Pion[capaciteTableauPion_];
		for (int i = 0; i < compteurPion_; i++)
		{
			realocatonTableau[i] = tableauPions_[i];
		}
		tableauPions_ = realocatonTableau;
		}
		
	tableauPions_[compteurPion_++] = unPion;

	
}

void Echiquier::enleverTour(const string id)
{
	for (int i = 0; i < compteurTour_; i++)
	{
		if (tableauTours_[i].obtenirId() == id)
		{
			cout << "La Tour " << tableauTours_[i].obtenirId() <<" "<< tableauTours_[i].obtenirCouleur() << "he a ete enleve!" << endl;
			tableauTours_[i] = tableauTours_[--compteurTour_];
			tableauTours_[compteurTour_] = Tour();
			cout << "Il reste " << compteurTour_ << "Tours"<<endl;
		}
	}
}
void Echiquier::enleverPion(const string id)
{
	for (int i = 0; i < compteurPion_; i++)
	{
		if (tableauPions_[i].obtenirId() == id)
		{
			cout << "Le Pion " << tableauTours_[i].obtenirId() << " " << tableauTours_[i].obtenirCouleur() << " a ete enleve!" << endl;
			tableauPions_[i] = tableauPions_[--compteurPion_];
			tableauPions_[compteurPion_] = Pion();
			cout << "Il reste " << compteurPion_ << " Pions sur l'echiquier." << endl;
		}
		
	}
}

void Echiquier::deplacerPiece(string id, int toX, int toY)
{
	for(int i=0; i<compteurPion_;i++)
	{
		if (id == tableauPions_[i].obtenirId())
		tableauPions_[i].deplacer(toX, toY);
	}
	for (int i = 0; i<compteurTour_; i++)
	{
		if (id == tableauTours_[i].obtenirId())
				tableauTours_[i].deplacer(toX, toY);
	}
	for (int i = 0; i<2; i++)
	{
		if (id == rois_[i].obtenirId())
			rois_[i].deplacer(toX, toY);
	}
}