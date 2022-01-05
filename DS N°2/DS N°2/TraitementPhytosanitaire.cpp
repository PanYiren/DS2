#include "Modele.h";
#include <string>;
using namespace std;

TraitementPhytosanitaire::TraitementPhytosanitaire(string id) {
	this->id = id;
}

TraitementPhytosanitaire::~TraitementPhytosanitaire() {
	this->id = "";
}

string TraitementPhytosanitaire::getId() {
	return this->id;
}

ProduitPhytoSanitaire* TraitementPhytosanitaire::getProduitPhytoSanitaire() {
	return this->produitPhytoSanitaire;
}

double TraitementPhytosanitaire::quantiteAppliquee() {

}