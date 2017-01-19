/********************************************
 * Titre: Travail pratique #1 - Medecin.h
 * Date: 19 janvier 2017
 * Auteur: Léandre Guertin (1841782) et Boubacar Telly Bah (1791077)
 *******************************************/

#ifndef MEDECIN_H
#define MEDECIN_H

#include <string>
#include "Specialite.h"

using namespace std;

class Medecin
{
public:
	// Constructeurs par defaut et par parametre
	Medecin();
	Medecin(string nom, int horaires, Specialite* uneSpecialite);

	//Destructeur
	~Medecin();

	// Methodes d'acces
	string obtenirNom();
	int obtenirHoraires();
	Specialite obtenirSpecialite();

	// Methodes de modification
	void modifierNom(string nom);
	void modifierHoraires(int horaires);
	void modifierSpecialite(Specialite* specialite);


private:

	// Variables privees
	string nom_;
	int horaires_;
	Specialite* specialite_;
};

#endif
