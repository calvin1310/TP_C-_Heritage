#include "Vehicule.h"
#include <iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	Vehicule* a = nullptr;
	Voiture* b = nullptr;
	Bus* c = nullptr;
	do {
		cout << "-------------------------------------------------------------------------\n";
		cout << "--------------------------Choisisez une action --------------------------\n";
		cout << "-------------------------------------------------------------------------\n";
		cout << "---                            0. Quitter                             ---\n";
		cout << "---                       1. Creer un Vehicule                        ---\n";
		cout << "---                      2. Parcourir une distance                    ---\n";
		cout << "---               3. Afficher les informations d'un Vehicule          ---\n";
		cout << "---                       4. Creer une voiture                        ---\n";
		cout << "---               5. Afficher les informations d'une voiture          ---\n";
		cout << "---                          6. Creer un bus                          ---\n";
		cout << "---                 7. Afficher les informations du bus               ---\n";
		cout << "-------------------------------------------------------------------------\n";
		cout << ">>>>>>>";
		cin >> n;
		switch (n)
		{
		case 1: {
			string mar;
			int pui, kilo;
			cout << "-------------------------------------------------------------------------\n";
			cout << "La marque : ";
			cin >> mar;
			cout << "-------------------------------------------------------------------------\n";
			cout << "La puissance : ";
			cin >> pui;
			cout << "-------------------------------------------------------------------------\n";
			cout << "Le kilometrage : ";
			cin >> kilo;
			a = new Vehicule(mar, pui, kilo);
			cout << "-------------------------------------------------------------------------\n";
			cout << "Le vehicule est bien creer !\n";
			break; }

		case 2: {
			char x;
			cout << "Quelle vehicule voulez vous deplacer (Vehicule(a), Voiture(b), Bus(c) ?\n >>>>>>";
			cin >> x;
			if (x == 'a') {
				if (a == nullptr) {
					cout << "Veuillez creer un vehicule d'abord !\n"; break;
				}
				else {
					int d;
					cout << "Combien de kilometre vous voulez parcourir : ";
					cin >> d;
					a->parcourir(d);
					cout << "Vous avez bien parcouru " << d << "km\n"; break;
				}
			}
			else if (x == 'b') {
				if (b == nullptr) {
					cout << "Veuillez creer une voiture d'abord !\n"; break;
				}
				else {
					int d;
					cout << "Combien de kilometre vous voulez parcourir : ";
					cin >> d;
					b->parcourir(d);
					cout << "Vous avez bien parcouru " << d << "km\n"; break;
				}
			}
			else if (x == 'c') {
				if (c == nullptr) {
					cout << "Veuillez creer un bus d'abord !\n"; break;
				}
				else {
					int d;
					cout << "Combien de kilometre vous voulez parcourir : ";
					cin >> d;
					c->parcourir(d);
					cout << "Vous avez bien parcouru " << d << "km\n"; break;
				}
			}
		}
		case 3: {
			if (a == nullptr) {
				cout << "Veuillez creer un vehicule d'abord !\n"; break;
			}
			else {
				a->lire_caracteristiques(); break;
			}
		}
		case 4: {
			string mar, ty;
			int pui, kilo;
			cout << "-------------------------------------------------------------------------\n";
			cout << "La marque : ";
			cin >> mar;
			cout << "-------------------------------------------------------------------------\n";
			cout << "La puissance : ";
			cin >> pui;
			cout << "-------------------------------------------------------------------------\n";
			cout << "Le kilometrage : ";
			cin >> kilo;
			cout << "-------------------------------------------------------------------------\n";
			cout << "Le type (berline, suv, 4x4, break) : ";
			cin >> ty;
			b = new Voiture(mar, pui, kilo, ty);
			cout << "-------------------------------------------------------------------------\n";
			cout << "La voiture est bien creer !\n";
			break; }
		case 5: {
			if (b == nullptr) {
				cout << "Veuillez creer une voiture d'abord !\n"; break;
			}
			else {
				b->lire_type(); break;
			}
		}
		case 6: {
			string mar;
			int pui, kilo, ass, ess;
			cout << "-------------------------------------------------------------------------\n";
			cout << "La marque : ";
			cin >> mar;
			cout << "-------------------------------------------------------------------------\n";
			cout << "La puissance : ";
			cin >> pui;
			cout << "-------------------------------------------------------------------------\n";
			cout << "Le kilometrage : ";
			cin >> kilo;
			cout << "-------------------------------------------------------------------------\n";
			cout << "Le nombre de places assises : ";
			cin >> ass;
			cout << "-------------------------------------------------------------------------\n";
			cout << "Le nombres d'essieux : ";
			cin >> ess;
			c = new Bus(mar, pui, kilo, ass, ess);
			cout << "-------------------------------------------------------------------------\n";
			cout << "Le bus est bien creer !\n";
			break; }
		case 7 : {
			if (c == nullptr) {
				cout << "Veuillez creer un bus d'abord !\n"; break;
			}
			else {
				c->lire_bus(); break;
			}
		case 0: {
			cout << "AU REVOIR\n"; break;
		}
		}
		default:
			cout << "Choix invalide\n";
			break;
		}
	} while (n != 0);
}