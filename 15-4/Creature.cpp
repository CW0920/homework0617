#include "Creature.h"
#include <iostream>
using std::cout;
using std::endl;

Creature::Creature() :strength(10), hitpoints(10) {  }
Creature::Creature(int newStrength, int newHit) :strength(newStrength), hitpoints(newHit) {  }
int Creature::getStrength()const { return strength; }
int Creature::getHitpoint()const { return hitpoints; }
string Creature::getSpecies()const { return "Unknown"; }
int Creature::getDamage()const {
	int damage;
	// All creatures inflict damage, which is a
	// random number up to their strength
	damage = (rand() % strength) + 1;
	cout << getSpecies() << " attacks for " <<
		damage << " points!" << endl;
	return damage;
}