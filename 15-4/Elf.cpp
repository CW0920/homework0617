#include "Elf.h"
#include <iostream>
using std::cout;
using std::endl;

Elf::Elf() :Creature() {  }
Elf::Elf(int newStrength, int newHit) :Creature(newStrength, newHit) {  }
int Elf::getDamage()const {
	int damage = Creature::getDamage();
	// Elves inflict double magical damage with a 10% chance
	if ((rand() % 10) == 0)
	{
		cout << "Magical attack inflicts " << damage <<
			" additional damage points!" << endl;
		damage = damage * 2;
	}
	return damage;
}
string Elf::getSpecies()const { return "Elf"; }