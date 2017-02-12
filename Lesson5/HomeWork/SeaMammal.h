#pragma once
#include "Mammal.h"
class SeaMammal :
	public Mammal
{
public:

	void moves();

	SeaMammal(const char* sound, const char* name, const char* type);
	~SeaMammal();
};

