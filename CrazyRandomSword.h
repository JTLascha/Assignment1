#pragma once
#include "Weapon.h"
class CrazyRandomSword :
	public Weapon
{
public:
	CrazyRandomSword() : Weapon("Crazy random sword", rand() % 100) {}
	virtual double hit(double armor);
};


