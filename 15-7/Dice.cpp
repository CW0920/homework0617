#include "Dice.h"
#include <iostream>

Dice::Dice()
{
	numSides = 6;
	srand(time(NULL)); // Seeds random number generator
}
Dice::Dice(int numSides)
{
	this->numSides = numSides;
	srand(time(NULL)); // Seeds random number generator
}
int Dice::rollDice()const
{
	return (rand() % numSides) + 1;
}
// Take two dice objects, roll them, and return the sum
