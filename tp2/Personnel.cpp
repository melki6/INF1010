#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"
#include <iostream>
#include <iomanip>
#include "Const.h"
using namespace std;
Personnel::Personnel() {};

Personnel::~Personnel() {};
	
bool Personnel::ajouterMedecin(Medecin* medecin)
{
	bool medecinTrouve=false;

	for (int i = 0; i < medecins_.size(); i++)    // AC: parcourir le tableau pour trouver si le medecin existe
	{
		if (*medecins_[i] == *medecin)
			medecinTrouve = true;
	}

	if (medecinTrouve) {
		cout << "Medecin deja existant dans la base de donees!" << endl;     // AC: ajout de medecin s'il n'existe dans le tableau
		return false;
	}
	else
	{
		medecins_.push_back(medecin);
		return true;
	}
	
}

bool Personnel::retirerMedecin(const std::string& nom)
{
	bool medecinRetire = false;

	for (int i = 0; i < medecins_.size(); i++)    // AC: parcourir le tableau pour trouver si le medecin existe
	{
		if (*medecins_[i] == nom) {
			medecins_[i] = medecins_[medecins_.size()];   // copier le contenu du dernier medicin a la place de medecin curent
			medecins_.pop_back();                          // effacer le dernier element du vecteur medecins
			medecinRetire=true;
		}
		else
			medecinRetire=false;
	}
	return medecinRetire;
}

Personnel& Personnel::operator+=(Medecin* medecin)
{
	ajouterMedecin(medecin);
	return *this;	
}

Personnel& Personnel::operator-=(Medecin* medecin)
{
	retirerMedecin(medecin->obtenirNom());
	return *this;
}

bool Personnel::ajouterInfirmier(Infirmier* infirmier) 
{
	bool infirmierTrouve=false;
	for (int i = 0; i < infirmiers_.size(); i++) {         // parcurir le vecteur infirmiers pour verifier si l'infirmier existe
		if (*infirmiers_[i] == *infirmier)
			infirmierTrouve = true;
	}
	
	if (infirmierTrouve)
	{
		cout << "Infirmier deja existant!" << endl;  
		return false;
	}
	else
	{
		infirmiers_.push_back(infirmier);                  // ajout de l'infirmier dans le vecteur
		return true;
	}		

}

bool Personnel::retirerInfirmier(const std::string& nomComplet) 
{
	bool infirmierRetire=false;
	for (int i = 0; i < infirmiers_.size(); i++)    // AC: parcourir le tableau pour trouver si l'infirmier existe
	{
		if (*infirmiers_[i] == nomComplet) {
			infirmiers_[i] = infirmiers_[infirmiers_.size()];   // copier le contenu du dernier infirmier a la place de l'infirmier curent
			infirmiers_.pop_back();                          // effacer le dernier element du vecteur infirmier
			infirmierRetire=true;
		}
		else
			infirmierRetire=false;
	}

	return infirmierRetire;
}
	
Personnel& Personnel::operator+=(Infirmier* infirmier)  //AC: appel a la fonction ajouterInfirmier pour implementer += infirmier
{
	ajouterInfirmier(infirmier);
	return *this;
}

Personnel& Personnel::operator-=(Infirmier* infirmier) //AC: appel a la fonction ajouterInfirmier pour implementer -= infirmier
{
	retirerInfirmier(infirmier->obtenirNom());
	return *this;
}


 ostream& operator<<(ostream& sortie, Personnel& personnel) // AC: operateur pour l'affichage personnel

{
	 personnel.information();
	 return sortie;

}

 void Personnel::information() // A MODIFIER...
 {
	 afficherInfirmiers();
	 afficherMedecins();
 }

void Personnel::afficherMedecins() const // A MODIFIER... (si necessaire)
{
	string tabMed = "Tableau Medecins";
	string nom = "Nom";
	string horaires = "Horaires";
	string domaine = "Domaine Specialite";
	string niveau = "Niveau Specialite";

	cout << AFFICHER_ESPACE(espacement_medecin / 2) << tabMed 
		<< AFFICHER_ESPACE(espacement_medecin / 2) << endl
		<< AFFICHER_LINE(espacement_medecin + tabMed.size()) << endl<< "| " << nom 
		<< AFFICHER_ESPACE(espace_nom - nom.size()) << " | " << horaires 
		<< AFFICHER_ESPACE(2*espace_horaires - horaires.size())<< " | " << domaine 
		<< AFFICHER_ESPACE(espace_domaine - domaine.size()) << " | " 
		<< AFFICHER_ESPACE(espace_niveau - niveau.size() / 2) << niveau
		<< AFFICHER_ESPACE(espace_niveau - niveau.size() / 2)<< "| " << endl
		<< AFFICHER_LINE(espacement_medecin + tabMed.size()) << endl;
	for (size_t i = 0; i < medecins_.size(); i++)
	{	
		medecins_[i]->information();
		std::cout << endl;
	}
	cout<< AFFICHER_LINE(espacement_medecin + tabMed.size()) << endl
		<< AFFICHER_ESPACE(espacement_medecin + tabMed.size()) << endl;
}

void Personnel::afficherInfirmiers() const // A MODIFIER... (si necessaire)
{
	string tabInf = "Tableau Infimiers";
	string nomComplet = "Nom Complet";
	string nbChambre = "Nombre de Chambre";
	cout<< AFFICHER_ESPACE(espacement_infirmier/2) << tabInf 
		<< AFFICHER_ESPACE(espacement_infirmier/2) << endl
		<< AFFICHER_LINE(espacement_infirmier + tabInf.size()) << endl<< "| " << nomComplet 
		<< AFFICHER_ESPACE(espace_nom - nomComplet.size())<< " | " << nbChambre 
		<< AFFICHER_ESPACE(2 * espace_chambre - nbChambre.size())<< " | " << endl
		<< AFFICHER_LINE(espacement_infirmier + tabInf.size()) << endl;

	for (size_t i = 0; i < infirmiers_.size(); i++)
	{
	
		infirmiers_[i]->information();
		cout << endl;
	}

	cout << AFFICHER_LINE(espacement_infirmier + tabInf.size());
}