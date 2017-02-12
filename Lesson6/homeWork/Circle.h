#pragma once
#include "Point.h"

class Circle
{

	Point m_center;
	int m_radius;
	int m_thickness;

public:
	Circle(Point center, int radius, int thickness);
	Circle();

	const int getThick() const { return m_thickness; }
	const int getXCenter() const { return m_center.getX(); }
	const int getYCenter() const { return m_center.getY(); }

	~Circle();
};

