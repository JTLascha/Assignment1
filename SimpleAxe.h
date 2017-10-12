#pragma once
#include "Weapon.h"
class SimpleAxe :
	public Weapon
{
public:
	SimpleAxe();
	virtual double hit(double armor);
};

