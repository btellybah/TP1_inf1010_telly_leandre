/**********************************************
* Titre: Travail pratique #1 - Personnel.cpp
* Date: 10 janvier 2017
* Auteur:
*********************************************/



#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"
#include <iostream>

using namespace std;

Personnel::Personnel()
{
	capaciteTableauInfirmiers_ = 3;
	capaciteTableauMedecins_ = 3;
	tableauInfirmiers_ = new Infirmier[capaciteTableauInfirmiers_];
	tableauMedecins_ = new Medecin[capaciteTableauMedecins_];
	compteurInfirmier_ = 0;
	compteurMedecin_ = 0;
}

Personnel::~Personnel()
{
	delete[] tableauInfirmiers_;
	delete[] tableauMedecins_;
	tableauInfirmiers_ = nullptr;
	tableauMedecins_ = nullptr;
}

void Personnel::ajouterMedecin(Medecin& unMedecin) {
	if (compteurMedecin_ == capaciteTableauMedecins_) {
		capaciteTableauMedecins_ *= 2;
		Medecin* tableauTemp = new Medecin[capaciteTableauMedecins_];
		for (int i = 0; i < compteurMedecin_; i++) {
			tableauTemp[i] = tableauMedecins_[i];
		}
		delete[] tableauMedecins_;
		tableauMedecins_ = tableauTemp;

	}

	tableauMedecins_[compteurMedecin_++] = unMedecin;
}

void Personnel::ajouterInfirmier(Infirmier& unInfirmier)
{
	if (compteurInfirmier_ == capaciteTableauInfirmiers_) {
		capaciteTableauInfirmiers_ *= 3;
		Infirmier* tableauTemp = new Infirmier[capaciteTableauInfirmiers_];
		for (int i = 0; i < compteurInfirmier_; i++) {
			tableauTemp[i] = tableauInfirmiers_[i];
		}

		delete[] tableauInfirmiers_;
		tableauInfirmiers_ = tableauTemp;

	}
	tableauInfirmiers_[compteurInfirmier_++] = unInfirmier;
}

void Personnel::afficherMedecins()
{
	cout << "La liste des medecins present" << endl;
	for (int i = 0; i < compteurMedecin_; i++) {
		cout << tableauMedecins_[i].obtenirNom() << " ";
	}
}

void Personnel::afficherInfirmiers() {
	cout << "La liste des infirmier present" << endl;
	for (int i = 0; i < compteurMedecin_; i++) {
		cout << tableauInfirmiers_[i].getNom() << " ";
	}
}
