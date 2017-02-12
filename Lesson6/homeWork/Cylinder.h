#pragma once
#include "Circle.h"

class Cylinder
{

	Circle** quant;
	Circle* m_pCircle;
	int m_quant;
	int m_hight;

public:

	const int getQuant() const { return m_quant; }
	void setQuant(int quant) { m_quant = quant; }

	const void printCylinder();

	void decrease();

	Cylinder(int N);
	~Cylinder();
};

