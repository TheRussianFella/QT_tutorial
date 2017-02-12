#pragma once
#include"Point.h"

class Circle: public Point{


    int m_radius;

public:

    Circle(int x, int y, int rad);

    void Print();

    double countArea();

};
