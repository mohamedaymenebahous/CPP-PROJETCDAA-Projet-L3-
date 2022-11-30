/**
 * @file GestionInteractions.cpp
 * @class GestionInteractions
 * @brief Classe GestionInteractions
 * @author Bahous Mohamed Aymene
 * @author Annane Mohamed
 * @author Binome
 * @date 28/10/2022
 * Jalon 1
 * @ todo travailler sur l'horodatation automatique des contacts
*/

#include <iostream>

#include "GestionInteractions.h"

using namespace std;

//constructeurs
GestionInteractions::GestionInteractions()
{
    //pas de corps dans ce constructeur pour le moment
}

GestionInteractions::~GestionInteractions()
{
    this -> clearList();
}

//accesseurs
list<Interaction> GestionInteractions::getListInteractions() const
{
    return this -> li;
}

//fonctions
void GestionInteractions::addInteraction(const Interaction &i)
{
    this -> getListInteractions().push_back(i);
}

void GestionInteractions::clearList() 
{
    this -> getListInteractions().clear();
}

int GestionInteractions::numberOfInteractions() const
{
    return this -> getListInteractions().size();
}

void GestionInteractions::displayInteractions()
{
    for(auto &i : this -> getListInteractions())
    {
        cout << i << endl;
    }
}

/*

int main()
{
    return 0;
}*/