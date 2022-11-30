#ifndef LIENINTERACTIONTACHE_H
#define LIENINTERACTIONTACHE_H

#include <iostream>
#include <map>
#include <list>
#include <string>

#include "Interaction.h"
#include "Tache.h"

using namespace std;

class LienInteractionTache
{
private:
    //attributs
public:
    //constructeurs
    LienInteractionTache();
    ~LienInteractionTache();
    //fonctions
    void addInteractionTache(Interaction &, Tache &);
    void afficheInteractionTaches(Interaction &);

};

#endif
