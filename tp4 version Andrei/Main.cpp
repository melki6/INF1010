
/**************************************************
* Titre: Travail pratique #4 - Main.cpp
* Date:
* Auteur:
**************************************************/

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
	//1-  Creez les huit pions blancs avec les coordonnées (i,1) i : 0-->7 et les id A2-->H2
	Pion pionB1("A2", "blanc", 0, 1);
	Pion pionB2("B2", "blanc", 1, 1);
	Pion pionB3("C2", "blanc", 2, 1);
	Pion pionB4("D2", "blanc", 3, 1);
	Pion pionB5("E2", "blanc", 4, 1);
	Pion pionB6("F2", "blanc", 5, 1);
	Pion pionB7("G2", "blanc", 6, 1);
	Pion pionB8("H2", "blanc", 7, 1);
	//2-Creez les huit pions noirs avec les coordonnées (i,6) i : 0-->7 et les id A7-->H7
	Pion pionN1("A7", "noir", 0, 6);
	Pion pionN2("B7", "noir", 1, 6);
	Pion pionN3("C7", "noir", 2, 6);
	Pion pionN4("D7", "noir", 3, 6);
	Pion pionN5("E7", "noir", 4, 6);
	Pion pionN6("F7", "noir", 5, 6);
	Pion pionN7("G7", "noir", 6, 6);
	Pion pionN8("H7", "noir", 7, 6);
	//3-  Creez les deux tours blanches d'id "A1" et "H1" dans les positions respectives (0,0) et (7,0)
	Tour tourB1("A1", "blanc", 0, 0);
	Tour tourB2("H1", "blanc", 7, 0);
	//4-  Creez les deux tours noires  d'id "A8" et "H8" dans les positions respectives (0,7) et (7,7)
	Tour tourN1("A8", "noir", 0, 7);
	Tour tourN2("H8", "noir", 7, 7);
	//5-  Creez les Fous blanc et noirs
	
	//6-  Creez les deux reines E1 et E8	

	//7-  Creez les deux rois D1 et D8
	
	// 8- Creez un echiquier 
	
	cout << "----------AJOUT DES PIECES----------" << endl;
	//9- Ajoutez toutes les pièces précidament définies à l'echiquier	
	
	cout << "----------TEST DES DEPLACEMENTS------------" << endl;
	//10-  Deplacer la piece d'id A2 à la position (0,2)  --Deplacement de Pion
	
	//11-  Deplacer le piece d'id H7 à la position (7,4)  --Deplacement du Pion
	
	//12-  Deplacer la piece d'id A2 à la position (0,4)  --Deplacement du Pion
	
	//13-  Deplacer la piece d'id H8 à la position (7,6)  --Deplacement de la Tour
	
	//14-  Deplacer la piece d'id H8 à la position (7,6)  --Deplacement de la Tour
	
	//15-  Enlever la piece d'id A2 

	cout << "----------TEST DES PROMOTIONS------------" << endl;
	
	//16- Promouvoir la piece d'id F6.
	
	//17- Promouvoir la piece d'id B2.	

	//18- Affichage de l'Echiquier
	//cout << unEchiquier;
	//Si vous avez besoin de lancer avec un arret a la fin, faites ctrl+F5;

	return 0;
}

