#include "Modele.h";
#include <string>;
#include <vector>
using namespace std;

EspeceCultivee::EspeceCultivee(string id, string libelle, string type) {
	this->id = id;
	this->libelle = libelle;
	this->type = type;
}
EspeceCultivee::~EspeceCultivee() {
	this->id = "";
	this->libelle = "";
	this->type = "";
}

string EspeceCultivee::getId() {
	return this->id;
}

string EspeceCultivee::getLibelle() {
	return this->libelle;
}

string EspeceCultivee::getType() {
	return this->type;
}

void EspeceCultivee::setLibelle(string libelle) {
	this->libelle = libelle;
}

void EspeceCultivee::setType(string type) {
	this->type = type;
}