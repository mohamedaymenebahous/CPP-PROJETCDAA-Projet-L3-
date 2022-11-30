#ifndef LIENCONTACTINTERACTION_H
#define LIENCONTACTINTERACTION_H

#include <iostream>
#include <map>
#include <list>
#include <string>

#include "Contact.h"
//#include "Contact.cpp"
#include "Interaction.h"
//#include "Interaction.cpp"

using namespace std;

class LienContactInteraction
{
private:
    //attributs
public:
    //constructeurs
    LienContactInteraction();
    ~LienContactInteraction();
    //fonctions
    void addContactInteraction(Contact &, Interaction &);
    void afficheInteractionsContact(Contact &);

};

#endif

/*
#ifndef LIENCONTACTINTERACTION_H
#define LIENCONTACTINTERACTION_H

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

#include "Contact.h"
#include "Interaction.h"

using namespace std;

class LienContactInteraction
{
private:
    //attributs
    unordered_map<Contact*, vector<Interaction*>> lci;
public:
    //constructeurs
    LienContactInteraction();
    ~LienContactInteraction();
    //accesseurs
    unordered_map<Contact, vector<Interaction>> getLCI() const;
    //fonctions
    void addContactInteraction(const Contact &, const Interaction &);
    void afficheInteractionsContact(const Contact &);

};

#endif
*/