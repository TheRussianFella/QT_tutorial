#pragma once

#include "Worker.h"

class Queen :
	public Bee
{

	Worker** m_squad;
	int m_squadSize;

	int* getHoney();

public:

	Queen(int weight, int desired, int size);
	virtual ~Queen();

	const int getSize() const { return m_squadSize; }

	void sendAndReport();

};

