#include "Elf.h"
#include "Human.h"
#include "Balrog.h"
#include "Cyberdemon.h"
#include <iostream>
using namespace std;
void battleArena(Creature& creature1, Creature& creature2);

int main(void) {
	srand(time(NULL));
	Elf elf(50, 200);
	Human human(50, 300);
	Cyberdemon cyberdemon(20, 300);
	Balrog balrog(30, 300);

	cout << "Battle between Human and Elf:" << endl;
	battleArena(human, elf);

	cout << "Battle between Human and Cyberdemon:" << endl;
	battleArena(human, cyberdemon);

	cout << "Battle between Human and Balrog:" << endl;
	battleArena(human, balrog);

	return 0;
}

void battleArena(Creature& creature1, Creature& creature2) {
	cout << "\n------------------------------------------------------------------------------\n";
	int round = 1;
	int HP1 = creature1.getHitpoint(), HP2 = creature2.getHitpoint();
	while (HP1 > 0 && HP2 > 0) {
		cout << "\nRound " << round << ":" << endl
			<< "HP:"
			<< creature1.getSpecies() << ": " << HP1 << "  "
			<< creature2.getSpecies() << ": " << HP2 << endl;
		HP2 -= creature1.getDamage();
		HP1 -= creature2.getDamage();
		round++;
	}
	cout << "\nResult: ";
	if (HP1 <= 0 && HP2 <= 0) {
		cout << "Tie" << endl;
	}
	else if (HP2 <= 0) {
		cout << creature1.getSpecies() << " win the battle" << endl;
	}
	else if (HP1 <= 0) {
		cout << creature2.getSpecies() << " win the battle" << endl;
	}
	cout << "\n------------------------------------------------------------------------------\n";
}