#pragma once
#include<cstdlib>
#include<iostream>
#include<ctime>

class Flower
{

	int m_honey;

public:

	Flower();
	~Flower();

	int giveHoney( int honey );
	const int showHoney() const { return m_honey; };

};

