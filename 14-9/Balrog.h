#ifndef BALROG_H
#define BALORG_H
#include "Demon.h"
class Balrog : public Demon
{
public:
	Balrog();
	Balrog(int newStrength, int newHit);
	int getDamage()const;
	string getSpecies()const;
};

#endif