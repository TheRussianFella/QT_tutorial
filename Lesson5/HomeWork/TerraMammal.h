#pragma once
#include "F:\AISH\Lesson5\HomeWork\Mammal.h"
class TerraMammal :
	public Mammal
{
public:

	void moves();

	TerraMammal(const char* sound, const char* name, const char* type);
	~TerraMammal();

};

