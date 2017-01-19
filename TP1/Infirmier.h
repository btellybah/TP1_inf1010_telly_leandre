/********************************************
* Titre: Travail pratique #1 - Infirmier.h
* Date: 19 janvier 2017
* Auteur: Léandre Guertin (1841782) et Boubacar Telly Bah (1791077)
*******************************************/

#ifndef INFIRMIER_H
#define INFIRMIER_H

#include <string>

using namespace std;

class Infirmier
{
public:
	Infirmier();
	Infirmier(string nom, string prenom, int nbChambre);
	~Infirmier();
	string getNom();
	string getPrenom();
	int getNbChambre();
	void setNom(string nom);
	void setPrenom(string prenom);
	void setNbChambre(int nbChambre);
private:
	string nom_;
	string prenom_;
	int nbChambre_;
};

#endif

