#include "Modele.h";
#include <string>;
using namespace std;

TraitementSemence::TraitementSemence(string id, string dosageTraitementSemence) : TraitementPhytosanitaire(id) {
	this->dosageTraitementSemence = dosageTraitementSemence;
}
TraitementSemence::~TraitementSemence() {
	TraitementPhytosanitaire::~TraitementPhytosanitaire();
	this->dosageTraitementSemence = "";
}
string TraitementSemence::getDosageTraitementSemence() {
	return this->dosageTraitementSemence;
}
void TraitementSemence::setDosageTraitementSemence(string dosageTraitementSemence) {
	this->dosageTraitementSemence = dosageTraitementSemence;
}
double TraitementSemence::quantiteAppliquee() {

}