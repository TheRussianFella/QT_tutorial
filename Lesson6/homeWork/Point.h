#pragma once
#include<iostream>
#include<cstdlib>

class Point
{

	int m_x;
	int m_y;

public:

	const int getX() const { return m_x; }
	const int getY() const { return m_y; }
	Point(int x, int y);
	~Point();
};

