#ifndef GESTIONCONTACTS_H
#define GESTIONCONTACTS_H

#include <chrono>
#include <iostream>
#include <string>
#include <list>
#include <map>

//#include "Contact.h"
//#include "Contact.cpp"
#include "sdateAuto.h"
#include "date/date.h"
#include "date/chrono_io.h"

using namespace date;
using namespace std::chrono;
using day_point = std::chrono::time_point<std::chrono::system_clock, days>;
using namespace std;

class GestionContacts
{
private:
    //attributs
    list<Contact> lc;
    string deletedContact;
    struct sdateAuto deletedDate;
public:
    //constructeurs
    GestionContacts();
    ~GestionContacts();
    //accesseurs
    list<Contact> getListContact() const;
    string getDeletedContact() const;
    struct sdateAuto getDeletedDate() const;
    //mutateurs
    void setDeletedContact(const string &);
    void setDeletedDate(const day &, const month &, const year &); //
    //fonctions
    void addContact(const Contact &);
    void deleteContactByLastname(const string &);
    void editCompany(Contact &, string);
    void editMail(Contact &, string);
    void editPhone(Contact &, string);
    void editPicture(Contact &, string);
    void clearList();
    int numberOfContacts() const;
    void displayContacts();
};

#endif