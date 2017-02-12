#pragma once
#include "Flower.h"
class Bee
{

	int m_weight;
	int m_desiredHoney;

public:

	Bee(int honey, int weight);
	virtual ~Bee();

protected:

	int const getDesired() const { return m_desiredHoney; }

protected:

	void decreaseDesired(int given) { m_desiredHoney -= given; }

};

