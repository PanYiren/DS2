#include "Modele.h";
#include <string>;
using namespace std;

ProduitPhytoSanitaire::ProduitPhytoSanitaire(string id, string libelle) {
	this->id = id;
	this->libelle = libelle;
}

ProduitPhytoSanitaire::~ProduitPhytoSanitaire() {
	this->id = "";
	this->libelle = "";
}

string ProduitPhytoSanitaire::getId() {
	return this->id;
}

string ProduitPhytoSanitaire::getLibelle() {
	return this->libelle;
}

void ProduitPhytoSanitaire::setLibelle(string libelle) {
	this->libelle = libelle;
}
