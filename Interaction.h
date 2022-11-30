#ifndef INTERACTION_H
#define INTERACTION_H

#include <chrono>
#include <iostream>
#include <string>
#include <list>

#include "date/date.h"
#include "date/chrono_io.h"
#include "sdateAuto.h"
#include "Tache.h"

using namespace date;
using namespace std::chrono;
using day_point = std::chrono::time_point<std::chrono::system_clock, days>;
using namespace std;

class Interaction
{
private:
	//attributs
	string content;
	struct sdateAuto dateInteraction;
	list<Tache> lt;
public:
	//constructeurs;
	Interaction();
	Interaction(const string &);
	~Interaction();
	//accesseurs
	struct sdateAuto getDateInteraction() const;
	string getContent() const;
	list<Tache> getLT() const;
	//mutateurs
	void setDateInteraction();
	void setContent(const string &);
	//fonctions
	void addInteractionTache(const Tache &);
	//fonctions amie 
	friend ostream& operator<<(ostream &, const Interaction &);
};

#endif
