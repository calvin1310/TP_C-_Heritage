#include "Vehicule.h"
#include <iostream>
#include<string>
using namespace std;

Vehicule::Vehicule( string mar, int pui, int kilo) {
	marque = mar;
	puissance = pui;
	kilometrage = kilo;
}

int Vehicule::parcourir(int distance) {
	kilometrage += distance;
	return kilometrage;
}

void Vehicule::lire_caracteristiques() {
	cout << "La marque : " << marque << endl;
	cout << "La puissance : " << puissance << "ch\n";
	cout << "Le kilometrage : " << kilometrage << "km\n";
}

Voiture::Voiture(string mar, int pui, int kilo, string ty): Vehicule (mar, pui, kilo) {
	if (ty == "berline" || ty == "suv" || ty == "4x4" || ty == "break") {
		type = ty ;
	}
	else {
		type = "invalide";
	}
}

void Voiture::lire_type() {
	Vehicule::lire_caracteristiques();
	cout << "Le type de votre voiture est : " << type << endl;
}

Bus::Bus(string mar, int pui, int kilo, int ass, int ess): Vehicule(mar, pui, kilo) {
	assise = ass;
	essieux = ess;
}

void Bus::lire_bus() {
	Vehicule::lire_caracteristiques();
	cout << "Dans ce bus il y a " << assise<< " places assises et "<< essieux<<" essieux\n";
}