

/**********************************************
* Titre: Travail pratique #4 - Main.cpp
* Date: 9 Fevrier 2017
* Auteur: Andrei Catana, Imane Abdillahi Ahmed, George Gnaga
*Description: creation d'un echiquer et ajout des element au tableau
**********************************************/


/************************REPONCES AUX QUESTIONS******************************************************
*	1.La classe Piece est abstraite parce qu'on a declaré une methode virtuelle pure (deplacer)     *                                               *
*	2.Le destructeur virtual est utile pour ne le pas definir  dans chaque classe derivée           *
*   3.On pourrait utiliser l'heritage multiple(de Fou et Tour) pour créer la classe Reine           *
*****************************************************************************************************/

#include "Piece.h"
#include "Roi.h"
#include "Tour.h"
#include "Pion.h"
#include "Echiquier.h"

#include <string.h>
#include <iostream>

using namespace std;

int main()
{
	//1-  Creez les huit pions blancs avec les coordonnйes (i,1) i : 0-->7 et les id A2-->H2
	Pion* pionB1 = new Pion("A2", "blanc", 0, 1);
	Pion* pionB2 = new Pion("B2", "blanc", 1, 1);
	Pion* pionB3 = new Pion("C2", "blanc", 2, 1);
	Pion* pionB4 = new Pion("D2", "blanc", 3, 1);
	Pion* pionB5 = new Pion("E2", "blanc", 4, 1);
	Pion* pionB6 = new Pion("F2", "blanc", 5, 1);
	Pion* pionB7 = new Pion("G2", "blanc", 6, 1);
	Pion* pionB8 = new Pion("H2", "blanc", 7, 1);
	//2-Creez les huit pions noirs avec les coordonnйes (i,6) i : 0-->7 et les id A7-->H7
	Pion* pionN1 = new Pion("A7", "noir", 0, 6);
	Pion* pionN2 = new Pion("B7", "noir", 1, 6);
	Pion* pionN3 = new Pion("C7", "noir", 2, 6);
	Pion* pionN4 = new Pion("D7", "noir", 3, 6);
	Pion* pionN5 = new Pion("E7", "noir", 4, 6);
	Pion* pionN6 = new Pion("F7", "noir", 5, 6);
	Pion* pionN7 = new Pion("G7", "noir", 6, 6);
	Pion* pionN8 = new Pion("H7", "noir", 7, 6);
	//3-  Creez les deux tours blanches d'id "A1" et "H1" dans les positions respectives (0,0) et (7,0)
	Tour* tourB1 = new Tour("A1", "blanc", 0, 0);
	Tour* tourB2 = new Tour("H1", "blanc", 7, 0);
	//4-  Creez les deux tours noires  d'id "A8" et "H8" dans les positions respectives (0,7) et (7,7)
	Tour* tourN1 = new Tour("A8", "noir", 0, 7);
	Tour* tourN2 = new Tour("H8", "noir", 7, 7);
	//5-  Creez les Fous blanc et noirs
	Fou* fouB1 = new Fou("C1", "blanc", 2, 0);
	Fou* fouB2 = new Fou("F1", "blanc", 5, 0);

	Fou* fouN1 = new Fou("C7", "noir", 2, 7);
	Fou* fouN2 = new Fou("F7", "noir", 5, 7);

	//6-  Creez les deux reines E1 et E8	
	Reine* reineB = new Reine("E1", "blanc", 4, 0);
	Reine* reineN = new Reine("E8", "noir", 4, 7);

	//7-  Creez les deux rois D1 et D8
	Roi* roiB = new Roi("D1", "blanc", 3, 0);
	Roi* roiN = new Roi("D8", "noir", 3, 7);
	
	// 8- Creez un echiquier 
	Echiquier unEchiquier;

	cout << "----------AJOUT DES PIECES----------" << endl;
	//9- Ajoutez toutes les piиces prйcidament dйfinies а l'echiquier	
	unEchiquier += pionB1;
	unEchiquier += pionB2;
	unEchiquier += pionB3;
	unEchiquier += pionB4;
	unEchiquier += pionB5;
	unEchiquier += pionB6;
	unEchiquier += pionB7;
	unEchiquier += pionB8;

	
	unEchiquier += pionN1;
	unEchiquier += pionN2;
	unEchiquier += pionN3;
	unEchiquier += pionN4;
	unEchiquier += pionN5;
	unEchiquier += pionN6;
	unEchiquier += pionN7;
	unEchiquier += pionN8;


	unEchiquier += tourB1;
	unEchiquier += tourB2;

	unEchiquier += tourN1;
	unEchiquier += tourN2;

	unEchiquier += fouB1;
	unEchiquier += fouB2;

	unEchiquier += fouN1;
	unEchiquier += fouN2;

	unEchiquier += reineB;
	unEchiquier += reineN;

	unEchiquier += roiB;
	unEchiquier += roiN;

	cout << "----------TEST DES DEPLACEMENTS------------" << endl;
	//10-  Deplacer la piece d'id A2 а la position (0,2)  --Deplacement de Pion
	unEchiquier.deplacerPiece("A2", 0, 2); 

	//11-  Deplacer le piece d'id H7 а la position (7,4)  --Deplacement du Pion
	unEchiquier.deplacerPiece("H7", 7, 4); 
	//12-  Deplacer la piece d'id A2 а la position (0,4)  --Deplacement du Pion
	unEchiquier.deplacerPiece("A2", 0, 4); 
	//13-  Deplacer la piece d'id H8 а la position (7,6)  --Deplacement de la Tour
	unEchiquier.deplacerPiece("H8", 7, 6); 
	//14-  Deplacer la piece d'id H8 а la position (7,6)  --Deplacement de la Tour
	unEchiquier.deplacerPiece("H8", 7, 6); 
	//15-  Enlever la piece d'id A2 
	unEchiquier -= "A2";
	cout << "----------TEST DES PROMOTIONS------------" << endl;
	
	//16- Promouvoir la piece d'id F6.
	unEchiquier.promouvoir("F6");
	//17- Promouvoir la piece d'id B2.	
	unEchiquier.promouvoir("B2");
	//18- Affichage de l'Echiquier
	cout << unEchiquier;
	//Si vous avez besoin de lancer avec un arret a la fin, faites ctrl+F5;
	unEchiquier.~Echiquier();

	return 0;
}

