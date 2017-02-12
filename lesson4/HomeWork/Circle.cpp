#include "Circle.h"

Circle::Circle(int x, int y, int rad):
    Point(x,y){

	if (rad == 0)
		rad = 1;

    m_radius = abs(rad);

}

double Circle::countArea(){

    return m_radius*m_radius*M_PI;

}

void Circle::Print(){

    std::cout << "Center: ";
    Point::Print();
    std::cout << "Radius: " << m_radius << "\n";

}

