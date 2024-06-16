#include "Balrog.h"
#include <iostream>
using std::cout;
using std::endl;

Balrog::Balrog() :Demon() {  }
Balrog::Balrog(int newStrength, int newHit) :Demon(newStrength, newHit) {  }
int Balrog::getDamage()const {
	int totalDamage;
	// All creatures inflict damage, which is a
	// random number up to their strength
	totalDamage = (rand() % strength) + 1;
	totalDamage += Demon::getDamage();
	cout << getSpecies() << " attacks for " <<
		totalDamage << " points!" << endl;
	int damage = (rand() % strength) + 1;
	cout << "Balrog speed attack inflicts " << damage <<
		" additional damage points!" << endl;
	totalDamage += damage;
	return totalDamage;
}
string Balrog::getSpecies()const { return "Balrog"; }