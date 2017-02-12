#pragma once
#include"Circle.h"

class Cylinder: public Circle {


    int m_hight;

public:

    Cylinder(int x, int y, int rad, int hight);

    void Print();

    double countArea();

};
