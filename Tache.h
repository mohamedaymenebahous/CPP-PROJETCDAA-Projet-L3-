#ifndef TACHE_H
#define TACHE_H

#include <iostream>
#include <string>

#include "sdate.h"

using namespace std;

class Tache
{
private:
    //attributs
    string action;
    struct sdate dateAction;
    bool check = false;
public:
    //constructeurs
    Tache();
    Tache(const string &, const unsigned int &, const unsigned int &, const unsigned int &);
    Tache(const string &);
    ~Tache();
    //accesseurs
    string getAction() const;
    struct sdate getDateAction() const;
    bool getCheck() const;
    //mutateurs
    void setAction(const string &);
    void setDateAction(const unsigned int &, const unsigned int &, const unsigned int &);
    void setCheck(const bool &);
    //fonctions amie 
	friend ostream& operator<<(ostream &, const Tache &);
    //fonctions
    //...
};

#endif