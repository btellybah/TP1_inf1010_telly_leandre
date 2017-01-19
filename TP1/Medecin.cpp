/********************************************
 * Titre: Travail pratique #1 - Medecin.cpp
 * Date: 19 janvier 2017
 * Auteur: Léandre Guertin (1841782) et Boubacar Telly Bah (1791077)
 *******************************************/

#include"Medecin.h"

 // Constructeurs par defaut et par parametre
Medecin::Medecin() {
	nom_ = "";
	horaires_ = 0;
	specialite_ = nullptr;
}
Medecin::Medecin(string nom, int horaires, Specialite* uneSpecialite) {
	nom_ = nom;
	horaires_ = horaires;
	specialite_ = uneSpecialite;
}

//Destructeur
Medecin::~Medecin() {
}

// Methodes d'acces
string Medecin::obtenirNom() {
	return nom_;
}
int Medecin::obtenirHoraires() {
	return horaires_;
}
Specialite Medecin::obtenirSpecialite() {
	return *specialite_;
}

// Methodes de modification
void Medecin::modifierNom(string nom) {
	nom_ = nom;
}
void Medecin::modifierHoraires(int horaires) {
	horaires_ = horaires;
}
void Medecin::modifierSpecialite(Specialite* specialite) {
	specialite_ = specialite;
}