/**
 * @file LienContactInteraction.cpp
 * @class LienContactInteraction
 * pas d'heritage pour le moment
 * @brief Classe LienContactInteraction
 * @struct sdate
 * @author Bahous Mohamed Aymene
 * @author Annane Mohamed
 * @author Binome
 * @date 28/10/2022
 * Jalon 1
 * @ todo travailler sur l'horodatation automatique des contacts
*/

#include <iostream>
#include "LienContactInteraction.h"

using namespace std;

//constructeurs
LienContactInteraction::LienContactInteraction()
{
    //pas de corps dans ce constructeur pour le moment
}

//destructeur
LienContactInteraction::~LienContactInteraction()
{
    //pas de corps dans ce destructeur pour le moment
}

//fonctions
void LienContactInteraction::addContactInteraction(Contact &c, Interaction &i)
{   
    c.addContactInteraction(i);
}

void LienContactInteraction::afficheInteractionsContact(Contact &c)
{   
    for(auto &i : c.getLI())
    {
        cout << i << endl;
    }
}

/*
int main()
{
    return 0;
}
*/

/*
#include <iostream>

#include "LienContactInteraction.h"

using namespace std;

//constructeurs
LienContactInteraction::LienContactInteraction()
{
    //pas de corps dans ce constructeur pour le moment
}

//destructeur
LienContactInteraction::~LienContactInteraction()
{
    for(auto &it : this -> getLCI())
    {
        it.second.clear();
    }
    this -> getLCI().clear();
}

//accesseurs
unordered_map<Contact, vector<Interaction>> LienContactInteraction::getLCI() const
{
    return this -> lci;
}

//fonctions
void LienContactInteraction::addContactInteraction(const Contact &c, const Interaction &i)
{
    //this -> lci[c].push_back(i);
    if (this -> getLCI().count(c)) {
        // key already exists
        this -> getLCI().at(c).push_back(i);
    } 
    else 
    {
        //key doesn't exist
        this -> getLCI().emplace(c, vector<Interaction>()); // problem here
        this -> getLCI().at(c).push_back(i);
    }
}

void LienContactInteraction::afficheInteractionsContact(const Contact &c)
{   
    auto it = this -> getLCI().find(c);
    cout << c.getFirstname() << " " << c.getLastname() << endl;
    cout << "Interactions : " << endl;
    for(auto &i : it -> second)
    {
        cout << i << endl;
    }
}
*/
/**/