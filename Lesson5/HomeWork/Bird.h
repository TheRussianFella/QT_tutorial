#pragma once
#include "F:\AISH\Lesson5\HomeWork\Animal.h"
class Bird :
	public Animal
{
public:

	void sound();
	void moves();

	Bird(const char* name, const char* type);
	~Bird();
};

