#pragma once
#include <cstring>
#include <iostream>
#include <cstdlib>

class Animal
{
	char* m_name;
	char* m_type;

public:

	int len();

	char* getName() { return m_name; };

	void displayInfo();

	void setName(const char* name);

	virtual void moves() = 0;
	virtual void sound() = 0;

	Animal(const char* name,const char* type);
	virtual ~Animal();
};

