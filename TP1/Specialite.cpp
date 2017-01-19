#include "Specialite.h"



Specialite::Specialite() {
	domaine_ = "";
	niveau_ = 0;
}

Specialite::Specialite(string domain, int niveau) {
	domaine_ = domain;
	niveau_ = niveau;
}

int Specialite::getNiveau() const {
	return niveau_;
}

string Specialite::getDomaine() const {
	return domaine_;
}

void Specialite::setNiveau(int niveau) {
	niveau_ = niveau;
}

void Specialite::setDomaine(string domaine) {
	domaine_ = domaine;
}

Specialite::~Specialite() {


}
