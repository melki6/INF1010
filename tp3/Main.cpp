
/**************************************************
* Titre: Travail pratique #3 - Main.cpp
* Date: 19 Février 2017
* Auteur: Andrei Catana, Imane Abdillahi Ahmed, George Gnaga
**************************************************/
#include "Echiquier.h"

int main()
{
	//1-  Creez un objet de type Roi à l'aide du constructeur par défaut.
	Roi roi1;

	//2- Donnez l'id D1 au roi défini dans l'étape 1
	roi1.modifierId("D1");
	roi1.modifierCouleur("blanc");

	//3-  Définissez la position (3,0) pour le roi défini dans l'étape 1
	roi1.modifierPositionX(3);
	roi1.modifierPositionY(0);

	//4-  Creez un objet de type Roi Noir à la position (3,7) ayant comme id D8.
	Roi roi2("D8", "noir", 3, 7);

	//5-  Creez les huit pions blancs avec les coordonnées (i,1) i : 0-->7 et les id A2-->H2
	Pion pionB1("A2", "blanc", 0, 1);
	Pion pionB2("B2", "blanc", 1, 1);
	Pion pionB3("C2", "blanc", 2, 1);
	Pion pionB4("D2", "blanc", 3, 1);
	Pion pionB5("E2", "blanc", 4, 1);
	Pion pionB6("F2", "blanc", 5, 1);
	Pion pionB7("G2", "blanc", 6, 1);
	Pion pionB8("H2", "blanc", 7, 1);


	//6-  Creez les huit pions noirs avec les coordonnées (i,6) i : 0-->7 et les id A7-->H7
	Pion pionN1("A7", "noir", 0, 6);
	Pion pionN2("B7", "noir", 1, 6);
	Pion pionN3("C7", "noir", 2, 6);
	Pion pionN4("D7", "noir", 3, 6);
	Pion pionN5("E7", "noir", 4, 6);
	Pion pionN6("F7", "noir", 5, 6);
	Pion pionN7("G7", "noir", 6, 6);
	Pion pionN8("H7", "noir", 7, 6);

	//7-  Creez les deux tours blanches d'id "A1" et "H1" dans les positions respectives (0,0) et (7,0)
	Tour tourB1("A1", "blanc", 0, 0);
	Tour tourB2("H1", "blanc", 7, 0);

	//8-  Creez les deux tours noires  d'id "A8" et "H8" dans les positions respectives (0,7) et (7,7)
	Tour tourN1("A8", "noir", 0, 7);
	Tour tourN2("H8", "noir", 7, 7);

	//9-  Creez un Echiquier
	Echiquier echiquier;



	//10- Ajoutez toutes les pièces précidament définies à l'echiquier
	echiquier.ajouterPion(pionB1);
	echiquier.ajouterPion(pionB2);
	echiquier.ajouterPion(pionB3);
	echiquier.ajouterPion(pionB4);
	echiquier.ajouterPion(pionB5);
	echiquier.ajouterPion(pionB6);
	echiquier.ajouterPion(pionB7);
	echiquier.ajouterPion(pionB8);
	
	echiquier.ajouterPion(pionN1);
	echiquier.ajouterPion(pionN2);
	echiquier.ajouterPion(pionN3);
	echiquier.ajouterPion(pionN4);
	echiquier.ajouterPion(pionN5);
	echiquier.ajouterPion(pionN6);
	echiquier.ajouterPion(pionN7);
	echiquier.ajouterPion(pionN8);

	echiquier.ajouterTour(tourB1);
	echiquier.ajouterTour(tourB2);
	echiquier.ajouterTour(tourN1);
	echiquier.ajouterTour(tourN2);

	echiquier.ajouterRoi(roi1, 0);
	echiquier.ajouterRoi(roi2, 1);
	

	//11-  Deplacer la piece d'id A2 à la position (0,2)  --Deplacement de Pion
	echiquier.deplacerPiece("A2",0,2);

	//12-  Deplacer le piece d'id H7 à la position (7,4)  --Deplacement du Pion
	echiquier.deplacerPiece("H7", 7, 4);

	//13-  Deplacer la piece d'id A2 à la position (0,4)  --Deplacement du Pion
	echiquier.deplacerPiece("A2", 0, 4);

	//14-  Deplacer la piece d'id H8 à la position (7,6)  --Deplacement de la Tour
	echiquier.deplacerPiece("H8", 7, 6);

	//15-  Deplacer la piece d'id H8 à la position (7,6)  --Deplacement de la Tour
	echiquier.deplacerPiece("H8", 7, 6);

	//16-  Enlever la piece d'id A2
	echiquier.enleverPion("A2");
	echiquier.enleverTour("A2"); 

	
	return 0;
}

