#ifndef HUMAN_H
#define HUMAN_H
#include "Creature.h"
class Human : public Creature
{
public:
	Human();
	Human(int newStrength, int newHit);
	int getDamage()const;
	string getSpecies()const;
};

#endif