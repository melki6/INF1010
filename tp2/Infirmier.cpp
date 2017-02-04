#include "Infirmier.h"
#include <iostream>
#include <iomanip>
#include "Const.h"
#include <vector>

Infirmier::Infirmier()
{
}

Infirmier::Infirmier(const std::string & nom, const std::string & prenom, unsigned int nbChambre): nom_(nom), prenom_(prenom), nbChambre_(nbChambre)
{
}


Infirmier::~Infirmier()
{
}

std::string Infirmier::obtenirNom() const
{
	return nom_;
}

std::string Infirmier::obtenirPrenom() const
{
	return prenom_;
}

std::string Infirmier::obtenirNomComplet() const // AC: implementation obtenirNomComplet
{

	std::vector <std::string> nomComplet;
	nomComplet.push_back(obtenirPrenom());
	nomComplet.push_back (obtenirPrenom());
        
    	return nomComplet;
	
}

unsigned int Infirmier::obtenirNbChambre() const
{
	return nbChambre_;
}

void Infirmier::modifierNom(const std::string & nom)
{
	nom_ = nom;
}

void Infirmier::modifierPrenom(const std::string & prenom)
{
	prenom_ = prenom;
}

void Infirmier::modifierNbChambre(unsigned int nbChambre)
{
	nbChambre_ = nbChambre;
}

void Infirmier::information() const // A MODIFIER... (si necessaire)
{
	std::cout << "| " << infirmier.obtenirNomComplet() << AFFICHER_ESPACE(espace_nom - infirmier.obtenirNom().size());
	std::cout << " | " << AFFICHER_ESPACE(espace_chambre - std::to_string(infirmier.nbChambre_).size()/2);
	std::cout << infirmier.nbChambre_ << AFFICHER_ESPACE(espace_chambre);
	std::cout << "|" << std::endl;
}
