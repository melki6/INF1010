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
using namespace std;

int main()
{

	
	
	
	// C'est a vous de voir si vous devez allouer dynamiquement ou non les elements

	//1-  Creez 11 objets du type Infirmier � l'aide du constructeur par param�tre avec des valeurs de votre choix
	Infirmier* infirmier1 = new Infirmier("Doe","John",10);
	Infirmier* infirmier2 = new Infirmier("Doe","John",10);
	Infirmier* infirmier3 = new Infirmier("Labe", "Sylvie", 3);
	Infirmier* infirmier4 = new Infirmier("Labelle", "Amelie", 4);
	Infirmier* infirmier5 = new Infirmier("Lamontagne","Maxime",5);
	Infirmier* infirmier6 = new Infirmier("Laflamme", "John", 6);
	Infirmier* infirmier7 = new Infirmier("Lamoureux", "Julie", 7);
	Infirmier* infirmier8 = new Infirmier("Langlais", "Eric", 8);
	Infirmier* infirmier9 = new Infirmier("Lamarre", "Roger", 9);
	Infirmier* infirmier10 = new Infirmier("Laplante","Linda",10);
	Infirmier* infirmier11 = new Infirmier("Latour", "Hug", 3);
	//
	//if (*infirmier1 == *infirmier2)
	//	cout << "ERREUR:infirmier IDENTIQUE" << endl;
	//else
	//	cout << "Infirmier AJOUTER" << endl;
	
	//2-  Creez deux objets du type Personnel � l'aide du constructeur par d�faut
	Personnel personnel1;
	Personnel peronnel2;

	//3 - Creez deux objects de type Hopital qui vont prendre chacun en parametre le nom de l'hopital et le personnel assigné
	// Hopital Sacré-Coeur de Montréal
	// Hôpital Jean-Talon
	// A COMPLETER...


	//4-  Ajoutez les 6 objets du type Infimier � au personnel de l'Hôpital Sacré-Coeur de Montréal
	personnel1.operator+=(infirmier1).operator+=(infirmier2).operator+=(infirmier4);
	personnel1 += infirmier2;
	personnel1 += infirmier3;
	personnel1 += infirmier4;
	personnel1 += infirmier5;
	personnel1 += infirmier6;

	personnel1.information();

	cout << *infirmier10 << " " << *infirmier3;



	//5-  Ajoutez les 5 objets qui restent du type Infimier � au personnel de l'Hôpital Jean-Talon
	// A COMPLETER...
	
	//6-  Creez 7 objets du type Specialite � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// Specialites : Chirurgie, Demartologie, Gastrologie, Sport, Podologie, Pediatrie, Psychiatrie
	// A COMPLETER...

	//7- Creez 7 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix
	// Dr. Franc : en Chirurgie
	// Dr. Sherlock : en Demartologie
	// Dr. Holmes : en Gastrologie
	// Dr. Jean : en Podologie
	// Dr. Jules : en Pediatrie
	// Dr. Kyle : en Sport
	// Dr. House : en Psychiatrie
	// A COMPLETER...

	//8- Creer un autre medecin Sherlock en utilisant l'opérateur = et en utilisant le medecin existante Sherlock.
	// Le horaire du deuxieme Sherlock devrai ensuite etre modifie pour une valeur differnte du premier Sherlock
	// A COMPLETER...

	//9- Creer un autre medecin Holmes en utilisant le constructeur de copie et en utilisant le medecin existante Holmes.
	// Le horaire du deuxieme Holmes devrai ensuite etre modifie pour une valeur differnte du premier Holmes
	// A COMPLETER...

	
	//10- Ajoutez les medecins : parmis le personnel de l'hopital Sacré-Coeur : 
	// Dr. Franc, Dr. Sherlock, Dr. Holmes, Dr. Jean, Dr. Jules
	// A COMPLETER...
	// Dr. Sherlock(2), Dr. Holmes(2), Dr. Kyle, Dr. House
	// A COMPLETER...
	


	//11- Retirer le medecin Jean et deux infirmiers de l'hopital Sacré-Coeur et ajouter les
	// a l'hopital Jean-talon


	//12- Faites afficher l'hopital Sacré-Coeur puis Jean-Talon
	// A COMPLETER...
	//Personnel p;
	//p += infirmier1;
	//p += infirmier2;
	//p += infirmier3;
	//p += infirmier4;
	//p += infirmier5;
	//p += infirmier6;
	//p += infirmier7;
	//p += infirmier8;
	//p += infirmier9;
	//p += infirmier10;
	//p += infirmier11;
	//cout<<p;
	//return 0;
	//vector <Personnel> p[11];
	//p[0] += infirmier1;
	//p[1] += infirmier2;
	//p[2] += infirmier3;
	//p[3] += infirmier4;
	//p[4] += infirmier5;
	//p[5] += infirmier6;
	//p[6] += infirmier7;
	//p[7] += infirmier8;
	//p[8] += infirmier9;
	//p[9] += infirmier10;
	//p[10] += infirmier11;
	//for (int i = 0; i<p.size(); i++)
	//	p[i] << cout;
	

}