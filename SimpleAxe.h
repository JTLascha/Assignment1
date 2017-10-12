#pragma once
#include "Weapon.h"
class SimpleAxe :
	public Weapon
{
public:
	SimpleAxe() : Weapon("Simple axe", 60.0) {
	}
	virtual double hit(double armor);
};

