#include "Dice.h"
#include "LoadedDice.h"
#include <iostream>
using namespace std;
int rollTwoDice(const Dice& die1, const Dice& die2)
{
	return die1.rollDice() + die2.rollDice();
}

int main(void) {
	Dice Dice1, Dice2;
	for(int i=0;i<10;i++) {
		cout << rollTwoDice(Dice1, Dice2) << endl;
	}

	LoadedDice LdDice1, LdDice2;
	for (int i = 0; i < 10; i++) {
		cout << rollTwoDice(LdDice1, LdDice2) << endl;
	}

	return 0;
}