/**
 * @file GestionTaches.cpp
 * @class GestionTaches
 * @brief Classe GestionTaches
 * @author Bahous Mohamed Aymene
 * @author Annane Mohamed
 * @author Binome
 * @date 28/10/2022
 * Jalon 1
*/

#include <iostream>
#include "GestionTaches.h"

using namespace std;

//constructeurs
GestionTaches::GestionTaches()
{
    //pas de corps dans ce constructeur pour le moment
}

GestionTaches::~GestionTaches()
{
    this -> clearList();
}

//accesseurs
list<Tache> GestionTaches::getListTaches() const
{
    return this -> lt;
}

//fonctions
void GestionTaches::addTache(const Tache &t)
{
    this -> getListTaches().push_back(t);
}

void GestionTaches::clearList() 
{
    this -> getListTaches().clear();
}

int GestionTaches::numberOfTaches() const
{
    return this -> getListTaches().size();
}


void GestionTaches::displayTaches()
{
    for(auto &t : this -> getListTaches())
    {
        cout << t << endl;
    }
}

/*
int main()
{
    return 0;
}
*/