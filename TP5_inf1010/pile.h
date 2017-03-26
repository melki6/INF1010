
#ifndef _Pile_H_
#define _Pile_H_

#include <vector>
#include <iostream>
using namespace std;


template < typename T,typename S >
class Pile
{
public:
	Pile();

	bool empiler(const T &element, const S &element2);
	bool estPleine();
	bool depiler();
	bool estVide();
	T& obtenirSommet();
	int obtenirTaille();

private:
	T* cases_[14];
	S* case_[14];
	int capacite_;
	int nombreElements_;
};

template < typename T, typename S>
Pile<T,S>::Pile()
{	
	
	capacite_ = 6;
	nombreElements_ = 0;
}


template < typename T, typename S >
bool Pile<T,S>::empiler(const T &element, const S &element2)
{
	if (nombreElements_ < capacite_)
	{

		cases_[nombreElements_] = new T(element);
		case_[nombreElements_] = new S(element2);
			cout << "Tache ajoutee sur la pile: " << *cases_[nombreElements_] << " d'une duree de " << *case_[nombreElements_] << endl;
			nombreElements_++;
		return true;
	}
	
	else {
		estPleine();
		return false;
	}
}

template < typename T, typename S>
bool Pile<T,S>::estPleine()
{
	if (nombreElements_>= capacite_) {
		cout << " La pile est pleine!" << endl;
			return true;
	}
	else {
		return false;
	}
}

template < typename T, typename S>
bool Pile<T, S>::estVide()
{
	if (nombreElements_ == 0) {
		cout << "La pile est vide!" << endl;
		return true;
	}
	else {
		return false;
	}

}
template < typename T, typename S>
bool Pile<T,S>::depiler()
{
	if (nombreElements_ > 0)
	{
		cases_[obtenirTaille()] = cases_[obtenirTaille() + 1];
		case_[obtenirTaille()] = case_[obtenirTaille() + 1];
		nombreElements_--;
		cout << "Depilage de la tache " << *cases_[obtenirTaille()] << " d'une duree de " << *case_[obtenirTaille()] << endl;
		return true;
	}
	else {
		estVide();
		return false;
	}
}
template < typename T, typename S>
T& Pile<T, S>::obtenirSommet()
{
	return *cases_[nombreElements_-1];
}

template < typename T, typename S>
int Pile<T, S>::obtenirTaille()
{
	return nombreElements_;
}

#endif