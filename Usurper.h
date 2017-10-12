#pragma once
#include "Weapon.h"
class Usurper :
	public Weapon
{
public:
	Usurper() : Weapon("Usurper", 1.0) {
	};
	virtual double hit(double armor);
};

