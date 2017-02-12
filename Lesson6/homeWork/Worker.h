#pragma once
#include "Bee.h"

class Worker :
	public Bee
{
	Flower** m_field;
	int m_sizeOfField;

	Flower* genFlower();
	void goForHoney(Flower* flower);
	int countHoney();
	bool isReady();

public:

	Worker(int honey, int weight, int sizeOfField);
	virtual ~Worker();

	int seekForHoneyAndShowTries();

};

