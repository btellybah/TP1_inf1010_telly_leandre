/**********************************************
* Titre: Travail pratique #1 - Specialite.h
* Date: 19 janvier 2017
* Auteur:
*********************************************/

#ifndef SPECIALITE_H
#define SPECIALITE_H
#include <string>
using namespace std;

class Specialite
{
public:

	Specialite();
	Specialite(string domaine, int niveau);
	string getDomaine() const;
	int getNiveau() const;
	void setNiveau(int niveau);
	void setDomaine(string domaine);

	~Specialite();

private:
	int niveau_;
	string domaine_;
};

#endif