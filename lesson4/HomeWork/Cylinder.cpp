#include "Cylinder.h"

Cylinder::Cylinder(int x, int y, int rad, int hight) :
    Circle(x,y,rad){

	if (hight == 0)
		hight = 1;

    m_hight = abs(hight);

}

double Cylinder::countArea(){

    return m_hight * Circle::countArea();

}

void Cylinder::Print(){

    std::cout << "Cylinder: \n";
    Circle::Print();
    std::cout << "Hight: " << m_hight << "\n";

}
