/**************************************************
 * Titre: Travail pratique #1 - Main.cpp
 * Date: 10 janvier 2017
 * Auteur:
**************************************************/

#include "Specialite.h"
#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"

#include <string>
#include <iostream>
#include <ctime>
#include <random>

using namespace std;

static const int NB_INFIRMIER = 11;
static const string LISTE_NOM_INFIRMIERS[NB_INFIRMIER] = { "Sharp", "Tremblay", "Ezzee", "Kissy", "Myyy", "Asssy", "Jizzy", "Peezy", "Lee", "Sins", "Ann" };
static const string LISTE_PRENOM_INFIRMIERS[NB_INFIRMIER] = { "Cee", "Jean", "Pewee", "Paul", "Luc", "Renay", "Bob", "Guillaume", "Guy", "Johnny", "Lisa" };
static const int NB_SPECIALITE = 5;
static const string LISTE_SPECIALITE[NB_SPECIALITE] = { "Massage", "Operation", "Dentaire", "General", "Opticien" };
static const int NB_MEDECIN = 5;
static const string LISTE_NOM_MEDECIN[NB_MEDECIN] = { "Guy Turcotte", "Maurice Richard", "Richard Layout Lao", "Telly Bah", "Leandre Guertin" };

int main()
{
	srand(time(NULL)); rand();
    //C'est a vous de voir si vous devez allouer dynamiquement ou non les elements

	//1-  Creez un objet du type Infirmier � l'aide du constructeur par d�faut
	Infirmier unInfirmier;

	//2-  Modifiez le nom, le prenom et le nbChambre de cet objet � l'aide des m�thodes de modification
	unInfirmier.setNom(LISTE_NOM_INFIRMIERS[0]);
	unInfirmier.setPrenom(LISTE_PRENOM_INFIRMIERS[0]);
	unInfirmier.setNbChambre(42);

	//3-  Creez 11 autres objets du type Infirmier � l'aide du constructeur par param�tre avec des valeurs de votre choix
	Infirmier infirmiers[NB_INFIRMIER];
	for (int i = 0; i < NB_INFIRMIER; i++) {
		infirmiers[i] = Infirmier(LISTE_NOM_INFIRMIERS[i], LISTE_PRENOM_INFIRMIERS[i], (rand() % 10) + 1);
	}

	//4-  Creez un objet du type Personnel � l'aide du constructeur par d�faut
	Personnel personnel;
	//5-  Ajoutez les 12 objets du type Infimier � tableauInfirmiers de ce dernier
	personnel.ajouterInfirmier(unInfirmier);
	for (int i = 0; i < NB_INFIRMIER; i++) {
		personnel.ajouterInfirmier(infirmiers[i]);
	}
	//6-  Creez un objet du type Specialite � l'aide du constructeur par d�faut
	Specialite* uneSpecialite = new Specialite;

	//7-  Modifiez le domaine et le niveau de cet objet � l'aide des m�thodes de modification
	uneSpecialite->setDomaine("Chirurgien");
	uneSpecialite->setNiveau(9);

	//8-  Creez 5 autres objets du type Specialite � l'aide du constructeur par param�tre avec des valeurs de votre choix
	Specialite* specialites = new Specialite[NB_MEDECIN];
	for (int i = 0; i < NB_SPECIALITE; i++) {
		specialites[i] = Specialite(LISTE_SPECIALITE[i], (rand()%5) + 1);
	}

	//9-  Creez un objet du type Medecin � l'aide du constructeur par d�faut
	Medecin unMedecin;

	//10- Modifiez le nom, les horaires et la specialite de ce dernier
	unMedecin.modifierHoraires(8);
	unMedecin.modifierNom("Jean Guerit");
	unMedecin.modifierSpecialite(uneSpecialite);

	//11- Creez 5 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix
	Medecin medecins[NB_MEDECIN];
	for (int i = 0; i < NB_MEDECIN; i++) {
		medecins[i] = Medecin(LISTE_NOM_MEDECIN[i], (rand() % 10) + 1, specialites+i);
	}

	//12- Expliquez la relation entre les deux objets Medecin et Specialite. Justifiez votre r�ponse
	/*
	Question 1:

	
	Question 2:

	*/
	//13- Ajoutez les 6 objets du type Medecin � tableauMedecins de l'objet Personnel d�j� cr��
	personnel.ajouterMedecin(unMedecin);
	for (int i = 0; i < NB_MEDECIN; i++) {
		personnel.ajouterMedecin(medecins[i]);
	}

	//14- Affichez la liste des medecins
	personnel.afficherMedecins();
	//15- Affichez la liste des infirmiers
	personnel.afficherInfirmiers();

	delete uneSpecialite;
	uneSpecialite = nullptr;
	delete[] specialites;
	specialites = nullptr;
}
