#include "LoadedDice.h"
#include <iostream>

LoadedDice::LoadedDice()
{
	numSides = 6;
	srand(time(NULL)); // Seeds random number generator
}
LoadedDice::LoadedDice(int numSides)
{
	this->numSides = numSides;
	srand(time(NULL)); // Seeds random number generator
}
int LoadedDice::rollDice()const {
	if (rand() % 2 == 0) {
		return numSides;
	}
	else {
		return Dice::rollDice();
	}
}