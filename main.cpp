/**
 * @file main.cpp
 * @class main
 * @brief Classe main
 * @author Bahous Mohamed Aymene
 * @author Annane Mohamed
 * @author Binome
 * @date 28/10/2022
 * Jalon 1
*/

#include <iostream>
#include <string>

#include "Contact.h"
#include "Contact.cpp"
#include "GestionContacts.h"
#include "GestionContacts.cpp"
#include "GestionInteractions.h"
#include "GestionInteractions.cpp"
#include "Interaction.h"
#include "Interaction.cpp"
#include "LienContactInteraction.h"
#include "LienContactInteraction.cpp"
#include "Tache.h"
#include "Tache.cpp"
#include "GestionTaches.h"
#include "GestionTaches.cpp"
#include "LienInteractionTache.h"
#include "LienInteractionTache.cpp"

using namespace std;

int main() 
{
    GestionContacts * gc = new GestionContacts();
    Contact * c1 = new Contact("Bahous", "Mohamed Aymene", "Oracle", "aymenebahous@gmail.com", "0712324184", "/photos/aymene.jpg");

    Interaction * i1 = new Interaction("rdv aujourd’hui par tél., RAS.");
    GestionInteractions * gi1 = new GestionInteractions();
    LienContactInteraction * lci1 = new LienContactInteraction();

    Tache * t1 = new Tache("Rappeler", 16, 10, 2022);
    Tache * t2 = new Tache("confirmer commande n°xyz");
    GestionTaches * gt1 = new GestionTaches();
    LienInteractionTache * lit1 = new LienInteractionTache();

    gt1 -> addTache(* t1);
    gt1 -> addTache(* t2);

    lit1 -> addInteractionTache(* i1, * t1);
    lit1 -> addInteractionTache(* i1, * t2);

    gi1 -> addInteraction(* i1);
    lci1 -> addContactInteraction(* c1, * i1);

    gc -> editCompany(* c1, "Apple");
    gc -> addContact(* c1);

    cout << * c1 << endl;
    cout << "\n";

    lci1 -> afficheInteractionsContact(* c1);
    lit1 -> afficheInteractionTaches(* i1);


    Contact * c2 = new Contact("Annane", "Mohamed", "Oracle", "mohamedannane@gmail.com", "07146378487", "/photos/mohamed.jpg");
    gc -> addContact(* c2);
    gc -> editPhone(* c2, "0712233445");


    Contact * c3 = new Contact("Jean", "Dupont", "Oracle", "jeandupont@gmail.com", "0123456789", "/photos/jean.jpg");
    gc -> addContact(* c3);
    gc -> editMail(* c3, "jeandupont1980@gmail.com");


    /*cout << * c2 << endl;
    cout << "\n";
    cout << * c3 << endl;
    */

    delete c1;
    delete c2;
    delete c3;

    delete gc;
    delete gi1;

    delete i1;

    delete lci1;

    return 0;
}