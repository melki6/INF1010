/**************************************************
* Main.cpp
* Date: 31 janvier 2017
**************************************************/

#include <string>
#include <iostream>
#include "infirmier.h"
#include "Specialite.h"
#include "Personnel.h"
#include <vector>
#include "Medecin.h"
#include "Hopital.h"
using namespace std;

int main()
{




	// C'est a vous de voir si vous devez allouer dynamiquement ou non les elements

	//1-  Creez 11 objets du type Infirmier � l'aide du constructeur par param�tre avec des valeurs de votre choix
	Infirmier* infirmier1 = new Infirmier("Duke", "Nukem", 2);
	Infirmier* infirmier2 = new Infirmier("Doe", "John", 10);
	Infirmier* infirmier3 = new Infirmier("Labe", "Sylvie", 3);
	Infirmier* infirmier4 = new Infirmier("Labelle", "Amelie", 4);
	Infirmier* infirmier5 = new Infirmier("Lamontagne", "Maxime", 5);
	Infirmier* infirmier6 = new Infirmier("Laflamme", "John", 6);
	Infirmier* infirmier7 = new Infirmier("Lamoureux", "Julie", 7);
	Infirmier* infirmier8 = new Infirmier("Langlais", "Eric", 8);
	Infirmier* infirmier9 = new Infirmier("Lamarre", "Roger", 9);
	Infirmier* infirmier10 = new Infirmier("Laplante", "Linda", 10);
	Infirmier* infirmier11 = new Infirmier("Latour", "Hug", 3);


	//2-  Creez deux objets du type Personnel � l'aide du constructeur par d�faut
	Personnel personnel1;
	Personnel personnel2;

	//3 - Creez deux objects de type Hopital qui vont prendre chacun en parametre le nom de l'hopital et le personnel assigné
	Hopital* hopital1 = new Hopital("Hopital Sacré-Coeur de Montréal", &personnel1);
	Hopital* hopital2 = new Hopital("Jean-Talon", &personnel2);



	//4-  Ajoutez les 6 objets du type Infimier � au personnel de l'Hôpital Sacré-Coeur de Montréal
	personnel1 += infirmier1;
	personnel1 += infirmier2;
	personnel1 += infirmier3;
	personnel1 += infirmier4;
	personnel1 += infirmier5;
	personnel1 += infirmier6;


	//5-  Ajoutez les 5 objets qui restent du type Infimier � au personnel de l'Hôpital Jean-Talon
	personnel2 += infirmier7;
	personnel2 += infirmier8;
	personnel2 += infirmier9;
	personnel2 += infirmier10;
	personnel2 += infirmier11;


	//6-  Creez 7 objets du type Specialite � l'aide du constructeur par param�tre avec des valeurs de votre choix
	//Specialite Chirurgie, Demartologie, Gastrologie, Sport, Podologie, Pediatrie, Psychiatrie;

	Specialite* specialite1 = new Specialite("Chirurgie", 15);
	Specialite* specialite2 = new Specialite("Dermatoligie", 10);
	Specialite* specialite3 = new Specialite("Gastrologie", 11);
	Specialite* specialite4 = new Specialite("Sport", 7);
	Specialite* specialite5 = new Specialite("Podologie", 8);
	Specialite* specialite6 = new Specialite("Pediatrie", 9);
	Specialite* specialite7 = new Specialite("Psychiatrie", 45);

	//7- Creez 7 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix
	Medecin* medecin1 = new Medecin("Franc", 10, specialite1);
	Medecin* medecin2 = new Medecin("Sherlock", 6, specialite2);
	Medecin* medecin3 = new Medecin("Holmes", 3, specialite3);
	Medecin* medecin4 = new Medecin("Kyle", 7, specialite4);
	Medecin* medecin5 = new Medecin("Jean", 8, specialite5);
	Medecin* medecin6 = new Medecin("Jules", 9, specialite6);
	Medecin* medecin7 = new Medecin("House", 10, specialite7);


	//8- Creer un autre medecin Sherlock en utilisant l'opérateur = et en utilisant le medecin existante Sherlock.
	// Le horaire du deuxieme Sherlock devrai ensuite etre modifie pour une valeur differnte du premier Sherlock
	
	Medecin medecin8=*medecin2;
	medecin8.modifierHoraires(33);


	//9- Creer un autre medecin Holmes en utilisant le constructeur de copie et en utilisant le medecin existante Holmes.
	// Le horaire du deuxieme Holmes devrai ensuite etre modifie pour une valeur differnte du premier Holmes
	Medecin medecin9(*medecin3);
	medecin9.modifierHoraires(11);


		//10- Ajoutez les medecins : parmis le personnel de l'hopital Sacré-Coeur : 
		// Dr. Franc, Dr. Sherlock, Dr. Holmes, Dr. Jean, Dr. Jules
		// A COMPLETER...
		// Dr. Sherlock(2), Dr. Holmes(2), Dr. Kyle, Dr. House
	personnel1 += medecin1;
	personnel1 += medecin2;
	personnel1 += medecin3;
	personnel1 += medecin5;
	personnel1 += medecin6;
	personnel1 += &medecin8;
	personnel1 += &medecin9;
	personnel1 += medecin4;
	personnel1 += medecin7;





		//11- Retirer le medecin Jean et deux infirmiers de l'hopital Sacré-Coeur et ajouter les
		// a l'hopital Jean-talon
	//hopital1->obtenirPersonnel()->operator-=(infirmier2);
	//hopital1->obtenirPersonnel()->operator-=(infirmier4);
	//hopital1->obtenirPersonnel()->operator-=(medecin5);


		//hopital1->information();
	    //hopital2->information();
	personnel1.information();
	personnel2.information();



	return 0;

}