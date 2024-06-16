#include "Human.h"
#include <iostream>
using std::cout;
using std::endl;

Human::Human() :Creature() {  }
Human::Human(int newStrength, int newHit) :Creature(newStrength, newHit) {  }
int Human::getDamage()const {
	int damage;
	// All creatures inflict damage, which is a
	// random number up to their strength
	damage = (rand() % strength) + 1;
	cout << getSpecies() << " attacks for " <<
		damage << " points!" << endl;
	return damage;
}
string Human::getSpecies()const { return "Human"; }