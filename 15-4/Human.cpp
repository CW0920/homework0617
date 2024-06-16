#include "Human.h"
#include <iostream>
using std::cout;
using std::endl;

Human::Human() :Creature() {  }
Human::Human(int newStrength, int newHit) :Creature(newStrength, newHit) {  }
int Human::getDamage()const {
	int damage = Creature::getDamage();
	return damage;
}
string Human::getSpecies()const { return "Human"; }