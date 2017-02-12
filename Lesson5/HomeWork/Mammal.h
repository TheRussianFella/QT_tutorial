#pragma once
#include "Animal.h"
class Mammal :
	public Animal
{

	char* m_sound;

public:

	virtual void moves() = 0;
	void sound();

	void setSound(const char* sound);

	Mammal(const char* sound, const char* name, const char* type);
	virtual ~Mammal();
};

