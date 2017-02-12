#include "Point.h"

Point::Point(int x, int y){

    m_x = x;
    m_y = y;

}

void Point::Print(){

    std::cout << "Point[" << m_x <<","<<m_y<<"]\n";

}

