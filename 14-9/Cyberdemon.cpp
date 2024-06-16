#include "Cyberdemon.h"
#include <iostream>
using std::cout;
using std::endl;

Cyberdemon::Cyberdemon() :Demon() {  }
Cyberdemon::Cyberdemon(int newStrength, int newHit) :Demon(newStrength, newHit) {  }
int Cyberdemon::getDamage()const {
	int damage;
	// All creatures inflict damage, which is a
	// random number up to their strength
	damage = (rand() % strength) + 1;
	damage += Demon::getDamage();
	cout << getSpecies() << " attacks for " <<
		damage << " points!" << endl;
	return damage;
}
string Cyberdemon::getSpecies()const { return "Cyberdemom"; }