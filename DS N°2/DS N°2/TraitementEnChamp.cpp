#include "Modele.h";
#include <string>;
using namespace std;

TraitementEnChamp::TraitementEnChamp(string id) : TraitementPhytosanitaire(id) {

}

TraitementEnChamp::~TraitementEnChamp() {
	TraitementPhytosanitaire::~TraitementPhytosanitaire();
}

double TraitementEnChamp::quantiteAppliquee() {

}

Pulverisation* TraitementEnChamp::getPulverisation() {
	return this->pulverisation;
}