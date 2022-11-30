/**
 * @file Contact.cpp
 * @class Contact
 * pas d'heritage pour le moment
 * @brief Classe Contact
 * @struct sdate
 * @author Bahous Mohamed Aymene
 * @author Annane Mohamed
 * @author Binome
 * @date 28/10/2022
 * Jalon 1
 * @ todo travailler sur l'horodatation automatique des contacts
*/

#include <iostream>

#include "Contact.h"

using namespace std;

//constructeurs
Contact::Contact()
{
	this -> setLastname("null");
	this -> setFirstname("null");
	this -> setCompany("null");
	this -> setMail("null");
	this -> setPhone("null");
	this -> setPicture("null");
	this -> setDateOfCreation();	
	this -> setDateOfEdit();
}

Contact::Contact(const string &l, const string &f, const string &c, const string &m, const string &ph, const string &pi)
{
	this -> setLastname(l);
	this -> setFirstname(f);
	this -> setCompany(c);
	this -> setMail(m);
	this -> setPhone(ph);
	this -> setPicture(pi);
	this -> setDateOfCreation();
	this -> setDateOfEdit();
}

//destructeur
Contact::~Contact()
{
	//pas de corps dans ce destructeur
}

//accesseurs
string Contact::getLastname() const 
{
	return this -> lastname;
}

string Contact::getFirstname() const 
{
	return this -> firstname;
}

string Contact::getCompany() const 
{
	return this -> company;
}

string Contact::getMail() const 
{
	return this -> mail;
}

string Contact::getPhone() const
{
	return this -> phone;
}

string Contact::getPicture() const
{
	return this -> picture;
}

struct sdateAuto Contact::getDateOfCreation() const 
{
	return this -> dateOfCreation;
}

struct sdateAuto Contact::getDateOfEdit() const 
{
	return this -> dateOfEdit;
}

list<Interaction> Contact::getLI() const
{
    return this -> li;
}

//mutateurs
void Contact::setLastname(const string &l) 
{
	this -> lastname = l;
}

void Contact::setFirstname(const string &f) 
{
	this -> firstname = f;
}

void Contact::setCompany(const string &c) 
{
	this -> company = c; 
}

void Contact::setMail(const string &m) 
{
	this -> mail = m;
}

void Contact::setPhone(const string &ph) 
{
	this -> phone = ph; 
}

void Contact::setPicture(const string &pi) 
{
	this -> picture = pi; 
}

void Contact::setDateOfCreation() 
{
	day_point dp = floor<days>(system_clock::now());
	auto ymd = year_month_day{dp};
	this -> dateOfCreation.jour = ymd.day();
	this -> dateOfCreation.mois = ymd.month();
	this -> dateOfCreation.annee = ymd.year();
}

void Contact::setDateOfEdit() 
{
	day_point dp = floor<days>(system_clock::now());
	auto ymd = year_month_day{dp};
	this -> dateOfEdit.jour = ymd.day();
	this -> dateOfEdit.mois = ymd.month();
	this -> dateOfEdit.annee = ymd.year();
}

//fonctions
void Contact::addContactInteraction(const Interaction &i)
{
	this -> li.push_back(i);
}

//fonction amie
ostream& operator<<(ostream &o, const Contact &c)
{
	o << c.getLastname() << " " << c.getFirstname() << "\n" << c.getCompany() << "\n" << c.getMail() << "\n" << c.getPhone() << "\n" << c.getPicture() << "\n" << c.getDateOfCreation().jour << "/" << c.getDateOfCreation().mois << "/" << c.getDateOfCreation().annee << "\n" << c.getDateOfEdit().jour << "/" << c.getDateOfEdit().mois << "/" << c.getDateOfEdit().annee;
	return o;
}

/*
int main()
{
    return 0;
}
*/



