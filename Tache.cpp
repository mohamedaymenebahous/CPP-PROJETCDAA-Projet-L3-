/**
 * @file Tache.cpp
 * @class Tache
 * @brief Classe Tache
 * @author Bahous Mohamed Aymene
 * @author Annane Mohamed
 * @author Binome
 * @date 28/10/2022
 * Jalon 1
 * @ todo travailler sur l'horodatation automatique des contacts
*/

#include <iostream>

#include "Tache.h"

using namespace std;

//constructeurs
Tache::Tache()
{
    struct sdate now;
    now.jour = 1;
    now.mois = 1;
    now.annee = 1970;
	setDateAction(now.jour, now.mois, now.annee);
	setAction("NULL");
}

Tache::Tache(const string &a, const unsigned int &j, const unsigned int &m, const unsigned int &y)
{
    this -> setAction(a);
    this -> setDateAction(j, m, y);
}

Tache::Tache(const string &a)
{
    this -> setAction(a);
    this -> setCheck(true);
}

Tache::~Tache()
{
    //pas de corps dans ce destructeur pour le moment
}

//accesseurs
string Tache::getAction() const
{
    return this -> action;
}

struct sdate Tache::getDateAction() const
{
    return this -> dateAction;
}

bool Tache::getCheck() const
{
    return this -> check;
}

//mutateurs
void Tache::setAction(const string &a)
{
    this -> action = a;
}

void Tache::setDateAction(const unsigned int &j, const unsigned int &m, const unsigned int &a)
{
    this -> dateAction.jour = j;
    this -> dateAction.mois = m;
    this -> dateAction.annee = a;
}

void Tache::setCheck(const bool &c)
{
    this -> check = c;
}

//fonctions amie 
ostream& operator<<(ostream &o, const Tache &t)
{
    if(t.getCheck() == false)
    {
        struct sdate d = t.getDateAction();
	    o << "@todo" << t.getAction() << " " << "@date" << " " << d.jour << "/" << d.mois << "/" << d.annee;
    }
    else
    {
        o << "@todo" << t.getAction();
    }
    return o;
} 

//fonctions
//...

/*
int main()
{
    return 0;
}
*/