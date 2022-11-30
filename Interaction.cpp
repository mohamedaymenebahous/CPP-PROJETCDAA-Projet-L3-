/**
 * @file Interaction.cpp
 * @class Interaction
 * @brief Classe Interaction
 * @author Bahous Mohamed Aymene
 * @author Annane Mohamed
 * @author Binome
 * @date 28/10/2022
 * Jalon 1
 * @ todo travailler sur l'horodatation automatique des contacts
*/

#include <iostream>

#include "Interaction.h"

using namespace std;

//constructeurs
Interaction::Interaction()
{
	setDateInteraction();
	setContent("null");
}

Interaction::Interaction(const string &c)
{
	this -> setDateInteraction();
	this -> setContent(c);
}

Interaction::~Interaction()
{
	//pas de corps dans ce destructeur pour le moment
}

//accesseurs
string Interaction::getContent() const
{
	return this -> content;
}

struct sdateAuto Interaction::getDateInteraction() const
{
	return this -> dateInteraction;
}

list<Tache> Interaction::getLT() const
{
	return this -> lt;
}
	
//mutateurs
void Interaction::setContent(const string &c)
{
	this -> content = c;
}

void Interaction::setDateInteraction()
{
	day_point dp = floor<days>(system_clock::now());
	auto ymd = year_month_day{dp};
	this -> dateInteraction.jour = ymd.day();
	this -> dateInteraction.mois = ymd.month();
	this -> dateInteraction.annee = ymd.year();
}

//fonctions
void Interaction::addInteractionTache(const Tache &t) 
{
	this -> getLT().push_back(t);
}

//fonctions amie 
ostream& operator<<(ostream &o, const Interaction &i)
{
	o << i.getContent() << " "; // << i.getDateInteraction().jour << "/" << i.getDateInteraction().mois << "/" << i.getDateInteraction().annee;
	return o;
} 

/*
int main()
{
	return 0;
}
*/