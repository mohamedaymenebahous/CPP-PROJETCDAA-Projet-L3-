/**
 * @file LienInteractionTache.cpp
 * @class LienInteractionTache
 * pas d'heritage pour le moment
 * @brief Classe LienInteractionTache
 * @struct sdate
 * @author Bahous Mohamed Aymene
 * @author Annane Mohamed
 * @author Binome
 * @date 28/10/2022
 * Jalon 1
 * @ todo travailler sur l'horodatation automatique des contacts
*/

#include <iostream>
#include "LienInteractionTache.h"

using namespace std;

//constructeurs
LienInteractionTache::LienInteractionTache()
{
    //pas de corps dans ce constructeur pour le moment
}

//destructeur
LienInteractionTache::~LienInteractionTache()
{
    //pas de corps dans ce destructeur pour le moment
}

//fonctions
void LienInteractionTache::addInteractionTache(Interaction &i, Tache &t)
{   
    i.addInteractionTache(t);
}

void LienInteractionTache::afficheInteractionTaches(Interaction &inter)
{   
    for(auto &a : inter.getLT())
    {
        cout << a << endl;
    }
}

/*
int main()
{
    return 0;
}*/