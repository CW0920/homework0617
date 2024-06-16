#include "Balrog.h"
#include <iostream>
using std::cout;
using std::endl;

Balrog::Balrog() :Demon() {  }
Balrog::Balrog(int newStrength, int newHit) :Demon(newStrength, newHit) {  }
int Balrog::getDamage()const {
	int damage = Demon::getDamage();
	// Balrogs are so fast they get to attack twice
	int damage2 = (rand() % strength) + 1;
	cout << "Balrog speed attack inflicts " << damage2 <<
		" additional damage points!" << endl;
	damage += damage2;
	return damage;
}
string Balrog::getSpecies()const { return "Balrog"; }