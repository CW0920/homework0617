#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include "Demon.h"
class Cyberdemon : public Demon
{
public:
	Cyberdemon();
	Cyberdemon(int newStrength, int newHit);
	int getDamage()const;
	string getSpecies()const;
};

#endif