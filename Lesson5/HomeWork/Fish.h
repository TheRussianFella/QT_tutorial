#pragma once
#include "F:\AISH\Lesson5\HomeWork\Animal.h"
class Fish :
	public Animal
{
public:

	void sound();
	void moves();

	Fish(const char* name, const char* type);
	~Fish();
};

