/**********************************************
* Titre: Travail pratique #3 - Echiquier.cpp
* Date: 9 Fevrier 2017
* Auteur: Andrei Catana, Imane Abdillahi Ahmed, George Gnaga
*Description: Implementation de la classe Echiquier.cpp
**********************************************/

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
/****************************************************************************************************************
* Fonction: Echiquier::ajouteurRoi
* Description: ajoute un Roi dans un tableau de Roi
* Param�tres: Roi unRoi, int position
*****************************************************************************************************************/
void Echiquier::ajouterRoi(const Roi& unRoi, int position)
{
		rois_[position] = unRoi;
}
/****************************************************************************************************************
* Fonction: Echiquier::ajouterTour
* Description: ajoute une Tour dans un tableau de Tour
* Param�tre: Tour uneTour
*****************************************************************************************************************/
void Echiquier::ajouterTour(const Tour& uneTour)
{

	if (compteurTour_ == capaciteTableauTour_)    // R�allocation dynamique du tableau si la capacit� est atteinte
	{
		capaciteTableauTour_ = 2 * capaciteTableauTour_;
		Tour* realocatonTableau = new Tour[capaciteTableauTour_];
		for (int i = 0; i < compteurTour_; i++)
		{
			realocatonTableau[i] = tableauTours_[i];
		}
		tableauTours_ = realocatonTableau;	
	
	}
	tableauTours_[compteurTour_++] = uneTour;   // ajout d'une Tour au tableau de Tour et augmentation du nombre de Tours dans le tableau

	
	
}
/****************************************************************************************************************
* Fonction: Echiquier::ajouterPion
* Description: ajoute un Pion dans un tableau de Pion
* Param�tre: Tour uneTour
*****************************************************************************************************************/

void Echiquier::ajouterPion(const Pion& unPion)
{
		if(compteurPion_ == capaciteTableauPion_)    // R�allocation dynamique du tableau si la capacit� est atteinte 
		{
		capaciteTableauPion_ = 2 * capaciteTableauPion_;
		Pion* realocatonTableau = new Pion[capaciteTableauPion_];
		for (int i = 0; i < compteurPion_; i++)
		{
			realocatonTableau[i] = tableauPions_[i];
		}
		tableauPions_ = realocatonTableau;
		}
		
	tableauPions_[compteurPion_++] = unPion;   // ajout d'un Pion au tableau de Pion et augmentation du nombre de Pions dans le tableau

	
}
/****************************************************************************************************************
* Fonction: Echiquier::enleverTour
* Description: recherche la Tour � enlever gr�ce un a id et enleve cette Tour du tableau
* Param�tre: string id
*****************************************************************************************************************/

void Echiquier::enleverTour(const string id)
{
	for (int i = 0; i < compteurTour_; i++)
	{
		if (tableauTours_[i].obtenirId() == id) // verifie si il y a une Tour avec le m�me id que les Tours dans le tableau
		{
			cout << "La Tour " << tableauTours_[i].obtenirId() <<" "<< tableauTours_[i].obtenirCouleur() << " a ete enleve!" << endl;
			tableauTours_[i] = tableauTours_[--compteurTour_];  // enleve la Tour avec le m�me id
			tableauTours_[compteurTour_] = Tour();  
			cout << "Il reste " << compteurTour_ << "Tours"<<endl;
		}
	}
}
/****************************************************************************************************************
* Fonction: Echiquier::enleverPion
* Description: recherche le Pion � enlever gr�ce un a id et enleve ce Pion du tableau
* Param�tre: string id
*****************************************************************************************************************/

void Echiquier::enleverPion(const string id)
{
	for (int i = 0; i < compteurPion_; i++)
	{
		if (tableauPions_[i].obtenirId() == id)  // verifie si il y a un Pion avec le m�me id que les Pions dans le tableau
		{
			cout << "Le Pion " << tableauTours_[i].obtenirId() << " " << tableauTours_[i].obtenirCouleur() << " a ete enleve!" << endl;
			tableauPions_[i] = tableauPions_[--compteurPion_];  // enleve la Tour avec le m�me id
			tableauPions_[compteurPion_] = Pion();
			cout << "Il reste " << compteurPion_ << " Pions sur l'echiquier." << endl;
		}
		
	}
}
/****************************************************************************************************************
* Fonction: Echiquier::deplacerPiece
* Description: recherche la Piece � d�placer gr�ce un a id et d�place cette Piece � l'endroit d�sir�e
* Param�tre: string id, int toX, int toY
*****************************************************************************************************************/
void Echiquier::deplacerPiece(string id, int toX, int toY)
{
	for(int i=0; i<compteurPion_;i++) 
	{
		if (id == tableauPions_[i].obtenirId()) // recherche le Pion avec le m�me id 
		tableauPions_[i].deplacer(toX, toY);    // d�place le Pion trouv� � la position voulue
	}
	for (int i = 0; i<compteurTour_; i++)
	{
		if (id == tableauTours_[i].obtenirId())      // recherche la Tour avec le m�me id 
				tableauTours_[i].deplacer(toX, toY); // d�place la Tour trouv�e � la position voulue
	}
	for (int i = 0; i<2; i++)
	{
		if (id == rois_[i].obtenirId())  // recherche le Roi avec le m�me id
			rois_[i].deplacer(toX, toY);  // d�place le Roi trouv� � la position voulue
	}
}