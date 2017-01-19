/********************************************
* Titre: Travail pratique #1 - Infirmier.cpp
* Date: 19 janvier 2017
* Auteur: Léandre Guertin (1841782) et Boubacar Telly Bah (1791077)
*******************************************/

#include "Infirmier.h"

Infirmier::Infirmier()
{
	nom_ = "";
	prenom_ = "";
	nbChambre_ = 0;
}

Infirmier::Infirmier(string nom, string prenom, int nbChambre) {
	nom_ = nom;
	prenom_ = prenom;
	nbChambre_ = nbChambre;
}

Infirmier::~Infirmier()
{
}

string Infirmier::getNom() {
	return nom_;
}
string Infirmier::getPrenom() {
	return prenom_;
}
int Infirmier::getNbChambre() {
	return nbChambre_;
}
void Infirmier::setNom(string nom) {
	nom_ = nom;
}
void Infirmier::setPrenom(string prenom) {
	prenom_ = prenom;
}
void Infirmier::setNbChambre(int nbChambre) {
	nbChambre_ = nbChambre;
}