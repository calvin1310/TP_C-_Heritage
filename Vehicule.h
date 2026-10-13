#pragma once
#include <iostream>
#include<string>
using namespace std;

class Vehicule
{
	private:
		string marque;
		int puissance;
		int kilometrage;
	public:
		Vehicule(string mar, int pui, int kilo);
		int parcourir(int distance);
		void lire_caracteristiques();
};

class Voiture : public Vehicule
{
	private:
		string type;
	public:
		Voiture(string mar, int pui, int kilo, string ty);
		void lire_type();
};

class Bus : public Vehicule
{
	private:
		int assise;
		int essieux;
	public: 
		Bus(string mar, int pui, int kilo, int ass, int ess);
		void lire_bus();
};