/**
 * @file GestionContacts.cpp
 * @class GestionContacts
 * @brief Classe GestionContacts
 * @struct sdate
 * @author Bahous Mohamed Aymene
 * @author Annane Mohamed
 * @author Binome
 * @date 28/10/2022
 * Jalon 1
 * @ todo travailler sur l'horodatation automatique des contacts
*/

#include <iostream>

#include "GestionContacts.h"

using namespace std;

//constructeurs
GestionContacts::GestionContacts()
{
    //pas de corps dans ce constructeur pour le moment
}

GestionContacts::~GestionContacts()
{
    this -> clearList();
}

//accesseurs
list<Contact> GestionContacts::getListContact() const
{
    return this -> lc;
}

string GestionContacts::getDeletedContact() const
{
    return this -> deletedContact;
}

//
void GestionContacts::setDeletedContact(const string &d)
{
    this -> deletedContact = d;
}

void GestionContacts::setDeletedDate(const day &j, const month &m, const year &y)
{
    this -> deletedDate.jour = j;
    this -> deletedDate.mois = m;
    this -> deletedDate.annee = y;
}

//fonctions
void GestionContacts::addContact(const Contact &c)
{
    this -> getListContact().push_back(c);
}

void GestionContacts::deleteContactByLastname(const string &s)
{
    auto it = this -> getListContact().begin();
    bool found = false;
    while ((it != this -> getListContact().end()) && (found == false))
    {
        if (it -> getLastname() == s)
        {
            found = true;
            this -> getListContact().erase(it);
            day_point dp = floor<days>(system_clock::now());
	        auto ymd = year_month_day{dp};
            struct sdateAuto d;
            d.jour = ymd.day();
            d.mois = ymd.month();
            d.annee = ymd.year();
            this -> setDeletedContact(s);
            this -> setDeletedDate(d.jour, d.mois, d.annee);
        }
        else 
        {
            it++;
        }
    }
}

void GestionContacts::editCompany(Contact &c, string co)
{
    c.setCompany(co);
	c.setDateOfEdit();
}

void GestionContacts::editMail(Contact &c, string m)
{
    c.setMail(m);
	c.setDateOfEdit();
}

void GestionContacts::editPhone(Contact &c, string p)
{
    c.setPhone(p);
	c.setDateOfEdit();
}

void GestionContacts::editPicture(Contact &c, string p)
{
    c.setPicture(p);
	c.setDateOfEdit();
}

void GestionContacts::clearList() 
{
    this -> getListContact().clear();
}

int GestionContacts::numberOfContacts() const
{
    return this -> getListContact().size();
}

void GestionContacts::displayContacts()
{
    for(auto &c : this -> getListContact())
    {
        cout << c << endl;
    }
}

/*
int main()
{
    return 0;
}
*/

/*
void GestionContacts::editContactByLastname(const string &s)
{
    auto it = this -> getListContact().begin();
    bool found = false;
    while ((it != this -> getListContact().end()) && (found == false))
    {
        if (it -> getLastname() == s)
        {
            cout << "What to modify" << endl;
            cout << "1 - Phone Number" << endl;
            cout << "2 - Mail address" << endl;
            cout << "3 - Company" << endl;
            unsigned int choice;
            cin >> choice;
            switch(choice)
            {
                case 1:
                {
                    cout << "Enter the new phone number" << endl;
                    string p = "";
                    cin >> p;
                    it -> setPhone(p);
                    it -> setDateOfEdit();
                }
                break;
                case 2:
                {
                    cout << "Enter the new mail adress" << endl;
                    string m = "";
                    cin >> m;
                    it -> setMail(m);
                    it -> setDateOfEdit();
                }
                break;
                case 3:
                {
                    cout << "Enter the new company name" << endl;
                    string c = "";
                    cin >> c;
                    it -> setPhone(c);
                    it -> setDateOfEdit();
                }
            }
        }
        else 
        {
            it++;
        }
    }
}
*/