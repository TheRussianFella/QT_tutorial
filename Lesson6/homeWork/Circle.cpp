#include "Circle.h"


Circle::Circle(Point center, int radius, int thickness) :
	m_center(center), m_radius(radius), m_thickness(thickness){}

Circle::Circle() : m_center(0,0), m_radius(10), m_thickness(1){}

Circle::~Circle(){}
