#ifndef CREATURE_H
#define CREATURE_H

#include <string>
using std::string;

class Creature
{
protected:
	int strength; // How much damage we can inflict
	int hitpoints; // How much damage we can sustain
public:
	Creature();
	// Initialize to human, 10 strength, 10 hit points
	Creature(int newStrength, int newHit);
	// Initialize creature to new type, strength, hit points
	// Also add appropriate accessor and mutator functions
	// for type, strength, and hit points
	int getStrength()const;
	int getHitpoint()const;
	int getDamage()const;
	string getSpecies()const;
};
#endif