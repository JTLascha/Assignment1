#include "Usurper.h"

// The Usurper is intended to counter enemies with high armor. Its damage is based on the 
// enemy's armor, and it will not hurt enemies with armor less than 10

double Usurper::hit(double armor) {
	int damage = 0;
	if (armor > 10) { damage = armor; }
	return damage;
}