#include "Modele.h";
#include <string>;
#include <vector>
using namespace std;

Parcelle::Parcelle(string id, string dateSemis, string dateRecoltePrevue, double surface) {
	this->id = id;
	this->dateSemis = dateSemis;
	this->dateRecoltePrevue = dateRecoltePrevue;
	this->surface = surface;
}

Parcelle::~Parcelle() {
	this->id = "";
	this->dateSemis = "";
	this->dateRecoltePrevue = "";
	this->surface = 0;
}

string Parcelle::getId() {
	return this->id;
}

string Parcelle::getDateSemis() {
	return this->dateSemis;
}

string Parcelle::getDateRecoltePrevue() {
	return this->dateRecoltePrevue;
}

double Parcelle::getSurface() {
	return this->surface;
}

void Parcelle::setDateSemis(string dateSemis) {
	this->dateSemis = dateSemis;
}

void Parcelle::setDateRecoltePrevue(string dateRecoltePrevue) {
	this->dateRecoltePrevue = dateRecoltePrevue;
}
void Parcelle::setSurface(double surface) {
	this->surface = surface;
}

EspeceCultivee* Parcelle::getEspeceCultivee() {
	return this->especeCultivee;
}

TraitementPhytosanitaire* Parcelle::getTraitementPhytosanitaire() {
	return this->traitementPhytoSanitaire;
}

void Parcelle::ajouteUnTraitement(TraitementPhytosanitaire traitement) {
	this->traitementPhytosanitaire.push_back(traitement);
}