#include "Cyberdemon.h"

Cyberdemon::Cyberdemon() :Demon() {  }
Cyberdemon::Cyberdemon(int newStrength, int newHit) :Demon(newStrength, newHit) {  }
int Cyberdemon::getDamage()const {
	int damage = Demon::getDamage();
	return damage;
}
string Cyberdemon::getSpecies()const { return "Cyberdemon"; }