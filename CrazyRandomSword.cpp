#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
	armor = rand() % (int)(armor / 2);
	double damage = hitPoints - armor;
	if (damage < 0) {
		return 0;
	}
	return damage;
}
