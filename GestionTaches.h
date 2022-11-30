#ifndef GESTIONTACHE_H
#define GESTIONTACHE_H

#include <iostream>
#include <string>
#include <list>

#include "Tache.h"

using namespace std;

class GestionTaches
{
private:
    //attributs
    list<Tache> lt;
public:
    //constructeurs
    GestionTaches();
    ~GestionTaches();
    //accesseurs
    list<Tache> getListTaches() const;
    //fonctions
    void addTache(const Tache &);
    void clearList();
    int numberOfTaches() const;
    void displayTaches();
};

#endif