#include "Modele.h";
#include <string>;
using namespace std;

Pulverisation::Pulverisation(string id, string dosage, string datePulverisation) {
	this->id = id;
	this->dosage = dosage;
	this->datePulverisation = datePulverisation;
}

Pulverisation::~Pulverisation() {
	this->id = "";
	this->dosage = "";
	this->datePulverisation = "";
}

string Pulverisation::getId() {
	return this->id;
}

string Pulverisation::getDosage() {
	return this->dosage;
}

string Pulverisation::getDatePulverisation() {
	return this->datePulverisation;
}

void Pulverisation::setDosage(string dosage) {
	this->dosage = dosage;
}

void Pulverisation::setDatePulverisation(string datePulverisation) {
	this->datePulverisation = datePulverisation;
}