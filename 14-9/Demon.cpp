#include "Demon.h"
#include <iostream>
using std::cout;
using std::endl;

Demon::Demon() :Creature() {  }
Demon::Demon(int newStrength, int newHit):Creature(newStrength, newHit) {  }
int Demon::getDamage()const {
	int damage = 0;
	if ((rand() % 100) < 5)
	{
		damage = damage + 50;
		cout << "Demonic attack inflicts 50 "
			<< " additional damage points!" << endl;
	}
	return damage;
}
