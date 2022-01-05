#pragma once
#include <string>
#include <vector>
using namespace std;
class Parcelle;
class Exploitation
{
public:
	Exploitation(string, string, string);
	Exploitation();
	~Exploitation();
	string getId();
	string getNomExploitant();
	string getMelExploitant();
	void setNomExploitant(string);
	void setMelExploitant(string);
	Parcelle* getParcelle();

private:
	string id;
	string nomExploitant;
	string melExploitant;
	Parcelle* parcelle;
};

class TraitementPhytosanitaire;
class EspeceCultivee;
class Parcelle 
{
public:
	Parcelle(string, string, string, double);
	Parcelle();
	~Parcelle();
	string getId();
	string getDateSemis();
	string getDateRecoltePrevue();
	double getSurface();
	void setDateSemis(string);
	void setDateRecoltePrevue(string);
	void setSurface(double);
	EspeceCultivee* getEspeceCultivee();
	TraitementPhytosanitaire* getTraitementPhytosanitaire();
	void ajouteUnTraitement(TraitementPhytosanitaire);


private:
	string id;
	string dateSemis;
	string dateRecoltePrevue;
	double surface;
	EspeceCultivee* especeCultivee;
	TraitementPhytosanitaire* traitementPhytoSanitaire;
	vector<TraitementPhytosanitaire> traitementPhytosanitaire;
};


class EspeceCultivee 
{
public:
	EspeceCultivee(string, string, string);
	EspeceCultivee();
	~EspeceCultivee();
	string getId();
	string getLibelle();
	string getType();
	void setLibelle(string);
	void setType(string);

private:
	string id;
	string libelle;
	string type;

};


class ProduitPhytoSanitaire;
class TraitementPhytosanitaire
{
public:
	TraitementPhytosanitaire(string);
	TraitementPhytosanitaire();
	~TraitementPhytosanitaire();
	string getId();
	ProduitPhytoSanitaire* getProduitPhytoSanitaire();
	double quantiteAppliquee();

protected:
	string id;
	ProduitPhytoSanitaire* produitPhytoSanitaire;
};


class TraitementSemence : public TraitementPhytosanitaire
{
public:
	TraitementSemence(string, string);
	TraitementSemence();
	~TraitementSemence();
	string getDosageTraitementSemence();
	void setDosageTraitementSemence(string);
	double quantiteAppliquee();

private:
	string dosageTraitementSemence;
};

class Pulverisation;
class TraitementEnChamp : public TraitementPhytosanitaire
{
public:
	TraitementEnChamp(string);
	TraitementEnChamp();
	~TraitementEnChamp();
	double quantiteAppliquee();
	Pulverisation* getPulverisation();

private:
	Pulverisation* pulverisation;
};


class ProduitPhytoSanitaire
{
public:
	ProduitPhytoSanitaire(string, string);
	ProduitPhytoSanitaire();
	~ProduitPhytoSanitaire();
	string getId();
	string getLibelle();
	void setLibelle(string);

private:
	string id;
	string libelle;

};


class Pulverisation
{
public:
	Pulverisation(string, string, string);
	Pulverisation();
	~Pulverisation();
	string getId();
	string getDosage();
	string getDatePulverisation();
	void setDosage(string);
	void setDatePulverisation(string);

private:
	string id;
	string dosage;
	string datePulverisation;
};