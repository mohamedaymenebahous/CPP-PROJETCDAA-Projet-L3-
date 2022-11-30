#ifndef GESTIONINTERACTIONS_H
#define GESTIONINTERACTIONS_H

#include <iostream>
#include <string>
#include <list>

#include "Interaction.h"
//#include "Interaction.cpp"

using namespace std;

class GestionInteractions
{
private:
    //attributs
    list<Interaction> li;
public:
    //constructeurs
    GestionInteractions();
    ~GestionInteractions();
    //accesseurs
    list<Interaction> getListInteractions() const;
    //fonctions
    void addInteraction(const Interaction &);
    void clearList();
    int numberOfInteractions() const;
    void displayInteractions();
};

#endif